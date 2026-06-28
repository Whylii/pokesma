# 1 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.byte 0
# 7 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnFrame:
# 9 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
# 10 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
# 11 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.2byte 0
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
# 15 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	lockall
# 16 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	@ pyramid_updatelight, cant use macro because it straddles the loop
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 19 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
# 20 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8007, SE_SAVE
# 21 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special CallBattlePyramidFunction
# 24 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	delay 2
# 25 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 28 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 30 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
# 31 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special ShowMapNamePopup
# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 0
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 35 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
# 36 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	playbgm MUS_B_PYRAMID, FALSE
# 37 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 40 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume:
# 41 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setfloorpal
# 42 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_getstatus
# 43 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 46 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 47 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 48 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 49 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 50 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 52 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 53 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
# 57 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 60 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
# 61 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 62 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
# 63 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_clearhelditems
# 66 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special HealPlayerParty
# 67 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 69 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 71 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
# 72 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 73 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special SavePlayerParty
# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 75 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_settrainers
# 76 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 77 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 78 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 79 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 80 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnTransition:
# 81 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
# 82 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 85 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
# 86 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
# 87 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 88 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 89 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor::
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	addvar VAR_RESULT, 1
# 93 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 94 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
# 95 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_seedfloor
# 96 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 101 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToTop::
# 103 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
# 104 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 105 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 107 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ TRAINER_PHILLIP is used as a placeholder
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_TrainerBattle::
# 109 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	facilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 110 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_showhint
# 111 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitmessage
# 112 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitbuttonpress
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	closemessage
# 114 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 115 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 117 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall::
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setitem
# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	callstd STD_FIND_ITEM
# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_hideitem
# 122 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBallEnd::
# 123 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 124 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 125 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Retire::
# 126 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 128 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ Also used by Trainer Hill
# 129 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFacility_TrainerBattle_PlaceholderText:
# 130 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is a sample message.$"
# 131 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 132 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRest::
# 133 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Dein Abenteuer in der Kampfpyramide\n"
# 134 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "wird gespeichert, damit du es\l"
# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "unterbrechen kannst. Einverstanden?$"
# 136 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 137 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRetire::
# 138 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Möchtest du das Abenteuer in der\n"
# 139 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Kampfpyramide wirklich unterbrechen?$"
# 140 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp1::
# 142 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 143 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {UP_ARROW}$"
# 144 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 145 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft1::
# 146 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 147 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {LEFT_ARROW}$"
# 148 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 149 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight1::
# 150 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {RIGHT_ARROW}$"
# 152 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 153 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown1::
# 154 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 155 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {DOWN_ARROW}$"
# 156 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 157 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp2::
# 158 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 159 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {UP_ARROW}$"
# 160 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 161 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft2::
# 162 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 163 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {LEFT_ARROW}$"
# 164 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 165 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight2::
# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 167 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {RIGHT_ARROW}$"
# 168 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 169 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown2::
# 170 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang dieser Ebene\n"
# 171 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "befindet sich: {DOWN_ARROW}$"
# 172 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 173 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp3::
# 174 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 175 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {UP_ARROW}$"
# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 177 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft3::
# 178 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 179 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {LEFT_ARROW}$"
# 180 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight3::
# 182 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 183 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {RIGHT_ARROW}$"
# 184 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 185 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown3::
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 187 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung:{DOWN_ARROW}$"
# 188 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 189 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp4::
# 190 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich irgendwo\n"
# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {UP_ARROW}$"
# 192 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 193 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft4::
# 194 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich irgendwo\n"
# 195 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {LEFT_ARROW}$"
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 197 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight4::
# 198 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich irgendwo\n"
# 199 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {RIGHT_ARROW}$"
# 200 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown4::
# 202 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich irgendwo\n"
# 203 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in dieser Richtung: {DOWN_ARROW}$"
# 204 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 205 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp5::
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang?\n"
# 207 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Da entlang: {UP_ARROW}$"
# 208 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 209 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft5::
# 210 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang?\n"
# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Da entlang: {LEFT_ARROW}$"
# 212 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 213 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight5::
# 214 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang?\n"
# 215 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Da entlang: {RIGHT_ARROW}$"
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 217 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown5::
# 218 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang?\n"
# 219 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Da entlang: {DOWN_ARROW}$"
# 220 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp6::
# 222 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 223 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dort drüben: {UP_ARROW}$"
# 224 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 225 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft6::
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 227 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dort drüben: {LEFT_ARROW}$"
# 228 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 229 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight6::
# 230 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dort drüben:  {RIGHT_ARROW}$"
# 232 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 233 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown6::
# 234 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Der Ausgang befindet sich\n"
# 235 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dort drüben:  {DOWN_ARROW}$"
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 237 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining1::
# 238 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 239 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch acht Items versteckt.$"
# 240 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining1::
# 242 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 243 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch sieben Items\n"
# 244 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 245 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining1::
# 247 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 248 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch sechs Items\n"
# 249 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 250 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining1::
# 252 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 253 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch fünf Items\n"
# 254 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 255 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining1::
# 257 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 258 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch vier Items\n"
# 259 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 260 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining1::
# 262 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 263 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch drei Items\n"
# 264 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 265 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining1::
# 267 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 268 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind noch zwei Items\n"
# 269 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 270 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 271 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining1::
# 272 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 273 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier ist noch ein Item\n"
# 274 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 275 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 276 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining1::
# 277 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Suchst du nach Items?\p"
# 278 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier gibt es keine mehr.$"
# 279 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 280 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining2::
# 281 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 282 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 283 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo acht Items\n"
# 284 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 285 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 286 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining2::
# 287 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 288 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 289 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo sieben Items\n"
# 290 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 291 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 292 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining2::
# 293 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 294 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 295 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo sechs Items\n"
# 296 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 297 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 298 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining2::
# 299 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 300 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo fünf Items\n"
# 302 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 303 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 304 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining2::
# 305 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 306 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 307 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo vier Items\n"
# 308 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 309 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 310 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining2::
# 311 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 312 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 313 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo drei Items\n"
# 314 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 315 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 316 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining2::
# 317 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 318 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 319 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind irgendwo zwei Items\n"
# 320 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 321 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 322 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining2::
# 323 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 324 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 325 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier ist irgendwo ein Item\n"
# 326 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "versteckt.$"
# 327 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 328 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining2::
# 329 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast gewonnen, daher verrate ich\n"
# 330 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "dir ein Geheimnis!\p"
# 331 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier sind keine Items mehr versteckt.$"
# 332 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 333 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining3::
# 334 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 335 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 336 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind acht Items versteckt.$"
# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 338 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining3::
# 339 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 340 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 341 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind sieben Items versteckt.$"
# 342 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 343 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining3::
# 344 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 345 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 346 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind sechs Items versteckt.$"
# 347 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining3::
# 349 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 350 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 351 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind fünf Items versteckt.$"
# 352 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining3::
# 354 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 355 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 356 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind vier Items versteckt.$"
# 357 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining3::
# 359 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 360 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 361 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind drei Items versteckt.$"
# 362 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 363 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining3::
# 364 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 365 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 366 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sind zwei Items versteckt.$"
# 367 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining3::
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 370 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
# 371 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "ist ein Item versteckt.$"
# 372 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining3::
# 374 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wie macht sich deine Item-Sammlung?\p"
# 375 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene gibt es keine Items\n"
# 376 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "mehr. Pass auf dich auf!$"
# 377 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining4::
# 379 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 380 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen acht Items versteckt\n"
# 381 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 382 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 383 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining4::
# 384 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 385 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen sieben Items versteckt\n"
# 386 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 387 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 388 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining4::
# 389 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 390 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen sechs Items versteckt\n"
# 391 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 392 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 393 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining4::
# 394 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 395 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen fünf Items versteckt\n"
# 396 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 397 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 398 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining4::
# 399 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 400 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen vier Items versteckt\n"
# 401 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 402 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 403 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining4::
# 404 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 405 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen drei Items versteckt\n"
# 406 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 407 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 408 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining4::
# 409 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 410 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheinen zwei Items versteckt\n"
# 411 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 412 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 413 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining4::
# 414 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 415 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hier scheint ein Item versteckt\n"
# 416 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "zu sein.$"
# 417 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 418 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining4::
# 419 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Stärke muss belohnt werden!\p"
# 420 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber leider scheinen hier keine\n"
# 421 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Items mehr versteckt zu sein.$"
# 422 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 423 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining5::
# 424 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 425 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… acht Items liegen.$"
# 426 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 427 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining5::
# 428 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 429 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… sieben Items liegen.$"
# 430 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 431 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining5::
# 432 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 433 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… sechs Items liegen.$"
# 434 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 435 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining5::
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 437 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… fünf Items liegen.$"
# 438 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 439 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining5::
# 440 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 441 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… vier Items liegen.$"
# 442 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining5::
# 444 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 445 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… drei Items liegen.$"
# 446 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 447 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining5::
# 448 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 449 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "sollen… zwei Items liegen.$"
# 450 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 451 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining5::
# 452 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 453 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "soll… ein Item liegen.$"
# 454 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 455 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining5::
# 456 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene der Pyramide\n"
# 457 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "soll es keine Items geben…$"
# 458 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 459 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining6::
# 460 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 461 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch acht\n"
# 462 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 463 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 464 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining6::
# 465 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 466 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch sieben\n"
# 467 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 468 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 469 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining6::
# 470 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 471 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch sechs\n"
# 472 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 474 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining6::
# 475 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 476 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch fünf\n"
# 477 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 478 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining6::
# 480 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 481 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch vier\n"
# 482 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 483 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining6::
# 485 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 486 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch drei\n"
# 487 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 488 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 489 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining6::
# 490 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 491 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müssten noch zwei\n"
# 492 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere Items versteckt sein.$"
# 493 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 494 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining6::
# 495 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 496 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier müsste noch ein\n"
# 497 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weiteres Item versteckt sein.$"
# 498 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 499 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining6::
# 500 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Hast du schon alle Items gefunden?\p"
# 501 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ich glaube, hier gibt es keine Items\n"
# 502 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "mehr.$"
# 503 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 504 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining1::
# 505 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 506 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es warten noch sieben\n"
# 507 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere starke Trainer auf dich!$"
# 508 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 509 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining1::
# 510 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 511 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es warten noch sechs\n"
# 512 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere starke Trainer auf dich!$"
# 513 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 514 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining1::
# 515 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 516 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es warten noch fünf\n"
# 517 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere starke Trainer auf dich!$"
# 518 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining1::
# 520 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 521 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es warten noch vier\n"
# 522 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere starke Trainer auf dich!$"
# 523 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 524 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining1::
# 525 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 526 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es warten noch drei\n"
# 527 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere starke Trainer auf dich!$"
# 528 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining1::
# 530 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 531 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es warten noch zwei\n"
# 532 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weitere starke Trainer auf dich!$"
# 533 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 534 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining1::
# 535 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 536 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es wartet noch ein\n"
# 537 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "weiterer starker Trainer auf dich!$"
# 538 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 539 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining1::
# 540 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du warst wirklich unglaublich gut!\p"
# 541 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Es ist niemand mehr da, den\n"
# 542 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "du besiegen könntest.$"
# 543 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 544 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining2::
# 545 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 546 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch sieben weitere\n"
# 547 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
# 548 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 549 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining2::
# 550 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 551 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch sechs weitere\n"
# 552 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
# 553 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 554 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining2::
# 555 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 556 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch fünf weitere\n"
# 557 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
# 558 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 559 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining2::
# 560 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 561 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch vier weitere\n"
# 562 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
# 563 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 564 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining2::
# 565 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 566 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch drei weitere\n"
# 567 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
# 568 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 569 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining2::
# 570 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 571 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch zwei weitere\n"
# 572 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Einer wird dich zu Fall bringen!$"
# 573 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 574 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining2::
# 575 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 576 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber es gibt hier noch einen weiteren\n"
# 577 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Der wird dich zu Fall bringen!$"
# 578 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 579 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining2::
# 580 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Das ist doch einfach ärgerlich!\p"
# 581 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Es gibt keine weiteren Trainer!\n"
# 582 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Keiner wird dich zu Fall bringen!$"
# 583 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 584 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining3::
# 585 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 586 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier sind noch sieben weitere\n"
# 587 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du die auch besiegen?$"
# 588 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 589 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining3::
# 590 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 591 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier sind noch sechs weitere\n"
# 592 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du die auch besiegen?$"
# 593 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 594 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining3::
# 595 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 596 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier sind noch fünf weitere\n"
# 597 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du die auch besiegen?$"
# 598 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 599 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining3::
# 600 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 601 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier sind noch vier weitere\n"
# 602 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du die auch besiegen?$"
# 603 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining3::
# 605 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 606 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier sind noch drei weitere\n"
# 607 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du die auch besiegen?$"
# 608 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 609 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining3::
# 610 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 611 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier sind noch zwei weitere\n"
# 612 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du die auch besiegen?$"
# 613 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 614 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining3::
# 615 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 616 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Aber hier ist noch ein weiterer\n"
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Trainer. Kannst du den auch besiegen?$"
# 618 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 619 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining3::
# 620 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Wow! Das war beeindruckend!\p"
# 621 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du hast alle Trainer auf dieser\n"
# 622 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Ebene besiegt.$"
# 623 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 624 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining4::
# 625 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du die sieben Trainer\n"
# 626 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 627 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 628 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining4::
# 629 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du die sechs Trainer\n"
# 630 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 631 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 632 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining4::
# 633 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du die fünf Trainer\n"
# 634 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 635 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 636 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining4::
# 637 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du die vier Trainer\n"
# 638 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 639 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 640 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining4::
# 641 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du die drei Trainer\n"
# 642 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 643 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 644 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining4::
# 645 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du die zwei Trainer\n"
# 646 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 647 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 648 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining4::
# 649 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Vielleicht kannst du den einen Trainer\n"
# 650 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "auf dieser Ebene besiegen?$"
# 651 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 652 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining4::
# 653 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Auf dieser Ebene ist niemand mehr, den\n"
# 654 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "du besiegen könntest.$"
# 655 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 656 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining5::
# 657 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 658 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "die sieben Trainer hier zu besiegen.$"
# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 660 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining5::
# 661 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 662 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "die sechs Trainer hier zu besiegen.$"
# 663 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 664 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining5::
# 665 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 666 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "die fünf Trainer hier zu besiegen.$"
# 667 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 668 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining5::
# 669 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 670 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "die vier Trainer hier zu besiegen.$"
# 671 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 672 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining5::
# 673 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 674 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "die drei Trainer hier zu besiegen.$"
# 675 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 676 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining5::
# 677 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 678 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "die zwei Trainer hier zu besiegen.$"
# 679 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 680 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining5::
# 681 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Du könntest es tatsächlich schaffen,\n"
# 682 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "den einen Trainer hier zu besiegen.$"
# 683 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 684 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining5::
# 685 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Deine Fähigkeiten sind unerreichbar!\p"
# 686 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Es sind keine Trainer mehr vorhanden,\n"
# 687 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "gegen die du antreten könntest.$"
# 688 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 689 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining6::
# 690 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, die sieben\n"
# 691 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 692 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 693 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining6::
# 694 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, die sechs\n"
# 695 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 696 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 697 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining6::
# 698 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, die fünf\n"
# 699 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 700 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 701 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining6::
# 702 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, die vier\n"
# 703 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 704 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 705 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining6::
# 706 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, die drei\n"
# 707 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 708 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 709 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining6::
# 710 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, die zwei\n"
# 711 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 712 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 713 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining6::
# 714 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Schaffst du es, den einen\n"
# 715 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "verbleibenden Trainer zu besiegen?$"
# 716 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 717 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining6::
# 718 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Es ist niemand mehr da, dem du dein\n"
# 719 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Können zeigen kannst.$"
