# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts::
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 5 "data/maps/MagmaHideout_1F/scripts.pory"

# 6 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition:
# 7 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_1F/scripts.pory"

# 10 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1::
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_1F/scripts.pory"

# 15 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2::
# 16 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_1F/scripts.pory"

# 20 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro:
# 21 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Wenn Team Magma zum Appell antritt,\n"
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "bekommen wir wichtige Aufgaben\l"
# 23 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "zugeteilt und zwar in der Reihenfolge,\p"
# 24 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "in der wir angetreten sind. Daher muss\n"
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "ich hier in der Ecke bleiben. Ich komme\l"
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "nämlich immer zu spät zum Appell.$"
# 27 "data/maps/MagmaHideout_1F/scripts.pory"

# 28 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat:
# 29 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Ich komme auch immer zu spät zum\n"
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Training!\p"
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Ich gebe es nur ungern zu, aber ich gebe\n"
# 32 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "ein jämmerliches Mitglied ab…$"
# 33 "data/maps/MagmaHideout_1F/scripts.pory"

# 34 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle:
# 35 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Von nun an werde ich mich in allen\n"
# 36 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Dingen mehr anstrengen!$"
# 37 "data/maps/MagmaHideout_1F/scripts.pory"

# 38 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro:
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Unser Boss hat uns gesagt, wir sollen\n"
# 40 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "im Schlotberg Grabungen durchführen,\l"
# 41 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "daher haben wir gegraben und gegraben…\p"
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Und dann haben wir etwas gefunden, was\n"
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "uns den Atem verschlug.\p"
# 44 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Was das war?!\p"
# 45 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Hahaha! Das verrate ich dir, wenn\n"
# 46 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "du mich besiegst.$"
# 47 "data/maps/MagmaHideout_1F/scripts.pory"

# 48 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat:
# 49 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Aaaarrgh!\n"
# 50 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Treffer, versenkt.$"
# 51 "data/maps/MagmaHideout_1F/scripts.pory"

# 52 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle:
# 53 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Ich verrate es dir trotzdem nicht.\n"
# 54 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Du wirst das schon herausfinden, wenn\l"
# 55 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "du dorthin gehst.\p"
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Schließlich darf man sich nicht jede\n"
# 57 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Überraschung nehmen lassen.$"
