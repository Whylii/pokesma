# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_1F/scripts.pory"

# 16 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_1F/scripts.pory"

# 21 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, du!\n"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hier ist es schrecklich dunkel.\l"
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Eine Erforschung wird damit schwierig.\p"
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Der Typ, der vorher schon mal hier war…\n"
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Troy heißt er, glaube ich…\p"
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Der weiß, wie man Blitz einsetzt, daher\n"
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	.string "wird es ihm wohl gut gehen, aber…\p"
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Das Motto unter uns Wanderern heißt:\n"
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Jedem aus der Klemme helfen.\p"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Deshalb bekommst du dies von mir.$"
# 32 "data/maps/GraniteCave_1F/scripts.pory"

# 33 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Bringe einem Pokémon die VM Blitz\n"
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "bei und setze sie ein.\p"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Damit wird selbst die dunkelste Höhle\n"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "von Licht erfüllt.\p"
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Aber um das zu können, brauchst du den\n"
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Orden der Arena von Faustauhaven.$"
