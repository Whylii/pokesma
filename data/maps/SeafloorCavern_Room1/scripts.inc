# 1 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_MapScripts::
# 3 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt1::
# 6 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
# 7 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_EventScript_Grunt2::
# 11 "data/maps/SeafloorCavern_Room1/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
# 12 "data/maps/SeafloorCavern_Room1/scripts.pory"
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeafloorCavern_Room1/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 15 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Intro:
# 16 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Wir können hier keine Kinder\n"
# 17 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "gebrauchen! Geh nach Hause! Sofort!$"
# 18 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1Defeat:
# 20 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Ich will nach Hause…$"
# 21 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 22 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt1PostBattle:
# 23 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Ich möchte befördert werden, dann kann\n"
# 24 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "ich all die Rüpel herumkommandieren!$"
# 25 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 26 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Intro:
# 27 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Dieses U-Boot… Es ist sehr eng.\n"
# 28 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Ich habe deshalb überall blaue Flecken.$"
# 29 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 30 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2Defeat:
# 31 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Verlieren verursacht bei mir\n"
# 32 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Muskelkater!$"
# 33 "data/maps/SeafloorCavern_Room1/scripts.pory"

# 34 "data/maps/SeafloorCavern_Room1/scripts.pory"
SeafloorCavern_Room1_Text_Grunt2PostBattle:
# 35 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "Das U-Boot, das wir aufgetrieben haben,\n"
# 36 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "ist fürchterlich eng. Brutal eng, sage\l"
# 37 "data/maps/SeafloorCavern_Room1/scripts.pory"
	.string "ich. Man stößt sich überall den Kopf.$"
