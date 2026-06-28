# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 4 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/AquaHideout_B2F/scripts.pory"

# 6 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 8 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 9 "data/maps/AquaHideout_B2F/scripts.pory"

# 10 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 12 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 13 "data/maps/AquaHideout_B2F/scripts.pory"

# 14 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_MattNoticePlayer::
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	lockall
# 16 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 17 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_ExclamationMark
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 21 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	releaseall
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 25 "data/maps/AquaHideout_B2F/scripts.pory"

# 26 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Matt::
# 27 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_MATT, AquaHideout_B2F_Text_MattIntro, AquaHideout_B2F_Text_MattDefeat, AquaHideout_B2F_EventScript_SubmarineEscape
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 31 "data/maps/AquaHideout_B2F/scripts.pory"

# 32 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_SubmarineEscape::
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8008, LOCALID_AQUA_HIDEOUT_MATT
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_0x8009, LOCALID_AQUA_HIDEOUT_SUBMARINE
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 36 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_OurBossGotThroughHisPreparations, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8009, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 44 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject VAR_0x8009
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 20
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FacePlayer
# 48 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_MattPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 54 "data/maps/AquaHideout_B2F/scripts.pory"

# 55 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 56 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 57 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 60 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 61 "data/maps/AquaHideout_B2F/scripts.pory"

# 62 "data/maps/AquaHideout_B2F/scripts.pory"
@ Unused
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartRight:
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 66 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 67 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_right
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	step_end
# 69 "data/maps/AquaHideout_B2F/scripts.pory"

# 70 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 71 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 72 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 74 "data/maps/AquaHideout_B2F/scripts.pory"

# 75 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 76 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 79 "data/maps/AquaHideout_B2F/scripts.pory"

# 80 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 81 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 82 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 84 "data/maps/AquaHideout_B2F/scripts.pory"

# 85 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 89 "data/maps/AquaHideout_B2F/scripts.pory"

# 90 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattIntro:
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehehe… Du hast es tatsächlich\n"
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "bis hierher geschafft?\p"
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Da haben wir dich wohl etwas\n"
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "unterschätzt!\p"
# 95 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Aber hier geht es für dich nicht weiter!\p"
# 96 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Ich bin besser als die anderen Rüpel,\n"
# 97 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "die dir bisher begegnet sind.\p"
# 98 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Ich schinde keine Zeit heraus. Ich\n"
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "werde dich pulverisieren!$"
# 100 "data/maps/AquaHideout_B2F/scripts.pory"

# 101 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattDefeat:
# 102 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe…\n"
# 103 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Dann habe ich eben auch verloren. Pöh.$"
# 104 "data/maps/AquaHideout_B2F/scripts.pory"

# 105 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations:
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Während ich mit dir gespielt habe, hat\n"
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "sich unser Boss vorbereitet!$"
# 109 "data/maps/AquaHideout_B2F/scripts.pory"

# 110 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_MattPostBattle:
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehe!\p"
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Unser Boss ist schon unterwegs zu\n"
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "einer Unterwasserhöhle!\p"
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Falls du ihn verfolgen willst, suche\n"
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "doch mal die Tiefsee in der Region um\l"
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Seegrasulb City ab.\p"
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Aber ob du ihn dort auch finden wirst?\n"
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hehehehehehe…$"
# 119 "data/maps/AquaHideout_B2F/scripts.pory"

# 120 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahahah, ich bin müde vom Warten!\n"
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Du schuldest mir einen Kampf!$"
# 123 "data/maps/AquaHideout_B2F/scripts.pory"

# 124 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Des Wartens müde…\n"
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Gedöst und verloren…$"
# 127 "data/maps/AquaHideout_B2F/scripts.pory"

# 128 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Boss…\n"
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Reicht das aus?$"
# 131 "data/maps/AquaHideout_B2F/scripts.pory"

# 132 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Teleporter… Der ganze Stolz des\n"
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Verstecks!\p"
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Du weißt gar nicht mehr, wo du gerade\n"
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "bist, stimmt’s? Kicher…\p"
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Den Gegner verwirren, ermüden und dann\n"
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "auf ihn mit Gebrüll! Das ist der Plan!$"
# 139 "data/maps/AquaHideout_B2F/scripts.pory"

# 140 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Was stimmt nicht mit dir?\n"
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Du bist ja überhaupt nicht müde!$"
# 143 "data/maps/AquaHideout_B2F/scripts.pory"

# 144 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 145 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Da fällt mir ein… Wo habe ich nur den\n"
# 146 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Meisterball hingelegt?\p"
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wenn ich den verloren habe, zieht mir\n"
# 148 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "der Boss die Ohren lang…$"
# 149 "data/maps/AquaHideout_B2F/scripts.pory"

# 150 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 151 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Nachdem ich Team Aqua beigetreten war,\n"
# 152 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "musste ich erstmal lernen, wie diese\l"
# 153 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Teleporter miteinander verbunden sind.$"
# 154 "data/maps/AquaHideout_B2F/scripts.pory"

# 155 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 156 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Ich war viel zu sehr damit beschäftigt,\n"
# 157 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "über die Teleporter nachzudenken…$"
# 158 "data/maps/AquaHideout_B2F/scripts.pory"

# 159 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 160 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Ich muss lernen, wie ich effektiver\n"
# 161 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "kämpfen kann…$"
