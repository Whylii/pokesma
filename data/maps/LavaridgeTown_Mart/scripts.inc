# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart:
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 37 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 38 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 39 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 40 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 41 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 43 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 44 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 45 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike:
# 46 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Mit X-Tempo kannst du die Initiative\n"
# 47 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "im Kampf erhöhen.\p"
# 48 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "So kann man eventuell den ersten\n"
# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Angriff ausführen - ein entscheidender\l"
# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Vorteil!$"
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Auf dem Gipfel des Schlotbergs wird\n"
# 54 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "eine lokale Spezialität angeboten.\p"
# 55 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Gib sie einem Pokémon und es wird\n"
# 56 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "begeistert sein.$"
