# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/OldaleTown_Mart/scripts.pory"

# 28 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 33 "data/maps/OldaleTown_Mart/scripts.pory"

# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 55 "data/maps/OldaleTown_Mart/scripts.pory"

# 56 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 63 "data/maps/OldaleTown_Mart/scripts.pory"

# 64 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 68 "data/maps/OldaleTown_Mart/scripts.pory"

# 69 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 72 "data/maps/OldaleTown_Mart/scripts.pory"

# 73 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 74 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Der Verkäufer sagt, es sei alles\n"
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "ausverkauft. Jetzt stehe ich ohne\l"
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Pokébälle da.$"
# 77 "data/maps/OldaleTown_Mart/scripts.pory"

# 78 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Ich will mir viele Pokébälle kaufen und\n"
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "damit genauso viele Pokémon fangen!$"
# 81 "data/maps/OldaleTown_Mart/scripts.pory"

# 82 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Wird ein Pokémon verletzt und verliert\n"
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "alle KP, so ist es kampfunfähig.\p"
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Um das zu vermeiden, solltest du die KP\n"
# 86 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "bei Bedarf mit einem Trank auffüllen.$"
