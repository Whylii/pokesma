# 1 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 9 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MOSSDEEP_NURSE
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Woman::
# 20 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
# 21 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_EventScript_Girl::
# 24 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
# 25 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable:
# 28 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Die Arenaleiter dieses Ortes sind ein\n"
# 29 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "ausgezeichnetes Team.\p"
# 30 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Die Kombination ihrer Attacken ist\n"
# 31 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "einfach exzellent und… wow!$"
# 32 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves:
# 34 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Abhängig von den speziellen\n"
# 35 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Fähigkeiten eines Pokémon, werden\p"
# 36 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "einige Attacken in ihrer Wirkung\n"
# 37 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "verändert oder sogar wirkungslos.$"
