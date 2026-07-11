# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 10 "data/maps/FallarborTown/scripts.pory"
	end
# 11 "data/maps/FallarborTown/scripts.pory"

# 12 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 13 "data/maps/FallarborTown/scripts.pory"
	lock
# 14 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown/scripts.pory"
	release
# 18 "data/maps/FallarborTown/scripts.pory"
	end
# 19 "data/maps/FallarborTown/scripts.pory"

# 20 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown/scripts.pory"
	release
# 23 "data/maps/FallarborTown/scripts.pory"
	end
# 24 "data/maps/FallarborTown/scripts.pory"

# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 27 "data/maps/FallarborTown/scripts.pory"
	end
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 30 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 31 "data/maps/FallarborTown/scripts.pory"
	end
# 32 "data/maps/FallarborTown/scripts.pory"

# 33 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 34 "data/maps/FallarborTown/scripts.pory"
	lock
# 35 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 36 "data/maps/FallarborTown/scripts.pory"
	waitse
# 37 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 40 "data/maps/FallarborTown/scripts.pory"
	release
# 41 "data/maps/FallarborTown/scripts.pory"
	end
# 42 "data/maps/FallarborTown/scripts.pory"

# 43 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 44 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 45 "data/maps/FallarborTown/scripts.pory"
	end
# 46 "data/maps/FallarborTown/scripts.pory"

# 47 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 52 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 53 "data/maps/FallarborTown/scripts.pory"
	end
# 54 "data/maps/FallarborTown/scripts.pory"

# 55 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "Was ist los? Was ist los?\p"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "Ich habe eine zwielichtige Gestalt aus\n"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "dem Labor von Prof. Kosmo flitzen\l"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "sehen.$"
# 60 "data/maps/FallarborTown/scripts.pory"

# 61 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "Diese Region ist schon seit Urzeiten\n"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "für ihre Meteoritenschauer bekannt.\p"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "Man sagt, die Meteorfälle seien durch\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "den Aufprall eines Meteoriten\l"
# 66 "data/maps/FallarborTown/scripts.pory"
	.string "entstanden.$"
# 67 "data/maps/FallarborTown/scripts.pory"

# 68 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "Schau mal! Guck doch mal!\n"
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "Das ist mein süßes Azurill!\p"
# 71 "data/maps/FallarborTown/scripts.pory"
	.string "Es ist glatt, weich und plüschig!$"
# 72 "data/maps/FallarborTown/scripts.pory"

# 73 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 74 "data/maps/FallarborTown/scripts.pory"
	.string "Azurill: Rooreelooo.$"
# 75 "data/maps/FallarborTown/scripts.pory"

# 76 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "Hast du schon Flavia, die Leiterin\n"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "der Arena von Bad Lavastadt,\l"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "herausgefordert?\p"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "Ihr Großvater ist sehr berühmt.\n"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "Er war einer der Top Vier in der\l"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "Pokémon Liga.\p"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "Es würde mich gar nicht wundern, wenn\n"
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "Flavia ebenfalls eine große Trainerin\l"
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "wird.$"
# 86 "data/maps/FallarborTown/scripts.pory"

# 87 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "Kampfcamp Laubwechselfeld\n"
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "Mögen Sich Die Besten Teams Hier\l"
# 90 "data/maps/FallarborTown/scripts.pory"
	.string "Treffen!$"
# 91 "data/maps/FallarborTown/scripts.pory"

# 92 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "Laubwechselfeld\n"
# 94 "data/maps/FallarborTown/scripts.pory"
	.string "Eine Gemeinschaft von Farmern mit\l"
# 95 "data/maps/FallarborTown/scripts.pory"
	.string "kleinen Gärten.$"
# 96 "data/maps/FallarborTown/scripts.pory"

# 97 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 98 "data/maps/FallarborTown/scripts.pory"
	.string "Haus des Attacken-Helfers\n"
# 99 "data/maps/FallarborTown/scripts.pory"
	.string "Neue Attacken für deine Pokémon.$"
