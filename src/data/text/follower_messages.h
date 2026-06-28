extern const u8 EventScript_FollowerIsShivering[];
extern const u8 EventScript_FollowerNostalgia[];
extern const u8 EventScript_FollowerHopping[];
extern const u8 EventScript_FollowerJumpOnPlayer[];
extern const u8 EventScript_FollowerCuddling[];
extern const u8 EventScript_FollowerShiverCuddling[];
extern const u8 EventScript_FollowerGetCloser[];
extern const u8 EventScript_FollowerPokingPlayer[];
extern const u8 EventScript_FollowerLookAround[];
extern const u8 EventScript_FollowerLookAway[];
extern const u8 EventScript_FollowerLookAwayBark[];
extern const u8 EventScript_FollowerLookAwayPoke[];
extern const u8 EventScript_FollowerPokeGround[];
extern const u8 EventScript_FollowerStartled[];
extern const u8 EventScript_FollowerFastHopping[];
extern const u8 EventScript_FollowerDizzy[];
extern const u8 EventScript_FollowerLookAroundScared[];
extern const u8 EventScript_FollowerDance[];
extern const u8 EventScript_FollowerLookUp[];

// 'Generic', unconditional happy messages
static const u8 sHappyMsg00[] = _("{STR_VAR_1} stupste dich\nin den Bauch.");
static const u8 sHappyMsg01[] = _("{STR_VAR_1} ist glücklich,\naber schüchtern.");
static const u8 sHappyMsg02[] = _("{STR_VAR_1} läuft fröhlich mit.");
static const u8 sHappyMsg03[] = _("{STR_VAR_1} ist gefasst.");
static const u8 sHappyMsg04[] = _("{STR_VAR_1} fühlt sich großartig\nbeim Laufen mit dir!");
static const u8 sHappyMsg05[] = _("{STR_VAR_1} strahlt vor\nGesundheit.");
static const u8 sHappyMsg06[] = _("{STR_VAR_1} sieht sehr\nglücklich aus.");
static const u8 sHappyMsg07[] = _("{STR_VAR_1} gab sich\nextra Mühe.");
static const u8 sHappyMsg08[] = _("{STR_VAR_1} riecht die Düfte\nder Umgebung.");
static const u8 sHappyMsg09[] = _("{STR_VAR_1} hüpft vor\nFreude!");
static const u8 sHappyMsg10[] = _("{STR_VAR_1} fühlt sich noch\nimmer großartig!");
static const u8 sHappyMsg11[] = _("Dein POKéMON hat Rauch\ngerochen.");
static const u8 sHappyMsg12[] = _("{STR_VAR_1} stupst deinen\nBauch an.");
static const u8 sHappyMsg13[] = _("Dein POKéMON streckte sich\naus und entspannt sich.");
static const u8 sHappyMsg14[] = _("{STR_VAR_1} will wohl\nführen!");
static const u8 sHappyMsg15[] = _("{STR_VAR_1} gibt sein Bestes,\nmit dir Schritt zu halten.");
static const u8 sHappyMsg16[] = _("{STR_VAR_1} kuschelt sich\nfröhlich an dich!");
static const u8 sHappyMsg17[] = _("{STR_VAR_1} sprüht vor\nLebendigkeit!");
static const u8 sHappyMsg18[] = _("{STR_VAR_1} scheint sehr\nglücklich zu sein!");
static const u8 sHappyMsg19[] = _("{STR_VAR_1} ist so glücklich,\ndass es nicht stillstehen\nkann!");
static const u8 sHappyMsg20[] = _("{STR_VAR_1} nickte langsam.");
static const u8 sHappyMsg21[] = _("{STR_VAR_1} ist sehr\nbegeistert!");
static const u8 sHappyMsg22[] = _("{STR_VAR_1} wandert umher\nund lauscht den Klängen.");
static const u8 sHappyMsg23[] = _("{STR_VAR_1} sieht sehr\ninteressiert aus.");
static const u8 sHappyMsg24[] = _("{STR_VAR_1} zwingt sich\nirgendwie weiterzumachen.");
static const u8 sHappyMsg25[] = _("{STR_VAR_1} sah dich\nsonnig an!");
static const u8 sHappyMsg26[] = _("{STR_VAR_1} wirft dir einen\nfröhlichen Blick zu!");
static const u8 sHappyMsg27[] = _("Dein POKéMON riecht den\nDuft von Blumen.");
static const u8 sHappyMsg28[] = _("{STR_VAR_1} scheint sehr\nerfreut, dich zu sehen!");
static const u8 sHappyMsg29[] = _("{STR_VAR_1} drehte sich um\nund grinste.");
static const u8 sHappyMsg30[] = _("{STR_VAR_1} kuschelte sich\nfröhlich an dich!");
// Conditional messages begin here, index 31
static const u8 sHappyMsg31[] = _("Dein POKéMON freut sich\nüber das tolle Wetter.");
static const u8 sHappyMsg32[] = _("{STR_VAR_1} ist sehr gefasst\nund selbstsicher!");

