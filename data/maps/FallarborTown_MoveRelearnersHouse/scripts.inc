# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES @ Specifically supposed to teach level up moves
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special Special_HasMoveToRelearn
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Ich bin der Attacken-Helfer.\p"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Ich kenne alle Attacken, die ein\n"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pokémon lernen kann - und ich kann sie\l"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "ihnen beibringen.\p"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Ich kann auch deinen Pokémon neue\n"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Attacken beibringen, wenn du magst.\p"
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Als Gegenleistung hätte ich gerne eine\n"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Herzschuppe. Die sammle ich nämlich.$"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! Das ist es! Das ist ehrlich und\n"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "wahrhaftig eine Herzschuppe!\p"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Lass mich raten… Ich soll einem Pokémon\n"
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "eine neue Attacke beibringen?!?$"
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Welches Pokémon soll lernen?$"
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Welche Attacke soll ich es lehren?$"
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Tut mir Leid…\p"
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Scheinbar gibt es keine Attacke, die ich\n"
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "diesem Pokémon beibringen kann.$"
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} tauscht eine Herzschuppe ein.$"
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Falls deine Pokémon neue Attacken\n"
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "lernen sollen, komm mit einer\l"
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Herzschuppe wieder.$"
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Bitte? Ich kann einem Ei nicht eine\n"
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "einzige Attacke beibringen!$"
