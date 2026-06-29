# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts::
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk::
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart:
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy::
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF::
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass::
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial:
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "X-Spezial ist für jeden Pokémon-Kampf\n"
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "äußerst wichtig.\p"
# 52 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Es erhöht die Stärke mancher Attacken.\n"
# 53 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Aber leider nur für einen Kampf.$"
# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Strategie-Ratgeber für das Kampfcamp\n"
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "scheinen sie hier leider nicht zu\p"
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "verkaufen… Man muss sich\n"
# 59 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "auf sich selbst verlassen.$"
# 60 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 61 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Der Nestball ist bei schwächeren\n"
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Pokémon hervorragend geeignet.\p"
# 64 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Den kannst du nur in Wiesenflur\n"
# 65 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "kaufen.$"
