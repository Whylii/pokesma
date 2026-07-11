# 1 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas::
# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchNicolas
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 11 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 12 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 13 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterNicolas::
# 14 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_NICOLAS_1
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 20 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 21 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchNicolas::
# 22 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
# 23 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 26 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John::
# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJohn
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn::
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn::
# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay::
# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJay
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay::
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay::
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro:
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Hier trainieren wir Drachen-Trainer…\p"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Auch der Champ kommt manchmal vorbei.\n"
# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Verstehst du nun, dass dies ein\l"
# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "besonderer Ort ist?$"
# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat:
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Argh!\n"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Ich hätte nicht gedacht, dass du so\l"
# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "stark bist!$"
# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle:
# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Der Weg vor mir ist lang und\n"
# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "beschwerlich.\p"
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wann werden meine Pokémon und ich\n"
# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "zu den Besten gehören?$"
# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister:
# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Von dir möchte ich noch mehr erfahren.\n"
# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Ich trage dich in meinen Pokénav ein.$"
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro:
# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Seit wir uns das letzte Mal gesehen\n"
# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "haben, haben wir hart trainiert ver-\l"
# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "glichen mit unserem ersten Kampf.\p"
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Hilf uns, herauszufinden, wie stark wir\n"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "wirklich sind.$"
# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Argh!\n"
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wie kannst du nur so stark sein?$"
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch:
# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Du hast offenbar fleißig trainiert.\p"
# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Solange du stärker wirst, kann auch\n"
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "ich stärker werden.$"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro:
# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: Wir haben immer in trauter Zwei-\n"
# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "samkeit mit unseren Pokémon gegen\l"
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "andere gekämpft. Wir werden siegen!$"
# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat:
# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: O weh.\n"
# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wir haben verloren, Liebste.$"
# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle:
# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: Wir sind seit 50 Jahren glücklich\n"
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "verheiratet.\p"
# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Und denk mal, ich habe es noch nie ge-\n"
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "schafft, meine Frau zu besiegen.$"
# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: Nun, was für ein junger Trainer!\p"
# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Möchtest du mit uns kämpfen? Wenn ja,\n"
# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "dann musst du dir noch mehr Pokémon\l"
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "besorgen.$"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister:
# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: Junger Trainer! Wenn du die Chance\n"
# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "hast, wirst du wieder gegen uns\l"
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "antreten?$"
# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro:
# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: Wir sind seit 50 Jahren glücklich\n"
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "verheiratet.\p"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Das Band, das uns verbindet, kann\n"
# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "niemand durchtrennen.$"
# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat:
# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: O weh.\n"
# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wir haben verloren, mein Lieber.$"
# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle:
# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: 50 Jahre verheiratet…\p"
# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Immer wenn wir uneinig sind, ent-\n"
# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "scheiden wir es mit einem Pokémon-\l"
# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Kampf.$"
# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons:
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: Hmm… Bist du nicht ein bisschen zu\n"
# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "jung für einen Trainer?\p"
# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Möchtest du mit uns kämpfen? Dann\n"
# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "musst du dir noch mehr Pokémon\l"
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "besorgen.$"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro:
# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: Wir haben immer in trauter Zwei-\n"
# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "samkeit mit unseren Pokémon gegen\l"
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "andere gekämpft. Wir werden siegen!$"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat:
# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: O weh.\n"
# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wir haben verloren, Liebste.$"
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch:
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: 50 Jahre verheiratet…\p"
# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Rückblickend kann man sagen: Meine\n"
# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Frau und ich haben Tag für Tag\l"
# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "miteinander gekämpft…$"
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urs: Nun, was für ein junger Trainer!\p"
# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Möchtest du mit uns kämpfen? Wenn ja,\n"
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "dann musst du dir noch mehr Pokémon\l"
# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "besorgen.$"
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro:
# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: Wir sind seit 50 Jahren\n"
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "verheiratet.\p"
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wir haben uns immer gegenseitig unter-\n"
# 175 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "stützt. Das hat uns stark gemacht.$"
# 176 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 177 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat:
# 178 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: O weh.\n"
# 179 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Wir haben verloren, mein Lieber.$"
# 180 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 181 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch:
# 182 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: 50 Jahre verheiratet…\n"
# 183 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Vieles ist in dieser Zeit passiert.\p"
# 184 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Ich hoffe, wir werden noch lange unsere\n"
# 185 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Erinnerungen miteinander teilen\l"
# 186 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "können.$"
# 187 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 188 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
# 189 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Evi: Hmm… Bist du nicht ein bisschen zu\n"
# 190 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "jung für einen Trainer?\p"
# 191 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Möchtest du gegen uns kämpfen? Dann\n"
# 192 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "musst du dir noch mehr Pokémon\l"
# 193 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "besorgen.$"