const struct FollowerMsgInfo gFollowerHappyMessages[] = {
    {sHappyMsg00, EventScript_FollowerPokingPlayer},
    {sHappyMsg01}, {sHappyMsg02}, {sHappyMsg03}, {sHappyMsg04}, {sHappyMsg05}, {sHappyMsg06}, {sHappyMsg07},
    {sHappyMsg08, EventScript_FollowerLookAround},
    {sHappyMsg09, EventScript_FollowerHopping},
    {sHappyMsg10}, {sHappyMsg11},
    {sHappyMsg12, EventScript_FollowerPokingPlayer},
    {sHappyMsg13, EventScript_FollowerLookAround},
    {sHappyMsg14}, {sHappyMsg15},
    {sHappyMsg16, EventScript_FollowerCuddling},
    {sHappyMsg17}, {sHappyMsg18},
    {sHappyMsg19, EventScript_FollowerFastHopping},
    {sHappyMsg20}, {sHappyMsg21}, {sHappyMsg22}, {sHappyMsg23}, {sHappyMsg24}, {sHappyMsg25}, {sHappyMsg26}, {sHappyMsg27}, {sHappyMsg28}, {sHappyMsg29},
    {sHappyMsg30, EventScript_FollowerCuddling},
    {sHappyMsg31}, {sHappyMsg32},
};

// Unconditional neutral messages
static const u8 sNeutralMsg00[] = _("{STR_VAR_1} stupst beständig\nauf den Boden.");
static const u8 sNeutralMsg01[] = _("{STR_VAR_1} hält Wache.");
static const u8 sNeutralMsg02[] = _("{STR_VAR_1} starrt geduldig\nins Leere.");
static const u8 sNeutralMsg03[] = _("{STR_VAR_1} läuft umher.");
static const u8 sNeutralMsg04[] = _("Dein POKéMON gähnte laut!");
static const u8 sNeutralMsg05[] = _("Dein POKéMON sieht sich\nunruhig um.");
static const u8 sNeutralMsg06[] = _("{STR_VAR_1} sieht herüber\nund lächelt.");
static const u8 sNeutralMsg07[] = _("{STR_VAR_1} blickt unruhig\numher.");
static const u8 sNeutralMsg08[] = _("{STR_VAR_1} stieß einen\nSchlachtruf aus.");
static const u8 sNeutralMsg09[] = _("{STR_VAR_1} tanzte einen\nwundervollen Tanz!");
static const u8 sNeutralMsg10[] = _("{STR_VAR_1} ist sehr\neifrig.");
static const u8 sNeutralMsg11[] = _("{STR_VAR_1} starrt angestrengt\nin die Ferne.");
static const u8 sNeutralMsg12[] = _("{STR_VAR_1} hält Ausschau!");
static const u8 sNeutralMsg13[] = _("{STR_VAR_1} blickte in die\nFerne und bellte!");

