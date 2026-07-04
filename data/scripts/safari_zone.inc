SafariZone_EventScript_OutOfBallsMidBattle::
#if IS_FRLG
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3
#else
	setvar VAR_SAFARI_ZONE_STATE, 1
#endif
	special ExitSafariMode
#if IS_FRLG
	setwarp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
#else
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
#endif
	end

SafariZone_EventScript_Exit::
#if IS_FRLG
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1
#else
	setvar VAR_SAFARI_ZONE_STATE, 1
#endif
	special ExitSafariMode
#if IS_FRLG
	warp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
#else
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
#endif
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
#ifdef BUGFIX
	releaseall  @ Only gets called from EventScript_PokeBlockFeeder which uses lockall.
#endif
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
	.string "Möchtest du die Safari-Zone jetzt\nverlassen?$"

SafariZone_Text_TimesUp:
	.string "Klingeling! Die Zeit ist um!\nDein Safari-Spiel ist vorbei.$"

SafariZone_Text_OutOfBalls:
	.string "Deine Safari-Bälle sind aufgebraucht.\nDein Safari-Spiel ist vorbei.$"

SafariZone_Text_PlacePokeblockOnFeeder:
	.string "Möchtest du einen {POKEBLOCK} in\nden Futternapf legen?$"

SafariZone_Text_PokeblockStillHere:
	.string "Der {STR_VAR_1}, den du zurückgelassen\nhast, ist noch da.$"

SafariZone_Text_PokeblockWasPlaced:
	.string "{STR_VAR_1} wurde auf den\nFutternapf gelegt.$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
	.string "Willkommen in der Safari-Zone!\p"
	.string "Hier kannst du viele Arten von\n"
	.string "Pokémon sehen, die in Hoenn selten sind.\p"
	.string "Und du siehst sie in ihrem wilden,\n"
	.string "natürlichen Lebensraum.\p"
	.string "Wir haben die Tore auch für\n"
	.string "Pokémon-Trainer geöffnet.\p"
	.string "Du darfst die Pokémon hier für\n"
	.string "immer fangen!\p"
	.string "Komm rein und genieß die Safari-Zone!$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
	.string "Willkommen in der Safari-Zone!\nBist du zum ersten Mal hier?$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
	.string "Komm rein und genieß die Safari-Zone!$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
	.string "Wenn du die Safari-Zone betrittst,\n"
	.string "erhältst du 30 Safari-Bälle zum\l"
	.string "Pokémon-Fang.\p"
	.string "Das Safari-Spiel endet, wenn du\n"
	.string "keine Safari-Bälle mehr hast oder\l"
	.string "500 Schritte gelaufen bist.\p"
	.string "Komm rein und genieß die Safari-Zone!$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
	.string "Willkommen in der Safari-Zone!\p"
	.string "Fangen, so viel du willst, für nur 500¥!\n"
	.string "Möchtest du ein Safari-Spiel spielen?$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
	.string "Okay.\nSpiel ein andermal wieder!$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
	.string "Du hast nicht genug Geld.\nTut mir leid.$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
	.string "Das macht dann 500¥, bitte.$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
	.string "Hier sind deine Safari-Bälle.$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
	.string "{PLAYER} erhält 30 Safari-Bälle.$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
	.string "Wir sagen dir Bescheid, wenn dein\n"
	.string "Spiel vorbei ist.\p"
	.string "Bis dahin wünschen wir dir viel Spaß!\n"
	.string "Auf geht's zu deinem Wildnis-Abenteuer!$"

Route121_SafariZoneEntrance_Text_PCIsFull:
	.string "Entschuldigung!\nDeine PC-Box ist voll.$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
	.string "Entschuldigung!\n"
	.string "Du hast anscheinend keinen\n"
	.string "{POKEBLOCK}-Box.\p"
	.string "Dein Safari-Spiel wird viel\n"
	.string "erfolgreicher sein, wenn du {POKEBLOCK}S\l"
	.string "benutzt.\p"
	.string "Bitte komm mit einem {POKEBLOCK}-Box\n"
	.string "wieder.\p"
	.string "Einen {POKEBLOCK}-Box bekommst du\n"
	.string "in der Lilycove-Wettbewerbshalle.$"

SafariZone_South_Text_StillHaveTimeExit:
	.string "Du hast noch Zeit. Möchtest du die\n"
	.string "Safari-Zone jetzt verlassen?$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
	.string "Viel Spaß beim Rest deines\nWildnis-Abenteuers!$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
	.string "Okay.\p"
	.string "Ich nehme deine übrigen Safari-Bälle\n"
	.string "zurück.\p"
	.string "Vielen Dank für dein Spiel.\n"
	.string "Wir hoffen, dich bald wiederzusehen.$"

SafariZone_South_Text_GoodLuck:
	.string "Viel Glück!\p"
	.string "Wenn du etwas brauchst, sag mir\n"
	.string "bitte Bescheid!$"

