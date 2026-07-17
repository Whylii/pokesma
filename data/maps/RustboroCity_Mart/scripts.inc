# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Mart/scripts.pory"

# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Mart/scripts.pory"

# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 31 "data/maps/RustboroCity_Mart/scripts.pory"

# 32 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 34 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Mart/scripts.pory"

# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 58 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemartlistend
# 59 "data/maps/RustboroCity_Mart/scripts.pory"

# 60 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 62 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Mart/scripts.pory"

# 64 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 65 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 66 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 67 "data/maps/RustboroCity_Mart/scripts.pory"

# 68 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 70 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Mart/scripts.pory"

# 72 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Ich habe einige Para-Heiler und\n"
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "etwas Gegengift gekauft.\p"
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Nur für den Fall, dass mir ein\n"
# 76 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Knilz im Blütenburgwald\l"
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "über den Weg läuft.$"
# 78 "data/maps/RustboroCity_Mart/scripts.pory"

# 79 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 80 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Mein Pokémon hat sich entwickelt.\n"
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Es hat jetzt sehr viele KP.\p"
# 82 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Ich sollte nun einige Supertränke\n"
# 83 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "anstelle der normalen Tränke kaufen.$"
# 84 "data/maps/RustboroCity_Mart/scripts.pory"

# 85 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Ich habe ein Fluchtseil besorgt, falls\n"
# 87 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ich mich mal in einer Höhle verlaufe.\p"
# 88 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Damit kann ich zurück zum Eingang der\n"
# 89 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Höhle gelangen.$"