const struct FollowerMsgInfo gFollowerNeutralMessages[] = {
    {sNeutralMsg00, EventScript_FollowerPokeGround},
    {sNeutralMsg01},
    {sNeutralMsg02, EventScript_FollowerLookAway},
    {sNeutralMsg03, EventScript_FollowerLookAround},
    {sNeutralMsg04},
    {sNeutralMsg05, EventScript_FollowerLookAround},
    {sNeutralMsg06}, {sNeutralMsg07}, {sNeutralMsg08},
    {sNeutralMsg09, EventScript_FollowerDance},
    {sNeutralMsg10},
    {sNeutralMsg11, EventScript_FollowerLookAway},
    {sNeutralMsg12},
    {sNeutralMsg13, EventScript_FollowerLookAwayBark},
};

// Unconditional sad messages
static const u8 sSadMsg00[] = _("{STR_VAR_1} ist schwindlig.");
static const u8 sSadMsg01[] = _("{STR_VAR_1} tritt dir auf\ndie Füße!");
static const u8 sSadMsg02[] = _("{STR_VAR_1} wirkt etwas\nmüde.");
// Conditional messages begin, index 3
static const u8 sSadMsg03[] = _("{STR_VAR_1} ist nicht\nglücklich.");
static const u8 sSadMsg04[] = _("{STR_VAR_1} fällt gleich hin!\n");
static const u8 sSadMsg05[] = _("{STR_VAR_1} scheint gleich\numzufallen!");
static const u8 sSadMsg06[] = _("{STR_VAR_1} gibt sich große\nMühe, mitzuhalten…");
static const u8 sSadMsg07[] = _("{STR_VAR_1} ist nervös.");

const struct FollowerMsgInfo gFollowerSadMessages[] = {
    {sSadMsg00, EventScript_FollowerDizzy},
    {sSadMsg01}, {sSadMsg02},
    {sSadMsg03}, {sSadMsg04}, {sSadMsg05}, {sSadMsg06}, {sSadMsg07},
};

// Unconditional upset messages
static const u8 sUpsetMsg00[] = _("{STR_VAR_1} wirkt irgendwie\nunglücklich…");
static const u8 sUpsetMsg01[] = _("{STR_VAR_1} macht ein\nunglückliches Gesicht.");
static const u8 sUpsetMsg02[] = _("…Dein POKéMON scheint\netwas kalt.");
// Conditional messages, index 3
static const u8 sUpsetMsg03[] = _("{STR_VAR_1} sucht Schutz im\nGras vor dem Regen.");

const struct FollowerMsgInfo gFollowerUpsetMessages[] = {
    {sUpsetMsg00}, {sUpsetMsg01},
    {sUpsetMsg02, EventScript_FollowerIsShivering},
    {sUpsetMsg03},
};

// Unconditional angry messages
static const u8 sAngryMsg00[] = _("{STR_VAR_1} ließ ein\nBrüllen los!");
static const u8 sAngryMsg01[] = _("{STR_VAR_1} macht ein\nwütendes Gesicht!");
static const u8 sAngryMsg02[] = _("{STR_VAR_1} scheint aus\nirgendeinem Grund wütend.");
static const u8 sAngryMsg03[] = _("Dein POKéMON drehte sich weg\nund zeigt trotzig sein Gesicht.");
static const u8 sAngryMsg04[] = _("{STR_VAR_1} schrie auf.");

const struct FollowerMsgInfo gFollowerAngryMessages[] = {
    {sAngryMsg00}, {sAngryMsg01}, {sAngryMsg02},
    {sAngryMsg03, EventScript_FollowerLookAway},
    {sAngryMsg04},
};

