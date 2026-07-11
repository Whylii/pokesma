# 1 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 2 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_MapScripts::
# 3 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter::
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lockall
# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 13 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 14 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 16 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_DELETER
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitstate
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 22 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 28 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
# 34 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
# 35 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsLastMonThatKnowsSurf
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 42 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 58 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
# 60 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 61 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 62 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 63 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 66 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
# 68 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 70 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
# 71 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Äh…\n"
# 72 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Oh, ja. Ich bin der Attacken-Verlerner.\p"
# 73 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Ich sorge dafür, dass die Pokémon ihre\n"
# 74 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Attacken vergessen.\p"
# 75 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Möchtest du, dass ich dir helfe?$"
# 76 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 77 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget:
# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Welches Pokémon soll eine Attacke\n"
# 79 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "vergessen?$"
# 80 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 81 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Welche Attacke soll vergessen werden?$"
# 83 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 84 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
# 85 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} kennt scheinbar nur eine\n"
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "einzige Attacke…$"
# 87 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 88 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
# 89 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_2} von {STR_VAR_1}?\n"
# 90 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Diese Attacke soll vergessen werden?$"
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 92 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove:
# 93 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Das klappte doch perfekt!\p"
# 94 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} hat {STR_VAR_2}\n"
# 95 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "komplett vergessen.$"
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 97 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_ComeAgain:
# 98 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Komm wieder, wenn es andere Attacken\n"
# 99 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "gibt, die vergessen werden sollen.$"
# 100 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 101 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves:
# 102 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Was?\n"
# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Ein Ei kennt doch keine Attacken!$"
# 104 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"

# 105 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf:
# 106 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm!\p"
# 107 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Dein {STR_VAR_1} möchte Surfer nicht\n"
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "vergessen.$"
