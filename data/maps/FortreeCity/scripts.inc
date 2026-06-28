# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 5 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity/scripts.pory"

# 7 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 8 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 9 "data/maps/FortreeCity/scripts.pory"
	end
# 10 "data/maps/FortreeCity/scripts.pory"

# 11 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 12 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 13 "data/maps/FortreeCity/scripts.pory"
	end
# 14 "data/maps/FortreeCity/scripts.pory"

# 15 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 16 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 17 "data/maps/FortreeCity/scripts.pory"
	end
# 18 "data/maps/FortreeCity/scripts.pory"

# 19 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 20 "data/maps/FortreeCity/scripts.pory"
	lock
# 21 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 22 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 23 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 24 "data/maps/FortreeCity/scripts.pory"
	release
# 25 "data/maps/FortreeCity/scripts.pory"
	end
# 26 "data/maps/FortreeCity/scripts.pory"

# 27 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 28 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 29 "data/maps/FortreeCity/scripts.pory"
	release
# 30 "data/maps/FortreeCity/scripts.pory"
	end
# 31 "data/maps/FortreeCity/scripts.pory"

# 32 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 33 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 34 "data/maps/FortreeCity/scripts.pory"
	end
# 35 "data/maps/FortreeCity/scripts.pory"

# 36 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 37 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 38 "data/maps/FortreeCity/scripts.pory"
	end
# 39 "data/maps/FortreeCity/scripts.pory"

# 40 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 41 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 42 "data/maps/FortreeCity/scripts.pory"
	end
# 43 "data/maps/FortreeCity/scripts.pory"

# 44 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 45 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 46 "data/maps/FortreeCity/scripts.pory"
	end
# 47 "data/maps/FortreeCity/scripts.pory"

# 48 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 49 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 50 "data/maps/FortreeCity/scripts.pory"
	end
# 51 "data/maps/FortreeCity/scripts.pory"

# 52 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 53 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 54 "data/maps/FortreeCity/scripts.pory"
	end
# 55 "data/maps/FortreeCity/scripts.pory"

# 56 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 57 "data/maps/FortreeCity/scripts.pory"
	lock
# 58 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 59 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 60 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 61 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 62 "data/maps/FortreeCity/scripts.pory"
	release
# 63 "data/maps/FortreeCity/scripts.pory"
	end
# 64 "data/maps/FortreeCity/scripts.pory"

# 65 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 66 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 67 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 68 "data/maps/FortreeCity/scripts.pory"
	release
# 69 "data/maps/FortreeCity/scripts.pory"
	end
# 70 "data/maps/FortreeCity/scripts.pory"

# 71 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 72 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 73 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 74 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 75 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/FortreeCity/scripts.pory"
	waitse
# 77 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 78 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 79 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 80 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 81 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 83 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 84 "data/maps/FortreeCity/scripts.pory"
	release
# 85 "data/maps/FortreeCity/scripts.pory"
	end
# 86 "data/maps/FortreeCity/scripts.pory"

# 87 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 88 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 89 "data/maps/FortreeCity/scripts.pory"
	step_end
# 90 "data/maps/FortreeCity/scripts.pory"

# 91 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 92 "data/maps/FortreeCity/scripts.pory"
	.string "Niemand glaubt mir. Aber ich habe\n"
# 93 "data/maps/FortreeCity/scripts.pory"
	.string "wirklich ein riesiges Pokémon am\l"
# 94 "data/maps/FortreeCity/scripts.pory"
	.string "Himmel gesehen!\p"
# 95 "data/maps/FortreeCity/scripts.pory"
	.string "Als es Richtung Route 131 flog, schien\n"
# 96 "data/maps/FortreeCity/scripts.pory"
	.string "es sich zu winden.\p"
# 97 "data/maps/FortreeCity/scripts.pory"
	.string "Schnüffel…\n"
# 98 "data/maps/FortreeCity/scripts.pory"
	.string "Äh… Du, uh… riechst angesengt.\p"
# 99 "data/maps/FortreeCity/scripts.pory"
	.string "Warst du auf einem Vulkan oder so?$"
# 100 "data/maps/FortreeCity/scripts.pory"

# 101 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 102 "data/maps/FortreeCity/scripts.pory"
	.string "Ich wollte zur Pokémon Arena, aber\n"
# 103 "data/maps/FortreeCity/scripts.pory"
	.string "irgendetwas blockiert den Weg.\p"
# 104 "data/maps/FortreeCity/scripts.pory"
	.string "Und das, nachdem ich auf der Route 120\n"
# 105 "data/maps/FortreeCity/scripts.pory"
	.string "so fleißig trainiert habe…$"
