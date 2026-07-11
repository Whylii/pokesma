# 1 "data/maps/VictoryRoad_B2F/scripts.pory"

# 2 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_MapScripts::
# 3 "data/maps/VictoryRoad_B2F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B2F/scripts.pory"

# 5 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Vito::
# 6 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
# 7 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 9 "data/maps/VictoryRoad_B2F/scripts.pory"

# 10 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Owen::
# 11 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
# 12 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_B2F/scripts.pory"

# 15 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Caroline::
# 16 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
# 17 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 19 "data/maps/VictoryRoad_B2F/scripts.pory"

# 20 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Julie::
# 21 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
# 22 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 24 "data/maps/VictoryRoad_B2F/scripts.pory"

# 25 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Felix::
# 26 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
# 27 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 29 "data/maps/VictoryRoad_B2F/scripts.pory"

# 30 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Dianne::
# 31 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
# 32 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 34 "data/maps/VictoryRoad_B2F/scripts.pory"

# 35 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoIntro:
# 36 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich habe mit meiner Familie trainiert,\n"
# 37 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "mit jedem einzelnen Mitglied!\l"
# 38 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich verliere gegen niemanden!$"
# 39 "data/maps/VictoryRoad_B2F/scripts.pory"

# 40 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoDefeat:
# 41 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Besser als meine Familie?\n"
# 42 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ist das möglich?$"
# 43 "data/maps/VictoryRoad_B2F/scripts.pory"

# 44 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoPostBattle:
# 45 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich war besser als jeder andere aus\n"
# 46 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "meiner Familie. Ich habe nie verloren!\p"
# 47 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich habe mein Selbstvertrauen ver-\n"
# 48 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "loren. Ich gehe nach Hause…$"
# 49 "data/maps/VictoryRoad_B2F/scripts.pory"

# 50 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenIntro:
# 51 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich habe gehört, dass sich hier ein sehr\n"
# 52 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "starkes Kind herumtreibt. Bist du das?$"
# 53 "data/maps/VictoryRoad_B2F/scripts.pory"

# 54 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenDefeat:
# 55 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Diese kleine Kröte ist echt stark!$"
# 56 "data/maps/VictoryRoad_B2F/scripts.pory"

# 57 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenPostBattle:
# 58 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Das Gerücht sagt, das Kind käme aus\n"
# 59 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Blütenburg City.$"
# 60 "data/maps/VictoryRoad_B2F/scripts.pory"

# 61 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineIntro:
# 62 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Du musst doch langsam mal müde werden.$"
# 63 "data/maps/VictoryRoad_B2F/scripts.pory"

# 64 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineDefeat:
# 65 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Keine Anzeichen von Müdigkeit…$"
# 66 "data/maps/VictoryRoad_B2F/scripts.pory"

# 67 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolinePostBattle:
# 68 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Die Siegesstraße und die Pokémon\n"
# 69 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Liga sind große und langwierige Heraus-\l"
# 70 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "forderungen. Werde bloß nicht müde!$"
# 71 "data/maps/VictoryRoad_B2F/scripts.pory"

# 72 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieIntro:
# 73 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Du solltest nicht selbstzufrieden\n"
# 74 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "werden, nur weil du viele Orden der\l"
# 75 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Arenen besitzt.\p"
# 76 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Es wird immer jemanden geben, der\n"
# 77 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "besser ist als du!$"
# 78 "data/maps/VictoryRoad_B2F/scripts.pory"

# 79 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieDefeat:
# 80 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Du bist besser als ich!$"
# 81 "data/maps/VictoryRoad_B2F/scripts.pory"

# 82 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JuliePostBattle:
# 83 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Schau dir deine Orden an - erinnere dich\n"
# 84 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "an die Trainer, die du getroffen hast.$"
# 85 "data/maps/VictoryRoad_B2F/scripts.pory"

# 86 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixIntro:
# 87 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich bin weit gekommen, aber die\n"
# 88 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Anspannung verursacht mir\l"
# 89 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Magenschmerzen…$"
# 90 "data/maps/VictoryRoad_B2F/scripts.pory"

# 91 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixDefeat:
# 92 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ooh…\n"
# 93 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Es tut weh…$"
# 94 "data/maps/VictoryRoad_B2F/scripts.pory"

# 95 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixPostBattle:
# 96 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich kann nicht anders. Hier in der Nähe\n"
# 97 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "der Pokémon Liga bin ich total nervös\l"
# 98 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "und angespannt.\p"
# 99 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ich tue so, als sei ich die Ruhe selbst.$"
# 100 "data/maps/VictoryRoad_B2F/scripts.pory"

# 101 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneIntro:
# 102 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Die Elite der Elite versammelt sich in\n"
# 103 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "dieser Höhle.\p"
# 104 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Wie findest du das?$"
# 105 "data/maps/VictoryRoad_B2F/scripts.pory"

# 106 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneDefeat:
# 107 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Nicht ein bisschen erschüttert.$"
# 108 "data/maps/VictoryRoad_B2F/scripts.pory"

# 109 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DiannePostBattle:
# 110 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Du hast echt Nerven! Das mag ich!\n"
# 111 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Mach weiter so!$"
