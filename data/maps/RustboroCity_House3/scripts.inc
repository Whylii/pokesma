# 1 "data/maps/RustboroCity_House3/scripts.pory"

# 2 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_MapScripts::
# 3 "data/maps/RustboroCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House3/scripts.pory"

# 5 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_OldMan::
# 6 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
# 7 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 8 "data/maps/RustboroCity_House3/scripts.pory"

# 9 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_OldWoman::
# 10 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
# 11 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 12 "data/maps/RustboroCity_House3/scripts.pory"

# 13 "data/maps/RustboroCity_House3/scripts.pory"
@ Misspelling on purpose, see nickname
# 14 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_Pekachu::
# 15 "data/maps/RustboroCity_House3/scripts.pory"
	lock
# 16 "data/maps/RustboroCity_House3/scripts.pory"
	faceplayer
# 17 "data/maps/RustboroCity_House3/scripts.pory"
	waitse
# 18 "data/maps/RustboroCity_House3/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 19 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_House3/scripts.pory"
	waitmoncry
# 21 "data/maps/RustboroCity_House3/scripts.pory"
	release
# 22 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 23 "data/maps/RustboroCity_House3/scripts.pory"

# 24 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_IGivePerfectlySuitedNicknames:
# 25 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Meinen eigenen Pokémon habe ich\n"
# 26 "data/maps/RustboroCity_House3/scripts.pory"
	.string "perfekt passende Kosenamen gegeben!\p"
# 27 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Das ist mein Ausdruck von… äh…\n"
# 28 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Originalität. Genau! Originalität!$"
# 29 "data/maps/RustboroCity_House3/scripts.pory"

# 30 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_NamingPikachuPekachu:
# 31 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Aber ein Pikachu einfach Pekachu zu\n"
# 32 "data/maps/RustboroCity_House3/scripts.pory"
	.string "nennen? Das haut einen nicht gerade\l"
# 33 "data/maps/RustboroCity_House3/scripts.pory"
	.string "vom Hocker.\p"
# 34 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Ich glaube ja auch, man sollte einen\n"
# 35 "data/maps/RustboroCity_House3/scripts.pory"
	.string "leicht verständlichen Kosenamen\l"
# 36 "data/maps/RustboroCity_House3/scripts.pory"
	.string "wählen, aber irgendwie…$"
# 37 "data/maps/RustboroCity_House3/scripts.pory"

# 38 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_Pekachu:
# 39 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Pekachu: Peka!$"
