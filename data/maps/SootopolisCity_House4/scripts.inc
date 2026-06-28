# 1 "data/maps/SootopolisCity_House4/scripts.pory"

# 2 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_MapScripts::
# 3 "data/maps/SootopolisCity_House4/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House4/scripts.pory"

# 5 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_EventScript_Man::
# 6 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
# 7 "data/maps/SootopolisCity_House4/scripts.pory"
	end
# 8 "data/maps/SootopolisCity_House4/scripts.pory"

# 9 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_EventScript_Woman::
# 10 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
# 11 "data/maps/SootopolisCity_House4/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_House4/scripts.pory"

# 13 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_EventScript_Azumarill::
# 14 "data/maps/SootopolisCity_House4/scripts.pory"
	lock
# 15 "data/maps/SootopolisCity_House4/scripts.pory"
	faceplayer
# 16 "data/maps/SootopolisCity_House4/scripts.pory"
	waitse
# 17 "data/maps/SootopolisCity_House4/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 18 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_House4/scripts.pory"
	waitmoncry
# 20 "data/maps/SootopolisCity_House4/scripts.pory"
	release
# 21 "data/maps/SootopolisCity_House4/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House4/scripts.pory"

# 23 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_Text_AncientTreasuresWaitingInSea:
# 24 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Hör mir zu und ich verrate dir etwas.\p"
# 25 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Unter Wasser soll sich eine antike\n"
# 26 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Ruine befinden.\p"
# 27 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Da gibt es bestimmt Schätze, die nur\n"
# 28 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "darauf warten, gehoben zu werden.$"
# 29 "data/maps/SootopolisCity_House4/scripts.pory"

# 30 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_Text_StrollUnderwaterWithPokemon:
# 31 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Antike Schätze…\p"
# 32 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Wäre das schön, wenn es die tatsächlich\n"
# 33 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "gäbe. Aber auch ohne Schätze wäre eine\p"
# 34 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Reise unter Wasser zusammen mit\n"
# 35 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "meinen Pokémon herrlich.$"
# 36 "data/maps/SootopolisCity_House4/scripts.pory"

# 37 "data/maps/SootopolisCity_House4/scripts.pory"
SootopolisCity_House4_Text_Azumarill:
# 38 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Azumarill: Marurii.$"
