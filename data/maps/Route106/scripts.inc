Route106_EventScript_PkmnSign::
# 2 "data/maps/Route106/scripts.pory"
	msgbox Route106_EventScript_PkmnSign_Text_0, MSGBOX_DEFAULT
# 4 "data/maps/Route106/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route106_EventScript_PkmnSign_Text_1, Route106_EventScript_PkmnSign_Text_2
# 5 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq Route106_EventScript_PkmnSign_2
# 9 "data/maps/Route106/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/Route106/scripts.pory"
	case 0, Route106_EventScript_PkmnSign_5
# 26 "data/maps/Route106/scripts.pory"
	case 1, Route106_EventScript_PkmnSign_6
	return

Route106_EventScript_PkmnSign_2:
# 6 "data/maps/Route106/scripts.pory"
	release
	end

Route106_EventScript_PkmnSign_5:
# 11 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_PkmnSignWasser, MSGBOX_DEFAULT
# 12 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 13 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 14 "data/maps/Route106/scripts.pory"
	delay 60
# 15 "data/maps/Route106/scripts.pory"
	hidemonpic
# 16 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 17 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 18 "data/maps/Route106/scripts.pory"
	delay 60
# 19 "data/maps/Route106/scripts.pory"
	hidemonpic
# 20 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_PELIPPER, 10, 3
# 21 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_PELIPPER, 0
# 22 "data/maps/Route106/scripts.pory"
	delay 60
# 23 "data/maps/Route106/scripts.pory"
	hidemonpic
# 24 "data/maps/Route106/scripts.pory"
	release
	end

Route106_EventScript_PkmnSign_6:
# 27 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_PkmnSignAngel, MSGBOX_DEFAULT
# 28 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 29 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 30 "data/maps/Route106/scripts.pory"
	delay 60
# 31 "data/maps/Route106/scripts.pory"
	hidemonpic
# 32 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 33 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 34 "data/maps/Route106/scripts.pory"
	delay 60
# 35 "data/maps/Route106/scripts.pory"
	hidemonpic
# 36 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_PkmnSignAngel2, MSGBOX_DEFAULT
# 37 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 38 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 39 "data/maps/Route106/scripts.pory"
	delay 60
# 40 "data/maps/Route106/scripts.pory"
	hidemonpic
# 41 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 42 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 43 "data/maps/Route106/scripts.pory"
	delay 60
# 44 "data/maps/Route106/scripts.pory"
	hidemonpic
# 45 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 46 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 47 "data/maps/Route106/scripts.pory"
	delay 60
# 48 "data/maps/Route106/scripts.pory"
	hidemonpic
# 49 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_PkmnSignAngel3, MSGBOX_DEFAULT
# 50 "data/maps/Route106/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 51 "data/maps/Route106/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 52 "data/maps/Route106/scripts.pory"
	delay 60
# 53 "data/maps/Route106/scripts.pory"
	hidemonpic
# 54 "data/maps/Route106/scripts.pory"
	release
	end


# 76 "data/maps/Route106/scripts.pory"

# 77 "data/maps/Route106/scripts.pory"
Route106_MapScripts::
# 78 "data/maps/Route106/scripts.pory"
	.byte 0
# 79 "data/maps/Route106/scripts.pory"

# 80 "data/maps/Route106/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 81 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 82 "data/maps/Route106/scripts.pory"
	end
# 83 "data/maps/Route106/scripts.pory"

# 84 "data/maps/Route106/scripts.pory"
Route106_EventScript_Douglas::
# 85 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 86 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route106/scripts.pory"
	end
# 88 "data/maps/Route106/scripts.pory"

# 89 "data/maps/Route106/scripts.pory"
Route106_EventScript_Kyla::
# 90 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 91 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route106/scripts.pory"
	end
# 93 "data/maps/Route106/scripts.pory"

# 94 "data/maps/Route106/scripts.pory"
Route106_EventScript_Elliot::
# 95 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 96 "data/maps/Route106/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 97 "data/maps/Route106/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 98 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 99 "data/maps/Route106/scripts.pory"
	release
# 100 "data/maps/Route106/scripts.pory"
	end
# 101 "data/maps/Route106/scripts.pory"

# 102 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 103 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 104 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 106 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 107 "data/maps/Route106/scripts.pory"
	release
# 108 "data/maps/Route106/scripts.pory"
	end
# 109 "data/maps/Route106/scripts.pory"

# 110 "data/maps/Route106/scripts.pory"
Route106_EventScript_ElliotRematch::
# 111 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 112 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route106/scripts.pory"
	end
# 114 "data/maps/Route106/scripts.pory"

# 115 "data/maps/Route106/scripts.pory"
Route106_EventScript_Ned::
# 116 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 117 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route106/scripts.pory"
	end
# 119 "data/maps/Route106/scripts.pory"

# 120 "data/maps/Route106/scripts.pory"
Route106_Text_TrainerTips:
# 121 "data/maps/Route106/scripts.pory"
	.string "Tipps für Trainer\p"
# 122 "data/maps/Route106/scripts.pory"
	.string "Hinweis zum Fangen von Pokémon mit der\n"
# 123 "data/maps/Route106/scripts.pory"
	.string "Angel: Drücke A, wenn eines anbeißt.$"

Route106_EventScript_PkmnSign_Text_0:
# 2 "data/maps/Route106/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die auf dieser Route leben.$"

Route106_EventScript_PkmnSign_Text_1:
# 4 "data/maps/Route106/scripts.pory"
	.string "Wasser$"

Route106_EventScript_PkmnSign_Text_2:
# 4 "data/maps/Route106/scripts.pory"
	.string "Angel$"

Route106_Text_PkmnSignWasser::
# 59 "data/maps/Route106/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route106_Text_PkmnSignAngel::
# 63 "data/maps/Route106/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route106_Text_PkmnSignAngel2::
# 67 "data/maps/Route106/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route106_Text_PkmnSignAngel3::
# 71 "data/maps/Route106/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
