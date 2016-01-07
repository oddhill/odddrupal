<?php
/**
 * @file
 * f_core.features.translations_sv.inc
 */

/**
 * Implements hook_translations_sv_defaults().
 */
function f_core_translations_sv_defaults() {
  $translations = array();
  $translatables = array();
  $translations['sv:default']['0b694db66d861cb9149a3fab6c33e9c4'] = array(
    'source' => 'YubiKey %yk_identity has been activated.',
    'context' => '',
    'location' => '/user/4/yubikey/activate/2',
    'translation' => 'YubiKey %yk_identity har blivit aktiverad.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('YubiKey %yk_identity has been activated.', array(), array('context' => ''));
  $translations['sv:default']['0d111f56964985f562aaaaf9d2980787'] = array(
    'source' => 'archived',
    'context' => '',
    'location' => '/node/31/revisions/32/list',
    'translation' => 'arkiverad',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('archived', array(), array('context' => ''));
  $translations['sv:default']['0eb1e5edc1b0ab30391457bd3e5e6ce2'] = array(
    'source' => 'Add Bolag',
    'context' => '',
    'location' => '/admin/structure/entity-type/investor/company/add?destination=investerare',
    'translation' => 'Lägg till Bolag',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Add Bolag', array(), array('context' => ''));
  $translations['sv:default']['110a4b01beabd53b661a47d4b44bd7a8'] = array(
    'source' => 'Publish',
    'context' => '',
    'location' => '/node/30/revisions/30/list',
    'translation' => 'Publicera',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Publish', array(), array('context' => ''));
  $translations['sv:default']['181e9a13059454fb2212f1bf10f394ac'] = array(
    'source' => 'Unpublish',
    'context' => '',
    'location' => '/node/31/revisions/31/list',
    'translation' => 'Avpublicera',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Unpublish', array(), array('context' => ''));
  $translations['sv:default']['1df41fe63320b7bf5475283c63d018a9'] = array(
    'source' => '@count messages processed.',
    'context' => '',
    'location' => '/node/6/kontaktlista',
    'translation' => '@count meddelanden skickas.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('@count messages processed.', array(), array('context' => ''));
  $translations['sv:default']['26ce7d224a794ad1a0725725a73d8120'] = array(
    'source' => 'Block YubiKey',
    'context' => '',
    'location' => '/user/4/yubikey/block/2',
    'translation' => 'Blockera YubiKey',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Block YubiKey', array(), array('context' => ''));
  $translations['sv:default']['273d981c128a36fa099842a665865696'] = array(
    'source' => 'in draft/pending publication',
    'context' => '',
    'location' => '/node/30/revisions/30/list',
    'translation' => 'utkast/väntar på publicering',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('in draft/pending publication', array(), array('context' => ''));
  $translations['sv:default']['31c004d8966b5debedadc53eb79bd5db'] = array(
    'source' => '1 message processed.',
    'context' => '',
    'location' => '/node/7/kontaktlista',
    'translation' => '1 meddelande skickas.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('1 message processed.', array(), array('context' => ''));
  $translations['sv:default']['31cc01801647f06a7019f4501f2c90c8'] = array(
    'source' => 'current revision (published)',
    'context' => '',
    'location' => '/node/31/revisions/31/list',
    'translation' => 'nuvarande version (publicerad)',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('current revision (published)', array(), array('context' => ''));
  $translations['sv:default']['34374824fedb50e0b68f3b0939b97b0e'] = array(
    'source' => 'List all revisions',
    'context' => '',
    'location' => '/node/30/revisions/30/list',
    'translation' => 'Lista över revisioner',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('List all revisions', array(), array('context' => ''));
  $translations['sv:default']['3697ba11cac7e6caf24d1db7f0c517c5'] = array(
    'source' => 'Touch your YubiKey button to emit OTP.',
    'context' => '',
    'location' => '/user?destination=oversikt',
    'translation' => 'Använd din YubiKey för att fylla i OTP automatiskt.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Touch your YubiKey button to emit OTP.', array(), array('context' => ''));
  $translations['sv:default']['37f8d735f3dfd63dd6cf87262e3addca'] = array(
    'source' => 'Activate YubiKey',
    'context' => '',
    'location' => '/user/4/yubikey/activate/2',
    'translation' => 'Aktivera YubiKey',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Activate YubiKey', array(), array('context' => ''));
  $translations['sv:default']['3d8c7d09bf081445b1f4fd57e25e0fcb'] = array(
    'source' => 'Delete YubiKey',
    'context' => '',
    'location' => '/user/4/yubikey/delete/2',
    'translation' => 'Radera YubiKey',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Delete YubiKey', array(), array('context' => ''));
  $translations['sv:default']['3e93538d4dd838c5a56a7deace3d9d5b'] = array(
    'source' => 'Report lost YubiKey',
    'context' => '',
    'location' => '/user?destination=oversikt',
    'translation' => 'Anmäl borttappad YubiKey',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Report lost YubiKey', array(), array('context' => ''));
  $translations['sv:default']['407ea8db779b43afecbf96d25f5c2f32'] = array(
    'source' => 'Report loss of YubiKey',
    'context' => '',
    'location' => '/user/yubikey/lost',
    'translation' => 'Anmäl borttappad YubiKey',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Report loss of YubiKey', array(), array('context' => ''));
  $translations['sv:default']['4b3605af6bf0b2100e92becfb7df246b'] = array(
    'source' => '<em>Edit @type</em> @title',
    'context' => '',
    'location' => '',
    'translation' => '@title',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<em>Edit @type</em> @title', array(), array('context' => ''));
  $translations['sv:default']['4b9cef139723caf875848890d141866e'] = array(
    'source' => 'Person number not valid.',
    'context' => '',
    'location' => '/node/add/person?destination=kontaktpersoner/lista',
    'translation' => 'Personnummer är ogiltigt.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Person number not valid.', array(), array('context' => ''));
  $translations['sv:default']['4f8ce94cd4dbbfaff8eb45eac993f7d5'] = array(
    'source' => 'Add a YubiKey',
    'context' => '',
    'location' => '/user/4/yubikey',
    'translation' => 'Lägg till',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Add a YubiKey', array(), array('context' => ''));
  $translations['sv:default']['4feafb2b2713a93979dedc5334fee424'] = array(
    'source' => 'Contact persons',
    'context' => '',
    'location' => '/admin/structure/views/view/contact_persons',
    'translation' => 'Kontaktpersoner',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Contact persons', array(), array('context' => ''));
  $translations['sv:default']['5649660a8bd007dffb6fbd26c44ef7a0'] = array(
    'source' => 'View current',
    'context' => '',
    'location' => '/node/31',
    'translation' => 'Se dokument',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('View current', array(), array('context' => ''));
  $translations['sv:default']['58a919707c904c7b00f688f75c966737'] = array(
    'source' => 'Add Privatperson',
    'context' => '',
    'location' => '/admin/structure/entity-type/investor/person/add?destination=investerare',
    'translation' => 'Lägg till Privatperson',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Add Privatperson', array(), array('context' => ''));
  $translations['sv:default']['666e53cfdc47d6b6ba0109c3f0e59ac0'] = array(
    'source' => 'Revert to this',
    'context' => '',
    'location' => '/node/36/revisions/44/view',
    'translation' => 'Gå tillbaka till denna version',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Revert to this', array(), array('context' => ''));
  $translations['sv:default']['6e6df12879b3e50a76f2f8c48d76c902'] = array(
    'source' => 'Edit this field',
    'context' => '',
    'location' => '/public/erbjudanden/lista/erbjudande-1/kontaktlista',
    'translation' => 'Ändra',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Edit this field', array(), array('context' => ''));
  $translations['sv:default']['70afa93d8860f77bc242c5f4b4883426'] = array(
    'source' => 'YubiKey OTP field is required.',
    'context' => '',
    'location' => '/user?destination=oversikt',
    'translation' => 'Fältet YubiKey OTP är obligatoriskt.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('YubiKey OTP field is required.', array(), array('context' => ''));
  $translations['sv:default']['840c49f8ed7924ef119534ff726e3acb'] = array(
    'source' => 'Are you sure you want to delete the YubiKey %yk_identity for %user?',
    'context' => '',
    'location' => '/user/4/yubikey/delete/2',
    'translation' => 'Är du säker på att du vill radera YubiKey %yk_identity från %user?',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Are you sure you want to delete the YubiKey %yk_identity for %user?', array(), array('context' => ''));
  $translations['sv:default']['8cc2773030c707628b5cbd79517e411d'] = array(
    'source' => 'Publishing this revision will make it visible to the public.',
    'context' => '',
    'location' => '/node/30/revisions/30/publish',
    'translation' => 'Genom att publicera denna revision gör du den tillgänglig för andra användare.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Publishing this revision will make it visible to the public.', array(), array('context' => ''));
  $translations['sv:default']['8dfa7626414da42f1e2c0fdccdb0746d'] = array(
    'source' => 'Create @name',
    'context' => '',
    'location' => '',
    'translation' => 'Lägg till @name',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create @name', array(), array('context' => ''));
  $translations['sv:default']['91ee5169ce4265b5ace262d703edbb5c'] = array(
    'source' => 'Generate PDF',
    'context' => '',
    'location' => '/node/30',
    'translation' => 'Generera PDF',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Generate PDF', array(), array('context' => ''));
  $translations['sv:default']['9b0cb9d1b98e5a0cded944018b1e5166'] = array(
    'source' => 'Entity @entity_id - @entity_label has been saved',
    'context' => '',
    'location' => '/admin/structure/entity-type/investor/person/add?destination=investerare',
    'translation' => '@entity_label har sparats',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Entity @entity_id - @entity_label has been saved', array(), array('context' => ''));
  $translations['sv:default']['a280221994d186e16f65a34191ff61be'] = array(
    'source' => 'Compare to current',
    'context' => '',
    'location' => '/node/31/revisions/32/view',
    'translation' => 'Jämför med nuvarande',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Compare to current', array(), array('context' => ''));
  $translations['sv:default']['a48b6fa2e886ef855f18373ad9492d4c'] = array(
    'source' => 'Edit Current',
    'context' => '',
    'location' => '/node/30/revisions/30/list',
    'translation' => 'Redigera aktuell version',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Edit Current', array(), array('context' => ''));
  $translations['sv:default']['a569983a2dde311203207a5a12e71d11'] = array(
    'source' => 'View Current',
    'context' => '',
    'location' => '/node/30/revisions/30/list',
    'translation' => 'Se aktuell version',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('View Current', array(), array('context' => ''));
  $translations['sv:default']['a5b529bfaedd48079ce02a680a854e82'] = array(
    'source' => 'That YubiKey is already in use on this site.',
    'context' => '',
    'location' => '/user/4/yubikey',
    'translation' => 'Angiven YubiKey används redan på ett annat konto.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('That YubiKey is already in use on this site.', array(), array('context' => ''));
  $translations['sv:default']['aaa37cfffeb21ce4b97f46ecae67e640'] = array(
    'source' => '!start-date to !end-date',
    'context' => '',
    'location' => '/public/erbjudanden/lista/erbjudande-1',
    'translation' => '!start-date till !end-date',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('!start-date to !end-date', array(), array('context' => ''));
  $translations['sv:default']['b05d72142020283dc6812fd3a9bc691c'] = array(
    'source' => 'I forgot my password',
    'context' => '',
    'location' => '/user/yubikey/lost',
    'translation' => 'Jag har glömt mitt lösenord',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('I forgot my password', array(), array('context' => ''));
  $translations['sv:default']['b901368f86602a06386f6f559a6368b4'] = array(
    'source' => 'YubiKey %yk_identity has been added.',
    'context' => '',
    'location' => '/user/4/yubikey',
    'translation' => 'YubiKey %yk_identity har lagts till.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('YubiKey %yk_identity has been added.', array(), array('context' => ''));
  $translations['sv:default']['bc18881e183c2c19d6b41e936105a1d3'] = array(
    'source' => 'YubiKey is not associated with your account or it has been blocked.',
    'context' => '',
    'location' => '/user?destination=oversikt',
    'translation' => 'Angiven YubiKey OTP har inte kopplats till ditt konto, eller blivit blockad.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('YubiKey is not associated with your account or it has been blocked.', array(), array('context' => ''));
  $translations['sv:default']['c4e3aaba6f4565ee6407ae10501fc128'] = array(
    'source' => 'View Latest',
    'context' => '',
    'location' => '/node/31/revisions/33/view',
    'translation' => 'Se senaste version',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('View Latest', array(), array('context' => ''));
  $translations['sv:default']['d1fc041daf44cb2172a52c11937f2d16'] = array(
    'source' => 'Confirm lost YubiKey',
    'context' => '',
    'location' => '/user/yubikey/lost/confirm/1/1425294345/sv4Vz1ZuQsQXh1UOgzHm5kqrU9uuXGMAyTPWrqiy7_c',
    'translation' => 'Bekräfta borttappad YubiKey',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Confirm lost YubiKey', array(), array('context' => ''));
  $translations['sv:default']['e602161a9dd08722baeabd50edba3a33'] = array(
    'source' => 'Edit Latest',
    'context' => '',
    'location' => '/node/31/revisions/33/view',
    'translation' => 'Redigera senaste version',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Edit Latest', array(), array('context' => ''));
  $translations['sv:default']['e900cc14e700d27d5bb3a20756d26bf3'] = array(
    'source' => 'Unpublish current revision',
    'context' => '',
    'location' => '/node/31/revisions/31/list',
    'translation' => 'Avpublicera aktuell version',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Unpublish current revision', array(), array('context' => ''));
  $translations['sv:default']['ec1078bb43584fd71755c4297e964d3f'] = array(
    'source' => 'Touch your YubiKey button to emit OTP (optional until YubiKey is assigned to you).',
    'context' => '',
    'location' => '/user?destination=oversikt',
    'translation' => 'Använd din YubiKey för att fylla i OTP automatiskt. Om det inte finns en OTP kopplad till ditt konto lämnar du detta fält tomt.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Touch your YubiKey button to emit OTP (optional until YubiKey is assigned to you).', array(), array('context' => ''));
  $translations['sv:default']['f0c48d2d919755db34b586b7d57fd0d6'] = array(
    'source' => 'Revision operations',
    'context' => '',
    'location' => '/node/30',
    'translation' => 'Revisioner',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Revision operations', array(), array('context' => ''));
  $translations['sv:default']['f2de5e2194f46fea8a01fdd6195f5f04'] = array(
    'source' => 'Edit current',
    'context' => '',
    'location' => '/node/31',
    'translation' => 'Redigera dokument',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Edit current', array(), array('context' => ''));
  $translations['sv:default']['f80688198631d2161781763daf3d5eab'] = array(
    'source' => 'YubiKey identities',
    'context' => '',
    'location' => '/user/4/edit',
    'translation' => 'YubiKey-inloggningar',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('YubiKey identities', array(), array('context' => ''));
  $translations['sv:default']['fa5b96eed5421a9294271d51041e7e30'] = array(
    'source' => 'Are you sure you want to publish this revision of %title?',
    'context' => '',
    'location' => '/node/30/revisions/30/publish',
    'translation' => 'Är du säker på att du vill publicera denna revision av %title?',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Are you sure you want to publish this revision of %title?', array(), array('context' => ''));
  return $translations;
}