SafariZone_South_Text_Boy:
	.string "Weißt du was?\p"
	.string "Wenn du einen {POKEBLOCK} in den Kasten\n"
	.string "legst, sammeln sich Pokémon darum.$"

SafariZone_South_Text_Man:
	.string "Ich will tiefer hinein, aber ich habe\n"
	.string "vergessen, ein Fahrrad mitzunehmen.\p"
	.string "Irgendwie habe ich das Gefühl, dass\n"
	.string "seltene Pokémon in den Außenbereichen leben.$"

SafariZone_Southwest_Text_Woman:
	.string "Manchmal ignorieren Pokémon den\n"
	.string "{POKEBLOCK}, den ich zuwerfe.\p"
	.string "Haben Pokémon etwa Vorlieben, was\n"
	.string "sie fressen?$"

SafariZone_Northwest_Text_Man:
	.string "Keuch… Keuch…\n"
	.string "Ich… hab es hierher geschafft…\p"
	.string "Aber ich bin total erschöpft…\n"
	.string "Ich hab keine Kraft mehr zum Pokémon-Fang…$"

SafariZone_North_Text_Fisherman:
	.string "Ich bin auf der Suche nach Wasser-\n"
	.string "Pokémon, die man in Hoenn nicht sieht.\p"
	.string "Weißt du zufällig, wo der See ist?$"

SafariZone_North_Text_Man:
	.string "Ich fang hier viele seltene Pokémon\nund tausch sie mit meinen Freunden!$"

SafariZone_South_Text_Youngster:
	.string "Ich habe einen {POKEBLOCK} in den\n"
	.string "Futternapf gelegt.\p"
	.string "Aber er ist verschwunden.\p"
	.string "Ein Pokémon hat ihn wohl gefressen,\n"
	.string "ohne dass ich es gemerkt habe.$"

Route121_SafariZoneEntrance_Text_TrainerTip:
	.string "Safari-Zone-Trainertipp!\p"
	.string "Wirf {POKEBLOCK} auf wilde Pokémon,\n"
	.string "damit sie nicht so schnell fliehen.$"

SafariZone_Southwest_Text_RestHouseSign:
	.string "„Gönn deinen müden Füßen eine Pause.“\n"
	.string "Rast-Haus$"

SafariZone_RestHouse_Text_Youngster:
	.string "Ich habe keine {POKEBLOCK}, aber ich\n"
	.string "habe einige Pokémon gefangen.\p"
	.string "Du erhöhst deine Fangchancen, wenn\n"
	.string "du dich vor dem Wurf des Safari-Balls\l"
	.string "annäherst.$"

SafariZone_RestHouse_Text_PsychicM:
	.string "Mit {POKEBLOCK} laufen wilde Pokémon\n"
	.string "nicht so schnell weg.\p"
	.string "Es bringt wenig, {POKEBLOCK} an Pokémon\n"
	.string "zu verfüttern, die sowieso nicht fliehen.$"

SafariZone_RestHouse_Text_FatMan:
	.string "Wenn du einen {POKEBLOCK} in den\n"
	.string "Futternapf legst, werden Pokémon angelockt.\p"
	.string "Ich glaube, Pokémon mit einem bestimmten\n"
	.string "Wesen fühlen sich zu bestimmten {POKEBLOCK} hin.$"

SafariZone_South_Text_AreaOffLimits1:
	.string "Dieser Bereich wird noch gebaut.\nDer Zutritt ist verboten, sorry!$"

SafariZone_Southeast_Text_ExpansionIsFinished:
	.string "Das Erweiterungsprojekt der\n"
	.string "Safari-Zone ist jetzt abgeschlossen.\p"
	.string "Wir hoffen, du genießt die neue Fläche.$"

SafariZone_South_Text_AreaOffLimits2:
	.string "Dieser Bereich wird noch gebaut.\nDer Zutritt ist verboten, sorry!$"

SafariZone_Southeast_Text_LittleGirl:
	.string "Wow! Juhu! Diese Pokémon hab ich\nnoch nie gesehen!$"

SafariZone_Southeast_Text_FatMan:
	.string "Die Pokémon hier sind alle\n"
	.string "neu für mich.\p"
	.string "Und ich darf diese seltenen Pokémon\n"
	.string "fangen! Voll cool!$"

SafariZone_Southeast_Text_RichBoy:
	.string "Die Pokémon hier scheinen aus einer\nanderen Region als Hoenn zu sein.$"

SafariZone_Northeast_Text_Boy:
	.string "Ich habe nur noch ein paar\n"
	.string "Safari-Bälle übrig.\p"
	.string "Ich kann mich kaum entscheiden,\n"
	.string "was ich fangen soll.$"

SafariZone_Northeast_Text_Woman:
	.string "Ich hab gehört, dass man hier Pikachu\nsehen kann. Wo könnte eines sein?$"

SafariZone_Northeast_Text_Girl:
	.string "Oh, Mann!\n"
	.string "Ich kann einfach nichts fangen!\p"
	.string "Wenn ich nichts fange, war das\n"
	.string "Eintrittsgeld umsonst!$"