// Unconditional pensive messages
static const u8 sPensiveMsg00[] = _("{STR_VAR_1} blickt stetig\nzu Boden.");
static const u8 sPensiveMsg01[] = _("{STR_VAR_1} mustert die\nGegend.");
static const u8 sPensiveMsg02[] = _("{STR_VAR_1} späht nach\nunten.");
static const u8 sPensiveMsg03[] = _("{STR_VAR_1} kämpft irgendwie\ngegen den Schlaf…");
static const u8 sPensiveMsg04[] = _("{STR_VAR_1} scheint\numherzustreifen.");
static const u8 sPensiveMsg05[] = _("{STR_VAR_1} blickt geistes-\nabwesend umher.");
static const u8 sPensiveMsg06[] = _("{STR_VAR_1} gähnte sehr laut!");
static const u8 sPensiveMsg07[] = _("{STR_VAR_1} entspannt sich\nbehaglich.");
static const u8 sPensiveMsg08[] = _("{STR_VAR_1} starrt standhaft\nauf dein Gesicht.");
static const u8 sPensiveMsg09[] = _("{STR_VAR_1} starrt angestrengt\nauf dein Gesicht.");
static const u8 sPensiveMsg10[] = _("{STR_VAR_1} richtet seine\nAufmerksamkeit auf dich.");
static const u8 sPensiveMsg11[] = _("{STR_VAR_1} starrt in die\nTiefe.");
static const u8 sPensiveMsg12[] = _("{STR_VAR_1} schnüffelt am\nBoden.");
static const u8 sPensiveMsg13[] = _("Dein POKéMON starrt\nangestrengt ins Leere.");
static const u8 sPensiveMsg14[] = _("{STR_VAR_1} konzentrierte\nsich mit scharfem Blick!");
static const u8 sPensiveMsg15[] = _("{STR_VAR_1} konzentriert\nsich.");
static const u8 sPensiveMsg16[] = _("{STR_VAR_1} drehte sich um\nund nickte.");
static const u8 sPensiveMsg17[] = _("{STR_VAR_1} wirkt etwas\nnervös…");
static const u8 sPensiveMsg18[] = _("{STR_VAR_1} betrachtet deine\nFußspuren.");
static const u8 sPensiveMsg19[] = _("{STR_VAR_1} starrt dir\ndirekt in die Augen.");

const struct FollowerMsgInfo gFollowerPensiveMessages[] = {
    {sPensiveMsg00},
    {sPensiveMsg01, EventScript_FollowerLookAround},
    {sPensiveMsg02}, {sPensiveMsg03}, {sPensiveMsg04},
    {sPensiveMsg05, EventScript_FollowerLookAround},
    {sPensiveMsg06}, {sPensiveMsg07}, {sPensiveMsg08}, {sPensiveMsg09}, {sPensiveMsg10},
    {sPensiveMsg11, EventScript_FollowerLookAway},
    {sPensiveMsg12, EventScript_FollowerPokeGround},
    {sPensiveMsg13, EventScript_FollowerLookAway},
    {sPensiveMsg14}, {sPensiveMsg15}, {sPensiveMsg16}, {sPensiveMsg17}, {sPensiveMsg18}, {sPensiveMsg19},
};

// All 'love' messages are unconditional
static const u8 sLoveMsg00[] = _("{STR_VAR_1} kam plötzlich\nnäher gelaufen!");
static const u8 sLoveMsg01[] = _("{STR_VAR_1}s Wangen\nwerden rosig!");
static const u8 sLoveMsg02[] = _("Wow! {STR_VAR_1} umarmte\ndich plötzlich!");
static const u8 sLoveMsg03[] = _("Wow! {STR_VAR_1} ist\nplötzlich verspielt!");
static const u8 sLoveMsg04[] = _("{STR_VAR_1} reibt sich an\ndeinen Beinen!");
static const u8 sLoveMsg05[] = _("{STR_VAR_1} errötet.");
static const u8 sLoveMsg06[] = _("Ah! {STR_VAR_1} kuschelt\nmit dir!");
static const u8 sLoveMsg07[] = _("{STR_VAR_1} betrachtet dich\nmit Bewunderung!");
static const u8 sLoveMsg08[] = _("{STR_VAR_1} kam dir\nnäher.");
static const u8 sLoveMsg09[] = _("{STR_VAR_1} bleibt dicht\nan deinen Füßen.");

