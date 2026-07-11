# 1 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
# 4 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.byte 0
# 5 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 6 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_OnLoad:
# 7 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2, Route110_TrickHousePuzzle1_EventScript_OpenDoor
# 8 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 9 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 10 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_OpenDoor::
# 11 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 12 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 14 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Scroll::
# 15 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	lockall
# 16 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle1_EventScript_FoundScroll
# 17 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 18 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 19 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 20 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_FoundScroll::
# 21 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 23 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 24 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 25 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Sally::
# 26 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 29 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Eddie::
# 31 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
# 32 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Robin::
# 36 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
# 37 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	end
# 39 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 40 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
# 41 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "{PLAYER} hat den geheimen Code auf die\n"
# 42 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Tür geschrieben.\p"
# 43 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Rätselmeister ist sagenhaft.\n"
# 44 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "… … … … … … … …\p"
# 45 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Das Schloss geht klickend auf.$"
# 46 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 47 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyIntro:
# 48 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Ich habe mir den Weg zum Sieg mit dem\n"
# 49 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Zerschneider, den wir gerade gelernt\l"
# 50 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "haben, gebahnt.$"
# 51 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 52 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyDefeat:
# 53 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Warum bist du so ernst?$"
# 54 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 55 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_SallyPostBattle:
# 56 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Ich werde des Hackens und\n"
# 57 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Schneidens nie müde!$"
# 58 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 59 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieIntro:
# 60 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Ich bin nur zufällig in diesem\n"
# 61 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "verrückten Haus gelandet…$"
# 62 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddieDefeat:
# 64 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Und nun habe ich verloren…$"
# 65 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_EddiePostBattle:
# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Ich bin vom Weg abgekommen, ich habe\n"
# 68 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "verloren und bin verloren. Ich finde den\l"
# 69 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Ausgang nicht mehr…$"
# 70 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 71 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinIntro:
# 72 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Wer ist dieser Rätselmeister bloß?$"
# 73 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 74 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinDefeat:
# 75 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Ich verlor ganz gedankenverloren.$"
# 76 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"

# 77 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
Route110_TrickHousePuzzle1_Text_RobinPostBattle:
# 78 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Du bist stark!\n"
# 79 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Wer bist du eigentlich?$"
