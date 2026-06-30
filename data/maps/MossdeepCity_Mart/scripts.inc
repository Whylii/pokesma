# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemartlistend
# 36 "data/maps/MossdeepCity_Mart/scripts.pory"

# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_Mart/scripts.pory"

# 41 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"

# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"

# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic:
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Beleber ist einfach fantastisch!\p"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Gib es einem besiegten Pokémon und\n"
# 52 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "es ist wieder fit.\p"
# 53 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Aber Vorsicht! Beleber füllt nicht die\n"
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "verbrauchten AP neu auf!$"
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"

# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest:
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Top-Schutz hält alle schwachen\n"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Pokémon auf Distanz.\p"
# 59 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Von allen Schutz-Sprays hält dieses am\n"
# 60 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "längsten an.$"
# 61 "data/maps/MossdeepCity_Mart/scripts.pory"

# 62 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare:
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Der Netz- und der Tauchball sind\n"
# 64 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "seltene Pokébällee, die in\l"
# 65 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Moosbach City hergestellt werden.\p"
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Ein Netzball ist höchst wirkungsvoll\n"
# 67 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "bei Käfer- und Wasser-Pokémon.\p"
# 68 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Der Tauchball ist wirkungsvoll bei\n"
# 69 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Pokémon, die in der Tiefsee leben.$"
