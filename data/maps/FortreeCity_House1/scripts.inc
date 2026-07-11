# 1 "data/maps/FortreeCity_House1/scripts.pory"

# 2 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_MapScripts::
# 3 "data/maps/FortreeCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House1/scripts.pory"

# 5 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader::
# 6 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
# 9 "data/maps/FortreeCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_PLUSLE, FortreeCity_House1_Text_YouWillTradeWontYou, FortreeCity_House1_EventScript_DeclineTrade, FortreeCity_House1_EventScript_NotRequestedMon, FortreeCity_House1_Text_MonYouTakeCare
# 10 "data/maps/FortreeCity_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 11 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 12 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 13 "data/maps/FortreeCity_House1/scripts.pory"

# 14 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_DeclineTrade::
# 15 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 16 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 17 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 18 "data/maps/FortreeCity_House1/scripts.pory"

# 19 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_NotRequestedMon::
# 20 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 22 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 23 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 24 "data/maps/FortreeCity_House1/scripts.pory"

# 25 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_TradeCompleted::
# 26 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 28 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 29 "data/maps/FortreeCity_House1/scripts.pory"

# 30 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_ExpertF::
# 31 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 33 "data/maps/FortreeCity_House1/scripts.pory"

# 34 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Zigzagoon::
# 35 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 36 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 37 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 38 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 39 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 40 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 41 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 42 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 43 "data/maps/FortreeCity_House1/scripts.pory"

# 44 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWillTradeWontYou:
# 45 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wroooaaar! Ich muss das unbedingt\n"
# 46 "data/maps/FortreeCity_House1/scripts.pory"
	.string "haben! Ich muss {STR_VAR_1} haben!\l"
# 47 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Dafür würde ich alles tun!\p"
# 48 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Äh… Hast du ihn gehört?\n"
# 49 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Meinen Ruf aus tiefstem Herzen?\p"
# 50 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Nachdem du den gehört hast, tauschst\n"
# 51 "data/maps/FortreeCity_House1/scripts.pory"
	.string "du doch bestimmt dein {STR_VAR_1}\l"
# 52 "data/maps/FortreeCity_House1/scripts.pory"
	.string "gegen mein {STR_VAR_2}?!$"
# 53 "data/maps/FortreeCity_House1/scripts.pory"

# 54 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_MonYouTakeCare:
# 55 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, super! Dann mal los!\p"
# 56 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Willkommen, {STR_VAR_1}!\n"
# 57 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Pass auf dich auf, {STR_VAR_2}!$"
# 58 "data/maps/FortreeCity_House1/scripts.pory"

# 59 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_ThisIsntAMon:
# 60 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Äh, nee, so geht das nicht!\n"
# 61 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Das ist doch gar kein {STR_VAR_1}.$"
# 62 "data/maps/FortreeCity_House1/scripts.pory"

# 63 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWontTradeMe:
# 64 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Nein? Du willst nicht tauschen?\n"
# 65 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Obwohl ich dir mein Herz offenbart\l"
# 66 "data/maps/FortreeCity_House1/scripts.pory"
	.string "habe?$"
# 67 "data/maps/FortreeCity_House1/scripts.pory"

# 68 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
# 69 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Ich werde dafür sorgen, dass Volbeat\n"
# 70 "data/maps/FortreeCity_House1/scripts.pory"
	.string "super-megastark wird!\p"
# 71 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Ich hoffe, du sorgst dich genauso um\n"
# 72 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Plusle!$"
# 73 "data/maps/FortreeCity_House1/scripts.pory"

# 74 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_TradingMemoriesWithOthers:
# 75 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Mit anderen Pokémon tauschen…\p"
# 76 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Das ist, als ob du die Erinnerungen mit\n"
# 77 "data/maps/FortreeCity_House1/scripts.pory"
	.string "anderen Menschen teilst.$"
# 78 "data/maps/FortreeCity_House1/scripts.pory"

# 79 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_Zigzagoon:
# 80 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Zigzachs: Gumomoh?$"
