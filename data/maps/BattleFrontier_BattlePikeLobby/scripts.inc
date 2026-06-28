# 1 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnFrame:
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus
# 9 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
# 10 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_OnWarp:
# 15 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth
# 16 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.2byte 0
# 17 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 18 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TurnPlayerNorth::
# 19 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 23 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GetChallengeStatus::
# 24 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_getstatus
# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 27 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
# 28 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 29 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 31 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 33 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, 0
# 34 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
# 41 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 42 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_isbrain
# 43 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen
# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 48 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_DefeatedQueen::
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_GiveBattlePoints::
# 52 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_givepoints
# 54 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 55 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_get PIKE_DATA_TOTAL_STREAKS
# 57 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	addvar VAR_RESULT, 1
# 58 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
# 59 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
# 64 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 65 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 66 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 67 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
# 75 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
# 80 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 81 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 82 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 84 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 85 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 86 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Attendant::
# 95 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lock
# 96 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	faceplayer
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
# 102 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
# 103 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 104 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge
# 108 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 109 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 110 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 111 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
# 112 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
# 113 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 118 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkineligible
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 124 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 126 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 127 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 128 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 129 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case NO, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case YES, BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 138 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_init
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 141 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
# 142 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 146 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	delay 2
# 147 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 148 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 149 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 154 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_settrainers
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 164 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExplainChallenge::
# 165 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
# 167 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMons::
# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50
# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLv50::
# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 182 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge
# 184 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallengeSaveFailed::
# 186 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 187 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
# 188 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 189 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_LoadPartyAndCancelChallenge::
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_EndCancelChallenge::
# 195 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	release
# 196 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 197 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 200 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PIKE
# 201 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitbuttonpress
# 202 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special RemoveRecordsWindow
# 203 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 205 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 206 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_WalkToCorridor::
# 207 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PIKE_LOBBY_ATTENDANT, BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor
# 208 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor
# 209 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmovement 0
# 210 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 211 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_PlayerWalkToCorridor:
# 213 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Movement_AttendantWalkToCorridor:
# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 217 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	set_invisible
# 218 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	step_end
# 219 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Hiker::
# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 224 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Twin::
# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_Beauty::
# 229 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
# 230 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 232 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 234 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 236 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 238 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
# 239 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
# 240 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 241 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
# 242 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag
# 244 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems
# 245 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder
# 246 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 247 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ExitRules
# 248 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 250 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesPokenavBag::
# 251 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
# 252 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 253 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 254 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 255 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesHeldItems::
# 256 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 258 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 260 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_RulesMonOrder::
# 261 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
# 262 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
# 263 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_ExitRules::
# 266 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
# 267 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	end
# 268 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePike_EventScript_CloseCurtain::
# 270 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 271 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special CloseBattlePikeCurtain
# 272 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 273 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	return
# 274 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 275 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike:
# 276 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Hier wird das Glück der Trainer\n"
# 277 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "auf die Probe gestellt…\p"
# 278 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Willkommen bei der Kampfipitis…\p"
# 279 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich begleite dich zur Kampfipitis…$"
# 280 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TakeChallenge:
# 282 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Möchtest du gerne an der Kampfbahn-\n"
# 283 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Herausforderung teilnehmen?$"
# 284 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike:
# 286 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Wir bieten hier eine besondere Heraus-\n"
# 287 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "forderung an: Die Kampfbahn!\p"
# 288 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Die Regeln sind wirklich sehr einfach…\p"
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Wähle einen von drei möglichen Wegen\n"
# 290 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "und schlag dich zu deinem Ziel durch,\l"
# 291 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "das am Ende der Kampfipitis liegt…\p"
# 292 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Das, was dir auf deinem Weg an Heraus-\n"
# 293 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "forderungen begegnet, hängt allein\l"
# 294 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "von deinem Glück ab…\p"
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Erreichst du dein Ziel, erhältst du\n"
# 296 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Gewinnpunkte.\p"
# 297 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Wenn du die Herausforderung abbrechen\n"
# 298 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "möchtest, wende dich bitte an unser \l"
# 299 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Personal in den Räumen am Weg.\p"
# 300 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Wenn du nicht speicherst, bevor du\n"
# 301 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "die Herausforderung unterbrichst,\l"
# 302 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "wirst du disqualifiziert.$"
# 303 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou:
# 305 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 306 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Herausforderung.$"
# 307 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode:
# 309 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du kannst zwischen zwei Kategorien\n"
# 310 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "wählen: Level 50 und Offene Kämpfe.\l"
# 311 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Welcher Weg ist richtig für dich?$"
# 312 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50:
# 314 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich bitte um Entschuldigung,\n"
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "aber…\p"
# 316 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Deine Pokémon sind nicht\n"
# 317 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 318 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 319 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 320 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 321 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "halten.\p"
# 322 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 323 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du so weit\n"
# 324 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "bist…$"
# 325 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 326 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd:
# 327 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du so weit\n"
# 328 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "bist…$"
# 329 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 330 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen:
# 331 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich bitte um Entschuldigung,\n"
# 332 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "aber…\p"
# 333 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Deine Pokémon sind nicht\n"
# 334 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 335 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 336 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Pokémon.\p"
# 337 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 338 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "halten.\p"
# 339 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 340 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du so weit\n"
# 341 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "bist…$"
# 342 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 343 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons:
# 344 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte wähle 3 Pokémon, mit denen du dich\n"
# 345 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "der Herausforderung stellen möchtest.$"
# 346 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 347 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge:
# 348 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bevor du dich der Herausforderung\n"
# 349 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "stellst, muss ich dein Spiel speichern.\l"
# 350 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bist du damit einverstanden?$"
# 351 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 352 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_StepThisWay:
# 353 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte hier entlang.$"
# 354 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults:
# 356 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Deine Herausforderung endet hier…\p"
# 357 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 358 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte warten…$"
# 359 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance:
# 361 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du hast die Herausforderung\n"
# 362 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "gemeistert…\p"
# 363 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich muss schon sagen…\n"
# 364 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du hattest Glück im Übermaß…$"
# 365 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 366 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ShallRecordResults:
# 367 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 368 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Bitte warten…$"
# 369 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 370 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 371 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2:
# 372 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "To commemorate your completion of\n"
# 373 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "the Battle Choice challenge, we award\l"
# 374 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "you these Battle Point(s)…$"
# 375 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 377 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit:
# 378 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You appear to have reached the limit\n"
# 379 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for Battle Points…\p"
# 380 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please exchange some Battle Points\n"
# 381 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "for prizes, then return…$"
# 382 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 383 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting:
# 384 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich bitte um Entschuldigung,\n"
# 385 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "aber…\p"
# 386 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 387 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 388 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 389 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "rung disqualifiziert. Tut mir Leid!$"
# 390 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 391 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen:
# 392 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Herzlichen Glückwunsch!\p"
# 393 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du hast dir von der Pfipitistin den\n"
# 394 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Sieg geholt und die Herausforderung\l"
# 395 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "gemeistert!$"
# 396 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 397 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints:
# 398 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "In Anerkennung deines unglaublichen\n"
# 399 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Glücks erhältst du Gewinnpunkt(e).$"
# 400 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 401 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal:
# 402 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Argh! Ich habe meine Chance vertan!\n"
# 403 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich war nur noch einen Raum vom Ziel\p"
# 404 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "entfernt! Du musst hier auf Gift, Eis\n"
# 405 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "und andere gemeine Dinge achten!$"
# 406 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 407 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer:
# 408 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Ich habe die Herausforderung bereits\n"
# 409 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "zum 10. Mal gemeistert, trotzdem\p"
# 410 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "habe ich noch nie gegen einen\n"
# 411 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Trainer gekämpft.$"
# 412 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 413 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere:
# 414 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Überleg mal!\p"
# 415 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Meinst du nicht auch, dass die\n"
# 416 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "besonderen Fähigkeiten der Pokémon\l"
# 417 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "hier sehr nützlich sein können?$"
# 418 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
@ Unused
# 420 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose:
# 421 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "What is this weird place?\n"
# 422 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I can't figure it out at all!\p"
# 423 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I've taken the challenge a bunch\n"
# 424 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "of times, but all I ever do is run into\l"
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "TrainerS whichever path I choose.$"
# 426 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 427 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_RulesAreListed:
# 428 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Die Regeln der Kampfbahn hängen\n"
# 429 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "öffentlich aus.$"
# 430 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading:
# 432 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 433 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 434 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules:
# 435 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Beutel und Pokénav dürfen nicht\n"
# 436 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "auf die Kampfbahn mitgenommen werden.$"
# 437 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules:
# 439 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Auf der Kampfbahn ist jede\n"
# 440 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Beere und jedes Kraut nur einmal\l"
# 441 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "wirksam.$"
# 442 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules:
# 444 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Auf der Kampfbahn kann die\n"
# 445 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Reihenfolge der Pokémon nicht\l"
# 446 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "verändert werden.\p"
# 447 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Du musst die Reihenfolge festlegen,\n"
# 448 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "bevor du die Herausforderung annimmst.$"
