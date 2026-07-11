# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hallo. Wer bist du?\p"
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, du bist {PLAYER}{KUN}, unser neuer\n"
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Nachbar! Hallo!\p"
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wir haben ein Kind in deinem Alter.\p"
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} freut sich schon\n"
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "darauf, mit dir Freundschaft zu\l"
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "schließen.$"
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wie der Vater, so das Kind.\p"
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mein Mann ist genauso verrückt nach\n"
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pokémon wie unser Kind.\p"
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wenn er nicht gerade in seinem Labor\n"
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "ist, krabbelt er mit Sicherheit draußen\l"
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "durch das Gras.$"
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL}!\p"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich vermute, unser Kind ist viel zu sehr\n"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "mit Pokémon beschäftigt und merkt gar\p"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "nicht, dass du zu Besuch hier bist,\n"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}.$"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} ist vor kurzem zur\n"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Route 103 aufgebrochen.\p"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wie der Vater, so das Kind.\n"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} hält es keine fünf\l"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Minuten im Haus aus.$"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich glaube, es ist wunderbar für Leute,\n"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "mit ihren Pokémon zu reisen.\p"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aber du solltest öfter nach Hause\n"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "gehen und deiner Mutter zeigen, dass es\l"
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "dir gut geht.\p"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Sie lässt es sich nicht anmerken, aber\n"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "sie macht sich bestimmt Sorgen!$"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Was?\n"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wer… Wer bist du denn?\p"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ach, du bist {PLAYER}{KUN}!\n"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Du bist heute hierher gezogen.\p"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ähm… Ich bin Maike.\n"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Schön, dich kennen zu lernen.\p"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich… Ich habe diesen Traum…\n"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mit Pokémon in der ganzen Welt\l"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Freundschaft zu schließen.\p"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich… Ich habe schon von dir gehört.\n"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mein Vater, Prof. Birk, hat mir von\l"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "dir erzählt.\p"
# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich habe gehofft, dass du nett bist,\n"
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, und wir Freunde werden.\p"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ist das nicht albern? Ich… Ich habe\n"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "dich doch gerade erst kennen gelernt.\p"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hihihihi…\p"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, nein! Das habe ich ja total\n"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "vergessen!\p"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich sollte Vati doch helfen, ein paar\n"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "wilde Pokémon zu fangen!\p"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, wir treffen uns später!$"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Du…\p"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Wer bist du denn?\p"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ach ja, du bist {PLAYER}, richtig?\n"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Du bist nebenan eingezogen, stimmt's?\p"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich wusste nicht, dass du ein Mädchen\n"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "bist.\p"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Vater, Prof. Birk, hat mir erzählt, dass\n"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "nebenan das Kind eines Arenaleiters\p"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "einzieht und irgendwie habe ich\n"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "gedacht, du seiest ein Junge.\p"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich heiße übrigens Brix.\n"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Also: Hallo, Nachbarin!\p"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Was? {PLAYER}, du hast kein einziges\n"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pokémon?\p"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Soll ich eines für dich fangen?\p"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ach, Mist, das habe ich ganz vergessen…\p"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ich muss meinem Vater helfen, einige\n"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "wilde Pokémon zu fangen.\p"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ein anderes Mal, okay?$"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey, Nachbar!\p"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hast du schon ein\n"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "eigenes Pokémon?$"
