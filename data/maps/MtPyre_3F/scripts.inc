# 1 "data/maps/MtPyre_3F/scripts.pory"

# 2 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_MapScripts::
# 3 "data/maps/MtPyre_3F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_3F/scripts.pory"

# 5 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_William::
# 6 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
# 7 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MtPyre_3F/scripts.pory"
	end
# 9 "data/maps/MtPyre_3F/scripts.pory"

# 10 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Kayla::
# 11 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 12 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MtPyre_3F/scripts.pory"
	end
# 14 "data/maps/MtPyre_3F/scripts.pory"

# 15 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle::
# 16 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
# 17 "data/maps/MtPyre_3F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/MtPyre_3F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
# 19 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
# 20 "data/maps/MtPyre_3F/scripts.pory"
	release
# 21 "data/maps/MtPyre_3F/scripts.pory"
	end
# 22 "data/maps/MtPyre_3F/scripts.pory"

# 23 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RegisterGabrielle::
# 24 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 25 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 27 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_1
# 28 "data/maps/MtPyre_3F/scripts.pory"
	release
# 29 "data/maps/MtPyre_3F/scripts.pory"
	end
# 30 "data/maps/MtPyre_3F/scripts.pory"

# 31 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RematchGabrielle::
# 32 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 33 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
# 34 "data/maps/MtPyre_3F/scripts.pory"
	end
# 35 "data/maps/MtPyre_3F/scripts.pory"

# 36 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamIntro:
# 37 "data/maps/MtPyre_3F/scripts.pory"
	.string "Die unglaubliche Atmosphäre der Berge\n"
# 38 "data/maps/MtPyre_3F/scripts.pory"
	.string "hat meine psychischen Kräfte gestärkt!\p"
# 39 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ein kleines Kind wie du…\n"
# 40 "data/maps/MtPyre_3F/scripts.pory"
	.string "Du willst gewinnen? Träum weiter!$"
# 41 "data/maps/MtPyre_3F/scripts.pory"

# 42 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamDefeat:
# 43 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ich ertrinke in Selbstmitleid.$"
# 44 "data/maps/MtPyre_3F/scripts.pory"

# 45 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamPostBattle:
# 46 "data/maps/MtPyre_3F/scripts.pory"
	.string "Meine psychischen Kräfte sind mit\n"
# 47 "data/maps/MtPyre_3F/scripts.pory"
	.string "Sicherheit stärker geworden, aber…$"
# 48 "data/maps/MtPyre_3F/scripts.pory"

# 49 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaIntro:
# 50 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ahahahaha!\p"
# 51 "data/maps/MtPyre_3F/scripts.pory"
	.string "Dies ist kein Platz für kleine Kinder\n"
# 52 "data/maps/MtPyre_3F/scripts.pory"
	.string "wie dich!$"
# 53 "data/maps/MtPyre_3F/scripts.pory"

# 54 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaDefeat:
# 55 "data/maps/MtPyre_3F/scripts.pory"
	.string "Oh, ich habe kleinlaut verloren.$"
# 56 "data/maps/MtPyre_3F/scripts.pory"

# 57 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaPostBattle:
# 58 "data/maps/MtPyre_3F/scripts.pory"
	.string "Mein Training reicht also nicht aus…\p"
# 59 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ich muss mein Training auf die Spitze\n"
# 60 "data/maps/MtPyre_3F/scripts.pory"
	.string "treiben…\p"
# 61 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ich darf keine Zeit verlieren!$"
# 62 "data/maps/MtPyre_3F/scripts.pory"

# 63 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleIntro:
# 64 "data/maps/MtPyre_3F/scripts.pory"
	.string "Warum bist du hier?$"
# 65 "data/maps/MtPyre_3F/scripts.pory"

# 66 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleDefeat:
# 67 "data/maps/MtPyre_3F/scripts.pory"
	.string "Das war unglaublich!\n"
# 68 "data/maps/MtPyre_3F/scripts.pory"
	.string "Du bist ein ganz besonderer Trainer!$"
# 69 "data/maps/MtPyre_3F/scripts.pory"

# 70 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostBattle:
# 71 "data/maps/MtPyre_3F/scripts.pory"
	.string "Pokémon werden bald nichts Besonderes\n"
# 72 "data/maps/MtPyre_3F/scripts.pory"
	.string "mehr sein.\p"
# 73 "data/maps/MtPyre_3F/scripts.pory"
	.string "Die, die du bei dir hast und die, die dir\n"
# 74 "data/maps/MtPyre_3F/scripts.pory"
	.string "in der Zukunft begegnen werden…\p"
# 75 "data/maps/MtPyre_3F/scripts.pory"
	.string "Sie sollen alle gleich geliebt werden.\n"
# 76 "data/maps/MtPyre_3F/scripts.pory"
	.string "Vergiss das nicht.$"
# 77 "data/maps/MtPyre_3F/scripts.pory"

# 78 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRegister:
# 79 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ich würde mir gerne deine Pokémon\n"
# 80 "data/maps/MtPyre_3F/scripts.pory"
	.string "anschauen, wenn sie stärker geworden\l"
# 81 "data/maps/MtPyre_3F/scripts.pory"
	.string "sind…\p"
# 82 "data/maps/MtPyre_3F/scripts.pory"
	.string "Bitte, zeig sie mir dann unbedingt!$"
# 83 "data/maps/MtPyre_3F/scripts.pory"

# 84 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchIntro:
# 85 "data/maps/MtPyre_3F/scripts.pory"
	.string "Oh, du bist es…\p"
# 86 "data/maps/MtPyre_3F/scripts.pory"
	.string "Willst du mir zeigen, wie sehr deine\n"
# 87 "data/maps/MtPyre_3F/scripts.pory"
	.string "Pokémon gewachsen und wie stark sie\l"
# 88 "data/maps/MtPyre_3F/scripts.pory"
	.string "geworden sind?$"
# 89 "data/maps/MtPyre_3F/scripts.pory"

# 90 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchDefeat:
# 91 "data/maps/MtPyre_3F/scripts.pory"
	.string "Unglaublich!\n"
# 92 "data/maps/MtPyre_3F/scripts.pory"
	.string "Du bist etwas ganz Besonderes.$"
# 93 "data/maps/MtPyre_3F/scripts.pory"

# 94 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostRematch:
# 95 "data/maps/MtPyre_3F/scripts.pory"
	.string "Pokémon werden bald nichts Besonderes\n"
# 96 "data/maps/MtPyre_3F/scripts.pory"
	.string "mehr sein.\p"
# 97 "data/maps/MtPyre_3F/scripts.pory"
	.string "Die, die du bei dir hast und die, die dir\n"
# 98 "data/maps/MtPyre_3F/scripts.pory"
	.string "in der Zukunft begegnen werden…\p"
# 99 "data/maps/MtPyre_3F/scripts.pory"
	.string "Sie sollen alle gleich geliebt werden.\n"
# 100 "data/maps/MtPyre_3F/scripts.pory"
	.string "Du hast es also nicht vergessen.$"
