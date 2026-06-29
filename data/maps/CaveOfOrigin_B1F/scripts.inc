# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_WalkInPlaceFasterUp
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 60
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_ExclamationMark
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_Delay48
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 30
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_CAVE_OF_ORIGIN_WALLACE, Common_Movement_FacePlayer
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_CAVE_OF_ORIGIN_WALLACE
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ah, du bist also {PLAYER}{KUN}?\n"
# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ich habe schon von deinen Heldentaten\l"
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "gehört.\p"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ich heiße Wassili.\p"
# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Früher war ich Arenaleiter in\n"
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Xeneroville, aber dann ist etwas\l"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "passiert.\p"
# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Daher habe ich meinem Mentor Juan\n"
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "die Arena übergeben.\p"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\n"
# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "… … … … … …\p"
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Groudon und Kyogre, die beiden\n"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Pokémon, die hier für Chaos sorgen,\l"
# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "sind uralte Pokémon.\p"
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Aber es gibt nicht nur zwei alte\n"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Pokémon.\p"
# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Es gibt noch ein drittes - irgendwo.\p"
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Irgendwo gibt es das uralte Pokémon\n"
# 82 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Rayquaza.\p"
# 83 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Die Legende sagt, dass es Rayquaza war,\n"
# 84 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "das die beiden Gegner damals\l"
# 85 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "beruhigte.\p"
# 86 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Aber ich weiß auch nicht, wo sich\n"
# 87 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Rayquaza aufhält…$"
# 88 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 89 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 90 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wassili: Weißt du vielleicht, wo sich\n"
# 91 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Rayquaza aufhält, {PLAYER}{KUN}?\p"
# 92 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wenn ja, dann sag es mir bitte.$"
# 93 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 94 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 95 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wassili: In der Urzeithöhle?\p"
# 96 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Aber die ist doch hier!\n"
# 97 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Das kann nicht sein!\p"
# 98 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Bitte, denk gut darüber nach, wo\n"
# 99 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Rayquaza sich befinden könnte.$"
# 100 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 101 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 102 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wassili: Pyroberg?\p"
# 103 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Ich habe dort vor ein paar Tagen eine\n"
# 104 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "alte Dame getroffen und die hat nichts\l"
# 105 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "darüber erwähnt.\p"
# 106 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Und ich bezweifle, dass sie etwas vor\n"
# 107 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "mir verheimlichen wollte…\p"
# 108 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Fällt dir kein anderer Ort ein, {PLAYER}{KUN}?$"
# 109 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 110 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 111 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wassili: Bitte? Du erinnerst dich\n"
# 112 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "nicht? Hmm… Dann haben wir ein Problem…\p"
# 113 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Du erinnerst dich wirklich nicht?$"
# 114 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 115 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 116 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wassili: Der Himmelturm?\p"
# 117 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Das ist es!\n"
# 118 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Es kann nur der Himmelturm sein!\p"
# 119 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Wir dürfen keine Zeit verlieren,\n"
# 120 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{PLAYER}{KUN}! Wir müssen sofort zum\l"
# 121 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Himmelturm!$"
