# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown/scripts.pory"

# 7 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 8 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown/scripts.pory"
	end
# 10 "data/maps/PacifidlogTown/scripts.pory"

# 11 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 12 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 13 "data/maps/PacifidlogTown/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown/scripts.pory"

# 15 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 16 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 17 "data/maps/PacifidlogTown/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown/scripts.pory"

# 19 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 20 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown/scripts.pory"

# 23 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 24 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 25 "data/maps/PacifidlogTown/scripts.pory"
	end
# 26 "data/maps/PacifidlogTown/scripts.pory"

# 27 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 28 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 29 "data/maps/PacifidlogTown/scripts.pory"
	end
# 30 "data/maps/PacifidlogTown/scripts.pory"

# 31 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 32 "data/maps/PacifidlogTown/scripts.pory"
	.string "Im Meer zwischen Flossbrunn und\n"
# 33 "data/maps/PacifidlogTown/scripts.pory"
	.string "Graphitport City befinden sich\l"
# 34 "data/maps/PacifidlogTown/scripts.pory"
	.string "reißende Strömungen.\p"
# 35 "data/maps/PacifidlogTown/scripts.pory"
	.string "Wenn du dort Surfer einsetzt, kann es\n"
# 36 "data/maps/PacifidlogTown/scripts.pory"
	.string "sein, dass du fortgetrieben wirst.$"
# 37 "data/maps/PacifidlogTown/scripts.pory"

# 38 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 39 "data/maps/PacifidlogTown/scripts.pory"
	.string "Schau mal. Ist das nicht hübsch?\n"
# 40 "data/maps/PacifidlogTown/scripts.pory"
	.string "Die Häuser stehen auf dem Wasser.\p"
# 41 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ich wurde hier geboren.$"
# 42 "data/maps/PacifidlogTown/scripts.pory"

# 43 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "Der Himmelturm?\p"
# 45 "data/maps/PacifidlogTown/scripts.pory"
	.string "Ach, du meinst bestimmt diesen hohen,\n"
# 46 "data/maps/PacifidlogTown/scripts.pory"
	.string "hohen Turm, der sich hier in der Nähe\l"
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "befindet.\p"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "Also, wenn du mich fragst - ich würde\n"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "niemals da hochgehen. Da hätte ich viel\l"
# 50 "data/maps/PacifidlogTown/scripts.pory"
	.string "zu viel Angst, weil das so hoch ist!\p"
# 51 "data/maps/PacifidlogTown/scripts.pory"
	.string "Leben auf Höhe des Meeresspiegels in\n"
# 52 "data/maps/PacifidlogTown/scripts.pory"
	.string "Flossbrunn, das ist mein Ding.$"
# 53 "data/maps/PacifidlogTown/scripts.pory"

# 54 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 55 "data/maps/PacifidlogTown/scripts.pory"
	.string "Flossbrunn\p"
# 56 "data/maps/PacifidlogTown/scripts.pory"
	.string "Wo die Morgensonne ein Lächeln auf\n"
# 57 "data/maps/PacifidlogTown/scripts.pory"
	.string "das Meer zaubert.$"
