# 1 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 9 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
# 22 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 25 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
# 26 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
# 29 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Du kannst dich nicht Trainer nennen,\n"
# 30 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "wenn du nicht an deine Pokémon glaubst!\p"
# 31 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Nur diejenigen, die an ihre Pokémon\n"
# 32 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "glauben, werden am Ende siegen.$"
# 33 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
# 35 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Der Grund, warum jeder Wiesenflur\n"
# 36 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "besucht…\p"
# 37 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "ist das Kampfcamp. Das liegt auf der\n"
# 38 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Hand.\p"
# 39 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "Oder bist du aus einem anderen Grund\n"
# 40 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "hier?$"
