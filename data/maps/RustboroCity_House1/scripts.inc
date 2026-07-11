# 1 "data/maps/RustboroCity_House1/scripts.pory"

# 2 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House1/scripts.pory"

# 5 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 6 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 11 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 13 "data/maps/RustboroCity_House1/scripts.pory"

# 14 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 15 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 18 "data/maps/RustboroCity_House1/scripts.pory"

# 19 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 24 "data/maps/RustboroCity_House1/scripts.pory"

# 25 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 26 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 29 "data/maps/RustboroCity_House1/scripts.pory"

# 30 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 33 "data/maps/RustboroCity_House1/scripts.pory"

# 34 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 35 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Wie? Mein Pokémon ist niedlich?\n"
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sicher, das weiß ich doch!\p"
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Aber ich weiß auch, dass ich es gerne\n"
# 38 "data/maps/RustboroCity_House1/scripts.pory"
	.string "mit dir tauschen würde.\p"
# 39 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Ich gebe dir mein {STR_VAR_2}, wenn du\n"
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	.string "mir ein {STR_VAR_1} gibst.\l"
# 41 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Einverstanden?$"
# 42 "data/maps/RustboroCity_House1/scripts.pory"

# 43 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 44 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 45 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sei nett zu meinem Pokémon.$"
# 46 "data/maps/RustboroCity_House1/scripts.pory"

# 47 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 48 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Wie? Das sieht für mich aber nicht wie\n"
# 49 "data/maps/RustboroCity_House1/scripts.pory"
	.string "ein {STR_VAR_1} aus!$"
# 50 "data/maps/RustboroCity_House1/scripts.pory"

# 51 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 52 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Du willst nicht tauschen? Kein Problem.\n"
# 53 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Aber mein Pokémon ist wirklich niedlich,\l"
# 54 "data/maps/RustboroCity_House1/scripts.pory"
	.string "das weißt du schon?!$"
# 55 "data/maps/RustboroCity_House1/scripts.pory"

# 56 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 57 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Jedes Pokémon ist niedlich, wenn es mit\n"
# 58 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Freundlichkeit und Fürsorge\l"
# 59 "data/maps/RustboroCity_House1/scripts.pory"
	.string "aufgezogen wird.$"
# 60 "data/maps/RustboroCity_House1/scripts.pory"

# 61 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	.string "An allen Orten gibt es alle Sorten von\n"
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Pokémon und Menschen.\p"
# 64 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Ich finde das faszinierend, daher\n"
# 65 "data/maps/RustboroCity_House1/scripts.pory"
	.string "besuche ich alle möglichen Orte.$"
