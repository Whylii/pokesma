# 1 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_OnResume
# 4 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_OnTransition
# 5 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnResume:
# 10 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryHideBattleTowerReporter
# 11 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnTransition:
# 14 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowOrHideReporter
# 15 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_shouldcheckgone
# 16 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice  @ VAR_0x8004 always TRUE here
# 17 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_EventScript_HideApprentice
# 18 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowApprentice::
# 19 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_HIDE_APPRENTICE
# 20 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_setgfx
# 21 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice::
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 24 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_HideApprentice::
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 26 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndShowOrHideApprentice
# 27 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 28 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnWarp:
# 29 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth
# 30 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 31 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 32 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_PlayerFaceNorth::
# 33 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 35 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 37 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_OnFrame:
# 38 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus
# 39 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleTowerLobby_EventScript_WonChallenge
# 42 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge
# 43 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.2byte 0
# 44 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 45 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetChallengeStatus::
# 46 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_getstatus
# 47 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 48 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::
# 50 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 51 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 54 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK, 0
# 55 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 56 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 57 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 59 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 60 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 61 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::
# 62 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 63 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 64 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_isbrain
# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons
# 69 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DefeatedMaiden::
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveRibbons::
# 73 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_giveribbons
# 74 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints
# 75 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitfanfare
# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GiveBattlePoints::
# 81 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_givepoints
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 85 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 86 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 49, BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge
# 87 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer, MSGBOX_DEFAULT
# 88 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LookForwardToChallenge::
# 89 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 90 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 91 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 93 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 94 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 95 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 96 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak
# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying
# 101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelWinStreak::
# 102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LostThanksForPlaying::
# 104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkairshow
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special HealPlayerParty
# 122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_EventScript_SaveBattle
# 133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_SaveBattle::
# 136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_savebattle
# 137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_EventScript_BattleSaveFailed
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle
# 141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_BattleSaveFailed::
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndSaveBattle::
# 145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetCantRecordBattle::
# 148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::
# 152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn
# 155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
# 156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetBravoTrainerOn::
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
# 171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeSinglesChallenge::
# 212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainSinglesChallenge::
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeDoublesChallenge::
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainDoublesChallenge::
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
# 309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge
# 310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeMultisChallenge::
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainMultisChallenge::
# 356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case NO, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case YES, BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
# 411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
# 412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 2. If the player tries to connect, but fails, the counter will still be incremented even if the player never enters the tower.
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost
# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsBattleNow::
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsIWon::
# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsILost::
# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	faceplayer
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings
# 471 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FeelingsWontTell::
# 474 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
# 475 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 478 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CheckFeelings::
# 479 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat
# 480 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CanceledEasyChat::
# 484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
# 485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SubmittedFeelings::
# 489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
# 490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
# 499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 534 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 535 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50
# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen
# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50::
# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 540 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles
# 541 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles
# 542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 547 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Singles::
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 552 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 553 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLv50Doubles::
# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpen::
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
# 567 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenSingles::
# 573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMonsLvOpenDoubles::
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS  @ No status provided, so it relies on VAR_0x8006 being 0 already
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EndCancelChallenge::
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetPartySize
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_ne VAR_RESULT, 6, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom
# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToBattleRoom::
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_BufferModeText
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom
# 621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
# 622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator
# 623 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ShowYouToLinkMultiBattleRoom::
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 627 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WalkToElevator::
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo
# 631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord
# 632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_WalkToElevator
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_WalkToElevator:
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 646 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_AttendantEnterElevator:
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 655 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_PlayerEnterElevator:
# 656 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_fast_up
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	step_end
# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferModeText::
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble
# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti
# 675 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti
# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextSingle::
# 679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextDouble::
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextMulti::
# 687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_BufferTextLinkMulti::
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 692 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 693 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SetAttendantTalkedTo::
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant
# 696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant
# 697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant
# 698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant
# 699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToSinglesAttendant::
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_SINGLES
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToDoublesAttendant::
# 706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_DOUBLES
# 707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToMultisAttendant::
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_MULTIS
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TalkedToLinkMultisAttendant::
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_LINK_MULTIS
# 715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoord::
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles
# 720 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis
# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordSingles::
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordDoubles::
# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 732 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordMultis::
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoorXCoordLinkMultis::
# 737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetPartySize::
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize
# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize
# 744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize
# 745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetSinglesPartySize::
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 749 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 750 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetDoublesPartySize::
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetMultisPartySize::
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_GetLinkMultisPartySize::
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_EventScript_GetLvlMode::
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 769 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 770 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 772 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 773 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
# 774 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
# 775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
# 776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
# 777 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 778 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
# 779 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 781 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 782 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 783 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 784 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_0x8005, 3, BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
# 786 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 787 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 788 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 789 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendDifferentSelection::
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 791 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 792 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 794 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 795 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 796 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 797 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
# 799 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 801 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 802 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 803 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 804 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 0, BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode
# 805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 1, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon
# 806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call_if_eq VAR_0x8005, 2, BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons
# 807 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
# 808 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 809 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 810 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendChoseDifferentLvlMode::
# 812 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 814 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 815 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMon::
# 816 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
# 817 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_FriendAlsoSelectedMons::
# 820 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
# 821 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 822 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 823 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 825 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 826 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 827 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 828 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 831 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 832 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 833 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 834 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 836 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExplainLinkMultisChallenge::
# 837 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 838 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
# 839 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 841 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 842 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 843 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 844 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 845 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 847 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 848 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 849 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 850 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 852 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 854 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
# 855 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 856 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 857 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 859 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 860 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 861 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
# 862 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 864 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 865 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 866 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 868 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 869 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
# 870 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
# 871 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_AbortLink
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
# 873 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	return
# 874 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 875 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 876 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 878 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 879 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 880 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 881 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 883 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 884 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
# 885 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 886 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 888 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 889 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 890 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 891 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 893 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 894 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 895 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 896 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 898 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_RulesTower
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_RulesMons
# 900 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_RulesSalon
# 901 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink
# 902 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 903 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ExitRules
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 905 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 906 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesTower::
# 907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
# 908 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 909 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 910 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 911 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMons::
# 912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
# 913 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 914 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 915 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 916 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesSalon::
# 917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
# 918 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 919 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 920 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 921 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_RulesMultiLink::
# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
# 923 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
# 924 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 925 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 926 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_ExitRules::
# 927 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
# 928 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end
# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 930 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 931 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom:
# 932 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich führe dich nun zum Kampfraum.$"
# 933 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting:
# 935 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 936 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du hast, bevor du die Herausforderung\n"
# 937 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "abgebrochen hast, nicht gespeichert.\p"
# 938 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Daher wirst du für diese Herausforde-\n"
# 939 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "rung disqualifiziert. Schade!$"
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 941 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven:
# 942 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Herzlichen Glückwunsch!\n"
# 943 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Alle 7 Trainer wurden besiegt!\p"
# 944 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 946 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 947 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize:
# 948 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Für deinen Sieg über sieben Trainer,\n"
# 949 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "erhälst du diesen tollen Preis!\p"
# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 951 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReceivedPrize:
# 953 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} gewinnt\n"
# 954 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 955 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 956 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom:
# 958 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, dein Beutel ist voll.\p"
# 959 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Komm wieder, wenn du etwas\n"
# 960 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Platz gemacht hast.$"
# 961 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying:
# 963 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Vielen Dank für die Teilnahme!\p"
# 964 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 965 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 966 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved:
# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Erfolg wird gespeichert.\n"
# 968 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte warten…$"
# 969 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 970 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou:
# 971 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wir haben schon auf dich gewartet!\p"
# 972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "$"
# 973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 974 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved:
# 975 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bevor du einen Kampfraum betrittst,\n"
# 976 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "wird dein Spiel gespeichert.\l"
# 977 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte warten…$"
# 978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 979 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer:
# 980 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Und nun wartet der 50. Trainer auf\n"
# 981 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "deine Herausforderung.\p"
# 982 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes Mal, wenn ein Pokémon von jetzt an 7\n"
# 983 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Trainer in Folge besiegt, wird ihm\l"
# 984 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ein Band verliehen.\p"
# 985 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Viel Glück!$"
# 986 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons:
# 988 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dies sind einige Bänder für den erfolg-\n"
# 989 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "reichen Kampf gegen 7 Trainer in Folge.\p"
# 990 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} erhält einige Bänder!$"
# 991 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons:
# 993 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} steckt den herausfordernden\n"
# 994 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon die Bänder an.$"
# 995 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 996 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower:
# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung, aber hast du einen\n"
# 998 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Moment Zeit?\p"
# 999 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kannst du mir beschreiben, wie das ist,\n"
# 1000 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "wenn man kurz vor einem Kampf im\p"
# 1001 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Duellturm steht? Und wie ist das,\n"
# 1002 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "wenn du einen Kampf gewonnen oder\l"
# 1003 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "verloren hast?$"
# 1004 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1005 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin:
# 1006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Was geht dir durch den Kopf, wenn du\n"
# 1007 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kurz vor einem Kampf stehst?$"
# 1008 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1009 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon:
# 1010 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Was ist das für ein Gefühl, wenn du\n"
# 1011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "einen Kampf gewonnen hast?$"
# 1012 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1013 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost:
# 1014 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Was ist es für ein Gefühl, wenn du\n"
# 1015 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "einen Kampf verloren hast?$"
# 1016 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1017 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt:
# 1018 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ach, so viel denkst du gar nicht darüber\n"
# 1019 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "nach? Bist du aber cool!$"
# 1020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1021 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChangedYourMind:
# 1022 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wie? Du hast deine Meinung geändert?\n"
# 1023 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Meine Güte, bist du aber launisch!$"
# 1024 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel:
# 1026 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ach? So fühlst du dich? Das ist\n"
# 1027 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "aber eine originelle Beschreibung.\p"
# 1028 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Danke!$"
# 1029 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1030 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded:
# 1031 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Die Anzahl der Kämpfe, die man in Folge\n"
# 1032 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "gewonnen hat, ist hier verzeichnet.\p"
# 1033 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich darf nicht verlieren, das wäre ja\n"
# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ultrapeinlich!$"
# 1035 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1036 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins:
# 1037 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Sobald du den Duellturm offiziell be-\n"
# 1038 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "treten hast, kannst du ihn nicht eher\l"
# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "verlassen, bis du gegen 7 Trainer\l"
# 1040 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "entweder verloren oder gewonnen hast.\p"
# 1041 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Überlege also gut, bevor du als\n"
# 1042 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Herausforderer antrittst.$"
# 1043 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1044 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1045 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction:
# 1046 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willkommen zur Doppelkampf-Ecke\n"
# 1047 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "des Kampfturms!\p"
# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Leider sind die Kampfräume noch\n"
# 1049 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "im Umbau.\p"
# 1050 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn\n"
# 1051 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "die Arbeiten abgeschlossen sind.$"
# 1052 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1054 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction:
# 1055 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willkommen zur Multikampf-Ecke\n"
# 1056 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "des Kampfturms!\p"
# 1057 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Leider sind die Kampfräume noch\n"
# 1058 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "im Umbau.\p"
# 1059 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn\n"
# 1060 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "die Arbeiten abgeschlossen sind.$"
# 1061 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge:
# 1063 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wir freuen uns auf deine nächste\n"
# 1064 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Herausforderung.$"
# 1065 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1066 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WhichLevelMode:
# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Im Kampfraum wird in zwei\n"
# 1068 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Stufen gekämpft: Lv. 50 und Offene\l"
# 1069 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kämpfe. Wofür entscheidest du dich?$"
# 1070 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1071 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1072 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons:
# 1073 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle die Pokémon aus, die\n"
# 1074 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "antreten sollen.$"
# 1075 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering:
# 1077 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bevor du einen Kampfraum betrittst,\n"
# 1078 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "musst du dein Spiel speichern. Okay?$"
# 1079 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1080 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom:
# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich werde dir jetzt den {STR_VAR_1}-\n"
# 1082 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kampfraum zeigen.$"
# 1083 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1084 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RecordLastMatch:
# 1085 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Soll ich deinen letzten Duellturm-\n"
# 1086 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kampf im Kampfzonenpass eintragen?$"
# 1087 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1088 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1089 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50:
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldige!\p"
# 1091 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du hast keine {STR_VAR_2} erlaubten\n"
# 1092 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 1093 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1094 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.$"
# 1096 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd:
# 1098 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1099 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1101 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen:
# 1102 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldige!\p"
# 1103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du hast keine {STR_VAR_2} erlaubten\n"
# 1104 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon.\p"
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.$"
# 1108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles:
# 1110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 1111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 1112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 1113 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 1114 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 1115 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1116 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 1118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles:
# 1121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 1122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 1123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 1124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du brauchst drei verschiedene\n"
# 1125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon.\p"
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 1129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles:
# 1132 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 1133 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 1134 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 1135 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du brauchst vier verschiedene\n"
# 1136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 1137 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 1140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles:
# 1143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 1144 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 1145 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du brauchst vier verschiedene\n"
# 1147 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon.\p"
# 1148 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis:
# 1154 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 1155 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 1156 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 1157 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du brauchst zwei verschiedene\n"
# 1158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon von Level 50 oder weniger.\p"
# 1159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 1162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis:
# 1165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Entschuldigung!\p"
# 1166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Aber deine Pokémon sind nicht\n"
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "teilnahmeberechtigt.\p"
# 1168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du brauchst zwei verschiedene\n"
# 1169 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon.\p"
# 1170 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jedes muss außerdem ein anderes Item\n"
# 1171 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "halten.\p"
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Eier{STR_VAR_1} nicht zugelassen.\p"
# 1173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte komm wieder, wenn du bereit bist.$"
# 1174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle:
# 1176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hier werden die Talente der Trainer\n"
# 1177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "auf die Probe gestellt.\p"
# 1178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willkommen im Duellturm!\p"
# 1179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich erkläre dir die Kampfräume für\n"
# 1180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "den Einzelkampf.$"
# 1181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge:
# 1183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Möchtest du dich den Herausforde-\n"
# 1184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "rungen im Einzelkampf stellen?$"
# 1185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge:
# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In den Kampfräumen für Einzelkämpfe\n"
# 1188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "des Duellturms werden Einzelkämpfe\l"
# 1189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "mit drei Pokémon ausgetragen.\p"
# 1190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Es gibt aber auch viele Räume für\n"
# 1191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Einzelkämpfe im Duellturm, in denen\l"
# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Teamkämpfe ausgetragen werden.\p"
# 1193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In jedem dieser Räume warten sieben\n"
# 1194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Trainer auf deine Herausforderung.\p"
# 1195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Schaffst du es, alle sieben zu besiegen,\n"
# 1196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "erhältst du Gewinnpunkte.\p"
# 1197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willst du den Kampf unterbrechen,\n"
# 1198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "speicher bitte dein Spiel.\p"
# 1199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Speicherst du es nicht, wirst du\n"
# 1200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "disqualifiziert.$"
# 1201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SelectThreeMons:
# 1203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle drei Pokémon aus, die\n"
# 1204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "antreten sollen.$"
# 1205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle:
# 1207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hier werden die Fähigkeiten der Trainer\n"
# 1208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "auf die Probe gestellt.\p"
# 1209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willkommen im Duellturm!\p"
# 1210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich erkläre dir die Räume für den\n"
# 1211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Doppelkampf.$"
# 1212 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge:
# 1214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 1215 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "im Doppelkampf stellen?$"
# 1216 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1217 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge:
# 1218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In den Kampfräumen für Doppelkämpfe\n"
# 1219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "des Duellturms werden Doppelkämpfe\l"
# 1220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "mit vier Pokémon ausgetragen.\p"
# 1221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Es gibt aber auch viele Doppelkampf-\n"
# 1222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Räume im Duellturm, in denen Team-\l"
# 1223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kämpfe ausgetragen werden.\p"
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In jedem dieser Räume warten sieben\n"
# 1225 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Trainer auf deine Herausforderung.\p"
# 1226 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Schaffst du es, alle sieben zu besiegen,\n"
# 1227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "erhältst du Gewinnpunkte.\p"
# 1228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willst du den Kampf unterbrechen,\n"
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "speicher bitte dein Spiel.\p"
# 1230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Speicherst du es nicht, wirst du\n"
# 1231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "disqualifiziert.$"
# 1232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons:
# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle vier Pokémon aus, die\n"
# 1235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "antreten sollen.$"
# 1236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle:
# 1238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hier werden die Fähigkeiten der Trainer\n"
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "auf die Probe gestellt.\p"
# 1240 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willkommen im Duellturm!\p"
# 1241 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich erkläre dir die Kampfräume für den\n"
# 1242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multikampf.$"
# 1243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge:
# 1245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 1246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "im Multikampf stellen?$"
# 1247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge:
# 1249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In den Multikampf-Räumen des Duell-\n"
# 1250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "turms werden Multikämpfe ausgetragen.\p"
# 1251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Um an einem Multikampf teilnehmen\n"
# 1252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "zu können, musst du dich mit einem\l"
# 1253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Trainer im Turm zusammentun.\p"
# 1254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Jeder von euch geht mit zwei Pokémon\n"
# 1255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in den Kampf.\p"
# 1256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Im Turm gibt es eine Teamlounge,\n"
# 1257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "hier triffst du andere Trainer.\p"
# 1258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Finde einen Partner, der mit dir an einem\n"
# 1259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multikampf teilnimmt.\p"
# 1260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hast du einen Partner gefunden, kannst\n"
# 1261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "du in den Multikampf-Raum gehen.\p"
# 1262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hier warten sieben Teams auf euch.\p"
# 1263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Schafft ihr es, alle sieben zu besiegen,\n"
# 1264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "erhältst du Gewinnpunkte.\p"
# 1265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willst du den Kampf unterbrechen,\n"
# 1266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "speicher bitte dein Spiel.\p"
# 1267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Speicherst du es nicht, wirst du\n"
# 1268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "disqualifiziert.$"
# 1269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons:
# 1271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle zwei Pokémon aus, die\n"
# 1272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "antreten sollen.$"
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle:
# 1275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hier werden die Fähigkeiten der Trainer\n"
# 1276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "auf die Probe gestellt.\p"
# 1277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Willkommen im Duellturm!\p"
# 1278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Ich erkläre dir die Räume für den\n"
# 1279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Link-Multikampf.$"
# 1280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge:
# 1282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Möchtest du dich der Herausforderung\n"
# 1283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "im Link-Multikampf stellen?$"
# 1284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1285 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge:
# 1286 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In den Räumen der Multikämpfe des\n"
# 1287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Duellturms werden Multikämpfe\l"
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "mit Freunden ausgetragen.\p"
# 1289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Um an einem Multikampf teilnehmen zu\n"
# 1290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "können, musst du über den Wireless\l"
# 1291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Adapter oder das Game Boy Advance\p"
# 1292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Game Link-Kabel eine Verbindung\n"
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "zu deinem Freund aufbauen.\p"
# 1294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bilde mit deinem Freund ein Team und\n"
# 1295 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "geht mit zwei verschiedenen Pokémon\l"
# 1296 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in den Kampf.\p"
# 1297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Im Duellturm gibt es viele\n"
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multikampf-Räume, in denen Team-\p"
# 1299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kämpfe stattfinden können. In diesen\n"
# 1300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Räumen warten sieben Teams auf euch.\p"
# 1301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Schafft ihr es, alle sieben zu besiegen,\n"
# 1302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "erhältst du Gewinnpunkte.\p"
# 1303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Anders als in den anderen Räumen,\n"
# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "kannst du den Kampf diesmal nicht\p"
# 1305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "unterbrechen! Sobald der Kampf\n"
# 1306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "begonnen hat, musst du sieben Mal\l"
# 1307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "in Folge kämpfen.$"
# 1308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2:
# 1310 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle zwei Pokémon aus, die\n"
# 1311 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "antreten sollen.$"
# 1312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend:
# 1315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du hast die gleiche Art Pokémon\n"
# 1316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "gewählt wie dein Freund.\p"
# 1317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle zwei unterschiedliche Pokémon,\n"
# 1318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "wähle das Level, und\l"
# 1319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "registriere dich erneut.$"
# 1320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers:
# 1322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Der Link-Multikampf-Raum ist nur für\n"
# 1323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "2 Spieler, die ihre Systeme verbinden.$"
# 1324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon:
# 1326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Freund hat sich ebenfalls für das\n"
# 1327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon {STR_VAR_1} entschieden.$"
# 1328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons:
# 1330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Freund hat auch die Pokémon\n"
# 1331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1} und {STR_VAR_2} gewählt.$"
# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode:
# 1334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Freund hat eine andere\n"
# 1335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kampfkategorie gewählt.$"
# 1336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon:
# 1339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Freund hat ein anderes Level\n"
# 1340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ausgewählt.\p"
# 1341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Außerdem wurde das Pokémon\n"
# 1342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1} doppelt gewählt.$"
# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ Unused
# 1345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons:
# 1346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Freund hat ein anderes Level\n"
# 1347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ausgewählt.\p"
# 1348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Außerdem wurde die Pokémon\n"
# 1349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{STR_VAR_1} und {STR_VAR_2} doppelt gewählt.$"
# 1350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode:
# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bitte wähle zwei andere Pokémon aus, damit\n"
# 1353 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "ihr unterschiedliche habt. Wählt eine\l"
# 1354 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kategorie und meldet euch erneut an.$"
# 1355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn:
# 1357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bevor du den Kampf beginnst, wird dein\n"
# 1358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Spiel gespeichert. Bitte warten.$"
# 1359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden:
# 1361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Herzlichen Glückwunsch!\n"
# 1362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du hast den Kampfkoloss und\l"
# 1363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "sieben Trainer in Folge besiegt!$"
# 1364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1365 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints:
# 1366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In Anerkennung deines herausragenden\n"
# 1367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Talents geben wir dir Gewinnpunkt(e).$"
# 1368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_Text_ObtainedXBattlePoints:
# 1370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} erhält {STR_VAR_1} Gewinnpunkt(e).$"
# 1371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_RulesAreListed:
# 1373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Die Regeln des Duellturms hängen\n"
# 1374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "öffentlich aus.$"
# 1375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading:
# 1377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Wähle bitte ein Themengebiet aus.$"
# 1378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules:
# 1380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Im Duellturm finden vier Arten von\n"
# 1381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kämpfen statt: \l"
# 1382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Einzelkämpfe, Doppelkämpfe, \l"
# 1383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multikämpfe und Link-Multikämpfe.\p"
# 1384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Für jede Art gibt es separate\n"
# 1385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Kampfräume.\p"
# 1386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Für jeden Raum steht ein Begleiter\n"
# 1387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "bereit - sprich ihn einfach an.$"
# 1388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMonRules:
# 1390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Je nach Kampfraum darfst du nur eine\n"
# 1391 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "bestimmte Anzahl an Pokémon mitnehmen.\p"
# 1392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Im Einzelkampf stehen dir drei\n"
# 1393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon zur Verfügung.\p"
# 1394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Im Doppelkampf brauchst du vier\n"
# 1395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Pokémon und in den MultikämpfeN zwei.$"
# 1396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules:
# 1398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In der Teamlounge kannst du dir einen\n"
# 1399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Partner suchen, mit dem du als Team im\l"
# 1400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Multikampf-Raum kämpfst.\p"
# 1401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Suche dir den besten Partner aus, indem\n"
# 1402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "du dir seine Pokémon und deren\l"
# 1403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Attacken anschaust.\p"
# 1404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hast du sieben Kämpfe in Folge\n"
# 1405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "gewonnen, kannst du dir einen neuen\l"
# 1406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Partner aussuchen.$"
# 1407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 1408 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules:
# 1409 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Bei Link-MultikämpfeN treten zwei\n"
# 1410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Freunde gegeneinander an.\p"
# 1411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du musst dazu zu deinem Freund über\n"
# 1412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "den Drahtlosen Adapter oder das GBA\p"
# 1413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Game Link-Kabel eine Verbindung\n"
# 1414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "aufbauen.\p"
# 1415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Nun müsst ihr zwei Pokémon aussuchen,\n"
# 1416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "die ihr zum Kampf anmeldet.\p"
# 1417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Dein Pokémon muss sich von dem deines\n"
# 1418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Freundes unterscheiden.\p"
# 1419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Du kannst diesen Kampf nicht\n"
# 1420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "unterbrechen!$"
