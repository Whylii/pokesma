# 1 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_OnTransition:
# 8 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 9 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FORTREE_NURSE
# 13 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 21 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Man::
# 24 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 25 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_EventScript_Boy::
# 28 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 29 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
# 32 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Na, Kindchen, arbeitest du an einem\n"
# 33 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Pokédex?\p"
# 34 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Ich an deiner Stelle würde mal\n"
# 35 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "die Safari-Zone auf der Route 121\l"
# 36 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "besuchen.$"
# 37 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 39 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hast du schon mal eine\n"
# 40 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Statistik getauscht?\p"
# 41 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Sehr nützliche Einrichtung! Die Erfolge\n"
# 42 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "eines jeden Trainers werden dort ge-\l"
# 43 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "speichert und miteinander verglichen.\p"
# 44 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Ich weiß zwar nicht, wie das passiert,\n"
# 45 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "aber es ist einfach irre. Und aufregend!$"
# 46 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"

# 47 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 48 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Hey, du hast einen Pokénav!\n"
# 49 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Ich habe auch so einen.\p"
# 50 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Kennst du schon das Trainer/Ruf-\n"
# 51 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "System des Pokénavs?\p"
# 52 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Wenn du das in Betrieb nimmst, kannst\n"
# 53 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "du jederzeit mit den registrierten\l"
# 54 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Trainern sprechen.\p"
# 55 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Außerdem kannst du sehen, welche\n"
# 56 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Trainer erneut gegen dich antreten\l"
# 57 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "möchten.\p"
# 58 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Ist das nicht einfach super?\n"
# 59 "data/maps/FortreeCity_PokemonCenter_1F/scripts.pory"
	.string "Das muss man Devon wirklich lassen!$"
