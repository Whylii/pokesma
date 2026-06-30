# 1 "data/maps/SootopolisCity_Mart/scripts.pory"

# 2 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_MapScripts::
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"

# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk::
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"

# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart:
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"

# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan::
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 43 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"

# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 50 "data/maps/SootopolisCity_Mart/scripts.pory"

# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman::
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 57 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 59 "data/maps/SootopolisCity_Mart/scripts.pory"

# 60 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 61 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 62 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 63 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"

# 65 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_PPUpIsGreat:
# 66 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "AP-Plus ist sehr nützlich!\p"
# 67 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Es steigert die Angriffspunkte, die AP,\n"
# 68 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "einer Pokémon-Attacke.$"
# 69 "data/maps/SootopolisCity_Mart/scripts.pory"

# 70 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_TooScaryOutside:
# 71 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Was…\n"
# 72 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Was ist passiert?\p"
# 73 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Das würde ich zu gerne wissen, aber ich\n"
# 74 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "trau mich nicht nach draußen.$"
# 75 "data/maps/SootopolisCity_Mart/scripts.pory"

# 76 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
# 77 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Kennst du Top-Genesung?\p"
# 78 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Alle KP werden aufgefüllt! Alle\n"
# 79 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Statusprobleme werden aufgehoben!\p"
# 80 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Ein wundervolles Item!$"
# 81 "data/maps/SootopolisCity_Mart/scripts.pory"

# 82 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_DidSomethingAwaken:
# 83 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Dieses Wetter…\n"
# 84 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Wurde etwas aufgeweckt?$"
