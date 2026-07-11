# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Der PC dort in der Ecke ist für alle\n"
# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokémon-Trainer.\p"
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Das heißt, dass auch du ihn benutzen\n"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "darfst.$"
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokémon-Center sind eine großartige\n"
# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Einrichtung!\p"
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Du kannst ihren Service sooft du willst\n"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "in Anspruch nehmen - kostenlos! Daher\l"
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "kannst du unbeschwert umherreisen.$"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Der Pokémon Drahtlosklub im zweiten\n"
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Stock wurde erst kürzlich eröffnet.\p"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Und sie sind immer noch nicht ganz\n"
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "fertig mit dem Einrichten.$"
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Der Pokémon Drahtlosklub im zweiten\n"
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Stock wurde erst kürzlich eröffnet.\p"
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ich habe schon Pokémon getauscht!$"
