# 1 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.byte 0
# 4 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 5 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Scroll::
# 6 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	lockall
# 7 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
# 8 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 9 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 10 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 11 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_FoundScroll::
# 12 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
# 13 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 14 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Vincent::
# 17 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
# 18 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 20 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 21 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Keira::
# 22 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
# 23 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 25 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 26 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Leroy::
# 27 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
# 28 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	end
# 30 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 31 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
# 32 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "{PLAYER} hat den geheimen Code auf die\n"
# 33 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Tür geschrieben.\p"
# 34 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Rätselmeister ist Liebe.\n"
# 35 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "… … … … … … … …\p"
# 36 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Das Schloss geht klickend auf.$"
# 37 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 38 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentIntro:
# 39 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Nicht viele Trainer haben es bis\n"
# 40 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "hierher geschafft.$"
# 41 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 42 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentDefeat:
# 43 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Das bedeutet, dass du sehr stark bist…$"
# 44 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 45 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_VincentPostBattle:
# 46 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Du hast den Champ der Pokémon Liga\n"
# 47 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "besiegt? Das ist zu viel für mich!$"
# 48 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 49 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraIntro:
# 50 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Sieh es als Glücksfall an, dass du gegen\n"
# 51 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "mich antreten darfst.$"
# 52 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 53 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraDefeat:
# 54 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Das ist nicht korrekt!\n"
# 55 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Ich darf nicht verlieren!$"
# 56 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 57 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
# 58 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Nur ein Wunder hat dir zu diesem Sieg\n"
# 59 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "verholfen. Prahl doch damit…$"
# 60 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 61 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyIntro:
# 62 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Du schleichst hier auch durch das\n"
# 63 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Rätselhaus?$"
# 64 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 65 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyDefeat:
# 66 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Ich verstehe…\n"
# 67 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Du hast einen außergewöhnlichen Stil.$"
# 68 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"

# 69 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
# 70 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Dein Anblick wird den Rätselmeister\n"
# 71 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "bestimmt erfreuen.$"
