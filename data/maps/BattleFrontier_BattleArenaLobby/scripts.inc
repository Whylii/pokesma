# 1 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp:
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth::
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnFrame:
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 18 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 19 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus::
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 30 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 40 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 42 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon::
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 52 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 55 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 70 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RecordMatch::
# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge::
# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
# 106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 128 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 166 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq VAR_RESULT, FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge::
# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons::
# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50::
# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 188 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 189 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen::
# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed::
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge::
# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 207 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50::
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 215 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor:
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 223 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 229 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor:
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor:
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 251 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor:
# 252 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 253 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 256 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen::
# 258 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 261 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 262 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 270 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor:
# 271 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor:
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 283 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 284 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_faster_up
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 297 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Man::
# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 318 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 324 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 326 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BattleRules::
# 337 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 339 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_MindRules::
# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SkillRules::
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 350 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BodyRules::
# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExitRules::
# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena:
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Hier wird der Kampfgeist der Trainer\n"
# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "auf die Probe gestellt!\p"
# 363 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Willkommen im Kampfring!\p"
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ich begleite dich beim K.O.-Teamturnier!$"
# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge:
# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "des Kampfrings stellen?$"
# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge:
# 371 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 372 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Herausforderung.$"
# 373 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge:
# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Im Kampfring fechten\n"
# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "wir K.O.-Teamturniere aus.\p"
# 377 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Jeder Teilnehmer nimmt drei Pokémon\n"
# 378 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "mit in den Wettkampf.\p"
# 379 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Die Pokémon müssen in der Reihenfolge\n"
# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "platziert werden, in der sie kämpfen\p"
# 381 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "sollen. In dieser Folge kämpfen sie dann\n"
# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "nacheinander.\p"
# 383 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Sobald ein Pokémon in den Kampf\n"
# 384 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "gerufen wurde, muss es kämpfen, bis der\p"
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Kampf entschieden ist. Sollte ein Kampf\n"
# 386 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "unentschieden enden, wird der Kampf\p"
# 387 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "beurteilt und der Sieger bestimmt.\n"
# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Möchtest du den Wettkampf unter-\p"
# 389 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "brechen, speichere bitte dein Spiel.\n"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ohne Speichern kannst du den Wett-\p"
# 391 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kampf später nicht fortsetzen.\p"
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Besiegst du sieben Trainer in Folge,\n"
# 393 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "erhältst du Gewinnpunkte.$"
# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OkayToSave:
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bevor du den Kampfring betrittst,\n"
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 399 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode:
# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Im Kampfring wird in zwei\n"
# 401 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Kategorien gekämpft: Lv. 50 und Offene\l"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Kämpfe. Wofür entscheidest du dich?$"
# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons:
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bitte wähle drei Pokémon aus, die\n"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "antreten sollen.$"
# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen:
# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon.\p"
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "halten.\p"
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 418 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd:
# 420 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bitte komme wieder, wenn du deine\n"
# 421 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Vorbereitungen abgeschlossen hast.$"
# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50:
# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 426 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "halten.\p"
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 432 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena:
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ich werde dich nun in den Kampfring\n"
# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "begleiten.$"
# 437 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 438 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown:
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 443 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "rung disqualifiziert. Schade! Du hast\p"
# 444 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "natürlich die Möglichkeit, dich einer\n"
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "neuen Herausforderung zu stellen.$"
# 446 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins:
# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Herzlichen Glückwunsch! Du hast sieben\n"
# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Trainer in Folge besiegt!$"
# 450 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordAchievement:
# 452 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bitte warten.$"
# 454 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize:
# 457 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Für deine 7-Siegesserie,\n"
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "erhälst du diesen Preis.$"
# 459 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 460 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize:
# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} erhält den Preis\n"
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 464 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 465 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 466 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize:
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Es scheint dein Beutel ist voll.\p"
# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Schaffe etwas Platz und komme\n"
# 470 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "wieder für deinen Preis.$"
# 471 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 472 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave:
# 473 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Vielen Dank für die Teilnahme!\p"
# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Das Spiel wird gespeichert.\n"
# 475 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bitte warten.$"
# 476 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2:
# 478 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 479 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Herausforderung.$"
# 480 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame:
# 482 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Wir haben schon auf dich gewartet!\p"
# 483 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bevor du den Kampfring betrittst,\n"
# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 485 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 486 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch:
# 487 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Soll ich den Kampfring-Kampf\n"
# 488 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "in deinen Kampfzonenpass eintragen?$"
# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack:
# 491 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ich habe aufgrund der Ringrichter-\n"
# 492 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Entscheidung verloren…\p"
# 493 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ich hätte nicht nur defensive Attacken\n"
# 494 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "verwenden dürfen, sondern auch\p"
# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "angreifen müssen.$"
# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked:
# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ich habe durch die richtige\n"
# 499 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Entscheidung des Ringrichters gewonnen!\p"
# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Kontinuierliche Treffer auf das gegne-\n"
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "rische Pokémon haben sich ausgezahlt.$"
# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw:
# 504 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Unser Kampf wurde als Unentschieden\n"
# 505 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "gewertet.\p"
# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Als die Zeit abgelaufen war, hatten\n"
# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "meine und die gegnerischen Pokémon\l"
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "die gleiche Anzahl KP übrig.$"
# 509 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant:
# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Im Kampfring ist die Reihenfolge\n"
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "der Pokémon entscheidend.\p"
# 513 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Hat dein erstes Pokémon bestimmte\n"
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Nachteile aufgrund seiner Element-\l"
# 515 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "klasse, sollte dein zweites Pokémon\l"
# 516 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "diese Nachteile ausgleichen.\p"
# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ich denke, so stellt man ein hervor-\n"
# 518 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ragendes Team zusammen.$"
# 519 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RulesAreListed:
# 521 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Die K.O.-Teamturnier-Regeln sind hier\n"
# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "aufgeführt.$"
# 523 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading:
# 525 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 526 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 527 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules:
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Das K.O.-Teamturnier hat bestimmte\n"
# 529 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Regeln, die du beachten musst.\p"
# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Erstens: Ein Kampf dauert drei Runden.\n"
# 531 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Wenn nach drei Runden kein Sieger\p"
# 532 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "feststeht, wird eine richterliche\n"
# 533 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Entscheidung getroffen. Der Ringrichter\p"
# 534 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "wird den Sieger bestimmen, indem er\n"
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "die Art des Kampfes beurteilt. Ein Pokémon\p"
# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kann nicht ausgetauscht werden, bevor\n"
# 537 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "der Kampf entschieden ist.$"
# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules:
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Der erste Faktor bei der Beurteilung\n"
# 541 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ist der Verstand. Hier wird beurteilt,\l"
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "wie aggressiv die Kämpfer waren.\p"
# 543 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Die Beurteilung richtet sich danach, wie\n"
# 544 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "oft der Trainer offensive Attacken\l"
# 545 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "eingesetzt hat.$"
# 546 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 547 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules:
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Der zweite Faktor ist das\n"
# 549 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Geschick. Hier wird beurteilt, wie\l"
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "effektiv Attacken eingesetzt wurden.\p"
# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "War eine Attacke erfolgreich, geht die\n"
# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bewertung der Fähigkeiten nach oben.\p"
# 553 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Schlug eine Attacke fehl, geht die\n"
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Bewertung nach unten.\p"
# 555 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Handelt es sich um eine offensive\n"
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Attacke, geht die Beurteilung nach\l"
# 557 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "oben, wenn sie sehr effektiv war.\l"
# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Sie geht nach unten, wenn sie nicht\p"
# 559 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "sehr effektiv war. Für Attacken wie\n"
# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Schutzschild oder Scanner gibt es\l"
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "keine höhere Bewertung.\p"
# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Setzt der Gegner Schutzschild oder\n"
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Scanner ein und die Attacke deines\l"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon scheitert, wird die Beurteilung\l"
# 565 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "nicht nach unten gehen.$"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 567 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules:
# 568 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Der dritte Faktor bei der Beurteilung\n"
# 569 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "ist der Körper. Die am\l"
# 570 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ende verbleibenden KP sind ausschlag-\p"
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "gebend. Die Anzahl der KP, mit der ein\n"
# 572 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon in den Kampf geht, wird mit der\l"
# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "am Ende des Kampfes verglichen.$"
# 574 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 575 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon:
# 576 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Ein Sieg über den Ringmeister und ein\n"
# 577 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "siebenfacher Sieg über sieben Trainer!\p"
# 578 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Wir gratulieren dir zu deiner\n"
# 579 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "herausragenden Leistung!$"
# 580 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 581 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints:
# 582 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Geschätzter Herausforderer! In Aner-\n"
# 583 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kennung deines unermüdlichen Geistes\l"
# 584 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "überreichen wir dir Gewinnpunkt(e).$"
