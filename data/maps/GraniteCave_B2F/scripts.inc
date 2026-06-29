GraniteCave_B2F_EventScript_PkmnSign::
# 2 "data/maps/GraniteCave_B2F/scripts.pory"
	msgbox GraniteCave_B2F_Text_PkmnSignCave, MSGBOX_SIGN
# 3 "data/maps/GraniteCave_B2F/scripts.pory"
	showmonpic SPECIES_ZUBAT, 10, 3
# 4 "data/maps/GraniteCave_B2F/scripts.pory"
	playmoncry SPECIES_ZUBAT, 0
# 5 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 60
# 6 "data/maps/GraniteCave_B2F/scripts.pory"
	hidemonpic
# 7 "data/maps/GraniteCave_B2F/scripts.pory"
	showmonpic SPECIES_ARON, 10, 3
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	playmoncry SPECIES_ARON, 0
# 9 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 60
# 10 "data/maps/GraniteCave_B2F/scripts.pory"
	hidemonpic
# 11 "data/maps/GraniteCave_B2F/scripts.pory"
	showmonpic SPECIES_ABRA, 10, 3
# 12 "data/maps/GraniteCave_B2F/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 13 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 60
# 14 "data/maps/GraniteCave_B2F/scripts.pory"
	hidemonpic
# 15 "data/maps/GraniteCave_B2F/scripts.pory"
	showmonpic SPECIES_SABLEYE, 10, 3
# 16 "data/maps/GraniteCave_B2F/scripts.pory"
	playmoncry SPECIES_SABLEYE, 0
# 17 "data/maps/GraniteCave_B2F/scripts.pory"
	delay 60
# 18 "data/maps/GraniteCave_B2F/scripts.pory"
	hidemonpic
# 19 "data/maps/GraniteCave_B2F/scripts.pory"
	release
	end


# 28 "data/maps/GraniteCave_B2F/scripts.pory"

# 29 "data/maps/GraniteCave_B2F/scripts.pory"
GraniteCave_B2F_MapScripts::
# 30 "data/maps/GraniteCave_B2F/scripts.pory"
	.byte 0

GraniteCave_B2F_Text_PkmnSignCave::
# 23 "data/maps/GraniteCave_B2F/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "auf dieser Ebene der Höhle:$"
