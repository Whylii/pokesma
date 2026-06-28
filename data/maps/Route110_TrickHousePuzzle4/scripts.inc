# 1 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle4_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Cora::
# 17 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
# 18 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Yuji::
# 22 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
# 23 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Paula::
# 27 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
# 28 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
# 32 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "{PLAYER} hat den geheimen Code auf die\n"
# 33 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Tür geschrieben.\p"
# 34 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "“Rätselmeister ist cool.”\n"
# 35 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "… … … … … … … …\p"
# 36 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Das Schloss geht klickend auf.$"
# 37 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraIntro:
# 39 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Ich habe keine Zeit, das zu verstehen.\n"
# 40 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Ich will nur kämpfen!$"
# 41 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 42 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraDefeat:
# 43 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Auch wenn ich verloren habe, liebe ich\n"
# 44 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "das Kämpfen.$"
# 45 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 46 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_CoraPostBattle:
# 47 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Stimmst du mir zu? Du würdest überall\n"
# 48 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "hingehen, wo man Trainer findet.$"
# 49 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiIntro:
# 51 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Hey! Felsen wie diese räume ich mit\n"
# 52 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "dem kleinen Finger aus dem Weg.$"
# 53 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiDefeat:
# 55 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Ich kann Felsen bewegen, aber ein\n"
# 56 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Rätsel zu lösen ist mir zu schwer…$"
# 57 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 58 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_YujiPostBattle:
# 59 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Muskeln alleine sind nicht alles… Auch\n"
# 60 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Gehirnschmalz ist wichtig. Sei helle!$"
# 61 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 62 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaIntro:
# 63 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Das RätselhausÄTSELHAUS wird immer\n"
# 64 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "verrätselter… äh, komplizierter, oder?$"
# 65 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 66 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaDefeat:
# 67 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Aaak!$"
# 68 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"

# 69 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
# 70 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Hat es jemand schon mal bis zum\n"
# 71 "data/maps/Route110_TrickHousePuzzle4/scripts.pory"
	.string "Ende geschafft?$"
