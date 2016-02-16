(function($) {

  /**
   * Initialize editor instances.
   *
   * @todo Is the following note still valid for 3.x?
   * This function needs to be called before the page is fully loaded, as
   * calling tinymce.init() after the page is loaded breaks IE6.
   *
   * @param editorSettings
   *   An object containing editor settings for each input format.
   */
  Drupal.wysiwyg.editor.init.tinymce = function(settings) {
    tinymce.on('active focus', function(e) {
      Drupal.wysiwyg.activeId = e.editor.id;
    });
    // Fix Drupal toolbar obscuring editor toolbar in fullscreen mode.
    var $drupalToolbars = $('#toolbar, #admin-menu', Drupal.overlayChild ? window.parent.document : document);
    tinymce.on('AddEditor', function (e) {
        e.editor.on('FullscreenStateChanged', function (e) {
        if (e.state) {
          $drupalToolbars.hide();
        }
        else {
          $drupalToolbars.show();
        }
      });
    });

    // Initialize editor configurations.
    for (var format in settings) {
      if (Drupal.settings.wysiwyg.plugins[format]) {
        // Load native external plugins.
        // Array syntax required; 'native' is a predefined token in JavaScript.
        for (var plugin in Drupal.settings.wysiwyg.plugins[format]['native']) {
          tinymce.PluginManager.load(plugin, Drupal.settings.wysiwyg.plugins[format]['native'][plugin]);
        }
        // Load Drupal plugins.
        for (var plugin in Drupal.settings.wysiwyg.plugins[format].drupal) {
          Drupal.wysiwyg.editor.instance.tinymce.addPlugin(plugin, Drupal.settings.wysiwyg.plugins[format].drupal[plugin], Drupal.settings.wysiwyg.plugins.drupal[plugin]);
        }
      }
   }
  };

  /**
   * Attach this editor to a target element.
   *
   * See Drupal.wysiwyg.editor.attach.none() for a full desciption of this hook.
   */
   Drupal.wysiwyg.editor.attach.tinymce = function(context, params, settings) {

     // Remove TinyMCE's internal mceItem class, which was incorrectly added to
     // submitted content by Wysiwyg <2.1. TinyMCE only temporarily adds the class
     // for placeholder elements. If preemptively set, the class prevents (native)
     // editor plugins from gaining an active state, so we have to manually remove
     // it prior to attaching the editor. This is done on the client-side instead
     // of the server-side, as Wysiwyg has no way to figure out where content is
     // stored, and the class only affects editing.
     $field = $('#' + params.field);
     $field.val($field.val().replace(/(<.+?\s+class=['"][\w\s]*?)\bmceItem\b([\w\s]*?['"].*?>)/ig, '$1$2'));

     // Attach editor.
     settings.selector = '#' + params.field;
     tinymce.init(settings);
    };

    /**
     * Detach a single or all editors.
     *
     * See Drupal.wysiwyg.editor.detach.none() for a full desciption of this hook.
     */
     Drupal.wysiwyg.editor.detach.tinymce = function (context, params, trigger) {
     if (typeof params != 'undefined') {
       var instance = tinymce.get(params.field);
       if (instance) {
         instance.save();
         if (trigger != 'serialize') {
           instance.remove();
         }
       }
     }
     else {
       // Save contents of all editors back into textareas.
       tinymce.triggerSave();
       if (trigger != 'serialize') {
         // Remove all editor instances.
         for (var instance in tinymce.editors) {
           tinymce.editors[instance].remove();
         }
       }
     }
   };

  Drupal.wysiwyg.editor.instance.tinymce = {
    addPlugin: function(plugin, settings, pluginSettings) {
      if (typeof Drupal.wysiwyg.plugins[plugin] != 'object') {
        return;
      }

      // Register plugin.
      tinymce.PluginManager.add('drupal_' + plugin, function (editor) {
        var button = {
          title : settings.iconTitle,
          image : settings.icon,
          onPostRender : function() {
            var self = this;
            editor.on('nodeChange', function (e) {
              // isNode: Return whether the plugin button should be enabled for the
              // current selection.
              if (typeof Drupal.wysiwyg.plugins[plugin].isNode == 'function') {
                self.active(Drupal.wysiwyg.plugins[plugin].isNode(e.element));
              }
            });
          }
        }
        if (typeof Drupal.wysiwyg.plugins[plugin].invoke == 'function') {
          button.onclick = function() {
            var data = { format: 'html', node: editor.selection.getNode(), content: editor.selection.getContent() };
            // TinyMCE creates a completely new instance for fullscreen mode.
            Drupal.wysiwyg.plugins[plugin].invoke(data, pluginSettings, editor.id);
          }
        }

        // Register the plugin button.
        editor.addButton('drupal_' + plugin, button);

        /**
         * Initialize the plugin, executed after the plugin has been created.
         *
         * @param ed
         *   The tinymce.Editor instance the plugin is initialized in.
         * @param url
         *   The absolute URL of the plugin location.
          var editorId = (e.target.id == 'mce_fullscreen' ? e.target.getParam('fullscreen_editor_id') : e.target.id);
         */
        editor.on('init', function(e) {
          // Load custom CSS for editor contents on startup.
          if (settings.css) {
            editor.dom.loadCSS(settings.css);
          }

        });

        // Attach: Replace plain text with HTML representations.
        editor.on('beforeSetContent', function(e) {
          if (typeof Drupal.wysiwyg.plugins[plugin].attach == 'function') {
            e.content = Drupal.wysiwyg.plugins[plugin].attach(e.content, pluginSettings, e.target.id);
            e.content = Drupal.wysiwyg.editor.instance.tinymce.prepareContent(e.content);
          }
        });

        // Detach: Replace HTML representations with plain text.
        editor.on('getContent', function(e) {
          var editorId = (e.target.id == 'mce_fullscreen' ? e.target.getParam('fullscreen_editor_id') : e.target.id);
          if (typeof Drupal.wysiwyg.plugins[plugin].detach == 'function') {
            e.content = Drupal.wysiwyg.plugins[plugin].detach(e.content, pluginSettings, editorId);
          }
        });
      });
    },

    openDialog: function(dialog, params) {
      var instanceId = this.getInstanceId();
      var editor = tinymce.get(instanceId);
      editor.windowManager.open({
        file: dialog.url + '/' + instanceId,
        width: dialog.width,
        height: dialog.height,
        inline: 1
     }, params);
    },

    closeDialog: function(dialog) {
      var editor = tinymce.get(this.getInstanceId());
      editor.windowManager.close(dialog);
    },

    prepareContent: function(content) {
      // Certain content elements need to have additional DOM properties applied
      // to prevent this editor from highlighting an internal button in addition
      // to the button of a Drupal plugin.
      var specialProperties = {
        img: { 'class': 'mceItem' }
      };

      var $content = $('<div>' + content + '</div>'); // No .outerHTML() in jQuery :(
      // Find all placeholder/replacement content of Drupal plugins.
      $content.find('.drupal-content').each(function() {

      // Recursively process DOM elements below this element to apply special
      // properties.
      var $drupalContent = $(this);
      $.each(specialProperties, function(element, properties) {
        $drupalContent.find(element).andSelf().each(function() {
          for (var property in properties) {
            if (property == 'class') {
              $(this).addClass(properties[property]);
            }
            else {
              $(this).attr(property, properties[property]);
            }
          }
        });
      });
    });
    return $content.html();
  },

  insert: function(content) {
    content = this.prepareContent(content);
    tinymce.get(this.field).insertContent(content);
  },

  setContent: function (content) {
    content = this.prepareContent(content);
    tinymce.get(this.field).setContent(content);
  },

  getContent: function () {
    return tinymce.get(this.getInstanceId()).getContent();
  },

  isFullscreen: function() {
    var editor = tinymce.get(this.field);
    return editor.plugins.fullscreen && editor.plugins.fullscreen.isFullscreen();
  },

  getInstanceId: function () {
    return this.field;
  }
};

})(jQuery);
