# 1 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomePreBattleRoom_OnFrame
# 4 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomePreBattleRoom_OnWarp
# 5 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_OnWarp:
# 8 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth
# 9 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.2byte 0
# 10 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth::
# 12 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_OnFrame:
# 17 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom
# 18 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom::
# 21 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_eq VAR_0x8006, 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle
# 22 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	delay 1
# 23 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 24 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 25 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnter
# 26 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 27 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	lockall
# 28 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound::
# 29 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage
# 30 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 31 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT  @ No case?
# 32 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 33 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord
# 34 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoice 16, 0, MULTI_TOURNEY_WITH_RECORD, TRUE
# 35 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
# 37 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
# 38 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
# 39 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle
# 40 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
# 41 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
# 42 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 43 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord::
# 45 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoice 16, 2, MULTI_TOURNEY_NO_RECORD, TRUE
# 46 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
# 48 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
# 49 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
# 50 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
# 51 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
# 52 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 53 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 54 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle::
# 55 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch
# 56 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 58 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 60 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_RecordBattle
# 61 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 62 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 63 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RecordBattle::
# 64 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 65 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 66 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 67 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge::
# 68 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 69 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case NO, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 71 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case YES, BattleFrontier_BattleDomePreBattleRoom_EventScript_PauseChallenge
# 72 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 73 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 74 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge::
# 75 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
# 76 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 77 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 78 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 80 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_RetireChallenge
# 81 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 82 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RetireChallenge::
# 84 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_RETIRED
# 85 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost
# 86 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 87 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_PauseChallenge::
# 88 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
# 89 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 90 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_save CHALLENGE_STATUS_PAUSED
# 91 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	playse SE_SAVE
# 92 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitse
# 93 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 94 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_reset
# 95 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	end
# 96 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo::
# 98 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer, MSGBOX_DEFAULT
# 99 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showopponentinfo
# 101 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 102 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 103 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 104 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree::
# 105 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage
# 106 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showtourneytree
# 108 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 109 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 110 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 111 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowRoundMessage::
# 112 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 113 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound1
# 115 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound2
# 116 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals
# 117 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInFinals
# 118 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 119 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 120 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound1::
# 121 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 123 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInRound2::
# 125 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2, MSGBOX_DEFAULT
# 126 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 127 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals::
# 129 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 131 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 132 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_TourneyInFinals::
# 133 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 135 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 136 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge::
# 137 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
# 138 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 139 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitbuttonpress
# 140 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 142 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 143 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_0x8005, DOME_BATTLE_PARTY_SIZE  @ 2 of the 3 party mons are selected for battle
# 144 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special ChoosePartyForBattleFrontier
# 145 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_resetsketch
# 146 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_set DOME_DATA_SELECTED_MONS
# 148 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_reduceparty
# 149 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_setopponent
# 150 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	closemessage
# 152 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleDomePreBattleRoom_Movement_AttendantMoveAside
# 153 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 154 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerWalkToDoor
# 155 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 156 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	opendoor 5, 1
# 157 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitdooranim
# 158 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnterDoor
# 159 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 160 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	closedoor 5, 1
# 161 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitdooranim
# 162 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 9, 5
# 163 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
# 164 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 165 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	end
# 166 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 167 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage::
# 168 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 169 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound1
# 171 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound2
# 172 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals
# 173 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals
# 174 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 175 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 176 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound1::
# 177 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
# 178 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 179 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 180 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForRound2::
# 181 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
# 182 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 183 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals::
# 185 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
# 186 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 187 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 188 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals::
# 189 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 190 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 191 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver
# 192 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold
# 193 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver
# 194 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold
# 195 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
# 196 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 197 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 198 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilver::
# 199 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilverShort
# 200 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver, MSGBOX_DEFAULT
# 201 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 202 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 203 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 204 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGold::
# 205 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGoldShort
# 206 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold, MSGBOX_DEFAULT
# 207 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 208 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 209 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerSilverShort::
# 211 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort, MSGBOX_DEFAULT
# 212 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 213 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 214 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForTuckerGoldShort::
# 215 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort, MSGBOX_DEFAULT
# 216 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 217 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 218 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle::
# 219 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 220 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special LoadPlayerParty
# 222 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 223 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 224 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitfanfare
# 225 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special HealPlayerParty
# 226 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage
# 227 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 228 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showstatictourneytree
# 229 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 230 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
# 231 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 232 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage::
# 233 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 234 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_Round1Complete
# 236 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_Round2Complete
# 237 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_SemifinalsComplete
# 238 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 239 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 240 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_Round1Complete::
# 241 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete, MSGBOX_DEFAULT
# 242 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 244 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_Round2Complete::
# 245 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete, MSGBOX_DEFAULT
# 246 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 247 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 248 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_SemifinalsComplete::
# 249 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	return
# 251 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_AttendantMoveAside:
# 253 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_right
# 254 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	face_left
# 255 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 256 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnter:
# 258 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 259 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 260 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 261 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 263 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 264 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerWalkToDoor:
# 265 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 266 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 267 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 268 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Movement_PlayerEnterDoor:
# 269 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 270 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	set_invisible
# 271 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	step_end
# 272 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1:
# 274 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Deine erste Runde steht bevor!\n"
# 275 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 276 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2:
# 278 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Deine zweite Runde steht bevor!\n"
# 279 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 280 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals:
# 282 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Halbfinale steht bevor!\n"
# 283 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 284 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals:
# 286 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Finale steht bevor!\n"
# 287 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 288 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons:
# 290 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bitte wähle die zwei Pokémon aus,\n"
# 291 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "die am Kampf teilnehmen sollen.$"
# 292 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay:
# 294 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bitte hier entlang.$"
# 295 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth:
# 297 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Vielen Dank für die Teilnahme!\p"
# 298 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Deine Pokémon sind gleich wieder\n"
# 299 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "topfit!$"
# 300 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete:
# 302 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Die erste Runde ist beendet.\p"
# 303 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Diese Teams sind eine Runde weiter!$"
# 304 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete:
# 306 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Die zweite Runde ist beendet.\p"
# 307 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Diese Teams sind eine Runde weiter!$"
# 308 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete:
# 310 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Halbfinale ist beendet.\p"
# 311 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Diese Teams sind eine Runde weiter!$"
# 312 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
@ Unused
# 314 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2:
# 315 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Glückwunsch für das\n"
# 316 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bestehen der 1. Runde.\p"
# 317 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Die 2. Runde ist bereit.\n"
# 318 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 319 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
@ Unused
# 321 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals:
# 322 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Glückwunsch für den\n"
# 323 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Einzug ins Halbfinale.\p"
# 324 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Die vier besten Teams treten an.\n"
# 325 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 326 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 327 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
@ Unused
# 328 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals:
# 329 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Glückwunsch für den\n"
# 330 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Einzug ins Finale.\p"
# 331 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Noch ein Sieg zum Champion.\n"
# 332 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 333 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 334 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer:
# 335 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Der nächste Gegner von {PLAYER} ist\n"
# 336 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "dieser Trainer.$"
# 337 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1:
# 339 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Turnier befindet sich in der\n"
# 340 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "1. Runde.$"
# 341 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 342 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2:
# 343 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Turnier befindet sich in der\n"
# 344 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "2. Runde.$"
# 345 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 346 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals:
# 347 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Turnier befindet sich im Halbfinale.$"
# 348 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 349 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals:
# 350 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Das Turnier befindet sich im Finale.$"
# 351 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 352 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame:
# 353 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Möchtest du das Spiel speichern und\n"
# 354 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "beenden?$"
# 355 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 356 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge:
# 357 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Möchtest du dich aus dem Turnier\n"
# 358 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "zurückziehen?$"
# 359 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait:
# 361 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Ich speichere deine Daten.\n"
# 362 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Einen Moment bitte.$"
# 363 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 364 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch:
# 365 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Soll ich den letzten Kampf in deinen\n"
# 366 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Kampfzonenpass eintragen?$"
# 367 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver:
# 369 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Glückwunsch! Du hast es bis zum finalen\n"
# 370 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Kampf geschafft!\p"
# 371 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "In diesem Finale wirst du auf den\n"
# 372 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Stadionstar Tasso treffen.\p"
# 373 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 374 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 375 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
@ Identical to ReadyForTuckerSilver
# 376 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold:
# 377 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Glückwunsch! Du hast es bis zum finalen\n"
# 378 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Kampf geschafft!\p"
# 379 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "In diesem Finale wirst du auf den\n"
# 380 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Stadionstar Tasso treffen.\p"
# 381 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Bist du bereit?$"
# 382 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort:
# 384 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Dies ist das Finale. Du trittst gegen\n"
# 385 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Tasso an. Bist du bereit?$"
# 386 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
@ Identical again
# 388 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort:
# 389 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Dies ist das Finale. Du trittst gegen\n"
# 390 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Tasso an. Bist du bereit?$"
