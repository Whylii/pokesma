# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/SlateportCity_Mart/scripts.pory"

# 37 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 39 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 40 "data/maps/SlateportCity_Mart/scripts.pory"

# 41 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 42 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 43 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 44 "data/maps/SlateportCity_Mart/scripts.pory"

# 45 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 46 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Der Markt bietet einige interessante\n"
# 47 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Merchandising-Artikel an.\p"
# 48 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Aber einige Sachen wirst du nur in einem\n"
# 49 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Supermarkt finden.$"
# 50 "data/maps/SlateportCity_Mart/scripts.pory"

# 51 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 52 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Ein Superball eignet sich besser zum\n"
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Fangen von Pokémon als ein Pokéball.\p"
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "Hiermit sollte ich in der Lage sein, das\n"
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "begehrte Pokémon zu überlisten.$"
