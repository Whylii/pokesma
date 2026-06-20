Route102_EventScript_PkmnSign::
# 2 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_PkmnSign_Text_0, MSGBOX_SIGN
# 4 "data/maps/Route102/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route102_EventScript_PkmnSign_Text_1, Route102_EventScript_PkmnSign_Text_2, Route102_EventScript_PkmnSign_Text_3
# 5 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq Route102_EventScript_PkmnSign_2
# 9 "data/maps/Route102/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/Route102/scripts.pory"
	case 0, Route102_EventScript_PkmnSign_5
# 38 "data/maps/Route102/scripts.pory"
	case 1, Route102_EventScript_PkmnSign_6
# 50 "data/maps/Route102/scripts.pory"
	case 2, Route102_EventScript_PkmnSign_7
	return

Route102_EventScript_PkmnSign_2:
# 6 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_PkmnSign_5:
# 11 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PkmnSignGras, MSGBOX_SIGN
# 12 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 13 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 14 "data/maps/Route102/scripts.pory"
	delay 60
# 15 "data/maps/Route102/scripts.pory"
	hidemonpic
# 16 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_WURMPLE, 10, 3
# 17 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_WURMPLE, 0
# 18 "data/maps/Route102/scripts.pory"
	delay 60
# 19 "data/maps/Route102/scripts.pory"
	hidemonpic
# 20 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON, 10, 3
# 21 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 22 "data/maps/Route102/scripts.pory"
	delay 60
# 23 "data/maps/Route102/scripts.pory"
	hidemonpic
# 24 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_LOTAD, 10, 3
# 25 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_LOTAD, 0
# 26 "data/maps/Route102/scripts.pory"
	delay 60
# 27 "data/maps/Route102/scripts.pory"
	hidemonpic
# 28 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_RALTS, 10, 3
# 29 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_RALTS, 0
# 30 "data/maps/Route102/scripts.pory"
	delay 60
# 31 "data/maps/Route102/scripts.pory"
	hidemonpic
# 32 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_SEEDOT, 10, 3
# 33 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_SEEDOT, 0
# 34 "data/maps/Route102/scripts.pory"
	delay 60
# 35 "data/maps/Route102/scripts.pory"
	hidemonpic
# 36 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_PkmnSign_6:
# 39 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PkmnSignWasser, MSGBOX_SIGN
# 40 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_MARILL, 10, 3
# 41 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_MARILL, 0
# 42 "data/maps/Route102/scripts.pory"
	delay 60
# 43 "data/maps/Route102/scripts.pory"
	hidemonpic
# 44 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_GOLDEEN, 10, 3
# 45 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_GOLDEEN, 0
# 46 "data/maps/Route102/scripts.pory"
	delay 60
# 47 "data/maps/Route102/scripts.pory"
	hidemonpic
# 48 "data/maps/Route102/scripts.pory"
	release
	end

Route102_EventScript_PkmnSign_7:
# 51 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PkmnSignAngel, MSGBOX_SIGN
# 52 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 53 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 54 "data/maps/Route102/scripts.pory"
	delay 60
# 55 "data/maps/Route102/scripts.pory"
	hidemonpic
# 56 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_GOLDEEN, 10, 3
# 57 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_GOLDEEN, 0
# 58 "data/maps/Route102/scripts.pory"
	delay 60
# 59 "data/maps/Route102/scripts.pory"
	hidemonpic
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PkmnSignAngel2, MSGBOX_SIGN
# 61 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 62 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 63 "data/maps/Route102/scripts.pory"
	delay 60
# 64 "data/maps/Route102/scripts.pory"
	hidemonpic
# 65 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_GOLDEEN, 10, 3
# 66 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_GOLDEEN, 0
# 67 "data/maps/Route102/scripts.pory"
	delay 60
# 68 "data/maps/Route102/scripts.pory"
	hidemonpic
# 69 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_CORPHISH, 10, 3
# 70 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_CORPHISH, 0
# 71 "data/maps/Route102/scripts.pory"
	delay 60
# 72 "data/maps/Route102/scripts.pory"
	hidemonpic
# 73 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_PkmnSignAngel3, MSGBOX_SIGN
# 74 "data/maps/Route102/scripts.pory"
	showmonpic SPECIES_CORPHISH, 10, 3
# 75 "data/maps/Route102/scripts.pory"
	playmoncry SPECIES_CORPHISH, 0
# 76 "data/maps/Route102/scripts.pory"
	delay 60
# 77 "data/maps/Route102/scripts.pory"
	hidemonpic
# 78 "data/maps/Route102/scripts.pory"
	release
	end


# 104 "data/maps/Route102/scripts.pory"

# 105 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 106 "data/maps/Route102/scripts.pory"
	.byte 0
# 107 "data/maps/Route102/scripts.pory"

# 108 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 109 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 110 "data/maps/Route102/scripts.pory"
	end
# 111 "data/maps/Route102/scripts.pory"

# 112 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 113 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 114 "data/maps/Route102/scripts.pory"
	end
# 115 "data/maps/Route102/scripts.pory"