const struct FollowerMsgInfo gFollowerLoveMessages[] = {
    {sLoveMsg00, EventScript_FollowerGetCloser},
    {sLoveMsg01},
    {sLoveMsg02, EventScript_FollowerCuddling},
    {sLoveMsg03},
    {sLoveMsg04, EventScript_FollowerCuddling},
    {sLoveMsg05},
    {sLoveMsg06, EventScript_FollowerCuddling},
    {sLoveMsg07},
    {sLoveMsg08, EventScript_FollowerGetCloser},
    {sLoveMsg09},
};

// Unconditional surprised messages
static const u8 sSurpriseMsg00[] = _("{STR_VAR_1} droht\numzufallen!");
static const u8 sSurpriseMsg01[] = _("{STR_VAR_1} rannte in\ndich hinein!");
static const u8 sSurpriseMsg02[] = _("{STR_VAR_1} kennt seinen\neigenen Namen noch\nnicht.");
static const u8 sSurpriseMsg03[] = _("{STR_VAR_1} späht nach\nunten.");
static const u8 sSurpriseMsg04[] = _("Dein POKéMON stolperte\nund fiel fast hin!");
static const u8 sSurpriseMsg05[] = _("{STR_VAR_1} spürt etwas\nund heult!");
static const u8 sSurpriseMsg06[] = _("{STR_VAR_1} wirkt\nerfrischt!");
static const u8 sSurpriseMsg07[] = _("{STR_VAR_1} drehte sich\nplötzlich um und bellte!");
static const u8 sSurpriseMsg08[] = _("{STR_VAR_1} drehte sich\nplötzlich um!");
static const u8 sSurpriseMsg09[] = _("Dein POKéMON war\nüberrascht, dass du es\nplötzlich angesprochen\nhast!");
static const u8 sSurpriseMsg10[] = _("Schnüffel, schnüffel,\netwas riecht sehr gut!");
static const u8 sSurpriseMsg11[] = _("{STR_VAR_1} fühlt sich\nerfrischt.");
static const u8 sSurpriseMsg12[] = _("{STR_VAR_1} wankt und\nscheint umzufallen.");
static const u8 sSurpriseMsg13[] = _("{STR_VAR_1} droht\numzufallen.");
static const u8 sSurpriseMsg14[] = _("{STR_VAR_1} läuft\nvorsichtig.");
static const u8 sSurpriseMsg15[] = _("{STR_VAR_1} ist nervös\naufgeladen.");
static const u8 sSurpriseMsg16[] = _("{STR_VAR_1} spürte etwas\nSeltsames und erschrak!");
static const u8 sSurpriseMsg17[] = _("{STR_VAR_1} hat Angst und\nkuschelt sich an dich!");
static const u8 sSurpriseMsg18[] = _("{STR_VAR_1} spürt eine\nungewöhnliche Präsenz…");
static const u8 sSurpriseMsg19[] = _("{STR_VAR_1} ist nervös\naufgeladen.");
// Conditional messages, index 20
static const u8 sSurpriseMsg20[] = _("{STR_VAR_1} scheint sehr\nüberrascht, dass es regnet!");

const struct FollowerMsgInfo gFollowerSurpriseMessages[] = {
    {sSurpriseMsg00},
    {sSurpriseMsg01, EventScript_FollowerPokingPlayer},
    {sSurpriseMsg02}, {sSurpriseMsg03}, {sSurpriseMsg04}, {sSurpriseMsg05}, {sSurpriseMsg06},
    {sSurpriseMsg07, EventScript_FollowerLookAwayBark},
    {sSurpriseMsg08, EventScript_FollowerLookAway},
    {sSurpriseMsg09},
    {sSurpriseMsg10, EventScript_FollowerLookAround},
    {sSurpriseMsg11}, {sSurpriseMsg12}, {sSurpriseMsg13}, {sSurpriseMsg14}, {sSurpriseMsg15}, {sSurpriseMsg16},
    {sSurpriseMsg17, EventScript_FollowerCuddling},
    {sSurpriseMsg18},
    {sSurpriseMsg19, EventScript_FollowerLookAround},
    {sSurpriseMsg20},
};