# 106 "data/maps/FortreeCity/scripts.pory"

# 107 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 108 "data/maps/FortreeCity/scripts.pory"
	.string "Dieses Pokémon ist mein ganzer Stolz!\n"
# 109 "data/maps/FortreeCity/scripts.pory"
	.string "Diesmal werde ich Wibke besiegen!$"
# 110 "data/maps/FortreeCity/scripts.pory"

# 111 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 112 "data/maps/FortreeCity/scripts.pory"
	.string "Der Boden nimmt das Regenwasser auf,\n"
# 113 "data/maps/FortreeCity/scripts.pory"
	.string "die Bäume trinken es und wachsen…\p"
# 114 "data/maps/FortreeCity/scripts.pory"
	.string "Unser Baumhausen City existiert, weil\n"
# 115 "data/maps/FortreeCity/scripts.pory"
	.string "es genügend Wasser und Boden gibt.$"
# 116 "data/maps/FortreeCity/scripts.pory"

# 117 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 118 "data/maps/FortreeCity/scripts.pory"
	.string "Die Stadt besteht aus Häusern, die auf\n"
# 119 "data/maps/FortreeCity/scripts.pory"
	.string "Bäumen gebaut sind.\p"
# 120 "data/maps/FortreeCity/scripts.pory"
	.string "Aufgrund dieser Lebensweise ist jeder\n"
# 121 "data/maps/FortreeCity/scripts.pory"
	.string "hier gesund und munter.\p"
# 122 "data/maps/FortreeCity/scripts.pory"
	.string "Und auch ich fühle mich, als sei ich\n"
# 123 "data/maps/FortreeCity/scripts.pory"
	.string "30 Jahre jünger geworden.$"
# 124 "data/maps/FortreeCity/scripts.pory"

# 125 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 126 "data/maps/FortreeCity/scripts.pory"
	.string "Auf Bäumen zu leben, ist klasse.\p"
# 127 "data/maps/FortreeCity/scripts.pory"
	.string "Aber manchmal kommen Käfer-Pokémon\n"
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "durch die Fenster herein.\l"
# 129 "data/maps/FortreeCity/scripts.pory"
	.string "Das kann einen ganz schön erschrecken.$"
# 130 "data/maps/FortreeCity/scripts.pory"

# 131 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 132 "data/maps/FortreeCity/scripts.pory"
	.string "Manche Pokémon entwickeln sich, wenn\n"
# 133 "data/maps/FortreeCity/scripts.pory"
	.string "man sie tauscht. Das habe ich\l"
# 134 "data/maps/FortreeCity/scripts.pory"
	.string "jedenfalls gehört.$"
# 135 "data/maps/FortreeCity/scripts.pory"

# 136 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 137 "data/maps/FortreeCity/scripts.pory"
	.string "Etwas Unsichtbares blockiert den Weg.$"
# 138 "data/maps/FortreeCity/scripts.pory"

# 139 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 140 "data/maps/FortreeCity/scripts.pory"
	.string "Etwas Unsichtbares blockiert den Weg.\p"
# 141 "data/maps/FortreeCity/scripts.pory"
	.string "Willst du das Devon-Scope einsetzen?$"
# 142 "data/maps/FortreeCity/scripts.pory"

# 143 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 144 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} setzt das Devon-Scope ein.\p"
# 145 "data/maps/FortreeCity/scripts.pory"
	.string "Ein unsichtbares Pokémon ist sichtbar\n"
# 146 "data/maps/FortreeCity/scripts.pory"
	.string "geworden!\p"
# 147 "data/maps/FortreeCity/scripts.pory"
	.string "Das erschrockene Pokémon flieht!$"
# 148 "data/maps/FortreeCity/scripts.pory"

# 149 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 150 "data/maps/FortreeCity/scripts.pory"
	.string "Baumhausen City\n"
# 151 "data/maps/FortreeCity/scripts.pory"
	.string "“Die Stadt in den Baumkronen,\l"
# 152 "data/maps/FortreeCity/scripts.pory"
	.string "verbrüdert mit der Natur.”$"
# 153 "data/maps/FortreeCity/scripts.pory"

# 154 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 155 "data/maps/FortreeCity/scripts.pory"
	.string "Pokémon Arena von Baumhausen City\n"
# 156 "data/maps/FortreeCity/scripts.pory"
	.string "Leiterin: Wibke\p"
# 157 "data/maps/FortreeCity/scripts.pory"
	.string "“Die Vogel-Liebhaberin hebt ab zum\n"
# 158 "data/maps/FortreeCity/scripts.pory"
	.string "Flug in die Welt.”$"
