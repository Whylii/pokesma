# 1 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_MapScripts::
# 3 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt3::
# 6 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
# 7 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 10 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_EventScript_Grunt4::
# 11 "data/maps/SeafloorCavern_Room4/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
# 12 "data/maps/SeafloorCavern_Room4/scripts.pory"
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeafloorCavern_Room4/scripts.pory"
	end
# 14 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 15 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Intro:
# 16 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Wer bist du?\n"
# 17 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Woher kommst du?$"
# 18 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 19 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3Defeat:
# 20 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Verloren…$"
# 21 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 22 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt3PostBattle:
# 23 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Ich finde den Ausgang nicht mehr!\p"
# 24 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Ich bin nicht verzweifelt. Denk das\n"
# 25 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "bloß nicht!$"
# 26 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 27 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Intro:
# 28 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Wer bist du?\n"
# 29 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Was meinst du, was du da machst?$"
# 30 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 31 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4Defeat:
# 32 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Ich konnte nicht gewinnen!$"
# 33 "data/maps/SeafloorCavern_Room4/scripts.pory"

# 34 "data/maps/SeafloorCavern_Room4/scripts.pory"
SeafloorCavern_Room4_Text_Grunt4PostBattle:
# 35 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Mein Partner hat die Karte im U-Boot\n"
# 36 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "liegen gelassen.\p"
# 37 "data/maps/SeafloorCavern_Room4/scripts.pory"
	.string "Wie kann man nur so nutzlos sein?$"
