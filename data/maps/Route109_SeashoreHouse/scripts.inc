# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition:
# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner::
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP, 6
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
.else
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
.endif
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich bin der Besitzer des Strandhauses.\n"
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Du kannst Mr. Mare zu mir sagen.\p"
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Heißen Pokémon-Kämpfen zuzusehen,\n"
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "liebe ich über alles!\p"
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Zeig mir, wie heiß dein Herz lodert!\p"
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Wenn du alle Trainer besiegen kannst,\n"
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "werde ich dich belohnen!$"
# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Zeig mir heiße Kämpfe!\p"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Nur für diese habe ich das Strandhaus\n"
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "überhaupt geöffnet!$"
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Du bist brandheiß!\n"
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Die Kämpfe glühen geradezu!\l"
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich bin mehr als zufrieden!\p"
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Du hast deine Fertigkeiten bewiesen.\n"
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Zum Dank schenke ich dir etwas.\p"
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Es sind sechs Flaschen Sprudel!$"
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull:
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Aber dein Beutel ist ja gerammelt voll.\n"
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich werde sie für dich aufbewahren.$"
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop:
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Möchtest du etwas Sprudel kaufen?\n"
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Pokémon lieben ihn!\p"
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Nur ¥300 pro Flasche!\n"
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Kauf doch welchen!$"
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo:
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Hier, bitteschön!$"
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney:
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Du hast nicht genügend Geld.$"
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad:
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Nein?\n"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Das ist aber wirklich schade.$"
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro:
# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Wenn du Lust auf einen heißen Kampf\n"
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "auf hoher See hast, findest du keinen\l"
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "lodernderen Trainer als mich!$"
# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated:
# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Das war ein heißer Kampf!\n"
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich kann die Niederlage verkraften!$"
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle:
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Immer wenn ich in Graphitport City bin,\n"
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "genieße ich heiße Kämpfe und\l"
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "eisgekühlten Sprudel!$"
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro:
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Langweilige Kämpfe lohnen sich nicht.\p"
# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Feurig heiße Kämpfe aber stählen\n"
# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Trainer und Pokémon.$"
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated:
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Das war brandheiß!$"
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle:
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Puh, ich bin am Verdursten.\n"
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich sollte Sprudel trinken.$"
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro:
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich werde dir zeigen, wie toll meine\n"
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Pokémon sind. Aber heul bloß nicht los!$"
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated:
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Ich habe verloren. Aber ich weine nicht!$"
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle:
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Wenn doch nur eines meiner Pokémon\n"
# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "wüsste, wie es mich über das Wasser\l"
# 183 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "tragen kann. Dann wäre ich den\l"
# 184 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "ollen Schwimmreifen los.$"
