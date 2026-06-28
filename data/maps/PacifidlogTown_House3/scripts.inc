# 1 "data/maps/PacifidlogTown_House3/scripts.pory"

# 2 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 3 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House3/scripts.pory"

# 5 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Trader::
# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
# 9 "data/maps/PacifidlogTown_House3/scripts.pory"
	ingame_trade INGAME_TRADE_HORSEA, PacifidlogTown_House3_Text_WillingToTradeIt, PacifidlogTown_House3_EventScript_DeclineTrade, PacifidlogTown_House3_EventScript_NotRequestedMon, PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou
# 10 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 11 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"

# 14 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_DeclineTrade::
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 16 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown_House3/scripts.pory"

# 19 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_NotRequestedMon::
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown_House3/scripts.pory"

# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_TradeCompleted::
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 29 "data/maps/PacifidlogTown_House3/scripts.pory"

# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_EventScript_Girl::
# 31 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
# 32 "data/maps/PacifidlogTown_House3/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"

# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WillingToTradeIt:
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Schau dir dieses {STR_VAR_2} an!\p"
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Das {STR_VAR_2} habe ich gestern ge-\n"
# 37 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "fangen, um meinen Geburtstag zu feiern.\p"
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, ich sehe dir an der Nasenspitze an,\n"
# 39 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "dass du es gerne hättest! Aber es ist\p"
# 40 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "unbezahlbar! Ich bin aber bereit, es\n"
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "gegen ein {STR_VAR_1} zu tauschen.$"
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"

# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, das ist also ein {STR_VAR_1}?\p"
# 45 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Es sieht einem {STR_VAR_2} ähnlich und\n"
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "ist doch völlig anders.\p"
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Danke schön!$"
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"

# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Nein, nein, nein! Ich akzeptiere nur ein\n"
# 51 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "echtes {STR_VAR_1}!!!$"
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"

# 53 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_NotDesperateOrAnything:
# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, du willst also nicht mit mir\n"
# 55 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "tauschen?\p"
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Macht nichts. Ich bin gar nicht so wild\n"
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "auf einen Tausch!$"
# 58 "data/maps/PacifidlogTown_House3/scripts.pory"

# 59 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
# 60 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Ich weiß, ich könnte mir ja auch selbst\n"
# 61 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "eines suchen…\p"
# 62 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Aber ich hätte gerne ein Kindwurm, das\n"
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "von einem anderen Trainer\l"
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "gefangen wurde…$"
# 65 "data/maps/PacifidlogTown_House3/scripts.pory"

# 66 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_Text_IsThatAPokedex:
# 67 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Ist das ein Pokédex?\p"
# 68 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Hast du schon viele verschiedene\n"
# 69 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Pokémon getroffen?\p"
# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Ich wünschte, ich wäre wie du.$"
