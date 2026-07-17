# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"

# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"

# 41 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"

# 45 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 46 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Es gibt Items, die den Status eines\n"
# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Pokémon kurzzeitig erhöhen.\p"
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Ich weiß, dass man X-Angriff und\n"
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "X-Verteidigung im Kampf einsetzen\l"
# 50 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "kann…\p"
# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Ich glaube, es gibt aber auch noch\n"
# 52 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "andere.$"
# 53 "data/maps/MauvilleCity_Mart/scripts.pory"

# 54 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Setze eine bestimmte Attacke ein,\n"
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "oder stattdessen ein Item…\p"
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Ich glaube, die Entscheidungen des\n"
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Trainers bestimmen, wie ein Kampf\l"
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "verläuft.$"