# 116 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 117 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 118 "data/maps/Route102/scripts.pory"
	end
# 119 "data/maps/Route102/scripts.pory"

# 120 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 121 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 122 "data/maps/Route102/scripts.pory"
	end
# 123 "data/maps/Route102/scripts.pory"

# 124 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 125 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 126 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 127 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 128 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 129 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 130 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 131 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 132 "data/maps/Route102/scripts.pory"
	release
# 133 "data/maps/Route102/scripts.pory"
	end
# 134 "data/maps/Route102/scripts.pory"

# 135 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 136 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 137 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 139 "data/maps/Route102/scripts.pory"
	release
# 140 "data/maps/Route102/scripts.pory"
	end
# 141 "data/maps/Route102/scripts.pory"

# 142 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 143 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 144 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 145 "data/maps/Route102/scripts.pory"
	release
# 146 "data/maps/Route102/scripts.pory"
	end
# 147 "data/maps/Route102/scripts.pory"

# 148 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 149 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 150 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 151 "data/maps/Route102/scripts.pory"
	release
# 152 "data/maps/Route102/scripts.pory"
	end
# 153 "data/maps/Route102/scripts.pory"

# 154 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 155 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 156 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 157 "data/maps/Route102/scripts.pory"
	release
# 158 "data/maps/Route102/scripts.pory"
	end
# 159 "data/maps/Route102/scripts.pory"

# 160 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 161 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 162 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route102/scripts.pory"
	end
# 164 "data/maps/Route102/scripts.pory"

# 165 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 166 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 167 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 168 "data/maps/Route102/scripts.pory"
	end
# 169 "data/maps/Route102/scripts.pory"

# 170 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 171 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 172 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route102/scripts.pory"
	end
# 174 "data/maps/Route102/scripts.pory"

# 175 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 176 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 177 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route102/scripts.pory"
	end
# 179 "data/maps/Route102/scripts.pory"

# 180 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 181 "data/maps/Route102/scripts.pory"
	.string "Heiko: {PLAYER}…\n"
# 182 "data/maps/Route102/scripts.pory"
	.string "Pokémon verstecken sich in hohem Gras\l"
# 183 "data/maps/Route102/scripts.pory"
	.string "wie diesem hier, oder?\p"
# 184 "data/maps/Route102/scripts.pory"
	.string "Bitte bleib hier und schau, ob ich sie\n"
# 185 "data/maps/Route102/scripts.pory"
	.string "auch richtig fange.\p"
# 186 "data/maps/Route102/scripts.pory"
	.string "… Whoa!$"
# 187 "data/maps/Route102/scripts.pory"

# 188 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 189 "data/maps/Route102/scripts.pory"
	.string "Heiko: Ich habe es geschafft… Es\n"
# 190 "data/maps/Route102/scripts.pory"
	.string "gehört mir… Mein Pokémon!$"
# 191 "data/maps/Route102/scripts.pory"

# 192 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 193 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, vielen Dank!\n"
# 194 "data/maps/Route102/scripts.pory"
	.string "Lass uns zurück zur Arena gehen!$"
# 195 "data/maps/Route102/scripts.pory"

# 196 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 197 "data/maps/Route102/scripts.pory"
	.string "Ich… bin nicht groß, ich versinke im\n"
# 198 "data/maps/Route102/scripts.pory"
	.string "hohen Gras.\p"
# 199 "data/maps/Route102/scripts.pory"
	.string "Das Gras erreicht meine Nase und…\n"
# 200 "data/maps/Route102/scripts.pory"
	.string "Hahahaha…\p"
# 201 "data/maps/Route102/scripts.pory"
	.string "Haaatschiiii!$"
# 202 "data/maps/Route102/scripts.pory"

# 203 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 204 "data/maps/Route102/scripts.pory"
	.string "Ich werde jede Menge Pokémon fangen!$"
# 205 "data/maps/Route102/scripts.pory"

# 206 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 207 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 208 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} Rosaltstadt$"
# 209 "data/maps/Route102/scripts.pory"

# 210 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 211 "data/maps/Route102/scripts.pory"
	.string "Route 102\n"
# 212 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} Blütenburg City$"

Route102_EventScript_PkmnSign_Text_0:
# 2 "data/maps/Route102/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die auf dieser Route leben.$"

Route102_EventScript_PkmnSign_Text_1:
# 4 "data/maps/Route102/scripts.pory"
	.string "Hohes Gras$"

Route102_EventScript_PkmnSign_Text_2:
# 4 "data/maps/Route102/scripts.pory"
	.string "Wasser$"

Route102_EventScript_PkmnSign_Text_3:
# 4 "data/maps/Route102/scripts.pory"
	.string "Angel$"

Route102_Text_PkmnSignGras::
# 83 "data/maps/Route102/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im hohen Gras:$"

Route102_Text_PkmnSignWasser::
# 87 "data/maps/Route102/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route102_Text_PkmnSignAngel::
# 91 "data/maps/Route102/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route102_Text_PkmnSignAngel2::
# 95 "data/maps/Route102/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route102_Text_PkmnSignAngel3::
# 99 "data/maps/Route102/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
