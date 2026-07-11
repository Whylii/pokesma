# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_RUSTBORO_NURSE
# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
# 33 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Mein Pokémon hat ein naives\n"
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Wesen und das meines Freundes ein\l"
# 35 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "fröhliches.\p"
# 36 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Es ist faszinierend, dass Pokémon\n"
# 37 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "unterschiedliche Persönlichkeiten\l"
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "haben.$"
# 39 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
# 41 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Es gibt männliche und weibliche\n"
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Pokémon.\p"
# 43 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Aber niemand kann sagen, worin der\n"
# 44 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "eigentliche Unterschied liegt.$"
# 45 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
# 47 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Der Mann nebenan hat mir eine VM\n"
# 48 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "gegeben!\p"
# 49 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Ich habe meinem Pokémon beigebracht,\n"
# 50 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "damit kleinere Bäume zu zerschneiden.$"
