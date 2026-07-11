# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Siehst du, {PLAYER}?\n"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hier ist es doch auch schön, oder nicht?$"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Die Pokémon machen für uns den Umzug,\n"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "räumen alles ein und machen sauber.\l"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Das ist doch so etwas von praktisch!\p"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, dein Zimmer ist oben.\n"
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Schau es dir doch mal an, Spatz!\p"
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Paps hat dir eine neue Uhr zur\n"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Begrüßung geschenkt.\l"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Vergiss nicht, sie einzustellen!$"
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Nun, {PLAYER}?\p"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Bist du nicht neugierig, dein neues\n"
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Zimmer zu sehen?$"
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: {PLAYER}, Schatz!\p"
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Stell bitte die Uhr in deinem Zimmer ein.$"
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Oh! {PLAYER}! {PLAYER}!\n"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Schnell! Komm schnell her!$"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Da! Da ist die Arena von\n"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Blütenburg City!\l"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich glaube, Paps ist im Fernsehen!$"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Oh… Schon vorbei.\p"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich glaube, Paps war im Fernsehen und\n"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wir haben ihn verpasst. Schade!$"
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ach ja.\n"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Einer von Paps Freunden lebt hier.\p"
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Prof. Birk ist sein Name.\p"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Er lebt gleich nebenan, daher solltest\n"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "du hinübergehen und dich vorstellen.$"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Bis später, Spatz!$"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Hast du dich bei Prof. Birk\n"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "vorgestellt?$"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Wie geht es dir, {PLAYER}?\n"
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Du siehst müde aus.\p"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich denke, du solltest dich etwas\n"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "ausruhen.$"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Pass auf dich auf, Schatz!$"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Oh! Hat Paps dir den Orden\n"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "gegeben?\p"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dann ist das hier von deiner Mum!$"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Überanstreng dich nicht, Liebes.\n"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Du kannst jederzeit nach Hause kommen.\p"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Und jetzt nichts wie los, Schatz!$"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Was hast du denn da Schönes?\n"
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Einen Pokénav? Den hat dir jemand von\l"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Devon gegeben?\p"
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Und, Liebling? Möchtest du nicht deine\n"
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum ins Verzeichnis aufnehmen?\p"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "$"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum wurde im Pokénav-Verzeichnis\n"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "eingetragen.$"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Interviewer: Das war unsere Reportage\n"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "über die Arena in Blütenburg City.$"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Da läuft gerade ein Film.\p"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Zwei Männer tanzen auf riesengroßen\n"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Klaviertasten.\p"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aber es wird Zeit aufzubrechen!$"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dies ist die Bedienungsanleitung für\n"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "die Turbotreter.\p"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Halte den B-Knopf gedrückt,\n"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wenn du diese Turbotreter anhast,\l"
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "um zu rennen!\p"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Schlüpf in diese Turbotreter und\n"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "erobere die Welt da draußen!$"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Paps: Hm?\p"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, das ist ja {PLAYER}!\p"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Du hast uns ja schon lange nicht mehr\n"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "besucht… Du siehst irgendwie\l"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "stärker aus.\p"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Das ist zumindest mein Eindruck. Aber\n"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "dein alter Herr gibt noch nicht auf.\p"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, ich habe hier etwas für dich.\n"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Das soll ich dir von einem Mr. Brack\l"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "geben.$"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Paps: Hm, ein Ticket für eine Fähre?\p"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich weiß, dass es in Graphitport City\n"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "und Seegrasulb City Anlegestellen für\l"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fähren gibt.$"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich muss jetzt wieder in die Arena von\n"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Blütenburg City.\p"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ich danke dir, dass du dich während\n"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "meiner Abwesenheit um das Haus\l"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "kümmerst.$"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Das ist wieder typisch dein\n"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Paps…\p"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Da kommt er das erste Mal nach ewigen\n"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Zeiten nach Hause und spricht nur über\l"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon.\p"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Er sollte sich lieber ausruhen und\n"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "etwas hier bleiben!$"
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Sind das Sondernachrichten?$"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hier sind die Sondernachrichten.\p"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Wir haben die Meldung erhalten, dass in\n"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "der Hoenn-Region ein Grssss…\l"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "farbiges Pokémon gesichtet wurde.\p"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Die Identität des Pokémon konnte\n"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "bisher nicht festgestellt werden.\p"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Und damit schalten wir wieder um in\n"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "unser laufendes Programm.$"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: {PLAYER}, hast du das gehört?!\p"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Was hat der Sprecher gesagt? Welche\n"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Farbe hat das Pokémon?$"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mum: Also, ist das nicht unglaublich?\n"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Es gibt tatsächlich noch unbekannte\l"
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon!$"
