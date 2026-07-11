# 1 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_Trader::
# 6 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_TradeCompleted
# 9 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	ingame_trade INGAME_TRADE_MEOWTH, BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, BattleFrontier_Lounge6_EventScript_DeclineTrade, BattleFrontier_Lounge6_EventScript_NotRequestedMon, BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt
# 10 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
# 11 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 12 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 13 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 14 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_DeclineTrade::
# 15 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
# 16 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 17 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 18 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 19 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_NotRequestedMon::
# 20 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
# 22 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 23 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 25 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_EventScript_TradeCompleted::
# 26 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
# 27 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
# 28 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 30 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_WouldYouLikeToTrade:
# 31 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Mein Pokémon ist ein {STR_VAR_2}.\n"
# 32 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Kennst du das?\l"
# 33 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Es ist sehr süß und hübsch.\p"
# 34 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Diesen kleinen Schatz könnte ich ohne\n"
# 35 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Bedenken tauschen.\p"
# 36 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Möchtest du mein {STR_VAR_2} haben?\n"
# 37 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Dann gib mir ein {STR_VAR_1}.$"
# 38 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 39 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt:
# 40 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, das ist einfach meganiedlich.\n"
# 41 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Vielen Dank! Ich verspreche, es\l"
# 42 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "wird es gut bei mir haben!\p"
# 43 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh! Und ich hoffe, du bist auch gut\n"
# 44 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "zu meinem {STR_VAR_2}!$"
# 45 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 46 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon:
# 47 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, tut mir Leid!\n"
# 48 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Ich tausche nur, wenn ich dafür ein\l"
# 49 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "{STR_VAR_1} bekomme!$"
# 50 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 51 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_WellThatsFineToo:
# 52 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, du magst nicht tauschen?\n"
# 53 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Nun, das ist auch in Ordnung.\l"
# 54 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Komm doch bald mal wieder vorbei.$"
# 55 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 56 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined:
# 57 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Kicher!\n"
# 58 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Ein Eneco ist viel niedlicher, als ich\l"
# 59 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "gedacht habe. Ich bin total glücklich!$"
