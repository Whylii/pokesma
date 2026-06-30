PetalburgCity_Mart_EventScript_Clerk::
# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/maps/PetalburgCity_Mart/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PetalburgCity_Mart_EventScript_Clerk_2
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_HowMayIServeYou, MSGBOX_NPC
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_Clerk_5
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
PetalburgCity_Mart_EventScript_Clerk_4:
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	end

PetalburgCity_Mart_EventScript_Clerk_2:
# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_GiftEscapeRope, MSGBOX_NPC
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	giveitem ITEM_ESCAPE_ROPE
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
	end

PetalburgCity_Mart_EventScript_Clerk_5:
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
	goto PetalburgCity_Mart_EventScript_Clerk_4


	.align 2
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

# 61 "data/maps/PetalburgCity_Mart/scripts.pory"

# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 64 "data/maps/PetalburgCity_Mart/scripts.pory"

# 65 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"

# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 72 "data/maps/PetalburgCity_Mart/scripts.pory"

# 73 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"

# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Auch wenn ein Pokémon jetzt noch\n"
# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "schwach ist - es wird ständig stärker.\p"
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Das Schlüsselwort heißt Liebe!\n"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Liebe für deine Pokémon!$"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"

# 83 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 84 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Setzt du Schutz ein?\n"
# 85 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Das hält Pokémon fern und ist sehr\l"
# 86 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "nützlich, wenn du es eilig hast.$"
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"

# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 89 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Hast du etwas Gegengift dabei?\p"
# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Ein vergiftetes Pokémon verliert\n"
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "ständig KP, bis es kampfunfähig wird.\l"
# 92 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Halte deshalb stets Gegengift bereit!$"

PetalburgCity_Mart_Text_GiftEscapeRope::
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Vor kurzem kam hier ein Trainer\n"
	.string "vorbei und hat ein Seil verschenkt.\p"
	.string "Da ich nichts damit anfangen kann,\n"
	.string "schenke ich es dir.$"
