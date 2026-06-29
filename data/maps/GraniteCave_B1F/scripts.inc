GraniteCave_B1F_EventScript_PkmnSign::
# 2 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_Text_PkmnSignCave, MSGBOX_SIGN
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	showmonpic SPECIES_ZUBAT, 10, 3
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	playmoncry SPECIES_ZUBAT, 0
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	hidemonpic
# 7 "data/maps/GraniteCave_B1F/scripts.pory"
	showmonpic SPECIES_ARON, 10, 3
# 8 "data/maps/GraniteCave_B1F/scripts.pory"
	playmoncry SPECIES_ARON, 0
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	hidemonpic
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	showmonpic SPECIES_ABRA, 10, 3
# 12 "data/maps/GraniteCave_B1F/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 13 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 14 "data/maps/GraniteCave_B1F/scripts.pory"
	hidemonpic
# 15 "data/maps/GraniteCave_B1F/scripts.pory"
	showmonpic SPECIES_MAKUHITA, 10, 3
# 16 "data/maps/GraniteCave_B1F/scripts.pory"
	playmoncry SPECIES_MAKUHITA, 0
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	hidemonpic
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	showmonpic SPECIES_SABLEYE, 10, 3
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	playmoncry SPECIES_SABLEYE, 0
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	delay 60
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	hidemonpic
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end


# 32 "data/maps/GraniteCave_B1F/scripts.pory"

# 33 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 35 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 38 "data/maps/GraniteCave_B1F/scripts.pory"

# 39 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 40 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 41 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 42 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_B1F_Text_PkmnSignCave::
# 27 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "auf dieser Ebene der Höhle:$"
