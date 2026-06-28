# 1 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnWarp:
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth
# 9 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 10 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TurnPlayerNorth::
# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_OnFrame:
# 17 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus
# 18 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 19 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 20 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 21 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
# 22 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GetChallengeStatus::
# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
# 26 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 29 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 30 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 32 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 33 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 34 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 35 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 36 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 38 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 42 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 44 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead
# 45 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 47 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
# 48 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DefeatedFactoryHead::
# 50 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 52 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 56 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 57 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 58 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 59 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 60 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 62 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 64 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 67 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 68 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 69 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 70 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 72 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 73 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 74 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 75 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 76 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 77 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 78 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 79 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskRecordBattle::
# 80 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 83 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 84 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 85 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 87 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle
# 88 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle
# 89 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 90 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RecordBattle::
# 91 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 92 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EndRecordBattle::
# 93 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 94 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 96 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 100 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 101 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 102 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 103 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 104 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 106 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 108 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 109 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
# 110 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 112 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	faceplayer
# 114 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 115 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 116 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 117 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 119 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 120 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
# 123 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 124 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 125 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 126 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 127 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle
# 128 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 130 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge
# 132 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 134 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 138 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 141 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 142 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 143 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 144 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 146 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 148 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 150 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case NO, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 151 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case YES, BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge
# 152 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge
# 153 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 154 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_SaveBeforeChallenge::
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 156 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 158 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 160 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 161 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 162 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 163 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 164 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed
# 165 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 166 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 167 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 168 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 170 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant
# 171 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor
# 173 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor
# 174 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 175 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 176 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 177 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 180 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToSinglesAttendant::
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 183 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TalkedToDoublesAttendant::
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
# 186 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 187 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 188 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 189 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge
# 190 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge
# 191 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
# 192 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 193 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallengeSaveFailed::
# 194 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_LoadPartyAndCancelChallenge::
# 198 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 199 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 200 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 201 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 203 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_AttendantEnterDoor:
# 206 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 207 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 209 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
# 210 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 211 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Movement_PlayerEnterDoor:
# 213 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 214 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 215 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 216 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 217 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	step_end
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 219 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForSingleBattle::
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 222 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_WelcomeForDoubleBattle::
# 224 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 227 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeSinglesChallenge::
# 228 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
# 229 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 230 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_TakeDoublesChallenge::
# 232 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
# 233 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 234 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 235 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainSinglesChallenge::
# 236 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 237 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 238 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 239 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExplainDoublesChallenge::
# 240 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 241 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	return
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 243 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 244 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 245 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 246 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 247 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 248 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 249 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 250 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 252 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 253 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 255 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 257 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 259 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 260 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
# 261 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 263 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 266 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 267 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 268 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 269 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
# 270 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	release
# 271 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 272 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 274 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
# 275 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 278 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 279 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 280 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 281 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 283 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 284 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 285 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 286 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
# 287 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 288 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics
# 289 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner
# 290 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber
# 291 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes
# 292 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv
# 293 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 294 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ExitRules
# 295 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesBasics::
# 298 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 300 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 301 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 302 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapPartner::
# 303 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
# 304 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 305 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 306 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNumber::
# 308 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
# 309 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 310 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 311 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesSwapNotes::
# 313 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
# 314 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 315 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 316 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_RulesOpenLv::
# 318 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
# 319 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
# 320 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 321 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_ExitRules::
# 323 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
# 324 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	end
# 325 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 326 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle:
# 327 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hier wird die Intelligenz der Trainer\n"
# 328 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "auf die Probe gestellt!\p"
# 329 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Willkommen in der Kampffabrik!\p"
# 330 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich begleite dich beim Einzel-Wechsel-\n"
# 331 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "kampf-Turnier!$"
# 332 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge:
# 334 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 335 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "des Einzel-Wechselkampfs stellen?$"
# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge:
# 338 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Im Einzel-Wechselkampf-Turnier\n"
# 339 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "werden Einzelkämpfe mit\l"
# 340 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Leih-Pokémon ausgetragen.\p"
# 341 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Zunächst suchst du dir drei Leih-\n"
# 342 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon aus.\p"
# 343 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Danach stellst du dich mit diesen\n"
# 344 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "deinem Herausforderer.\p"
# 345 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Gewinnst du, darfst du eines deiner\n"
# 346 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Leih-Pokémon austauschen.\p"
# 347 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wiederhole diese Schritte - wenn du\n"
# 348 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "sieben Mal in Folge gewinnst, erhältst\l"
# 349 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "du Gewinnpunkte.\p"
# 350 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wenn du die Herausforderung unter-\n"
# 351 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "brechen willst, speichere dein Spiel.\p"
# 352 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Speicherst du nicht, wirst du\n"
# 353 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "disqualifiziert.$"
# 354 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit:
# 356 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 357 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Herausforderung.$"
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode:
# 360 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "An welcher Stufe möchtest du teil-\n"
# 361 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "nehmen? Level 50 oder Offene Kämpfe?$"
# 362 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge:
# 364 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Bevor du dich der Herausforderung\n"
# 365 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "stellst, muss ich dein Spiel speichern.$"
# 366 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 368 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping:
# 369 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Okay, I will hold your Pokémon for\n"
# 370 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "safekeeping while you compete.$"
# 371 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_StepThisWay:
# 373 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Bitte hier entlang.$"
# 374 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 375 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults:
# 376 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Vielen Dank für deine Teilnahme!\p"
# 377 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich gebe dir nun deine Pokémon\n"
# 378 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "zurück.\p"
# 379 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich werde deinen Erfolg speichern.\n"
# 380 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Bitte warte einen Moment.$"
# 381 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 382 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 383 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReturnMons:
# 384 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your Pokémon in exchange\n"
# 385 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "for our rental Pokémon.$"
# 386 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins:
# 388 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Herzlichen Glückwunsch! Du hast sieben\n"
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wechselkämpfe gewonnen!$"
# 390 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 391 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 392 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak:
# 393 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your 7-win streak,\n"
# 394 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "we award you these Battle Point(s).$"
# 395 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 396 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 397 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints:
# 398 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Oh, oh, oh!\p"
# 399 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Your Battle Points are maxed.\p"
# 400 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please come back after using\n"
# 401 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "some Battle Points.$"
# 402 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 403 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume:
# 404 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wir haben schon auf dich gewartet!\p"
# 405 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Bevor du dich der Herausforderung\n"
# 406 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "stellst, muss ich dein Spiel speichern.$"
# 407 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 408 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting:
# 409 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 410 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 411 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 412 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 413 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "rung disqualifiziert. Schade!$"
# 414 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 416 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons:
# 417 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We'll return your personal Pokémon.$"
# 418 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 420 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem:
# 421 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 422 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 423 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle:
# 425 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hier wird die Intelligenz der Trainer\n"
# 426 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "auf die Probe gestellt!\p"
# 427 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Willkommen in der Kampffabrik!\p"
# 428 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich begleite dich beim Doppel-Wechsel-\n"
# 429 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "kampf-Turnier!$"
# 430 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 431 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge:
# 432 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Möchtest du am Doppel-Wechselkampf\n"
# 433 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "teilnehmen?$"
# 434 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 435 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge:
# 436 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Im Doppel-Wechselkampf-Turnier\n"
# 437 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "werden Doppelkämpfe mit\l"
# 438 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Leih-Pokémon ausgetragen.\p"
# 439 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Zunächst suchst du dir drei Leih-\n"
# 440 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon aus.\p"
# 441 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Danach stellst du dich mit diesen\n"
# 442 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "deinen Herausforderern.\p"
# 443 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Gewinnst du, darfst du eines deiner\n"
# 444 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Leih-Pokémon austauschen.\p"
# 445 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wiederhole diese Schritte - wenn du\n"
# 446 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "sieben Mal in Folge gewinnst, erhältst\l"
# 447 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "du Gewinnpunkte.\p"
# 448 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wenn du die Herausforderung unter-\n"
# 449 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "brechen willst, speichere dein Spiel.\p"
# 450 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Speicherst du nicht, wirst du\n"
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "disqualifiziert.$"
# 452 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 453 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead:
# 454 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Glückwunsch! Du hast den Fabrikleiter\n"
# 455 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "besiegt und sechs Kämpfe\l"
# 456 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "in Folge gewonnen!$"
# 457 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 458 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints:
# 459 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In Anerkennung deines reichen Wissens\n"
# 460 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "und deiner Intelligenz geben wir dir\l"
# 461 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "diese Gewinnpunkt(e).$"
# 462 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 463 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave:
# 464 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich gebe dir nun deine Pokémon\n"
# 465 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "zurück.\p"
# 466 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich werde deinen Erfolg speichern.\n"
# 467 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Bitte warte einen Moment.$"
# 468 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 469 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch:
# 470 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Möchtest du den letzten Kampffabrik-\n"
# 471 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Kampf auf deinem Kamfzonen-\l"
# 472 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "pass eintragen lassen?$"
# 473 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves:
# 475 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hallo!\n"
# 476 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Du da! Dich meine ich!\p"
# 477 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Du denkst bestimmt, die Kämpfe hier\n"
# 478 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "sind einfach, da man keine eigenen\l"
# 479 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon mitbringen muss, was?\p"
# 480 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich wäre an deiner Stelle nicht so\n"
# 481 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "überzeugt davon.\p"
# 482 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wenn du keine Ahnung von Pokémon\n"
# 483 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "und ihren Attacken hast, dann wirst du\l"
# 484 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "keinen leichten Stand haben!$"
# 485 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon:
# 487 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Ich habe mich auf ein schwaches\n"
# 488 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon verlassen… Ich dachte,\p"
# 489 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "es wäre eine gute Entscheidung… \n"
# 490 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Sie haben uns platt gemacht… $"
# 491 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 492 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons:
# 493 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Die Dinge laufen überhaupt nicht so, wie\n"
# 494 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "ich es mir vorgestellt habe!\p"
# 495 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Du musst in einem Kampf unbedingt die\n"
# 496 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "gegnerischen Pokémon prüfen, damit\l"
# 497 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "du siehst, was dich erwartet.$"
# 498 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 499 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints:
# 500 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wusstest du, dass die Angestellten dir\n"
# 501 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Tipps über deinen nächsten Gegner\p"
# 502 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "geben? Nun, ich bin erwachsen und nicht\n"
# 503 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "gerade blöd, aber manchmal verstehe ich\p"
# 504 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "sie nicht. Überhaupt nicht…$"
# 505 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
@ Unused
# 507 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried:
# 508 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Like, I'm really tough, but I get bored\n"
# 509 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "really easily, so I just kept swapping\l"
# 510 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "and battling over and over.\p"
# 511 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "So anyway, when I kept entering\n"
# 512 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Battle Swap events, I noticed they\l"
# 513 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "varied the rental Pokémon.$"
# 514 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 515 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_RulesAreListed:
# 516 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Die Regeln des Wechselkampfes hängen\n"
# 517 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "öffentlich aus.$"
# 518 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading:
# 520 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 521 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules:
# 523 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In einem Wechselkampf kannst du\n"
# 524 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "nur drei Pokémon einsetzen.\p"
# 525 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Egal, ob du diese ausleihst oder\n"
# 526 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "tauschst, dein Team darf nicht aus\p"
# 527 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "zwei oder mehr Pokémon der gleichen\n"
# 528 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Art bestehen.$"
# 529 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 530 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules:
# 531 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Du kannst mit einem Trainer nur dann\n"
# 532 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Pokémon tauschen, wenn du diesen\p"
# 533 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "besiegt hast. Und nur mit diesem\n"
# 534 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Trainer ist ein Tausch möglich.$"
# 535 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 536 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules:
# 537 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Nach jedem gewonnenen Kampf kannst\n"
# 538 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "du ein Pokémon mit dem besiegten\l"
# 539 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Trainer tauschen.\p"
# 540 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Mit dem siebten Trainer kannst du\n"
# 541 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "allerdings kein Pokémon tauschen.$"
# 542 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 543 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules:
# 544 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Bei dem Pokémon-Tausch sind zwei\n"
# 545 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Dinge zu beachten:\p"
# 546 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Du kannst den Status des Pokémon,\n"
# 547 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "welches du haben möchtest, nicht\l"
# 548 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "überprüfen.\p"
# 549 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Deine Pokémon stehen in der\n"
# 550 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Reihenfolge, in der du sie ausgeliehen\l"
# 551 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "hast.\p"
# 552 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Diese Reihenfolge ändert sich auch\n"
# 553 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "durch den Tausch nicht.$"
# 554 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"

# 555 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules:
# 556 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In den Offenen Kämpfen stehen die\n"
# 557 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Leih-Pokémon und die der gegnerischen\l"
# 558 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Trainer auf Level 100.$"
