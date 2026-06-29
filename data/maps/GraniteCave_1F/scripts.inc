GraniteCave_1F_EventScript_PkmnSign::
# 2 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_PkmnSignCave, MSGBOX_SIGN
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	showmonpic SPECIES_ZUBAT, 10, 3
# 4 "data/maps/GraniteCave_1F/scripts.pory"
	playmoncry SPECIES_ZUBAT, 0
# 5 "data/maps/GraniteCave_1F/scripts.pory"
	delay 60
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	hidemonpic
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	showmonpic SPECIES_MAKUHITA, 10, 3
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	playmoncry SPECIES_MAKUHITA, 0
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	delay 60
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	hidemonpic
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	showmonpic SPECIES_ABRA, 10, 3
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	delay 60
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	hidemonpic
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	showmonpic SPECIES_GEODUDE, 10, 3
# 16 "data/maps/GraniteCave_1F/scripts.pory"
	playmoncry SPECIES_GEODUDE, 0
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	delay 60
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	hidemonpic
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


GraniteCave_1F_EventScript_Hiker::
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_UNLOCKED_FLASH_TOOL, GraniteCave_1F_EventScript_Hiker_2
	checkitem ITEM_HM_FLASH
# 0 "data/maps/GraniteCave_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GraniteCave_1F_EventScript_Hiker_5
	checkitem ITEM_MULTITOOL
# 0 "data/maps/GraniteCave_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GraniteCave_1F_EventScript_Hiker_10
GraniteCave_1F_EventScript_Hiker_9:
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
GraniteCave_1F_EventScript_Hiker_7:
# 58 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_Hiker_2:
# 32 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_AlreadyHasTool, MSGBOX_NPC
# 33 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_Hiker_5:
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_NPC
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 40 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_NPC
# 41 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end

GraniteCave_1F_EventScript_Hiker_8:
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_BattleOffer, MSGBOX_YESNO
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GraniteCave_1F_EventScript_Hiker_13
# 50 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_single TRAINER_FLASHER_1 Text_FlasherIntro Text_FlasherDefeat GraniteCave_1F_EventScript_AfterBattle
	goto GraniteCave_1F_EventScript_Hiker_7

GraniteCave_1F_EventScript_Hiker_10:
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, GraniteCave_1F_EventScript_Hiker_8
	goto GraniteCave_1F_EventScript_Hiker_9

GraniteCave_1F_EventScript_Hiker_13:
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	goto GraniteCave_1F_EventScript_PlayerAnsweredNo
	goto GraniteCave_1F_EventScript_Hiker_7


GraniteCave_1F_EventScript_PlayerAnsweredNo::
# 63 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_PlayerRefused, MSGBOX_NPC
# 64 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


GraniteCave_1F_EventScript_AfterBattle::
# 69 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_AfterBattle, MSGBOX_NPC
# 70 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNLOCKED_FLASH_TOOL
# 71 "data/maps/GraniteCave_1F/scripts.pory"
	release
	end


# 129 "data/maps/GraniteCave_1F/scripts.pory"

# 130 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 131 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0

GraniteCave_1F_EventScript_Hiker_Text_0:
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Komm zurück, wenn du den\n"
	.string "Knöchelorden hast, und ich bringe\l"
	.string "dir eine weitere Technik bei.$"

GraniteCave_1F_Text_PkmnSignCave::
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "auf dieser Ebene der Höhle:$"

GraniteCave_1F_Text_GetsDarkAheadHereYouGo::
# 75 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, du!\n"
	.string "Hier ist es schrecklich dunkel.\l"
	.string "Eine Erforschung wird damit schwierig.\p"
	.string "Der Typ, der vorher schon mal hier war…\n"
	.string "Troy heißt er, glaube ich…\p"
	.string "Der weiß, wie man Blitz einsetzt, daher\n"
	.string "wird es ihm wohl gut gehen, aber…\p"
	.string "Das Motto unter uns Wanderern heißt:\n"
	.string "Jedem aus der Klemme helfen.\p"
	.string "Deshalb bekommst du dies von mir.$"

GraniteCave_1F_Text_ExplainFlash::
# 88 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Bringe einem Pokémon die VM Blitz\n"
	.string "bei und setze sie ein.\p"
	.string "Damit wird selbst die dunkelste Höhle\n"
	.string "von Licht erfüllt.\p"
	.string "Aber um das zu können, brauchst du den\n"
	.string "Orden der Arena von Faustauhaven.$"

GraniteCave_1F_Text_AlreadyHasTool::
# 97 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Die Laterne dient dir\n"
	.string "sicher gut. Viel Erfolg!$"

GraniteCave_1F_Text_PlayerRefused::
# 102 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Also gut. Komm zurück,\n"
	.string "wenn du bereit bist.$"

GraniteCave_1F_Text_AfterBattle::
# 107 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Gut gemacht. Ich statte dein\n"
	.string "Multitool mit der Laterne aus!$"

Text_FlasherIntro::
# 112 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Ich zeige dir, was\n"
	.string "Wanderer drauf haben!$"

Text_FlasherDefeat::
# 117 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hätte ich doch nur\n"
	.string "härter trainiert.$"

GraniteCave_1F_Text_BattleOffer::
# 122 "data/maps/GraniteCave_1F/scripts.pory"
	.string "So, du hast also den Orden\n"
	.string "gewonnen.\l"
	.string "Bist du bereit, ein Wanderer\l"
	.string "zu sein?$"
