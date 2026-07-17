# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"

# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"

# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"

# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"

# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"

# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"

# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Auch wenn ein Pokémon jetzt noch\n"
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "schwach ist - es wird ständig stärker.\p"
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Das Schlüsselwort heißt Liebe!\n"
# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Liebe für deine Pokémon!$"
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"

# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Setzt du Schutz ein?\n"
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Das hält Pokémon fern und ist sehr\l"
# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "nützlich, wenn du es eilig hast.$"
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"

# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Hast du etwas Gegengift dabei?\p"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Ein vergiftetes Pokémon verliert\n"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "ständig KP, bis es kampfunfähig wird.\l"
# 83 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Halte deshalb stets Gegengift bereit!$"
