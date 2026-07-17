# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts::
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk::
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Mart/scripts.pory"

# 15 "data/maps/FortreeCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart:
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/FortreeCity_Mart/scripts.pory"

# 37 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman::
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 39 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 40 "data/maps/FortreeCity_Mart/scripts.pory"

# 41 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl::
# 42 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 43 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 44 "data/maps/FortreeCity_Mart/scripts.pory"

# 45 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy::
# 46 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 47 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 48 "data/maps/FortreeCity_Mart/scripts.pory"

# 49 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter:
# 50 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Superschutz hält lange an und ist auch\n"
# 51 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "äußerst nützlich.\p"
# 52 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Er ist viel besser als\n"
# 53 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "der normale Schutz.$"
# 54 "data/maps/FortreeCity_Mart/scripts.pory"

# 55 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems:
# 56 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Ich horte immer mehr Items, als ich\n"
# 57 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "eigentlich benötige.\p"
# 58 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Man weiß ja nie, was einem passieren\n"
# 59 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "kann. Besser haben und nicht brauchen,\l"
# 60 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "als brauchen und nicht haben!$"
# 61 "data/maps/FortreeCity_Mart/scripts.pory"

# 62 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow:
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Ein Sonderbonbon erhöht den Level\n"
# 64 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "eines Pokémon sofort um 1.$"
