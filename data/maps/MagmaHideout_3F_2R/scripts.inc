# 1 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_MapScripts::
# 3 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 5 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_Grunt10::
# 6 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
# 7 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 10 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Intro:
# 11 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Ich verstehe alles, was unser Boss\n"
# 12 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "sagt. Aber weißt du, was?\p"
# 13 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Nach einem uralten Pokémon zu\n"
# 14 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "graben und jemandem einen Meteoriten\l"
# 15 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "stehlen…\p"
# 16 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Ich glaube, wir sind etwas zu weit\n"
# 17 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "gegangen. Was meinst du?$"
# 18 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 19 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Defeat:
# 20 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Yeah, ich denke wirklich, was wir\n"
# 21 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "machen, ist falsch.$"
# 22 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 23 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10PostBattle:
# 24 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Die Niederlage gegen dich hat meinen\n"
# 25 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Verstand gereinigt.\p"
# 26 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Nächstes Mal, wenn ich ihn sehe, werde\n"
# 27 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "ich meinen Boss fragen, was wir hier\l"
# 28 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "eigentlich machen.$"
