# 1 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Youngster::
# 6 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_EventScript_Charlie::
# 10 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat
# 11 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieIntro:
# 15 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Was gibt es daran zu lachen, dass ich\n"
# 16 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "meinen Schlauch mit an Bord habe?$"
# 17 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 18 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharlieDefeat:
# 19 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Boah, du bist echt zu stark für mich!$"
# 20 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 21 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_CharliePostBattle:
# 22 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Es ist gar nicht leicht, Pokémon zu\n"
# 23 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "fangen, wenn man sich an einem\n"
# 24 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Schlauch festhalten muss!$"
# 25 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"

# 26 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
AbandonedShip_Corridors_1F_Text_IsntItFunHere:
# 27 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Ist das hier nicht lustig?\n"
# 28 "data/maps/AbandonedShip_Corridors_1F/scripts.pory"
	.string "Ich freu mich so, hier zu sein!$"
