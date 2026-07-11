# 1 "data/maps/DewfordTown_House1/scripts.pory"

# 2 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_MapScripts::
# 3 "data/maps/DewfordTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House1/scripts.pory"

# 5 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Man::
# 6 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
# 7 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 8 "data/maps/DewfordTown_House1/scripts.pory"

# 9 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Woman::
# 10 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
# 11 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 12 "data/maps/DewfordTown_House1/scripts.pory"

# 13 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_EventScript_Zigzagoon::
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 15 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 16 "data/maps/DewfordTown_House1/scripts.pory"
	waitse
# 17 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 18 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 19 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
# 20 "data/maps/DewfordTown_House1/scripts.pory"
	release
# 21 "data/maps/DewfordTown_House1/scripts.pory"
	end
# 22 "data/maps/DewfordTown_House1/scripts.pory"

# 23 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
# 24 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Über das harmonische Leben mit den\n"
# 25 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Pokémon und der Familie auf diesem\l"
# 26 "data/maps/DewfordTown_House1/scripts.pory"
	.string "kleinen Eiland ließe sich viel erzählen.$"
# 27 "data/maps/DewfordTown_House1/scripts.pory"

# 28 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
# 29 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Bevor ich meinen Mann geheiratet habe,\n"
# 30 "data/maps/DewfordTown_House1/scripts.pory"
	.string "lebte ich in der großen Hafenstadt\l"
# 31 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Graphitport City.\p"
# 32 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Hier auf der Insel verläuft das Leben\n"
# 33 "data/maps/DewfordTown_House1/scripts.pory"
	.string "geruhsamer. Vom wunderbaren Meer um-\l"
# 34 "data/maps/DewfordTown_House1/scripts.pory"
	.string "geben - das ist die pure Glückseligkeit!$"
# 35 "data/maps/DewfordTown_House1/scripts.pory"

# 36 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_Text_Zigzagoon:
# 37 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Zigzachs: Guguuh!$"
