# 1 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 10 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 22 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FaceOriginalDirection
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	release
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_facing_direction
# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_facing_direction
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_up
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
# 78 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, so haben sie also die Anzahl der\n"
# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Gäste verdoppelt. Indem sie Pokémon\l"
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "als Attraktion präsentieren?\p"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, vielleicht sollte ich ein niedliches\n"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Pokémon zum Maskottchen meines\l"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Gasthofes machen…\p"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Ich frage mich, ob ich so mehr\n"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Gäste hätte?$"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 87 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, tut mir Leid, tut mir Leid!\n"
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Ich habe so konzentriert ferngesehen!\p"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Seit Team Aqua in diesem Ort ist,\n"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "bleiben die Gäste aus.$"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hey, geh weg da!\n"
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Du bist doch nicht aus Glas!$"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Interessant! Du sagst, ein Pokémon\n"
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "hat ein Item gefunden, das jemand ver-\l"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "loren hat?\p"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Das ist ja was! Wenn wir auch so clevere\n"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Pokémon hätten…\p"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Dann könnten wir alles wiederfinden,\n"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "was unsere Gäste verloren haben.$"
# 105 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, tut mir Leid, tut mir Leid!\n"
# 108 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Ich habe so konzentriert ferngesehen!\p"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Ich habe gehört, dass jemand das Ver-\n"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "steck von Team Aqua auffliegen ließ.\p"
# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Gut! Dadurch haben wir endlich Gäste.\n"
# 112 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Eine ganze Gruppe hat reserviert!\p"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Das sind Angestellte einer Firma… Äh…\n"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Game irgendwas…$"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
# 117 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Irre! Ein Pokémon, das das Haus be-\n"
# 118 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "wachte, hat Einbrecher geschnappt?\p"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Klasse! Wir sollten auch über einen\n"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Wachschutz durch Pokémon nachdenken.\p"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Dadurch könnten wir unseren Gästen\n"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "viel mehr Sicherheit bieten.$"
# 123 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 124 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
# 125 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, tut mir Leid, tut mir Leid!\n"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Ich habe so konzentriert ferngesehen!\p"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, ja. Eine große Gruppe von Gästen\n"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "ist vor kurzem hier eingetroffen.\p"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Sie haben sich als Game Freak einge-\n"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "tragen. Ich denke, sie entwickeln\l"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Spiele.\p"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh oh, ich sollte mich besser um ihr\n"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Abendessen kümmern!$"
