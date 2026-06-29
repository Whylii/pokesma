# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/FallarborTown_Mart/scripts.pory"

# 37 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 40 "data/maps/FallarborTown_Mart/scripts.pory"

# 41 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 44 "data/maps/FallarborTown_Mart/scripts.pory"

# 45 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 54 "data/maps/FallarborTown_Mart/scripts.pory"

# 55 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 56 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Ich habe lange überlegt, ob sich mein\n"
# 57 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Eneco entwickeln soll oder nicht.\p"
# 58 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Ich müsste nur diesen Mondstein ein-\n"
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "setzen, aber das ist eine schwere\l"
# 60 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Entscheidung…\p"
# 61 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Würde es sich entwickeln, wäre es viel\n"
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "stärker.\p"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Aber es würde auch anders aussehen.$"
# 64 "data/maps/FallarborTown_Mart/scripts.pory"

# 65 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 66 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Eneco: Miyao?$"
# 67 "data/maps/FallarborTown_Mart/scripts.pory"

# 68 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Ich habe hier ein Nugget gefunden…\n"
# 70 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Das werde ich wohl verkaufen. Was soll\l"
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "ich sonst damit machen?$"
