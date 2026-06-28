# 1 "data/maps/SSTidalLowerDeck/scripts.pory"

# 2 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_MapScripts::
# 3 "data/maps/SSTidalLowerDeck/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalLowerDeck/scripts.pory"

# 5 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Phillip::
# 6 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
# 7 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 9 "data/maps/SSTidalLowerDeck/scripts.pory"

# 10 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_EventScript_Leonard::
# 11 "data/maps/SSTidalLowerDeck/scripts.pory"
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
# 12 "data/maps/SSTidalLowerDeck/scripts.pory"
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SSTidalLowerDeck/scripts.pory"
	end
# 14 "data/maps/SSTidalLowerDeck/scripts.pory"

# 15 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipIntro:
# 16 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Arrgh! Ich habe die Schnauze voll und\n"
# 17 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "bin hundemüde vom Putzen.\p"
# 18 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Ein Kampf ist jetzt genau das Richtige!$"
# 19 "data/maps/SSTidalLowerDeck/scripts.pory"

# 20 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipDefeat:
# 21 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Brüderchen, ich habe verloren!$"
# 22 "data/maps/SSTidalLowerDeck/scripts.pory"

# 23 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_PhillipPostBattle:
# 24 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Wir sind die Gebrüder Saubermann!\p"
# 25 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Der Ältere verteilt die Schmierseife\n"
# 26 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "und der Jüngere schrubbt das Deck!$"
# 27 "data/maps/SSTidalLowerDeck/scripts.pory"

# 28 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardIntro:
# 29 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Dies ist der untere Bereich des Schiffs.\n"
# 30 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Hier gibt es sehr viel Platz.\l"
# 31 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Genau richtig für einen Pokémon-Kampf.$"
# 32 "data/maps/SSTidalLowerDeck/scripts.pory"

# 33 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardDefeat:
# 34 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Oh, großer Bruder. Ich habe verloren.$"
# 35 "data/maps/SSTidalLowerDeck/scripts.pory"

# 36 "data/maps/SSTidalLowerDeck/scripts.pory"
SSTidalLowerDeck_Text_LeonardPostBattle:
# 37 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Wir sind die Gebrüder Saubermann!\p"
# 38 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "Der Ältere verteilt die Seife\n"
# 39 "data/maps/SSTidalLowerDeck/scripts.pory"
	.string "und der Jüngere schrubbt das Deck!$"
