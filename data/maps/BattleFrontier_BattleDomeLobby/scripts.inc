# 1 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_OnFrame
# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.byte 0
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnResume:
# 9 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
# 10 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 11 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 12 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnWarp:
# 13 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth::
# 17 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnFrame:
# 22 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus
# 23 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 24 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 25 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 28 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 29 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus::
# 30 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
# 31 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 35 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 37 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 38 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 46 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 47 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 48 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 49 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce::
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 59 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 63 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 64 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 65 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle
# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 76 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 77 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 81 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle::
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 92 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 93 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 96 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RecordBattle
# 97 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 98 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RecordBattle::
# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndChallenge::
# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 121 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 129 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 130 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles
# 139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 141 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 158 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons
# 160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case NO, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case YES, BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
# 173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 174 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 192 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge
# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge
# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons::
# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen
# 210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50::
# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed::
# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 228 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge::
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	release
# 234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor
# 238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor
# 242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 244 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor
# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor
# 246 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor
# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor
# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor::
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor::
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor::
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor::
# 266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles::
# 270 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles::
# 274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge::
# 278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge::
# 282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
# 283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge::
# 286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge::
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor::
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor::
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor::
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor::
# 306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
# 307 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_WalkToDoor:
# 310 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 312 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor:
# 318 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor:
# 323 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 333 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 338 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 341 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 346 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50
# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50
# 348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen
# 350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 353 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50::
# 356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50::
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen::
# 364 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
# 365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen::
# 368 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
# 369 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
# 374 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
# 378 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
# 382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Man::
# 385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
# 386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ A few OutsideWest event scripts are inserted here instead, two of which are unused
# 389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man3::
# 390 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
# 391 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
# 396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 399 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 400 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
# 401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 404 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 408 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 410 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 414 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup
# 415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree
# 416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO
# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup::
# 422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
# 423 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree::
# 427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
# 428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 429 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO::
# 432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
# 433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 436 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExitRules::
# 437 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle:
# 441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hier wird die Strategie der Trainer auf\n"
# 442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "die Probe gestellt!\p"
# 443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Willkommen im Kampfstadion!\p"
# 444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Ich erkläre dir das Einzelkampf-\n"
# 445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Turnier.$"
# 446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 447 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge:
# 448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Möchtest du an einem Einzelkampf-\n"
# 449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Turnier teilnehmen?$"
# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain:
# 452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Komm bald wieder!$"
# 453 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 454 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge:
# 455 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Das Einzelkampf-Turnier wird\n"
# 456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "seinem Namen gerecht. Es ist ein Turnier\l"
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "bestehend aus Einzelkämpfen.\p"
# 458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Jeder der Trainer nimmt drei Pokémon\n"
# 459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in das Turnier.\p"
# 460 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In jedem der Kämpfe muss ein Pokémon\n"
# 461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in Reserve gehalten werden.\p"
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die anderen beiden Pokémon kämpfen\n"
# 463 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "zusammen gegen ihre Gegner.\p"
# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Schau dir die gegnerischen Pokémon an\n"
# 465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "und wähle dann deine zwei eigenen\p"
# 466 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Pokémon für den Kampf aus.\n"
# 467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du gewinnst ein Turnier, indem du vier\p"
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Trainer in Folge besiegst.\n"
# 469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Der Gewinner bekommt Gewinnpunkte.\p"
# 470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wenn du das Turnier unterbrechen\n"
# 471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "willst, musst du das Spiel speichern.\p"
# 472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wenn du nicht speicherst, wirst du\n"
# 473 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "disqualifiziert.$"
# 474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge:
# 476 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bevor du das Kampfstadion betrittst,\n"
# 477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 478 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WhichLevelMode:
# 480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Jedes Turnier bietet zwei Kategorien\n"
# 481 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "an: Level 50 und Offene Kämpfe.\l"
# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wofür entscheidest du dich?$"
# 483 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_SelectThreeMons:
# 485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bitte wähle drei Pokémon aus, die\n"
# 486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "antreten sollen.$"
# 487 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen:
# 489 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 490 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 491 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 493 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Pokémon.\p"
# 494 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 495 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "halten.\p"
# 496 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 499 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd:
# 500 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 501 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50:
# 503 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 504 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 505 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 506 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 507 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 509 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "halten.\p"
# 510 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 511 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 512 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome:
# 514 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Ich werde dir jetzt das Kampfstadion\n"
# 515 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "zeigen.$"
# 516 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting:
# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 519 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 520 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 521 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "rung disqualifiziert. Schade!$"
# 523 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney:
# 525 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Herzlichen Glückwunsch! Du hast\n"
# 526 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "das Turnier gewonnen!$"
# 527 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 529 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize:
# 530 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hier ist dein Preis für den\n"
# 531 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Sieg im Kampfturnier.$"
# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Used by Verdanturf Tent
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReceivedPrize:
# 535 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER} erhielt den Preis\n"
# 536 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 537 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 539 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom:
# 540 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Oh, dein Beutel ist voll.\p"
# 541 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Komm wieder, wenn du Platz\n"
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "geschafft hast.$"
# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 544 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying:
# 545 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Vielen Dank für die Teilnahme!$"
# 546 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 547 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved:
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bitte warten…$"
# 550 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou:
# 552 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wir haben schon auf dich gewartet!$"
# 553 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2:
# 555 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Bevor du das Kampfstadion betrittst,\n"
# 556 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 557 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 558 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle:
# 559 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hier wird die Strategie der Trainer auf\n"
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "die Probe gestellt!\p"
# 561 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Willkommen im Kampfstadion!\p"
# 562 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Ich erkläre dir das Doppelkampf-\n"
# 563 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Turnier.$"
# 564 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 565 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge:
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Möchtest du an einem Doppelkampf-\n"
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Turnier teilnehmen?$"
# 568 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 569 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge:
# 570 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Das Doppelkampf-Turnier wird\n"
# 571 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "seinem Namen gerecht. Es ist ein Turnier\l"
# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "bestehend aus Doppelkämpfen.\p"
# 573 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Jeder der Trainer nimmt drei Pokémon\n"
# 574 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in das Turnier.\p"
# 575 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In jedem der Kämpfe muss ein Pokémon\n"
# 576 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in Reserve gehalten werden.\p"
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die anderen beiden Pokémon kämpfen\n"
# 578 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "zusammen gegen ihre Gegner.\p"
# 579 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Schau dir die gegnerischen Pokémon an\n"
# 580 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "und wähle dann deine zwei eigenen\p"
# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Pokémon für den Kampf aus.\n"
# 582 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du gewinnst ein Turnier, indem du vier\p"
# 583 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Trainer in Folge besiegst.\n"
# 584 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Der Gewinner bekommt Gewinnpunkte.\p"
# 585 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wenn du das Turnier unterbrechen\n"
# 586 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "willst, musst du das Spiel speichern.\p"
# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wenn du nicht speicherst, wirst du\n"
# 588 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "disqualifiziert.$"
# 589 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 590 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50:
# 591 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Dies sind die Ergebnisse des letzten\n"
# 592 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 Einzelkampf-Turniers.$"
# 593 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 594 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50:
# 595 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Dies sind die Ergebnisse des letzten\n"
# 596 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 Doppelkampf-Turniers.$"
# 597 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen:
# 599 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die Ergebnisse des letzten Einzel-\n"
# 600 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "kampf-Turniers der Offenen Kämpfe.$"
# 601 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen:
# 603 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die Ergebnisse des letzten Doppel-\n"
# 604 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "kampf-Turniers der Offenen Kämpfe.$"
# 605 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough:
# 607 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hast du es gesehen?\n"
# 608 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Ich meine, das letzte KampfTurnier?\p"
# 609 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Der Gewinner, {STR_VAR_1}, war wirklich\n"
# 610 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "äußerst stark.\p"
# 611 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du solltest dir die Ergebnisse mal an-\n"
# 612 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "schauen, auf dem Monitor neben dem PC.$"
# 613 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 614 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier:
# 615 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die Kampfzone… Ich habe lange\n"
# 616 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "von einem Ort wie diesem geträumt…$"
# 617 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 618 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 619 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign2:
# 620 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Das Kampfstadion\n"
# 621 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Werde der unschlagbare Kampfstar!$"
# 622 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 623 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 624 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction:
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "????????\n"
# 626 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Im Aufbau$"
# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 628 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation:
# 629 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Gewinnt ein Trainer mehrere Turniere in\n"
# 630 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Folge im Kampfstadion, wird er schnell\l"
# 631 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "ein Star.\p"
# 632 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Der Ruf des Kampfstadions zieht\n"
# 633 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "starke Trainer an.\p"
# 634 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Zum wahren Superstar wird der Trainer,\n"
# 635 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "der immer wieder Turniere gewinnt.$"
# 636 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 637 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound:
# 638 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Ich habe hier gleich beim ersten Mal\n"
# 639 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "einen absoluten Favoriten getroffen.\p"
# 640 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Natürlich hat er mich in Grund und\n"
# 641 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Boden gerammt…$"
# 642 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 643 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully:
# 644 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hätte ich dieses Pokémon in Reserve\n"
# 645 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "gehabt, hätte ich gewonnen.\p"
# 646 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Schau dir die gegnerischen Pokémon\n"
# 647 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "gut an, bevor du deine eigenen Pokémon\l"
# 648 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "für den Kampf auswählst.$"
# 649 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 650 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker:
# 651 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Herzlichen Glückwunsch!\p"
# 652 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Du hast den Stadionstar besiegt und\n"
# 653 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "das Turnier gewonnen!$"
# 654 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints:
# 656 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In Anerkennung deiner phänomenalen\n"
# 657 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Strategie - welche eine Frage der\p"
# 658 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Schönheit ist - geben wir dir diese\n"
# 659 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Gewinnpunkt(e).$"
# 660 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordLastMatch:
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Möchtest du deine Aufzeichnung des\n"
# 663 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "letzten Kampfstadion-Kampfes in\l"
# 664 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "deinen Kampfzonenpass aufnehmen?$"
# 665 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 666 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RulesAreListed:
# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die Regeln des Turniers hängen\n"
# 668 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "öffentlich aus.$"
# 669 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 670 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading:
# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 672 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 673 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules:
# 674 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die Reihenfolge der Gegner basiert auf\n"
# 675 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "der Stärke der Pokémon eines Trainers.\l"
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hierbei wird vermieden, dass die\p"
# 677 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "stärksten Trainer gleich zu Anfang\n"
# 678 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "aufeinander treffen.$"
# 679 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 680 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree:
# 681 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Die Turnier-Tabelle, oder wie wir sie\n"
# 682 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "nennen, die Tafel, hängt im Warte-\l"
# 683 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "zimmer für jeden Interessierten aus.\p"
# 684 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Hier sind verschiedene Daten\n"
# 685 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "verzeichnet.\p"
# 686 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Man findet hier die letzten Turnier-\n"
# 687 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "ergebnisse, Informationen zu den\l"
# 688 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Pokémon der einzelnen Trainer\l"
# 689 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "sowie zum Kampfstil der Trainer.$"
# 690 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 691 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules:
# 692 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Im Falle eines doppelten K.O.s - wenn\n"
# 693 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "die beiden gegnerischen Pokémon\l"
# 694 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "zeitgleich besiegt werden - wird ein\l"
# 695 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Ringrichter den Kampf beurteilen.$"
