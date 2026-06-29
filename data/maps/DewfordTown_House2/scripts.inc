# 1 "data/maps/DewfordTown_House2/scripts.pory"

# 2 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_MapScripts::
# 3 "data/maps/DewfordTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House2/scripts.pory"

# 5 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man::
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
# 12 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
# 13 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 14 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 15 "data/maps/DewfordTown_House2/scripts.pory"

# 16 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_NoRoomForScarf::
# 17 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 20 "data/maps/DewfordTown_House2/scripts.pory"

# 21 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_ExplainSilkScarf::
# 22 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 24 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 25 "data/maps/DewfordTown_House2/scripts.pory"

# 26 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Boy::
# 27 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
# 28 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 29 "data/maps/DewfordTown_House2/scripts.pory"

# 30 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_WantYouToHaveSilkScarf:
# 31 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wirf dein Auge mal hierauf!\p"
# 32 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Das ist ein Seidenschal. Das ist\n"
# 33 "data/maps/DewfordTown_House2/scripts.pory"
	.string "der letzte Schrei in der Mode. Yeah!\p"
# 34 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, deine Augen blitzen.\n"
# 35 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Du magst meinen Stil, nicht wahr?\p"
# 36 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Hihi, du machst mir eine Freude!\n"
# 37 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Hier, das möchte ich dir schenken!$"
# 38 "data/maps/DewfordTown_House2/scripts.pory"

# 39 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_NoRoom:
# 40 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Och, du hast ja gar keinen Platz mehr.\p"
# 41 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Nun, hör gut zu… Diesen Schal musst\n"
# 42 "data/maps/DewfordTown_House2/scripts.pory"
	.string "du einfach haben! Ich würde alle meine\l"
# 43 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Items verkaufen, um ihn zu bekommen!$"
# 44 "data/maps/DewfordTown_House2/scripts.pory"

# 45 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ExplainSilkScarf:
# 46 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Dieser Seidenschal steigert die Stärke\n"
# 47 "data/maps/DewfordTown_House2/scripts.pory"
	.string "der Normalen Attacken.\p"
# 48 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Dieser wunderbare Schal passt einfach\n"
# 49 "data/maps/DewfordTown_House2/scripts.pory"
	.string "zu fast allen Pokémon!$"
# 50 "data/maps/DewfordTown_House2/scripts.pory"

# 51 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_BrawlySoCool:
# 52 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wow, du hast die beschwerliche Reise\n"
# 53 "data/maps/DewfordTown_House2/scripts.pory"
	.string "über das Meer auf dich genommen, um\l"
# 54 "data/maps/DewfordTown_House2/scripts.pory"
	.string "nach Faustauhaven zu gelangen?\p"
# 55 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Bist du hier, weil du von Kamillo\n"
# 56 "data/maps/DewfordTown_House2/scripts.pory"
	.string "gehört hast?\p"
# 57 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Er ist sooo cool…\n"
# 58 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Er ist ein Idol für jeden!$"
