# 1 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_OnFrame
# 4 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 5 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 7 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused. Pyramid uses Dome's OnWarp (presumably by mistake). Their effects are identical
# 8 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnWarp:
# 9 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth
# 10 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 11 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 12 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TurnPlayerNorth:
# 13 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 15 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 17 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_OnFrame:
# 18 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus
# 19 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving
# 20 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge
# 21 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge
# 22 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge
# 23 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.2byte 0
# 24 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GetChallengeStatus::
# 26 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_getstatus
# 27 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 29 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving::
# 30 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 31 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
# 32 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 33 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 34 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 35 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 36 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
# 37 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 38 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 39 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 40 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 41 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 43 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge::
# 44 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 45 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_isbrain
# 46 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing
# 47 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints
# 49 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 50 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DefeatedKing::
# 51 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveBattlePoints::
# 53 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 54 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag
# 55 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 56 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 57 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 58 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 59 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 60 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 61 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
# 62 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 63 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 64 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 65 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_givepoints
# 67 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 68 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 69 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 70 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_setprize
# 71 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 72 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 73 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 74 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 75 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 76 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 77 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 78 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 79 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 80 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge::
# 81 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 82 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 83 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 84 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 85 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 86 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 87 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
# 88 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 89 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 90 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 91 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 92 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 93 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 94 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 95 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 96 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 97 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 99 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ResumeChallenge::
# 104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge
# 105 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 106 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Attendant::
# 107 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lock
# 108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	faceplayer
# 109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
# 110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 111 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge::
# 114 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
# 115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 116 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge
# 119 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge
# 120 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 121 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 122 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge::
# 124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
# 125 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 127 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 128 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkineligible
# 131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons
# 132 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 140 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 141 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 142 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case NO, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case YES, BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge
# 145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge
# 146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_SaveBeforeChallenge::
# 148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_init
# 151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
# 152 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_seedfloor
# 155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_settrainers
# 156 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	delay 2
# 159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 160 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed
# 162 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge::
# 163 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 167 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag
# 168 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 169 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 170 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
# 174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExplainChallenge::
# 177 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid, MSGBOX_DEFAULT
# 178 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge
# 179 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 180 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons::
# 181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 182 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50
# 183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen
# 184 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLv50::
# 186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMonsLvOpen::
# 192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge
# 196 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallengeSaveFailed::
# 198 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 199 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
# 200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_LoadPartyAndCancelChallenge::
# 202 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 203 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 204 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge::
# 205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EndCancelChallenge::
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	release
# 208 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGiver::
# 211 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 212 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_HINT_GIVER, Common_Movement_FacePlayer
# 213 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 214 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_GiveHint
# 216 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot, MSGBOX_DEFAULT
# 217 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 218 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 219 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHint::
# 221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50
# 224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen
# 225 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_NoHint
# 227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 228 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Shouldnt occur
# 230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_NoHint::
# 231 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 232 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50::
# 234 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
# 236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak
# 237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 239 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 240 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLv50Streak::
# 242 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
# 243 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 244 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 245 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 246 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen::
# 247 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
# 249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak
# 250 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 251 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 252 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 253 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintGetLvOpenStreak::
# 255 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
# 256 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
# 257 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 258 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 259 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment::
# 260 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 261 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special GetBattlePyramidHint
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_HintPoison
# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_HintBurn
# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility
# 269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_HintIce
# 270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion
# 271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic
# 272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_HintRock
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_HintFighting
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_HintWeather
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_HintBug
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_HintDark
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_HintWater
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_HintGhost
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_HintSteel
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon
# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve
# 282 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_HintNormal
# 283 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintParalysis::
# 286 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPoison::
# 290 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison, MSGBOX_DEFAULT
# 291 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBurn::
# 294 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn, MSGBOX_DEFAULT
# 295 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPPWaste::
# 298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste, MSGBOX_DEFAULT
# 299 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintLevitate::
# 302 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate, MSGBOX_DEFAULT
# 303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 305 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintTrapAbility::
# 306 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility, MSGBOX_DEFAULT
# 307 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 308 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintIce::
# 310 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintExplosion::
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion, MSGBOX_DEFAULT
# 315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 317 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintPsychic::
# 318 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic, MSGBOX_DEFAULT
# 319 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 320 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 321 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintRock::
# 322 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock, MSGBOX_DEFAULT
# 323 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 324 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 325 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFighting::
# 326 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting, MSGBOX_DEFAULT
# 327 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 328 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 329 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWeather::
# 330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather, MSGBOX_DEFAULT
# 331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintBug::
# 334 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug, MSGBOX_DEFAULT
# 335 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 336 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 337 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintDark::
# 338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark, MSGBOX_DEFAULT
# 339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintWater::
# 342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater, MSGBOX_DEFAULT
# 343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 344 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 345 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintGhost::
# 346 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost, MSGBOX_DEFAULT
# 347 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 348 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintSteel::
# 350 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 352 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintFlyingDragon::
# 354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon, MSGBOX_DEFAULT
# 355 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 356 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintStoneEvolve::
# 358 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve, MSGBOX_DEFAULT
# 359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HintNormal::
# 362 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal, MSGBOX_DEFAULT
# 363 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 364 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 365 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ShowResults::
# 366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PYRAMID
# 368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitbuttonpress
# 369 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special RemoveRecordsWindow
# 370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_WalkToPanelAndReceiveBag::
# 374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel
# 375 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel
# 376 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 377 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping, MSGBOX_DEFAULT
# 378 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK
# 379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag
# 380 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag, MSGBOX_DEFAULT
# 381 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag
# 382 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 383 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveNewBattleBag::
# 384 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag, MSGBOX_DEFAULT
# 385 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReceiveBattleBag::
# 386 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
# 387 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 388 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 389 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 390 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel, MSGBOX_DEFAULT
# 391 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 392 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside
# 393 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 394 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel
# 395 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 396 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 397 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 398 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantWalkToPanel:
# 399 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 400 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 401 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 402 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 403 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 404 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 405 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 406 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_down
# 407 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 408 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 409 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerWalkToPanel:
# 410 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 411 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 412 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 413 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 414 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 415 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 416 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 417 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 418 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 419 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_AttendantMoveAside:
# 420 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_right
# 421 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_left
# 422 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 423 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 424 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Movement_PlayerStepOnPanel:
# 425 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 426 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 427 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	step_end
# 428 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 429 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag::
# 430 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake, MSGBOX_DEFAULT
# 431 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 432 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special TryStoreHeldItemsInPyramidBag
# 433 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag
# 434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
# 435 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 436 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 437 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 438 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_HeldItemsStoredInPyramidBag::
# 440 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag, MSGBOX_DEFAULT
# 441 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 442 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ When exiting Battle Pyramid with a full pyramid bag and held items the player must select to keep/toss party held items and make room for any kept items by tossing from the pyramid bag
# 444 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep::
# 445 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
# 446 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 447 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag
# 448 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty
# 449 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 450 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
# 451 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 452 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 453 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag::
# 454 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChooseItemsToTossFromPyramidBag
# 455 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 456 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 457 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 458 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 459 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 460 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty::
# 461 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special BattlePyramidChooseMonHeldItems
# 462 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 463 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 464 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 465 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 466 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 467 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems::
# 468 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 469 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems
# 470 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	return
# 471 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 472 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_PartyStillHasHeldItems::
# 473 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem, MSGBOX_DEFAULT
# 474 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 475 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
# 477 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 478 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_Woman::
# 480 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning, MSGBOX_NPC
# 481 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 482 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 483 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_FatMan::
# 484 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems, MSGBOX_NPC
# 485 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard::
# 488 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 489 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 490 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 492 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard::
# 494 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading
# 495 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
# 497 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 498 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon
# 499 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers
# 500 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze
# 501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_RulesBag
# 502 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 503 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ExitRules
# 504 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 505 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesPokemon::
# 507 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 508 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 509 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 510 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 511 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesTrainers::
# 512 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules, MSGBOX_DEFAULT
# 513 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 514 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 515 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 516 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesMaze::
# 517 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules, MSGBOX_DEFAULT
# 518 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 519 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 520 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 521 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_RulesBag::
# 522 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules, MSGBOX_DEFAULT
# 523 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
# 524 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 526 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_ExitRules::
# 527 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
# 528 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	end
# 529 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 530 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid:
# 531 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Hier wird der Mut der Trainer\n"
# 532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "auf die Probe gestellt!\p"
# 533 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Willkommen in der Kampfpyramide!\p"
# 534 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich begleite dich bei deinen\n"
# 535 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Herausforderungen.$"
# 536 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 537 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge:
# 538 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Besitzt du den Mut, dich der Kampf-\n"
# 539 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "forschung-Herausforderung zu stellen?$"
# 540 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 541 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge:
# 542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 543 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Herausforderung.$"
# 544 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 545 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid:
# 546 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In der Kampfforschung musst du die\n"
# 547 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kampfpyramide erforschen und\l"
# 548 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "versuchen, bis nach oben zu gelangen.\p"
# 549 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kämpfe dich durch sieben Etagen, die\n"
# 550 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "wie Irrgärten angelegt sind. Trainer\l"
# 551 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "und auch wilde Pokémon warten auf dich.\p"
# 552 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Auf deinem Weg dürfen dich drei Pokémon\n"
# 553 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "begleiten, von denen keines ein Item\l"
# 554 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "halten darf.\p"
# 555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Für den Aufstieg erhältst du einen\n"
# 556 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Pyrabeutel, in dem du Items verstauen\l"
# 557 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "kannst.\p"
# 558 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bestehst du die Herausforderung nicht,\n"
# 559 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "werden dir die Items im Pyrabeutel\l"
# 560 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "abgenommen.\p"
# 561 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Möchtest du die Herausforderung\n"
# 562 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "abbrechen, wähle Ausruhen und\l"
# 563 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "speichere dann das Spiel.\p"
# 564 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wenn du die Herausforderung ohne\n"
# 565 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Speichern abbrichst, wirst du\l"
# 566 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "disqualifiziert.$"
# 567 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 568 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode:
# 569 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In der Kampfpyramide wird in zwei\n"
# 570 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kategorien gekämpft: Lv. 50 und Offene\l"
# 571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kämpfe. Wofür entscheidest du dich?$"
# 572 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 573 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons:
# 574 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wunderbar! Nun wähle die drei\n"
# 575 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Pokémon aus, die dich begleiten sollen.$"
# 576 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 577 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen:
# 578 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wir haben da ein kleines Problem…\p"
# 579 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Deine drei Pokémon sind nicht\n"
# 580 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 581 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Keines von ihnen darf ein Item\n"
# 582 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "halten.\p"
# 583 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 584 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du so weit bist.$"
# 585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50:
# 587 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wir haben da ein kleines Problem…\p"
# 588 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Deine drei Pokémon sind nicht\n"
# 589 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 590 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Du brauchst Pokémon von Level 50\n"
# 591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "oder weniger.\p"
# 592 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Keines von ihnen darf ein Item\n"
# 593 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "halten.\p"
# 594 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 595 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du so weit bist.$"
# 596 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 597 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd:
# 598 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du so weit bist.$"
# 599 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 600 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge:
# 601 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bevor du die Kampfpyramide betrittst,\n"
# 602 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 603 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid:
# 605 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Sehr gut. Nun werde ich dich zur\n"
# 606 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kampfpyramide bringen.$"
# 607 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping:
# 609 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wir werden deinen Beutel sicher\n"
# 610 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "für dich aufbewahren, {PLAYER}.$"
# 611 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 612 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag:
# 613 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte nimm diesen Pyrabeutel.$"
# 614 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 615 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag:
# 616 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte nimm diesen Pyrabeutel.$"
# 617 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 618 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag:
# 619 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} tauscht den Beutel gegen\n"
# 620 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "den Pyrabeutel.$"
# 621 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 622 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel:
# 623 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Stellst du dich auf diese Bodenplatte,\n"
# 624 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gelangst du auf die nächste Ebene der\l"
# 625 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kampfpyramide.\p"
# 626 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich hoffe, du überstehst das Abenteuer\n"
# 627 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "unbeschadet.$"
# 628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 629 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag:
# 630 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Da haben wir aber ein heftiges Problem!\p"
# 631 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 632 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 633 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 634 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "rung disqualifiziert. Schade!\p"
# 635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Hier hast du deinen Beutel zurück.\p"
# 636 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} hat den Beutel erhalten.$"
# 637 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 638 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid:
# 639 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Schön, dich wiederzusehen!\p"
# 640 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Du hast die Kampfpyramide erobert!\n"
# 641 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Hervorragend, hervorragend!$"
# 642 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake:
# 644 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Äh, wir haben da ein kleines Problem.\p"
# 645 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Eines deiner Pokémon hält ein Item.\n"
# 646 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bedauerlicherweise können Items, die\p"
# 647 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "du in der Kampfpyramide erhalten hast,\n"
# 648 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "nicht behalten werden.$"
# 649 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 650 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag:
# 651 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Alle Items, die von deinen Pokémon\n"
# 652 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gehalten werden, werden im Pyrabeutel\l"
# 653 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "verstaut, {PLAYER}.$"
# 654 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 655 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep:
# 656 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Tut mir Leid, aber in deinem Pyrabeutel\n"
# 657 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "ist nicht genug Platz für alle Items.\p"
# 658 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte such dir die Items aus, die du\n"
# 659 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "mitnehmen möchtest.$"
# 660 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 661 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem:
# 662 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Eines deiner Pokémon hält immer noch\n"
# 663 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "ein Item.$"
# 664 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 665 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep:
# 666 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte such dir die Items aus, die du\n"
# 667 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "mitnehmen möchtest.$"
# 668 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 669 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 670 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld:
# 671 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} gab allee getragenen\n"
# 672 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Items zurück.$"
# 673 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 674 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept:
# 675 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Dein Pyrabeutel wird hier von uns\n"
# 676 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "aufbewahrt. Wenn du das nächste Mal\p"
# 677 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "antrittst, bekommst du ihn wieder.\n"
# 678 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} tauscht den Pyrabeutel gegen\l"
# 679 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "den Beutel ein.$"
# 680 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 681 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait:
# 682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 683 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Bitte warten.$"
# 684 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 685 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 686 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis:
# 687 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Als Erinnerung für deinen Sieg\n"
# 688 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "in der Kampfpyramide, für dich.$"
# 689 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 691 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem:
# 692 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} erhält den Preis\n"
# 693 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 694 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 695 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 696 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BagIsFull:
# 697 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…Ah…\n"
# 698 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Dein Beutel scheint voll zu sein.\p"
# 699 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Komm wieder, wennn du Platz\n"
# 700 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gemacht hast.$"
# 701 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 702 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag:
# 703 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Das muss für dich enttäuschend sein…\p"
# 704 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Hier ist dein Beutel.\p"
# 705 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} bekommt den Beutel zurück.$"
# 706 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 707 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge:
# 708 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 709 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Herausforderung.$"
# 710 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 711 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
@ Unused
# 712 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize:
# 713 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wir haben auf dich gewartet\p"
# 714 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Für deinen Sieg in der Pyramide!$"
# 715 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 716 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait:
# 717 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Willkommen…\n"
# 718 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich freue mich darauf, dir zu erklären,\p"
# 719 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "welche Schwierigkeiten dich in der\n"
# 720 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Kampfpyramide erwarten…$"
# 721 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 722 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_Aah:
# 723 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 724 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\p"
# 725 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
# 726 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Aah!$"
# 727 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 728 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintParalysis:
# 729 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe einen Funkenflug…\p"
# 730 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und in diesem sehe ich deine Pokémon\n"
# 731 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gegen Paralyse ankämpfen…$"
# 732 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 733 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPoison:
# 734 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Gift…\p"
# 735 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe, wie deine Pokémon unter\n"
# 736 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "der Wirkung des Gifts leiden…$"
# 737 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 738 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBurn:
# 739 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe helle, rote Flammen…\p"
# 740 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe, wie deine Pokémon sich\n"
# 741 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gegen Verbrennungen wehren…$"
# 742 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 743 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPPWaste:
# 744 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich spüre den enormen Druck\n"
# 745 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "aufgestauter Wut…\p"
# 746 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Es ist ein Fluch…\p"
# 747 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe, wie deinen Pokémon KP\n"
# 748 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "entzogen werden und sie keine Kraft\l"
# 749 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "haben, Verzweifler anzuwenden…$"
# 750 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintLevitate:
# 752 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe schwebende Pokémon…\p"
# 753 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die\n"
# 754 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "frustriert wirkungslose Boden-\l"
# 755 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Attacken anwenden…$"
# 756 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 757 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility:
# 758 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Energie vom Grund aufsteigen…\p"
# 759 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon in der\n"
# 760 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Umklammerung dieser Energie…$"
# 761 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 762 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintIce:
# 763 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Pokémon und die Kälte des\n"
# 764 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Eises…\p"
# 765 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe, wie deine Pokémon sich\n"
# 766 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gegen die Kälte der Attacken wehren…$"
# 767 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 768 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintExplosion:
# 769 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe einen Orkan von Attacken, die\n"
# 770 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "den Anwender gefährden…\p"
# 771 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die\n"
# 772 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "ihm zum Opfer fallen…$"
# 773 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 774 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintPsychic:
# 775 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Psycho-Pokémon…\p"
# 776 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 777 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "den Psycho-Attacken leiden…$"
# 778 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 779 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintRock:
# 780 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Gestein-Pokémon…\p"
# 781 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 782 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "den Gestein-Attacken leiden…$"
# 783 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 784 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFighting:
# 785 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Kampf-Pokémon…\p"
# 786 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 787 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "den Kampf-Attacken leiden…$"
# 788 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 789 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWeather:
# 790 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Regentanz… Sonnentag…\n"
# 791 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Sandsturm… Hagelsturm…\p"
# 792 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Pokémon, die mit dem Wetter\n"
# 793 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "stärker werden…\p"
# 794 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe deine Pokémon, verwirrt durch\n"
# 795 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "die verschiedenen Attacken-Arten…$"
# 796 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 797 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintBug:
# 798 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Käfer-Pokémon…\p"
# 799 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 800 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "verschiedenen Attacken leiden…$"
# 801 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 802 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintDark:
# 803 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Unlicht-Pokémon…\p"
# 804 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 805 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Unlicht-Attacken leiden…$"
# 806 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 807 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintWater:
# 808 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Wasser-Pokémon…\p"
# 809 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 810 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wasser-Attacken leiden…$"
# 811 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 812 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintGhost:
# 813 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Geist-Pokémon…\p"
# 814 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 815 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Geist-Attacken leiden…$"
# 816 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 817 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintSteel:
# 818 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Stahl-Pokémon…\p"
# 819 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 820 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "enorm starken Attacken leiden…$"
# 821 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 822 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon:
# 823 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe fliegende Pokémon…\p"
# 824 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 825 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "enorm starken Attacken leiden…$"
# 826 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 827 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve:
# 828 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe die, die durch die Kraft von\n"
# 829 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Steinen entwickelt wurden…\p"
# 830 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich spüre Feuer, Wasser und\n"
# 831 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Elektrizität…\p"
# 832 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, wie sie\n"
# 833 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "unter diesen Kräften leiden…$"
# 834 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 835 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_HintNormal:
# 836 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich sehe Normal-Pokémon…\p"
# 837 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Und ich sehe deine Pokémon, die unter\n"
# 838 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "enorm starken Attacken leiden…$"
# 839 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 840 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot:
# 841 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ob du meinem Orakel Glauben schenkst\n"
# 842 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "oder nicht, liegt allein bei dir…\p"
# 843 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Die Zukunft lässt sich stets ändern…\n"
# 844 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich wünsche dir einen sicheren Weg…$"
# 845 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 846 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning:
# 847 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wusstest du das nicht?\p"
# 848 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wenn du schnell rennst, werden Trainer\n"
# 849 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "auf dich aufmerksam und fordern dich\p"
# 850 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "heraus. Wenn du ihnen aus dem Weg gehen\n"
# 851 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "willst, schau ihnen nicht in die Augen\l"
# 852 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "und schleich an ihnen vorbei.$"
# 853 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 854 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems:
# 855 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!\p"
# 856 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ich hatte so viele Items, und nun\n"
# 857 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "habe ich alle verloren, weil ich verloren\l"
# 858 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "habe!\p"
# 859 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!$"
# 860 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 861 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing:
# 862 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Willkommen zurück!\n"
# 863 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Dir ist das Undenkbare gelungen!\p"
# 864 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Du hast den Pyrakönig besiegt\n"
# 865 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "und die Kampfpyramide erobert!$"
# 866 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 867 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints:
# 868 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Junger Forschergeist!\n"
# 869 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In Anerkennung deines Mutes\l"
# 870 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "geben wir dir Gewinnpunkt(e).$"
# 871 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 872 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_RulesAreListed:
# 873 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Die Regeln der Kampfforschung hängen\n"
# 874 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "öffentlich aus.$"
# 875 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 876 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading:
# 877 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 878 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 879 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules:
# 880 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wurde die Kampfpyramide erobert,\n"
# 881 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "werden die wilden Pokémon in ihr\l"
# 882 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "gegen andere ausgetauscht.\p"
# 883 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Untersuche, beobachte und erfahre,\n"
# 884 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "welche wilden Pokémon auf dich warten.$"
# 885 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 886 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules:
# 887 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Im Inneren der Kampfpyramide liegen\n"
# 888 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Trainer auf der Lauer und warten\l"
# 889 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "auf dich.\p"
# 890 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Auf jeder Ebene können sich bis zu acht\n"
# 891 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Trainer befinden.\p"
# 892 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Besiegst du einen von ihnen, bekommst\n"
# 893 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "du wertvolle Hinweise mit auf den Weg.$"
# 894 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 895 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules:
# 896 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Die Labyrinthe in der Kampfpyramide\n"
# 897 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "ändern sich ständig. Jedes Mal, wenn\p"
# 898 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "du sie erneut betrittst, sehen sie\n"
# 899 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "anders aus.\l"
# 900 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Die Beleuchtung ist spärlich, daher sei\p"
# 901 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "vorsichtig. Hast du ein wildes PKMN oder\n"
# 902 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "einen Trainer besiegt, wird es heller.$"
# 903 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"

# 904 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules:
# 905 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Wenn du in der Kampfpyramide\n"
# 906 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "unterwegs bist, dient der Pyrabeutel\l"
# 907 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "dir als Beutel.\p"
# 908 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Es gibt zwei verschiedene Pyrabeutel:\n"
# 909 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Einen für das Abenteuer Level 50 und\l"
# 910 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "einen für das Abenteuer Offene Kämpfe.\p"
# 911 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In ihnen kannst du 10 Items in einer\n"
# 912 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "maximalen Anzahl von 99 Stück pro\l"
# 913 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Item verstauen.\p"
# 914 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Scheiterst du, ist der Inhalt des\n"
# 915 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Pyrabeutels verloren.$"
