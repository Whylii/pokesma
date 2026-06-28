# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Ich denke, die Pokémon fühlen sich\n"
# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "ihrem Trainer mehr verbunden, wenn sie\l"
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "viel Zeit miteinander verbringen.\p"
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Je länger, desto besser.\n"
# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Das ist meine Meinung.$"
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Es grenzt an Magie, wie ein Bad in der\n"
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Heißen Quelle einen stärkt.\p"
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Ich wünschte, ich könnte meinen\n"
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Pokémon auch so ein Bad gönnen.$"
# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, Kindchen, du kannst von\n"
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "hier die Heißen Quellen erreichen.\p"
# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Wenn Pokémon ruhen, sollten sich\n"
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "ihre Trainer auch ausruhen.$"