// Unconditional curious messages
static const u8 sCuriousMsg00[] = _("Dein POKéMON sucht unruhig\nnach etwas.");
static const u8 sCuriousMsg01[] = _("Dein POKéMON hat nicht\naufgepasst und ist in dich\nhineingerannt!");
static const u8 sCuriousMsg02[] = _("Schnüffel, schnüffel! Ist\nda etwas in der Nähe?");
static const u8 sCuriousMsg03[] = _("{STR_VAR_1} rollt verspielt\neinen Kieselstein.");
static const u8 sCuriousMsg04[] = _("{STR_VAR_1} streift umher\nund sucht nach etwas.");
static const u8 sCuriousMsg05[] = _("{STR_VAR_1} schnüffelt\nan dir.");
static const u8 sCuriousMsg06[] = _("{STR_VAR_1} wirkt etwas\nzögerlich…");

const struct FollowerMsgInfo gFollowerCuriousMessages[] = {
    {sCuriousMsg00, EventScript_FollowerLookAround},
    {sCuriousMsg01, EventScript_FollowerPokingPlayer},
    {sCuriousMsg02}, {sCuriousMsg03},
    {sCuriousMsg04, EventScript_FollowerLookAround},
    {sCuriousMsg05}, {sCuriousMsg06},
};

// Unconditional music messages
static const u8 sMusicMsg00[] = _("{STR_VAR_1} zeigt seine\nBeweglichkeit!");
static const u8 sMusicMsg01[] = _("{STR_VAR_1} bewegt sich\nfröhlich!");
static const u8 sMusicMsg02[] = _("Wow! {STR_VAR_1} begann\nplötzlich vor Glück zu\ntanzen!");
static const u8 sMusicMsg03[] = _("{STR_VAR_1} hält stetig\nmit dir Schritt!");
static const u8 sMusicMsg04[] = _("{STR_VAR_1} will wohl\nmit dir spielen.");
static const u8 sMusicMsg05[] = _("{STR_VAR_1} hüpft\nfröhlich umher.");
static const u8 sMusicMsg06[] = _("{STR_VAR_1} singt und\nsummt.");
static const u8 sMusicMsg07[] = _("{STR_VAR_1} knabbert an\ndeinen Füßen!");
static const u8 sMusicMsg08[] = _("{STR_VAR_1} dreht sich um\nund sieht dich an.");
static const u8 sMusicMsg09[] = _("{STR_VAR_1} strengt sich an,\num seine Stärke zu zeigen!");
static const u8 sMusicMsg10[] = _("Wow! {STR_VAR_1} tanzte\nplötzlich vor Glück!");
static const u8 sMusicMsg11[] = _("{STR_VAR_1} ist\nfröhlich!");
static const u8 sMusicMsg12[] = _("{STR_VAR_1} springt\nsorglos umher!");
static const u8 sMusicMsg13[] = _("Dein POKéMON riecht einen\nnostalgischen Duft…");
// Conditional music messages, index 14
static const u8 sMusicMsg14[] = _("{STR_VAR_1} freut sich sehr\nüber den Regen.");

const struct FollowerMsgInfo gFollowerMusicMessages[] = {
    {sMusicMsg00, EventScript_FollowerLookAround},
    {sMusicMsg01},
    {sMusicMsg02, EventScript_FollowerDance},
    {sMusicMsg03},
    {sMusicMsg04, EventScript_FollowerHopping},
    {sMusicMsg05, EventScript_FollowerHopping},
    {sMusicMsg06}, {sMusicMsg07}, {sMusicMsg08}, {sMusicMsg09},
    {sMusicMsg10, EventScript_FollowerDance},
    {sMusicMsg11},
    {sMusicMsg12, EventScript_FollowerHopping},
    {sMusicMsg13, EventScript_FollowerNostalgia},
    {sMusicMsg14}
};


static const u8 sPoisonedMsg00[] = _("{STR_VAR_1} zittert unter\nden Folgen der Vergiftung.");

const struct FollowerMsgInfo gFollowerPoisonedMessages[] = {
    {sPoisonedMsg00, EventScript_FollowerIsShivering},
};
