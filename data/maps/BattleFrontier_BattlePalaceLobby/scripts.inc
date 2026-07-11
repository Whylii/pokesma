# 1 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnWarp:
# 8 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth
# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 10 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 11 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TurnPlayerNorth::
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_OnFrame:
# 17 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus
# 18 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
# 19 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
# 20 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 21 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
# 22 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.2byte 0
# 23 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GetChallengeStatus::
# 25 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_getstatus
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
# 29 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 30 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 32 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK, 0
# 33 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 39 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
# 40 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 41 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_isbrain
# 42 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints
# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DefeatedMaven::
# 47 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_GiveBattlePoints::
# 49 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_givepoints
# 51 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 52 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 55 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 58 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 59 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge
# 67 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 69 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 70 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveAfterChallenge::
# 74 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkairshow
# 75 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save 0
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 81 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 82 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 83 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RecordMatch::
# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndSaveAfterChallenge::
# 94 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 95 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 101 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save CHALLENGE_STATUS_SAVING
# 102 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 103 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 104 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
# 107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
# 109 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 110 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 111 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 112 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 116 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	faceplayer
# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 121 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 123 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 124 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
# 125 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_get PALACE_DATA_PRIZE
# 126 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_ne VAR_RESULT, ITEM_NONE, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle
# 130 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
# 137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
# 138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 139 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 140 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
# 142 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge
# 143 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkineligible
# 149 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 155 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 158 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 159 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
# 160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case NO, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case YES, BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
# 164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_SaveBeforeChallenge::
# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_init
# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	delay 2
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
# 179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
# 182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
# 185 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
# 187 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 188 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
# 190 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge
# 191 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
# 192 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 193 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExplainDoublesChallenge::
# 195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMons::
# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50
# 201 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen
# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLv50::
# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 208 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_NotEnoughValidMonsLvOpen::
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallengeSaveFailed::
# 216 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
# 218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 221 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative LoadPlayerParty
# 222 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
# 223 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EndCancelChallenge::
# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	release
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForSingleBattle::
# 229 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 231 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WelcomeForDoubleBattle::
# 233 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 235 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeSingleBattleChallenge::
# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
# 238 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 239 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 240 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeDoubleBattleChallenge::
# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
# 242 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 243 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 244 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_WalkToDoor::
# 245 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant
# 246 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant
# 247 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 248 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor
# 251 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor
# 252 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 253 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor
# 254 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor
# 255 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 256 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor
# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor
# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 259 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToSinglesAttendant::
# 262 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_SINGLES
# 263 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_TalkedToDoublesAttendant::
# 266 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_DOUBLES
# 267 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenSinglesHallDoor::
# 270 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 5, 4
# 271 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_OpenDoublesHallDoor::
# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 19, 4
# 275 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseSinglesHallDoor::
# 278 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 5, 4
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_CloseDoublesHallDoor::
# 282 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 19, 4
# 283 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_WalkToDoor:
# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 287 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 288 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_AttendantEnterDoor:
# 290 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 292 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 293 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 294 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Movement_PlayerEnterDoor:
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	step_end
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 300 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
# 301 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 302 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
# 303 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 304 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 305 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 306 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 307 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 310 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
# 311 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 312 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 313 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 314 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
# 317 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
# 318 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Man::
# 321 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
# 322 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
# 325 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
# 326 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
# 329 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
# 330 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 331 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 332 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
# 333 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 334 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 336 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 337 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
# 339 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 340 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 341 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
# 342 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 343 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics
# 344 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_RulesNature
# 345 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves
# 346 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered
# 347 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger
# 348 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 349 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ExitRules
# 350 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 351 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 352 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesBasics::
# 353 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 354 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 355 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 356 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesNature::
# 358 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 359 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 360 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 361 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesMoves::
# 363 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 364 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 365 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 366 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesUnderpowered::
# 368 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 369 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 370 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 371 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_RulesWhenInDanger::
# 373 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 374 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
# 375 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 376 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 377 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_ExitRules::
# 378 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
# 379 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	end
# 380 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 381 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle:
# 382 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hier wird das Herz der Trainer\n"
# 383 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "auf die Probe gestellt!\p"
# 384 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Willkommen im Kampfpalast!\p"
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ich nehme Herausforderungen für die\n"
# 386 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Einzelkampf-Hallen entgegen!$"
# 387 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge:
# 389 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "der Einzelkampf-Hallen stellen?$"
# 391 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 392 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge:
# 393 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Im Kampfpalast gibt es verschiedene\n"
# 394 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Einzelkampf-Hallen für\l"
# 395 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Einzelkämpfe.\p"
# 396 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Die Einzelkämpfe verlaufen auf die\n"
# 397 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "übliche Weise. Es gibt eine entschei-\l"
# 398 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "dende Regel, die es zu beachten gilt!!!\p"
# 399 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Trainer dürfen ihre Pokémon lediglich\n"
# 400 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "in den Kampf rufen und zurückziehen.\p"
# 401 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ansonsten dürfen sie ihren Pokémon\n"
# 402 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "keinerlei Anweisungen geben!\p"
# 403 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Die Pokémon sollen sich ihrem Wesen\n"
# 404 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "entsprechend verhalten und eigen-\p"
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "ständig kämpfen! Vertrau deinen\n"
# 406 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon und achte auf sie.\p"
# 407 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Schaffst du es, sieben Trainer in Folge\n"
# 408 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "zu besiegen, erhältst du von uns\l"
# 409 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gewinnpunkte.\p"
# 410 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Willst du die Herausforderung ab-\n"
# 411 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "brechen, musst du dein Spiel speichern.\p"
# 412 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Andernfalls wirst du bei Abbruch\n"
# 413 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "disqualifiziert.$"
# 414 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified:
# 416 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Stärke dein Herz und deine Pokémon und\n"
# 417 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "komm dann wieder.$"
# 418 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhichChallenge:
# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Es gibt zwei Kampfhallen:\n"
# 421 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Für Level 50 und Offene Kämpfe.\l"
# 422 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Wofür entscheidest du dich?$"
# 423 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50:
# 425 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 426 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 427 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 428 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 429 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 430 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 431 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "halten.\p"
# 432 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 433 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 434 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd:
# 436 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 437 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen:
# 439 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 440 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 442 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 443 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon.\p"
# 444 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 445 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "halten.\p"
# 446 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 447 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 448 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 449 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons:
# 450 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gut. Nun wähle deine drei Pokémon aus.$"
# 451 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 452 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2:
# 453 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bevor du die Kampfhalle betrittst,\n"
# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 455 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 456 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FollowMe:
# 457 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gut. Dann folge mir.$"
# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 459 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded:
# 460 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ich fühle mich geehrt, dass ich deine\n"
# 461 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon sehen durfte.\p"
# 462 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bitte warte einen Moment.$"
# 464 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 465 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak:
# 466 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sieben Siege in Folge…\p"
# 467 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Das Band zwischen deinem Herzen und\n"
# 468 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "deinen Pokémon scheint stark zu sein.$"
# 469 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 470 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded:
# 471 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 472 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bitte warte einen Moment.$"
# 473 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 474 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 475 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak:
# 476 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Für deine 7 Siegesserie, erhälst\n"
# 477 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "du diese Gewinnpunkte.$"
# 478 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize:
# 480 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Du hast keinen Platz für den Preis?\p"
# 481 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Räum deinen Beutel auf und komm\n"
# 482 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "dann wieder.$"
# 483 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting:
# 485 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Wir haben auf dich gewartet…$"
# 486 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge:
# 488 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Bevor du die Kampfhalle betrittst,\n"
# 489 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "musst du dein Spiel speichern.$"
# 490 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge:
# 492 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Seufz…\p"
# 493 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 494 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 495 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 496 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "rung disqualifiziert. Schade!$"
# 497 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
@ Unused
# 499 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize:
# 500 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{PLAYER} erhielt den Preis\n"
# 501 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 502 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 503 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink:
# 504 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Für so einen kräftigen Burschen wie\n"
# 505 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "mich sind kräftige Pokémon das Wahre!\p"
# 506 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Angriff ist die beste Verteidigung!\n"
# 507 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Eine rücksichtslose Attacke das Beste!\p"
# 508 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Aber darüber wollte ich jetzt\n"
# 509 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "eigentlich gar nicht reden.\p"
# 510 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Manchmal kommt hier eine niedliche\n"
# 511 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Lady vorbei.\p"
# 512 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sie sagt, sie kann erkennen, was\n"
# 513 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon denken.\p"
# 514 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ich kenn mich damit nicht aus, aber ich\n"
# 515 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "weiß, dass die Lady verdammt süß ist.\p"
# 516 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Was?!\n"
# 517 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Warum schaust du mich so komisch an?$"
# 518 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere:
# 520 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hmm…\p"
# 521 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Das Wesen der Pokémon und die\n"
# 522 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Attacken, die sie gelernt haben,\l"
# 523 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "scheinen der Schlüssel zu sein.\p"
# 524 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Um es deutlicher zu machen: Die\n"
# 525 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Attacken sollten zum Wesen der\l"
# 526 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon passen.\p"
# 527 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Wenn dein Pokémon Schwierigkeiten\n"
# 528 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "hat und nicht alles gibt, dann solltest\l"
# 529 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "du prüfen, wie gut seine Attacken zu\l"
# 530 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "seinem Wesen passen.$"
# 531 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms:
# 533 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Mein Pokémon ist sehr sanftmütig.\p"
# 534 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Aber wenn ich es in eine Kampfhalle\n"
# 535 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "mitnehme, scheint es sich manchmal\l"
# 536 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "ganz merkwürdig zu verändern!\p"
# 537 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Es wirkt dann regelrecht\n"
# 538 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "einschüchternd! Richtig schockierend!$"
# 539 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 540 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway:
# 541 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ich frage mich, welches Wesen ein\n"
# 542 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon hat, das seine Gegner schwächt\l"
# 543 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "und dann langsam zur Strecke bringt.\p"
# 544 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ich würde mich echt wundern, wenn es\n"
# 545 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "dann ein lasches Wesen hätte.\p"
# 546 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Nee, bestimmt nicht!$"
# 547 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 548 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle:
# 549 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hier wird das Herz der Trainer\n"
# 550 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "auf die Probe gestellt!\p"
# 551 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Willkommen im Kampfpalast!\p"
# 552 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ich nehme Herausforderungen für die\n"
# 553 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Doppelkampf-Hallen entgegen!$"
# 554 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 555 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge:
# 556 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 557 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "der Doppelkampf-Hallen stellen?$"
# 558 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 559 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge:
# 560 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Im Kampfpalast gibt es verschiedene\n"
# 561 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Doppelkampf-Hallen für\l"
# 562 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Doppelkämpfe.\p"
# 563 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Die Doppelkämpfe verlaufen auf die\n"
# 564 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "übliche Weise. Es gibt eine entschei-\l"
# 565 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "dende Regel, die es zu beachten gilt!!!\p"
# 566 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Trainer dürfen ihre Pokémon lediglich\n"
# 567 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "in den Kampf rufen und zurückziehen.\p"
# 568 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ansonsten dürfen sie ihren Pokémon\n"
# 569 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "keinerlei Anweisungen geben!\p"
# 570 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Die Pokémon sollen sich ihrem Wesen\n"
# 571 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "entsprechend verhalten und eigen-\p"
# 572 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "ständig kämpfen! Vertrau deinen\n"
# 573 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon und achte auf sie.\p"
# 574 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Schaffst du es, sieben Trainer in Folge\n"
# 575 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "zu besiegen, erhältst du von uns\l"
# 576 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gewinnpunkte.\p"
# 577 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Willst du die Herausforderung ab-\n"
# 578 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "brechen, musst du dein Spiel speichern.\p"
# 579 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Andernfalls wirst du bei Abbruch\n"
# 580 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "disqualifiziert.$"
# 581 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 582 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers:
# 583 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Um den Palastregenten und sieben\n"
# 584 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Trainer in Folge zu besiegen…$"
# 585 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints:
# 587 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In Anerkennung des Bandes zwischen dir\n"
# 588 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "und deinen Pokémon geben wir dir\l"
# 589 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gewinnpunkt(e).$"
# 590 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 591 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch:
# 592 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Möchtest du deinen letzten Kampf-\n"
# 593 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "palast-Kampf in deinen\l"
# 594 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Kampfzonenpass eintragen?$"
# 595 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 596 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_RulesAreListed:
# 597 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Die Regeln der Kampfhalle hängen\n"
# 598 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "öffentlich aus.$"
# 599 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 600 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading:
# 601 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 602 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 603 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics:
# 604 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hier müssen die Pokémon selbständig\n"
# 605 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "handeln und kämpfen.\p"
# 606 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Anders als wilde Pokémon reagieren\n"
# 607 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon, die mit Menschen zusammen-\l"
# 608 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "leben, abhängig von ihrem Wesen.$"
# 609 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 610 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature:
# 611 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Je nach Wesenheit wird ein Pokémon\n"
# 612 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "eventuell angreifen, egal, was passiert.\p"
# 613 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Ein anderes wird sich vielleicht seinem\n"
# 614 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Wesen entsprechend unter allen\p"
# 615 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Umständen schützen wollen. Ein anderes\n"
# 616 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "irritiert oder verwirrt seinen Gegner.\p"
# 617 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Abhängig von seinem Wesen wird ein\n"
# 618 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon Lieblingsattacken haben, die\l"
# 619 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "es hervorragend beherrscht.\p"
# 620 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Auf der anderen Seite wird es Attacken\n"
# 621 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "kennen, die es nicht mag und die ihm\l"
# 622 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Schwierigkeiten machen.$"
# 623 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 624 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves:
# 625 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Es gibt offensive Attacken, die dem\n"
# 626 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gegner Schaden zufügen.\p"
# 627 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Es gibt defensive Attacken, die auf\n"
# 628 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "gegnerische Attacken vorbereiten oder\l"
# 629 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "aber KP wiederherstellen können.\p"
# 630 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Und es gibt Attacken, die den Gegner\n"
# 631 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "schwächen, indem sie Statusprobleme\l"
# 632 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "verursachen, wie Vergiftungen oder\l"
# 633 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Paralyse.\p"
# 634 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon werden diese 3 Kategorien mit\n"
# 635 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sicherheit im Kampf in Betracht ziehen!$"
# 636 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 637 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered:
# 638 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Gibt ein Trainer seinem Pokémon keine\n"
# 639 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Anweisungen, wird es vielleicht nicht in\l"
# 640 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "der Lage sein, bestimmte Attacken\p"
# 641 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "einzusetzen. Ein Pokémon hat\n"
# 642 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Schwierigkeiten mit Attacken, die es\l"
# 643 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "nicht mag.\p"
# 644 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Kennt ein Pokémon nur Attacken, die\n"
# 645 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "seinem Wesen widersprechen, so kann es\l"
# 646 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "nicht immer sein ganzes Können zeigen.$"
# 647 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"

# 648 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger:
# 649 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Abhängig von seinem Wesen, wird ein\n"
# 650 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Pokémon vielleicht auch Attacken ein-\l"
# 651 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "setzen, die seinem Wesen widersprechen.\p"
# 652 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Benimmt es sich in bestimmten\n"
# 653 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Situationen merkwürdig, beobachte es\l"
# 654 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "genau.$"
