# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"

# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"

# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"

# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"

# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"

# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_WALLY, 5, 108
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"

# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"

# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"

# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"

# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"

# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"

# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"

# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	vsseeker_rematchid TRAINER_NORMAN_1
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"

# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"

# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"

# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"

# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"

# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"

# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"

# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"

# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"

# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"

# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"

# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"

# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"

# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_WalkInPlaceFasterDown
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"

# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"

# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"

# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"

# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"

# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"

# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"

# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"

# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"

# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives::
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"

# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"

# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"

# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"

# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"

# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"

# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"

# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"

# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"

# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"

# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"

# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"

# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"

# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"

# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"

# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"

# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"

# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"

# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"

# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"

# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"

# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"

# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"

# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"

# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"

# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"

# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"

# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"

# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"

# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"

# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"

# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"

# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"

# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"

# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"

# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"

# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"

# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"

# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"

# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"

# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"

# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"

# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"

# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"

# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"

# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"

# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"

# 941 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"

# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"

# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"

# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"

# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"

# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"

# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"

# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"

# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Hm?\p"
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Na, wenn das nicht {PLAYER} ist!\n"
# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dann habt ihr also den Umzug beendet?\p"
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich bin überrascht, dass du ganz\n"
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "alleine hierher gefunden hast.\p"
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, so ist das.\n"
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du bist in Pokémon-Begleitung.\p"
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich glaube, du wirst einmal in meine\n"
# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fußstapfen als Trainer treten,\l"
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}.\p"
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Das sind großartige Aussichten!\n"
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich kann es kaum erwarten!$"
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Äh… Ich… Ich hätte so gerne ein\n"
# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon. Bitte…$"
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Wie? Du… Ach… Gut.\n"
# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du bist Heiko, nicht wahr?$"
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko: Ich werde meine Verwandten\n"
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "in Wiesenflur besuchen.\p"
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich glaube, ich werde mich da doch\n"
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "einsam fühlen, daher würde ich gerne ein\l"
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon mitnehmen.\p"
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aber ich habe noch nie eines gefangen.\n"
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich weiß nicht, wie das geht…$"
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Oh, ich verstehe…$"
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: {PLAYER}, hast du das gehört?\p"
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hilf doch bitte Heiko dabei,\n"
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ein Pokémon zu fangen.$"
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko, hier, ich leihe dir mein\n"
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon.\p"
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko hat ein Zigzachs erhalten.$"
# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko: Oh, wow!!!\n"
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ein Pokémon!\p"
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Hm. Ich gebe dir auch diesen\n"
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokéball. Dann leg los!\p"
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko erhält einen Pokéball!$"
# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko: Oh, wow!!!\n"
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dankeschön!$"
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Kommst du wirklich mit mir?$"
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Und? Hat es geklappt?$"
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Heiko: Danke. Ja, wunderbar.\n"
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hier haben Sie Ihr Pokémon zurück.\p"
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Danke, {PLAYER}, dass du mit mir\n"
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "gegangen bist.\p"
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Euch beiden habe ich es zu verdanken,\n"
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dass ich mein erstes Pokémon fangen\l"
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "konnte.\p"
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich verspreche, ich werde mich gut\n"
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "darum kümmern!\p"
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! Meine Mama wartet sicher schon auf\n"
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "mich! Ich muss nach Hause!\p"
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bis bald, {PLAYER}!$"
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Nun…\p"
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, wenn du ein guter Trainer\n"
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "werden willst - hier ist mein Rat.\p"
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gehe nach Metarost City, gleich hinter\n"
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "diesem Ort.\p"
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dort solltest du die Arenaleiterin\n"
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Felizia herausfordern.\p"
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Suche danach die anderen Pokémon\n"
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Arenen auf und besiege die Leiter.\p"
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sammle die Orden der verschiedenen\n"
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Arenen, verstehst du?\p"
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich bin natürlich auch ein Arenaleiter.\n"
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Auch wir werden eines Tages\l"
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "gegeneinander antreten.\p"
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aber erst, wenn du stärker geworden\n"
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bist, {PLAYER}.$"
# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Hm? Wolltest du nicht zur\n"
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Arena in Metarost City?\p"
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Für mich ist es keine Herausforderung,\n"
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "gegen einen Grünschnabel anzutreten.\p"
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, ich möchte, dass du mich he-\n"
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "rausforderst, sobald du stärker bist.\p"
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich werde gegen dich kämpfen, {PLAYER},\n"
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "sobald du vier Orden erhalten hast, ja?$"
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Oh, ich sehe schon… Du hast die\n"
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Arenaleiterin in Metarost City\l"
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "besiegt.\p"
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aber es gibt weitere Trainer, die\n"
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stärker sind als du, {PLAYER}.\p"
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wenn du das Meer überquerst, kommst du\n"
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nach Faustauhaven. Dort triffst du auf\l"
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "den Arenaleiter Kamillo.\p"
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du solltest ihn wirklich herausfordern…$"
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Hm… {PLAYER}, du bist stärker\n"
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "geworden.\p"
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Das sehe ich an der Anzahl der Orden,\n"
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "die du dir verdient hast.$"
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Hm…\n"
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du besitzt vier Orden.\p"
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fein. Wie versprochen werden wir nun\n"
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "einen Pokémon-Kampf ausfechten.\p"
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich bin so glücklich, dass mein eigenes\n"
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Kind stark genug ist, gegen\l"
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "mich zu kämpfen!\p"
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aber: Kampf ist Kampf!\p"
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich werde als Arenaleiter alles tun, um\n"
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "diesen Kampf zu gewinnen!\p"
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, du solltest ebenfalls dein\n"
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bestes geben!$"
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich… Ich kann es nicht…\p"
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich kann es nicht glauben, {PLAYER}…\p"
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich habe gegen {PLAYER} verloren?\p"
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nun, Regeln sind Regeln!\n"
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hier, das ist für dich.$"
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} hat den Balanceorden vom\n"
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps erhalten!$"
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Mit diesem Orden erhöht sich die\n"
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Verteidigung all deiner Pokémon.\p"
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon, die die VM Surfer erlernt\n"
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "haben, können diese auch zum Reisen\l"
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "über das Wasser einsetzen.\p"
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, das ist mein Geschenk für\n"
# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dich. Ich bin sicher, du wirst es gut\l"
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nutzen.$"
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: TM42 enthält Fassade.\p"
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sie verdoppelt die Stärke der Attacken,\n"
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "wenn das Pokémon vergiftet,\l"
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "paralysiert oder verbrannt wurde.\p"
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So kann eine vermeintlich aussichts-\n"
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lose Situation vielleicht gerettet\l"
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "werden.$"
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: Als Arenaleiter kann ich gar\n"
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nicht sagen, wie bestürzt ich bin…\p"
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Als Paps macht es mich einerseits sehr\n"
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stolz, andererseits aber auch traurig…$"
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, da bist du ja, {PLAYER}{KUN}!\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Komm doch bitte mal mit.\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich habe hier etwas für dich.$"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman, du hast doch nichts dagegen?\p"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich entführe dir {PLAYER}{KUN} mal eben für\n"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ein paar Minuten.$"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: {PLAYER}, du solltest deine\n"
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Mutter öfter mal besuchen.\p"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich bleibe hier und werde mein Training\n"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "verdoppeln.\p"
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Als Trainer lässt es mir keine Ruhe. Ich\n"
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "möchte irgendwann gegen dich gewinnen.$"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: {PLAYER}! Wie geht es dir?\p"
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Welt der Pokémon ist vielfältig.\p"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich bin überzeugt, dass selbst das \n"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "härteste Training dieser Vielfalt nicht\l"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "gerecht wird.$"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Türen dieser Arena öffnen sich,\n"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "wenn du die einzelnen Trainer besiegst.\p"
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Huups! Die Türen in diesem Raum sind ja\n"
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "schon offen, greif mich bitte nicht an!\p"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Trainer der Arena von Blütenburg\n"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "City setzen die verschiedensten\l"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Items ein.\p"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Tür auf der linken Seite führt in\n"
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "den Raum der Initiative.\p"
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Tür auf der rechten Seite führt in\n"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "den Raum der Genauigkeit.\p"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Türen sind beschriftet, lies genau\n"
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "und triff eine überlegte Wahl.\p"
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hast du dich für eine Tür entschieden…\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nun, ähm, genug der Worte!$"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Hui! Du hast sogar deinen\n"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "eigenen Vater besiegt!\p"
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wie… Unglaublich!\n"
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Ereignisse überschlagen sich!$"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Fähigkeit, dem Gegner mit einer\n"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Attacke zuvorzukommen…\p"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Das alleine gibt einem doch schon einen\n"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "enormen Vorteil, meinst du nicht auch?$"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Das war ein unglaublicher Kampf!$"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Geh weiter in den nächsten Raum, wo\n"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "eine neue Herausforderung wartet.\p"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Auf der linken Seite befindet sich der\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Raum der Verwirrung.\p"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Auf der rechten Seite findest du den\n"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Raum der Verteidigung.$"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ob du siegst oder verlierst… Du darfst\n"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dein Training und das deiner Pokémon\l"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "auf keinen Fall vernachlässigen.\p"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Das macht für mich einen wahren\n"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Arenaleiter aus.$"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dies ist der Raum der Verwirrung.\p"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Zeig mir, wie stark das Band zwischen\n"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dir und deinen Pokémon ist.$"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich konnte dein Team nicht genug\n"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "verwirren… Euer Band ist stark.$"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Der nächste Raum ist der Raum der\n"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Stärke. Kommst du gegen pure\l"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gewalt an?$"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nachdem du unseren Arenaleiter be-\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "siegt hast, wurde unser Training härter.$"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Immer, wenn du den Sieg in greifbarer\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nähe siehst, füllt dein Gegner KP auf…\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Kannst du dir vorstellen, wie man sich in\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so einer Situation fühlt?\p"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich werde dir so eine Situation\n"
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "demonstrieren!$"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich konnte nicht genügend KP\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "auffüllen… Welch eine Angriffskraft…$"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich hatte vom Kind unseres Arena-\n"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leiters nichts anderes erwartet!\p"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nein! Die Fähigkeiten eines Trainers\n"
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "entwickeln sich mit dem Training.\p"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich habe mich offensichtlich nicht\n"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "genug angestrengt.\p"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Geh! Der nächste Raum ist der Raum\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "der K.O.-Treffer.$"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich werde auch weiterhin in den Arenen\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "trainieren. Und Arenaleiter werden!$"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich werde es dir nicht leicht machen,\n"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nur weil du das Kind unseres Leiters\l"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bist.\p"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich werde dir beibringen, was es für ein\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon bedeutet, einen Volltreffer\l"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "zu erhalten.$"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Deine Stärke…\n"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du kämpfst großartig!$"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dein Vater ist stark. Als Trainer\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "erweise ich ihm den größten Respekt.\p"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Und ich sehe, dass die gleiche Stärke\n"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "auch in dir ruht.\p"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich fühle, dass du dich nun einem\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Kampf mit deinem Vater stellen kannst.$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Seit dein Vater der Leiter der Arena\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "von Blütenburg City ist, sind die\l"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainer dort viel stärker geworden.$"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hihi…\n"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dies ist der Raum der Genauigkeit.\p"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Es ist schon ziemlich fies, wenn jede\n"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Attacke ein Treffer ist.$"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du bist ein bisschen stärker als ich…$"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Es warten noch weitaus stärkere\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainer auf dich.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Der linke ist der Raum der Verteidigung\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "und der rechte der Raum der Erholung.\p"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Attacken deiner Pokémon werden\n"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "in beiden Räumen auf die Probe gestellt.$"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Weißt du, wonach wir als Trainer\n"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "streben?\p"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wir streben danach, die Seelenfreunde\n"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "unserer Pokémon zu werden.$"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Je stärker die Verteidigung ist, desto\n"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "rücksichtsloser kann ich angreifen.$"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Unsere Verteidigung reichte nicht aus…$"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich denke, du hast mir eine wertvolle\n"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Lektion erteilt.\p"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nun, geh weiter. Die linke Tür führt in\n"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "den Raum der Stärke.\p"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die rechte Tür öffnet den\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Raum der K.O.-Treffer.\p"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "In beiden warten äußerst talentierte\n"
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainer.$"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hallo! Hast du mal Surfer ausprobiert?$"
# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Unser Arenaleiter hat uns angewiesen,\n"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "alles zu geben und dich zu besiegen.\p"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Auch wenn du das Kind des Leiters bist!$"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aber… Ich habe alles gegeben!$"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wie du deine Pokémon einsetzt…\n"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du bist wie dein Vater.\p"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Geh weiter! Der Arenaleiter, dein\n"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Vater, erwartet dich bereits!$"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sicher, es ist immer von Vorteil, die\n"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon stärker werden zu lassen.\p"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Aber was macht einen Gewinner aus?\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Nun, das sind die Gefühle, die ein\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainer seinen Pokémon entgegen-\l"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bringt.$"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Die Tür ist noch verschlossen…$"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der Initiative” steht auf\n"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dem Schild.\p"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der Genauigkeit” steht\n"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "auf dem Schild.\p"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom:
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der Verwirrung”\n"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "steht auf dem Schild.\p"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom:
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der Verteidigung” steht\n"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "auf dem Schild.\p"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der Erholung” steht auf\n"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dem Schild.\p"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der Stärke” steht auf\n"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dem Schild.\p"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom:
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Raum der K.O.-Treffer”\n"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "steht auf dem Schild.\p"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Arenaleiter”\p"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Sieh selbst, welche Pokémon dich\n"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "erwarten!” steht auf dem Schild.\p"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Möchtest du die Tür öffnen?$"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Arena von Blütenburg City$"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Arena von Blütenburg City\p"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Normans anerkannte Trainer:\n"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: {PLAYER}…\n"
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich wusste, du würdest kommen.\p"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Niemals würde ich eine Herausforderung\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "von dir ablehnen!\p"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du verstehst, was ich meine?\p"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "In einer Arena ist es ohne Bedeutung,\n"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dass du mein Kind bist.\p"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Im Gegenteil, da wir Vater und Kind sind,\n"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "müssen wir beide unser Bestes geben.\l"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Meinst du nicht auch, {PLAYER}?$"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Äh… Haha…\n"
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du bist ein harter Brocken…$"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: {PLAYER}…\n"
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Was ist dein Traum?\p"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Mein Traum…\n"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Er wurde bereits Wirklichkeit.$"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paps: {PLAYER}…\n"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ich wusste, du würdest kommen.\p"
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Niemals würde ich eine Herausforderung\n"
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "von dir ablehnen!\p"
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du verstehst, was ich meine?\p"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "In einer Arena ist es ohne Bedeutung,\n"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "dass du mein Kind bist.\p"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Warte mal, {PLAYER}.\p"
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Du hast nur ein Pokémon, das kämpfen\n"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "kann?\p"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Tut mir Leid, aber du brauchst\n"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "mindestens zwei Pokémon.$"
