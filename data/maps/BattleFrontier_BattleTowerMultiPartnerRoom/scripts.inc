# 1 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts::
# 3 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume
# 4 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp
# 6 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame
# 7 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnResume:
# 10 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	pyramid_resetparty
# 11 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition:
# 14 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner
# 15 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
# 16 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
# 17 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
# 18 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
# 19 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
# 20 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
# 21 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
# 22 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
# 23 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_loadpartners
# 24 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner::
# 27 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
# 28 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
# 29 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
# 30 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
# 31 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
# 32 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
# 33 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
# 34 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
# 35 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 1
# 37 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setobjectxyperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, 10, 2
# 38 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 39 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 40 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp:
# 41 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth
# 42 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 43 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 44 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth::
# 45 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 46 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 47 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 48 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame:
# 49 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom
# 50 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom
# 51 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.2byte 0
# 52 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom::
# 54 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 55 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 0
# 56 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator
# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 59 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom::
# 60 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 61 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom
# 62 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit
# 64 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 65 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
# 66 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner, MSGBOX_DEFAULT
# 69 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 71 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 72 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 73 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 74 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom:
# 75 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_down
# 76 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 77 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 78 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit:
# 79 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 80 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_in_place_faster_down
# 81 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 82 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 83 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant::
# 84 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 85 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 86 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner
# 87 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2, MSGBOX_DEFAULT
# 91 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 92 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge::
# 95 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 96 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
# 97 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator::
# 100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	opendoor 10, 1
# 105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator
# 107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closedoor 10, 1
# 108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
# 112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator::
# 115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator
# 117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Unused
# 121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast:
# 122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast
# 124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Unused
# 128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest:
# 129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
# 130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorWest
# 131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator:
# 135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Functionally unused
# 141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast:
# 142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_right
# 143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
@ Functionally unused
# 148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorWest:
# 149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator:
# 155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
# 157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1::
# 160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner::
# 167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_INTRO
# 169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON1
# 172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
# 175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	switch VAR_RESULT
# 178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
# 180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
# 181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call_if_ne VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit
# 185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth
# 186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 3
# 189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner::
# 194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_REJECT
# 195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	release
# 198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit::
# 201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit
# 202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth::
# 206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth
# 207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	return
# 209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit:
# 211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth:
# 221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_left
# 222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_fast_up
# 229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_end
# 230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2::
# 232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3::
# 239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4::
# 246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5::
# 253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6::
# 260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7::
# 267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8::
# 274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock
# 275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	faceplayer
# 276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
# 278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	end
# 279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner:
# 281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte such dir unter den Trainern hier\n"
# 282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "einen Partner aus.$"
# 283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner:
# 285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, du hast noch keinen Partner\n"
# 286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "gefunden.\p"
# 287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Möchtest du die Suche aufgeben und\n"
# 288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "zurück zur Rezeption gehen?$"
# 289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2:
# 291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dann such dir bitte unter den Trainern\n"
# 292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "hier einen Partner aus.$"
# 293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner::
# 295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank!\p"
# 296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nun werde ich dir den Raum für die\n"
# 297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Multikämpfe zeigen.$"
# 298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro::
# 300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
# 301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You can call me {STR_VAR_3}!$"
# 302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1::
# 304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "On {STR_VAR_1}'s advice, I brought\n"
# 305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
# 306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask::
# 308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, let me join you as a tag team.$"
# 310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept::
# 312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
# 313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll go register right now.$"
# 314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject::
# 316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I really wanted to form a tag team\n"
# 317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "with you, {PLAYER}…$"
# 318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro::
# 320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
# 321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My name is {STR_VAR_3}.$"
# 322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1::
# 324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I got advice from {STR_VAR_1} and chose\n"
# 325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"
# 326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask::
# 328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
# 329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please, let's form a tag team!$"
# 330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept::
# 332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you very much!\n"
# 333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll be done with registration quickly!$"
# 334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject::
# 336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I was hoping that I could\n"
# 337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "partner up with you…$"
# 338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro::
# 340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ähm, ich heiße {STR_VAR_3} und ich bin\n"
# 341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\p"
# 342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schluchz…\p"
# 343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tut mir Leid! Schnüff… Aber die\n"
# 344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Spannung bringt mich zum Weinen.$"
# 345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1::
# 347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} ist mir mit Rat und Tat zur\n"
# 348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Seite gestanden, daher habe ich\p"
# 349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask::
# 352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann.\p"
# 354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schluchz…\n"
# 355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte, bitte, nimm mich als Partner!$"
# 356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept::
# 358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, wirklich?! Echt?!\n"
# 359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wahnsinn! Irre! Toll! Juhuuuu!\p"
# 360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… Hihihi… Tut mir Leid…\n"
# 361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin so glücklich, dass ich weine…\p"
# 362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich gehe mich sofort anmelden, bitte\n"
# 363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "lauf nicht weg!$"
# 364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject::
# 366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, ab-abber… abber…\n"
# 367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schluchz…$"
# 368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro::
# 370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo, du da! Ich bin {STR_VAR_3}!\n"
# 371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
# 372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1::
# 374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} hat mich beraten. Ich habe\n"
# 375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask::
# 378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann. Ist das nicht cool?\p"
# 380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Also los!\n"
# 381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir beide bilden ein Team!$"
# 382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept::
# 384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Super! Klasse!\n"
# 385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich registriere mich jetzt!$"
# 386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject::
# 388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oooh, warum denn nicht? Ich wollte\n"
# 389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "doch so gerne dein Partner sein.$"
# 390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro::
# 392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_3}, Schüler Nr. {STR_VAR_2} des\n"
# 393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "berühmten {STR_VAR_1}!$"
# 394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1::
# 396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe mich an den Rat von\n"
# 397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} gehalten.\p"
# 398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein {STR_VAR_2} kann {STR_VAR_1}$"
# 399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask::
# 401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und mein {STR_VAR_2} kann\n"
# 402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}. Das ist mein Pärchen.\p"
# 403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte bilde ein Team mit uns.$"
# 404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept::
# 406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Danke schön!\n"
# 407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich sofort registrieren.$"
# 408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject::
# 410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hatte gehofft, mit dir ein Team\n"
# 411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "bilden zu können, {PLAYER}…$"
# 412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro::
# 414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ähm… Ich bin froh, dass du dir die Zeit\n"
# 415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "genommen hast, mit mir zu reden.\p"
# 416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_3}.\n"
# 417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schülerin Nr. {STR_VAR_2} von {STR_VAR_1}.$"
# 418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1::
# 420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\n"
# 421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dafür bin ich sehr dankbar.\p"
# 422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "In meinem Team ist ein {STR_VAR_2},\n"
# 423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask::
# 426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann. Ich weiß, ich verlange viel, aber…\p"
# 428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Würdest du ein Team mit mir bilden?$"
# 429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept::
# 431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wirklich? Ich kann es kaum glauben!\n"
# 432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde dich nicht enttäuschen!\l"
# 433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kann es immer noch nicht glauben…\p"
# 434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ähm… Wenn es wirklich okay ist,\n"
# 435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "dann registriere ich mich jetzt sofort.$"
# 436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject::
# 438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh…\n"
# 439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich glaube, ich war nicht gut genug…$"
# 440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro::
# 442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, ich bin {STR_VAR_3}.\n"
# 443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schülerin Nr. {STR_VAR_2}\p"
# 444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "von {STR_VAR_1}.$"
# 445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1::
# 447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} hat mir zu folgendem Team\n"
# 448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "geraten: ein {STR_VAR_2}, das\l"
# 449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann,$"
# 450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask::
# 452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann.\p"
# 454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nicht schlecht, was? Sollen wir\n"
# 455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "beide ein Team bilden?$"
# 456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept::
# 458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das freut mich jetzt wirklich!\n"
# 459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffe nur, du versaust es nicht!\l"
# 460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich jetzt registrieren.$"
# 461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject::
# 463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wie? Du willst mich nicht zum Partner?\n"
# 464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du unterschätzt mich gewaltig!$"
# 465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro::
# 467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_3} und Triathlet.\n"
# 468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin immer schwer beschäftigt mit\l"
# 469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Joggen, Trainieren und Sprüche klopfen.\p"
# 470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin außerdem Schüler Nr. {STR_VAR_2}\n"
# 471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "von {STR_VAR_1}.$"
# 472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1::
# 474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich folge dem Rat von {STR_VAR_3}:\n"
# 475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann.$"
# 476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask::
# 478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann.\p"
# 480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe mich sehr um meine Pokémon\n"
# 481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "gekümmert, auch wenn ich beschäftigt\p"
# 482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "war. Komm, wir bilden ein Team und\n"
# 483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "versuchen unser Bestes!$"
# 484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept::
# 486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das ist der richtige Kampfgeist!\n"
# 487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Warte hier. Ich registriere mich.$"
# 488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject::
# 490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe mir extra frei genommen.\n"
# 491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und dann enttäuschst du mich. Pah!$"
# 492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro::
# 494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo! Wie geht's dir?\n"
# 495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_3}.\p"
# 496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schülerin Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
# 497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nett, dich kennen zu lernen.$"
# 498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1::
# 500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich erzähl dir, zu was {STR_VAR_3} mir\n"
# 501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "geraten hat: Zu einem {STR_VAR_2}, das\l"
# 502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und$"
# 503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask::
# 505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}\n"
# 506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann. Natürlich wurden sie von mir\p"
# 507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "sorgfältig aufgezogen! Sollen wir ein\n"
# 508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team bilden? Wir wären unschlagbar!$"
# 509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept::
# 511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ha, das macht bestimmt Spaß!\n"
# 512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich gehe mich jetzt registrieren.$"
# 513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject::
# 515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, du bist gemein!\n"
# 516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe Referenzen, weißt du!$"
# 517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro::
# 519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_3}.\n"
# 520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schön, dich kennen zu lernen.\p"
# 521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schülerin Nr. {STR_VAR_2} von\n"
# 522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}.$"
# 523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1::
# 525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hielt mich an die Lehren von\n"
# 526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} und mein Team ist: Ein\l"
# 527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann$"
# 528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask::
# 530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das\n"
# 531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann.\p"
# 532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte nimm uns als Partner.$"
# 533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept::
# 535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… Ich bin entzückt!\n"
# 536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mein Bestes geben!\p"
# 537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns jetzt registrieren!\n"
# 538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Warte bitte hier auf mich!$"
# 539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject::
# 541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hatte gehofft, an deiner Seite\n"
# 542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kämpfen zu dürfen, {PLAYER}…$"
# 543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro::
# 545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hihihi! Du hast mich angesprochen!\n"
# 546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ja so glücklich…\p"
# 547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_3}! Ich bin Schülerin\n"
# 548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nr. {STR_VAR_2} von {STR_VAR_1}.$"
# 549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1::
# 551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich folgte dem Rat meines Lehrers! Ich\n"
# 552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "habe ein {STR_VAR_2}, das {STR_VAR_1}$"
# 553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask::
# 555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Erfüllst du mir einen Wunsch?\n"
# 558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bilde mit mir ein Team.$"
# 559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept::
# 561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hihihi… Mir ist richtig schwindelig!\n"
# 562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen, vielen Dank!\l"
# 563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich jetzt registrieren.$"
# 564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject::
# 566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Uaaahaa! Hast du denn kein Mitleid?\n"
# 567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aber irgendwie bist du cool…$"
# 568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro::
# 570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hahaa! Ich bin Schüler Nr. {STR_VAR_2} von\n"
# 571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}!\p"
# 572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_3}. Hallooo, hallooo!$"
# 573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1::
# 575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein Mentor {STR_VAR_3} riet mir zu\n"
# 576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}$"
# 577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask::
# 579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und zu einem {STR_VAR_2},\n"
# 580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gut, nicht wahr? Du wählst mich als\n"
# 582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "deinen Partner, ja?$"
# 583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept::
# 585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hervorragend! Ich werde mich\n"
# 586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ganz schnell registrieren!$"
# 587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject::
# 589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Uuuuuh! Du bist ganz schön\n"
# 590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "berechnend, {PLAYER}.$"
# 591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro::
# 593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey! Jetzt geht's hier richtig rund.\n"
# 594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Heute ist der letzte Tag des\p"
# 595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Duellturms!\n"
# 596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "………………\l"
# 597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Haha! War nur ein Witz!\p"
# 598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Man nennt mich {STR_VAR_3} und das\n"
# 599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "passt! Ich bin der 1.000ste Schüler von\l"
# 600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}! Nun, ich bin Nr. {STR_VAR_2}!$"
# 601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1::
# 603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\n"
# 604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"
# 605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask::
# 607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann…\n"
# 608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe zehn von jedem!\l"
# 609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nun, ich habe eines von jedem.\p"
# 610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nun, wie wär's?\n"
# 611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sollen wir zusammen kämpfen?$"
# 612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept::
# 614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Juhuu! Ich schenke dir zum\n"
# 615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dank ein Pokémon!\p"
# 616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "War ein Witz! Aber ich werde mich\n"
# 617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "jetzt tatsächlich registrieren, okay?$"
# 618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject::
# 620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, wie fies! Dafür werde ich den\n"
# 621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Duellturm in Schutt und Asche legen!\p"
# 622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Natürlich nicht! War ein Witz.$"
# 623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro::
# 625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, da! Ich bin echt gut drauf.\n"
# 626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon auch!\p"
# 627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_3} und bin ein\n"
# 628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Matrose. Ich bin Schüler Nr. {STR_VAR_2}\p"
# 629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "von {STR_VAR_1}. Lehn mich nicht\n"
# 630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "vorschnell ab!$"
# 631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1::
# 633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein Team habe ich nach dem Rat meines\n"
# 634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lehrers zusammengestellt.\l"
# 635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask::
# 638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir beide sollten uns wirklich\n"
# 641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "zusammentun! Der Sieg wäre uns sicher.$"
# 642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept::
# 644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, hey! Du gefällst mir, du hast Stil!\n"
# 645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich gehe jetzt und registriere mich.$"
# 646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject::
# 648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, {PLAYER}, das ist schade!\n"
# 649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wenn ich mal so ehrlich sein darf…$"
# 650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro::
# 652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Juhuu juhuu juhuu!\n"
# 653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich mag alles, was Spaß macht!\p"
# 654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wie geht's? Ich bin {STR_VAR_3}!\n"
# 655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
# 656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1::
# 658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} gab mir Anweisungen.\n"
# 659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask::
# 662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was bleibt da noch zu sagen?\n"
# 665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Los, komm! Mach schon!\p"
# 666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte! Ich flehe dich an!\n"
# 667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Kämpfe zusammen mit mir. Bitte!$"
# 668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept::
# 670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeah! Das Glück ist heute auf meiner\n"
# 671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Seite. Ich bin so froh!\p"
# 672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bevor wir anfangen, laufe ich schnell\n"
# 673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und registriere mich.$"
# 674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject::
# 676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du weist mich ab?\n"
# 677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, du enttäuschst mich sehr.$"
# 678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro::
# 680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hust… Röchel…\p"
# 681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tut mir Leid, ich bin erkältet.\n"
# 682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aber meinen Pokémon geht es gut.\p"
# 683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_3}, Schüler Nr. {STR_VAR_2}\n"
# 684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "von {STR_VAR_1}. Hust… Hust…$"
# 685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1::
# 687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe mir den Rat meines Lehrers zu\n"
# 688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Herzen genommen und ein {STR_VAR_2},\l"
# 689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, sowie$"
# 690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask::
# 692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
# 693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "in meinem Team.\p"
# 694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich trainiere jeden Tag, bei Wind und\n"
# 695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wetter, mit ihnen.\p"
# 696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Deswegen bin ich wahrscheinlich auch\n"
# 697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "erkältet. Glaube ich…\p"
# 698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nun? Sollen wir beide uns zusammentun\n"
# 699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und Seite an Seite kämpfen?$"
# 700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept::
# 702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Danke, das freut mich sehr!\n"
# 703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hust… Hust…\l"
# 704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Warte, ich registriere mich eben.$"
# 705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject::
# 707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ach, du willst nicht? {PLAYER},\n"
# 708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "wir wären ein gutes Team gewesen…$"
# 709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro::
# 711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\n"
# 712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das hier ist echt Nerven zerreißend!\p"
# 713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_3}.\n"
# 714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
# 715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1::
# 717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} riet mir zu diesem Team:\n"
# 718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask::
# 721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin sehr zufrieden und zu-\n"
# 724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "versichtlich. Bilden wir ein Team?$"
# 725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept::
# 727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ja! Toll! Danke! Ich bin schüchtern,\n"
# 728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "aber ich werde mein Bestes geben!\p"
# 729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich jetzt registrieren.$"
# 730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject::
# 732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Och, sag doch nicht einfach Nein!\n"
# 733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin doch schon verlegen genug…$"
# 734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro::
# 736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_3}. Das ist keine Lüge!\n"
# 737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"
# 738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1::
# 740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\p"
# 741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und da ich diesen wertvollen Rat gerne\n"
# 742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "befolge, habe ich ein {STR_VAR_2},\l"
# 743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und ein$"
# 744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask::
# 746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wenn es dir genehm ist, dann würde ich\n"
# 748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "dich bitten, mich als Partner zu wählen.$"
# 749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept::
# 751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du entscheidest dich wirklich für mich?\n"
# 752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wenn nicht, wäre das schrecklich für\p"
# 753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mich. Da du zustimmst, werde ich uns\n"
# 754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "jetzt anmelden.$"
# 755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject::
# 757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm? Warum lehnst du mich ab? Ist das\n"
# 758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "deine spezielle Art von Humor?$"
# 759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro::
# 761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_1} und eine Göre!$"
# 762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1::
# 764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2}, das\n"
# 765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask::
# 768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\n"
# 769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Die beiden begleiten mich.\p"
# 770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Willst du mein Teampartner sein?$"
# 771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept::
# 773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Danke!\n"
# 774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns jetzt registrieren.$"
# 775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject::
# 777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du willst nicht mein Teampartner sein?\n"
# 778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das wird dir später bestimmt Leid tun…$"
# 779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro::
# 781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\p"
# 782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Teenager {STR_VAR_1}!$"
# 783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1::
# 785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Willst du wissen, was ich hab?\n"
# 786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask::
# 789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du wählst mich doch als deinen\n"
# 792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Partner, oder etwa nicht?$"
# 793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept::
# 795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Spitze!\n"
# 796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren!$"
# 797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject::
# 799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oooh! Dabei wären wir mit meinen\n"
# 800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pokémon unschlagbar gewesen!$"
# 801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro::
# 803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Halli hallo!\n"
# 804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin der Wanderer {STR_VAR_1}!$"
# 805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 806 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1::
# 807 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Willst du wissen, wen ich dabei habe??\n"
# 808 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask::
# 811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 812 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann!\p"
# 813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Na, hört sich das gut an? Sollen wir\n"
# 814 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mit dir ein Team bilden?$"
# 815 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 816 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept::
# 817 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo hallo!\n"
# 818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dann werde ich uns mal registrieren.$"
# 819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 820 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject::
# 821 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hätte gerne mit dir Seite an Seite\n"
# 822 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "gekämpft.$"
# 823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 824 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro::
# 825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo! Ich bin {STR_VAR_1},\n"
# 826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "eine wahre Schönheit!$"
# 827 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 828 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1::
# 829 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dies sind meine Pokémon!\n"
# 830 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 831 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 832 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask::
# 833 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 834 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann!\p"
# 835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was meinst du? Möchtest du mit mir ein\n"
# 836 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team bilden?$"
# 837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 838 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept::
# 839 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wunderbar!\n"
# 840 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns jetzt registrieren.$"
# 841 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 842 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject::
# 843 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was für eine Enttäuschung!\p"
# 844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir beide Seite an Seite - das wäre\n"
# 845 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "wirklich schön gewesen…$"
# 846 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 847 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro::
# 848 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo!\p"
# 849 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Weißt du, wer ich bin?\n"
# 850 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_1}, der Angler!$"
# 851 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 852 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1::
# 853 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein Team: ein {STR_VAR_2},\n"
# 854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 855 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 856 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask::
# 857 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 858 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wie sieht's aus? Interesse, mit\n"
# 860 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "uns ein Team zu bilden?$"
# 861 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 862 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept::
# 863 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Fein, fein!\n"
# 864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Überlass den Rest ruhig mir!\p"
# 865 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns jetzt registrieren.$"
# 866 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 867 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject::
# 868 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und dabei wären wir so ein gutes Team\n"
# 869 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "gewesen…$"
# 870 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 871 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro::
# 872 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Freut mich, dich kennen zu lernen.\n"
# 873 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin die Lady {STR_VAR_1}.$"
# 874 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 875 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1::
# 876 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mich begleitet ein {STR_VAR_2},\n"
# 877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 878 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 879 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask::
# 880 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 881 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann. Ich hoffe, wir erfüllen deine\p"
# 882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Erwartungen, denn ich würde gerne\n"
# 883 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "an deiner Seite kämpfen.$"
# 884 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 885 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept::
# 886 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bedanke mich sehr! Ich werde\n"
# 887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mich nun um die Registrierung kümmern.$"
# 888 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 889 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject::
# 890 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin sicher, du wirst es irgendwann\n"
# 891 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "bedauern, uns abgelehnt zu haben.$"
# 892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 893 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro::
# 894 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Triathlet {STR_VAR_1}!$"
# 895 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 896 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1::
# 897 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe…\n"
# 898 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 899 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 900 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask::
# 901 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 902 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann. Das ist mein Paar!\p"
# 903 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte?\n"
# 904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lass uns ein Team bilden, ja?$"
# 905 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 906 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept::
# 907 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Juhuu, danke!\n"
# 908 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich nun registrieren.$"
# 909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 910 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject::
# 911 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dabei wären wir beide wirklich\n"
# 912 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "unglaublich stark gewesen…$"
# 913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 914 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro::
# 915 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\n"
# 916 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Käfersammler {STR_VAR_1}!$"
# 917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 918 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1::
# 919 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schau mal, was ich hier habe!\n"
# 920 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 921 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask::
# 923 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 924 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 925 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hast du gehört?\n"
# 926 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Komm, wir bilden ein Team!$"
# 927 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 928 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept::
# 929 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Verstanden!\n"
# 930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kümmere mich um die Registrierung.$"
# 931 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 932 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject::
# 933 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ach, dabei sind meine Pokémon klasse!\n"
# 934 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffe, du wirst das nicht bereuen.$"
# 935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 936 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro::
# 937 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Guten Tag!\n"
# 938 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schulkind {STR_VAR_1}!$"
# 939 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1::
# 941 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich ziehe ein {STR_VAR_2} auf, das\n"
# 942 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 943 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 944 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask::
# 945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 946 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nicht schlecht, was? Bist du be-\n"
# 947 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "eindruckt und wählst uns als Partner?$"
# 948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 949 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept::
# 950 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank! Ich werde mich\n"
# 951 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "um die Registrierung kümmern.$"
# 952 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 953 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject::
# 954 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das ist schade…\p"
# 955 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffte, etwas von dir lernen zu\n"
# 956 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "können…$"
# 957 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 958 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro::
# 959 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo! Ich werde mich dir vorstellen!\n"
# 960 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schnösel {STR_VAR_1}!$"
# 961 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 962 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1::
# 963 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Rate mal, was ich bei mir habe!\n"
# 964 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 965 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask::
# 967 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 968 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 969 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich gebe dir hier und jetzt die Chance,\n"
# 970 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mit uns ein Team zu bilden.$"
# 971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 972 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept::
# 973 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Kluge Entscheidung!\p"
# 974 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich um die Registrierung\n"
# 975 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kümmern.$"
# 976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 977 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject::
# 978 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ausgerechnet mich lehnst du ab?!\n"
# 979 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das wird dir bestimmt noch Leid tun!$"
# 980 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 981 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro::
# 982 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Kiyaii!\n"
# 983 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schwarzgurt {STR_VAR_1}.$"
# 984 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 985 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1::
# 986 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Begleiter sind ein {STR_VAR_2},\n"
# 987 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und ein$"
# 988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 989 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask::
# 990 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 991 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bitte, erfüll mir einen Wunsch!\n"
# 992 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bilde ein Team mit mir.$"
# 993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 994 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept::
# 995 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Kiyaii! Ich werde mich um\n"
# 996 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "die Registrierung kümmern.$"
# 997 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject::
# 999 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Verstehe… Ich hoffe, du gibst mir\n"
# 1000 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "beim nächsten Mal die Gelegenheit…$"
# 1001 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1002 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro::
# 1003 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo, du da!\n"
# 1004 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_1}, ein Planscher!$"
# 1005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1006 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1::
# 1007 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Weißt du, ich habe ein {STR_VAR_2},\n"
# 1008 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 1009 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask::
# 1011 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\n"
# 1012 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wählst du mich als Partner, ja?$"
# 1013 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1014 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept::
# 1015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hui! Fein!\n"
# 1016 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren.$"
# 1017 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1018 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject::
# 1019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wären wir Partner geworden, wären\n"
# 1020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "wir bestimmt superstark gewesen.$"
# 1021 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1022 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro::
# 1023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sei gegrüßt…\n"
# 1024 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Hexe {STR_VAR_1}…$"
# 1025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1026 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1::
# 1027 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2} bei mir, das\n"
# 1028 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1029 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask::
# 1031 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann…\p"
# 1032 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bitte dich…\n"
# 1033 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nimm uns als deine Partner an…$"
# 1034 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept::
# 1036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank…\n"
# 1037 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren…$"
# 1038 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1039 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject::
# 1040 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und wir wären so gerne deine\n"
# 1041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Partner geworden…$"
# 1042 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1043 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro::
# 1044 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wie geht es dir? Ich bin {STR_VAR_1},\n"
# 1045 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein Pokémon-Züchter.$"
# 1046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1047 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1::
# 1048 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich züchte die besten Pokémon!\n"
# 1049 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1050 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1051 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask::
# 1052 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1053 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann.\p"
# 1054 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wie sieht's aus? Sollen wir ein Team\n"
# 1055 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "bilden?$"
# 1056 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1057 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept::
# 1058 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen, vielen Dank!\p"
# 1059 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kümmere mich um die Registrierung,\n"
# 1060 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "du kannst hier entspannt warten.$"
# 1061 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1062 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject::
# 1063 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schade, ich wäre gerne dein Teampartner\n"
# 1064 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "geworden…$"
# 1065 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1066 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro::
# 1067 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\n"
# 1068 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Triathlet {STR_VAR_1}!$"
# 1069 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1070 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1::
# 1071 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wer mich beim Laufen begleitet?\n"
# 1072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1073 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1074 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask::
# 1075 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2},\n"
# 1076 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann!\p"
# 1077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nun?\n"
# 1078 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sollen wir ein Team mit dir bilden?$"
# 1079 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1080 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept::
# 1081 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das ist wahrer Sportsgeist!\p"
# 1082 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns schnell registrieren.\n"
# 1083 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lauf nicht weg!$"
# 1084 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1085 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject::
# 1086 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir beide hätten uns den ersten Platz\n"
# 1087 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "geholt. Schade, schade, schade!$"
# 1088 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1089 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro::
# 1090 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, du! Mein Name ist {STR_VAR_1}!\n"
# 1091 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ein Triathlet.$"
# 1092 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1093 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1::
# 1094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein Team trainiert mit mir.\n"
# 1095 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1096 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1097 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask::
# 1098 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2},\n"
# 1099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 1100 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nicht gerade unterste Schublade, nicht\n"
# 1101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "wahr? Wir sollten ein Team bilden!$"
# 1102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept::
# 1104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sehr gut!\n"
# 1105 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich übernehme die Registrierung.$"
# 1106 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1107 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject::
# 1108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schade! Ich hätte mich wirklich\n"
# 1109 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "angestrengt und mein Bestes gegeben!$"
# 1110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro::
# 1112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Kämpferin {STR_VAR_1}!$"
# 1113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1114 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1::
# 1115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2}, das\n"
# 1116 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask::
# 1119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
# 1120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sagt dir diese Combo zu?\n"
# 1121 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sollen wir mit dir ein Team bilden?$"
# 1122 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept::
# 1124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Danke!\p"
# 1125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren.$"
# 1126 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject::
# 1128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und ich hatte gehofft, mit dir das\n"
# 1129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ultimative Kampfteam bilden zu können…$"
# 1130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro::
# 1132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Triathlet {STR_VAR_1}!$"
# 1133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1::
# 1135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mich begleiten ein {STR_VAR_2}, das\n"
# 1136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1138 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask::
# 1139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir könnten mit dir ein Team bilden.\n"
# 1141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wäre das nicht super?$"
# 1142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept::
# 1144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Danke!\p"
# 1145 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns jetzt sofort\n"
# 1146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "registrieren.$"
# 1147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject::
# 1149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schade, schade! Wir wären das\n"
# 1150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "stärkste Team weit und breit gewesen!$"
# 1151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro::
# 1153 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meinst du mich? Ich bin ein\n"
# 1154 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Planscher und heiße {STR_VAR_1}!$"
# 1155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1::
# 1157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Welche Pokémon ich dabei habe?\n"
# 1158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 1159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1160 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask::
# 1161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 1162 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann…\p"
# 1163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey? Du und ich - wir bilden ein\n"
# 1164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team, okay?$"
# 1165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept::
# 1167 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay!\p"
# 1168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde mich registrieren!\n"
# 1169 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Die anderen werden blass vor Neid!$"
# 1170 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject::
# 1172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind stark, jawohl!\n"
# 1173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schade, dass du Nein sagst.$"
# 1174 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1175 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro::
# 1176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Jahuu!\n"
# 1177 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Gitarrist {STR_VAR_1}!$"
# 1178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1::
# 1180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schau dir meine Begleitband an!\n"
# 1181 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1182 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask::
# 1184 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 1186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Richtig wild, was? Komm, tritt\n"
# 1187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "unserer Band bei!$"
# 1188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1189 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept::
# 1190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ja! Das ist der richtige Takt! Ich werde\n"
# 1191 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mich um die Registrierung kümmern.$"
# 1192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject::
# 1194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind megastark!\n"
# 1195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du wirst das bestimmt bedauern!$"
# 1196 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro::
# 1198 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nett, dich kennen zu lernen.\n"
# 1199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Gentleman {STR_VAR_1}.$"
# 1200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1::
# 1202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde begleitet von meinem treuen\n"
# 1203 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1204 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1205 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask::
# 1206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und meinem treuen {STR_VAR_2},\n"
# 1207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 1208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Darf ich dich fragen, ob wir mit dir im\n"
# 1209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team Seite an Seite kämpfen dürfen?$"
# 1210 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1211 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept::
# 1212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank! Es ist mir eine Ehre,\n"
# 1213 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mich um die Registrierung zu kümmern!$"
# 1214 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1215 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject::
# 1216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Welch ein Unglück…\p"
# 1217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde geduldig auf die nächste\n"
# 1218 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gelegenheit warten…$"
# 1219 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1220 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro::
# 1221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo! Ich bin {STR_VAR_1},\n"
# 1222 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein großer Pokéfan.$"
# 1223 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1224 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1::
# 1225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2} dabei, das\n"
# 1226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1227 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1228 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask::
# 1229 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gefällt dir, was du siehst?\n"
# 1231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Warum werden wir nicht Partner?$"
# 1232 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1233 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept::
# 1234 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank!\n"
# 1235 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kümmere mich um die Registrierung.$"
# 1236 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject::
# 1238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind erste Klasse!\n"
# 1239 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schade, dass du das nicht akzeptierst.$"
# 1240 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1241 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro::
# 1242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm!\n"
# 1243 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin der Experte {STR_VAR_1}!$"
# 1244 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1::
# 1246 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind ein {STR_VAR_2}, das\n"
# 1247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1248 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1249 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask::
# 1250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
# 1251 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Willst du zu uns ins Team?$"
# 1252 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept::
# 1254 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm!\n"
# 1255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns sofort anmelden!\l"
# 1256 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Lass uns beide unser Bestes geben!$"
# 1257 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject::
# 1259 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hoffen wir mal, dass deine Entscheidung\n"
# 1260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "richtig war…$"
# 1261 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1262 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro::
# 1263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo, hallo.\n"
# 1264 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Experte {STR_VAR_1}.$"
# 1265 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1266 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1::
# 1267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich zog meine Pokémon sorgfältig auf.\n"
# 1268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 1269 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1270 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask::
# 1271 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 1272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 1273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Möchtest du mit uns ein Team bilden?$"
# 1274 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1275 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept::
# 1276 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sehr gut! Fein! Ich werde mich\n"
# 1277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "sofort um die Registrierung kümmern.$"
# 1278 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject::
# 1280 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Na, vielleicht beim nächsten Mal…$"
# 1281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1282 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro::
# 1283 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Drachenprofi {STR_VAR_1}!$"
# 1284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1285 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1::
# 1286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "In meinem Team ist ein {STR_VAR_2},\n"
# 1287 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 1288 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask::
# 1290 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1291 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 1292 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was meinst du? Möchtest du mit uns\n"
# 1293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein Team bilden?$"
# 1294 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1295 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept::
# 1296 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, ich werde mein Bestes geben!\n"
# 1297 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns jetzt registrieren.$"
# 1298 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject::
# 1300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du wirst keinen stärkeren Partner als\n"
# 1301 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mich finden!$"
# 1302 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1303 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro::
# 1304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Vogelfänger {STR_VAR_1}!$"
# 1305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1306 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1::
# 1307 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Welche Pokémon ich habe?\n"
# 1308 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1310 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask::
# 1311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1312 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann.\p"
# 1313 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sind wir nicht ein tolles Gespann?$"
# 1314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1315 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept::
# 1316 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Super, danke!\n"
# 1317 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns anmelden.$"
# 1318 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1319 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject::
# 1320 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon und ich sind stark.\n"
# 1321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was für eine Enttäuschung…$"
# 1322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1323 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro::
# 1324 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Ninjajunge {STR_VAR_1}!$"
# 1325 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1326 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1::
# 1327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon? Ein {STR_VAR_2}, das\n"
# 1328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1329 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1330 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask::
# 1331 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
# 1332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Komm, wir bilden ein Team!$"
# 1333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1334 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept::
# 1335 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ja!\n"
# 1336 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns an.$"
# 1337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject::
# 1339 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du wirst meine starken Pokémon\n"
# 1340 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "bestimmt vermissen!$"
# 1341 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1342 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro::
# 1343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\n"
# 1344 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schirmdame {STR_VAR_1}!$"
# 1345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1346 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1::
# 1347 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Begleiter sind ein {STR_VAR_2},\n"
# 1348 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 1349 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask::
# 1351 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1352 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sind sie nicht bezaubernd?\n"
# 1353 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Möchtest du mit uns ein Team bilden?$"
# 1354 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept::
# 1356 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank!\p"
# 1357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns anmelden. Wir sollten\n"
# 1358 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "uns beide nicht enttäuschen!$"
# 1359 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject::
# 1361 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind ungeheuer stark.\n"
# 1362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wie enttäuschend…$"
# 1363 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1364 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro::
# 1365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\n"
# 1366 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Käfermaniac {STR_VAR_1}!$"
# 1367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1368 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1::
# 1369 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe meine Pokémon selbst gefunden!\n"
# 1370 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 1371 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask::
# 1373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 1374 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 1375 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Alle selbst gefunden! Möchtest du mit\n"
# 1376 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "uns ein Team bilden?$"
# 1377 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept::
# 1379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay!\n"
# 1380 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Verstanden!\p"
# 1381 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Die Registrierung geht ganz schnell.$"
# 1382 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject::
# 1384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mit meinen selbst gefundenen Pokémon\n"
# 1385 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "hätten wir nicht verlieren können…$"
# 1386 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1387 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro::
# 1388 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahoi, Landratte!\n"
# 1389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Matrose {STR_VAR_1}!$"
# 1390 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1::
# 1392 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich zeige dir meinen ganzen Stolz!\n"
# 1393 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 1394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1395 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask::
# 1396 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 1397 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann!\p"
# 1398 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Natürlich kannst du so nicht Nein\n"
# 1399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "sagen! Also? Sind wir ein Team?$"
# 1400 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1401 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept::
# 1402 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe nichts anderes erwartet!\n"
# 1403 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kümmere mich um die Registrierung.$"
# 1404 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1405 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject::
# 1406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir wären über die Gegner wie ein Sturm\n"
# 1407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "auf hoher See hinweggefegt…$"
# 1408 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1409 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro::
# 1410 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, ich bin {STR_VAR_1}.\n"
# 1411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ein Pokémon-Sammler.$"
# 1412 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1413 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1::
# 1414 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Juwelen! Ein {STR_VAR_2},\n"
# 1415 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und$"
# 1416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1417 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask::
# 1418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1419 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nobel, was? Wir beide sollten echt\n"
# 1420 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein Team bilden. Was meinst du?$"
# 1421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1422 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept::
# 1423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, yeah!\p"
# 1424 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dann lass uns keine weitere Zeit\n"
# 1425 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mehr vergschwenden! Ich melde uns an.$"
# 1426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1427 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject::
# 1428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das betrübt mich jetzt wirklich.\n"
# 1429 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind doch wahre Schätze!$"
# 1430 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1431 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro::
# 1432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Na, du? Ich bin {STR_VAR_1}.\n"
# 1433 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ein Pokémon-Ranger.$"
# 1434 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1::
# 1436 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2}, das\n"
# 1437 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1438 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1439 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask::
# 1440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
# 1441 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meinst du nicht, dass wir ein\n"
# 1442 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "beeindruckendes Team wären?$"
# 1443 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1444 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept::
# 1445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das ist klasse!\n"
# 1446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns an.$"
# 1447 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1448 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject::
# 1449 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nächstes Mal wählst du meine Pokémon\n"
# 1450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "aus. Ja?$"
# 1451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1452 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro::
# 1453 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich heiße {STR_VAR_1}.\n"
# 1454 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ein Pokémon-Ranger.$"
# 1455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1456 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1::
# 1457 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe folgende Pokémon dabei:\n"
# 1458 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1459 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask::
# 1461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1462 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann.\p"
# 1463 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Würdest du nicht gerne mit meiner\n"
# 1464 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bande ein Team bilden?$"
# 1465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1466 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept::
# 1467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir werden unser Bestes geben!\n"
# 1468 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns ganz schnell anmelden!$"
# 1469 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1470 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject::
# 1471 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffe, das nächste Mal wählst du\n"
# 1472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "meine Pokémon aus.$"
# 1473 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1474 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro::
# 1475 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schön, dich kennen zu lernen. Ich bin\n"
# 1476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aromalady {STR_VAR_1}!$"
# 1477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1478 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1::
# 1479 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich reise mit einem {STR_VAR_2}, das\n"
# 1480 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und einem$"
# 1481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask::
# 1483 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1484 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffe, sie treffen deinen Ge-\n"
# 1485 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "schmack? Möchtest du ein Team bilden?$"
# 1486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1487 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept::
# 1488 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich fühle mich geehrt!\n"
# 1489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns sofort anmelden.$"
# 1490 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1491 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject::
# 1492 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Es wäre schön, wenn wir das nächste\n"
# 1493 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mal ein Team bilden könnten.$"
# 1494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1495 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro::
# 1496 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Weißt du, wer ich bin?\n"
# 1497 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin der Ruinenmaniac {STR_VAR_1}!$"
# 1498 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1::
# 1500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2}, das\n"
# 1501 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1502 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask::
# 1504 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
# 1505 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Faszinierend, nicht wahr?\n"
# 1506 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Möchtest du ein Team mit uns bilden?$"
# 1507 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept::
# 1509 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das ist eine gute Entscheidung! Ich\n"
# 1510 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "werde mich um die Anmeldung kümmern.$"
# 1511 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1512 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject::
# 1513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hmm… Ich bin überzeugt,\n"
# 1514 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "meine Pokémon sind stark…$"
# 1515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1516 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro::
# 1517 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Ass-Trainer {STR_VAR_1}.$"
# 1518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1519 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1::
# 1520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2}, das\n"
# 1521 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1522 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1523 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask::
# 1524 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,\n"
# 1525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "dabei. Cool, was?\p"
# 1526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und wäre es nicht noch viel cooler, wenn\n"
# 1527 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "wir ein Team bilden würden?$"
# 1528 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept::
# 1530 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cool!\n"
# 1531 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns blitzschnell an.$"
# 1532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1533 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject::
# 1534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und ich dachte, wir könnten das coolste\n"
# 1535 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team in der Geschichte werden…$"
# 1536 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1537 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro::
# 1538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Ass-Trainer {STR_VAR_1}.$"
# 1539 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1540 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1::
# 1541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein Team, fragst du? Ein {STR_VAR_2},\n"
# 1542 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann, und ein$"
# 1543 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1544 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask::
# 1545 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hört sich das gut an?\n"
# 1547 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Warum werden wir nicht Partner?$"
# 1548 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1549 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept::
# 1550 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das hört sich gut an!\n"
# 1551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich sorge für die Registrierung.$"
# 1552 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1553 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject::
# 1554 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und ich dachte, ich könnte endlich mal\n"
# 1555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mit einem starken Partner kämpfen…$"
# 1556 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1557 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro::
# 1558 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Tag!\n"
# 1559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Pokémaniac {STR_VAR_1}!$"
# 1560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1561 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1::
# 1562 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was ich als Kenner zu bieten habe?\n"
# 1563 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1565 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask::
# 1566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1567 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann! Ist das was? Ja oder ja?\p"
# 1568 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Also los! Stampfen wir die andern\n"
# 1569 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "in Grund und Boden. Ja oder ja?$"
# 1570 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept::
# 1572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sehr gute Entscheidung!\n"
# 1573 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren.$"
# 1574 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1575 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject::
# 1576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine Pokémon sind der Hammer!\n"
# 1577 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dein Pech, wenn du es bedauerst.$"
# 1578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1579 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro::
# 1580 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo, du da! Ich bin {STR_VAR_1},\n"
# 1581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein wahrer Hitzkopf!$"
# 1582 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1::
# 1584 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Womit ich das Feuer entfache? Mit\n"
# 1585 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}$"
# 1586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1587 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask::
# 1588 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kennt, und einem\n"
# 1589 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kennt!\p"
# 1590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und was sagst du?\n"
# 1591 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sollen wir ein Team bilden?$"
# 1592 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1593 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept::
# 1594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gut!\n"
# 1595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns dann mal anmelden.$"
# 1596 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1597 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject::
# 1598 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Versprich mir, dass wir, wenn wir uns das\n"
# 1599 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "nächste Mal treffen, Partner werden.$"
# 1600 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro::
# 1602 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_1}, ein Camper.$"
# 1603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1604 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1::
# 1605 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kümmere mich um ein {STR_VAR_2}, das\n"
# 1606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und um ein$"
# 1607 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask::
# 1609 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1610 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wäre es nicht ein Spaß, wenn wir\n"
# 1611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein Team bilden? Ich denke schon!$"
# 1612 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept::
# 1614 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeah!\n"
# 1615 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns an.$"
# 1616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1617 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject::
# 1618 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dann aber das nächste Mal, ja?\n"
# 1619 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich wäre gerne in deinem Team.$"
# 1620 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1621 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro::
# 1622 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo!\n"
# 1623 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Picknicker {STR_VAR_1}!$"
# 1624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1::
# 1626 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2} dabei, das\n"
# 1627 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1628 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1629 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask::
# 1630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sollen wir ein Team bilden?$"
# 1632 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1633 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept::
# 1634 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank!\n"
# 1635 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren.$"
# 1636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1637 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject::
# 1638 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffe, dass wir irgendwann mal\n"
# 1639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Teampartner werden!$"
# 1640 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro::
# 1642 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Psycho {STR_VAR_1}!$"
# 1643 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1644 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1::
# 1645 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2}, das\n"
# 1646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1648 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask::
# 1649 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1650 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Würdest du gerne ein Team mit\n"
# 1651 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "uns bilden?$"
# 1652 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept::
# 1654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Na, wunderbar!\n"
# 1655 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns an.$"
# 1656 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1657 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject::
# 1658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wenn wir uns das nächste Mal treffen,\n"
# 1659 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "müssen wir unbedingt ein Team bilden!$"
# 1660 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1661 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro::
# 1662 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_1}!\n"
# 1663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ein Psycho…$"
# 1664 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1::
# 1666 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
# 1667 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein$"
# 1668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1669 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask::
# 1670 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,\n"
# 1671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "sind meine Schüler.\p"
# 1672 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Kann ich dich überzeugen, ein Team\n"
# 1673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mit uns zu bilden?$"
# 1674 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1675 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept::
# 1676 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dankeschön.\n"
# 1677 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich kümmere mich um die Anmeldung.$"
# 1678 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject::
# 1680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich hoffe, es wird sich eine weitere\n"
# 1681 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gelegenheit für uns bieten…$"
# 1682 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1683 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro::
# 1684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Schulkind {STR_VAR_1}.$"
# 1685 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1686 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1::
# 1687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Mein Pärchen ist ein {STR_VAR_2}, das\n"
# 1688 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1690 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask::
# 1691 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Darf ich bitte dein Teampartner sein?$"
# 1693 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1694 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept::
# 1695 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oooh, das ist prima!\n"
# 1696 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns sofort an!$"
# 1697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1698 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject::
# 1699 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Och… Darf ich dann das nächste Mal\n"
# 1700 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "dein Teampartner sein?$"
# 1701 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro::
# 1703 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Huhu! Ich heiße {STR_VAR_1}!\n"
# 1704 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin ein Pokémon-Züchter.$"
# 1705 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1706 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1::
# 1707 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein {STR_VAR_2} gezüchtet, das\n"
# 1708 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1} kann, und ein$"
# 1709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1710 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask::
# 1711 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1712 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hört sich das für dich interessant an?\n"
# 1713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Dann lass uns doch ein Team bilden.$"
# 1714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1715 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept::
# 1716 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Fein, fein! Sehr gut!\n"
# 1717 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Überlass die Anmeldung ruhig mir.$"
# 1718 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject::
# 1720 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nächstes Mal bilden wir aber ein\n"
# 1721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team, ja?$"
# 1722 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1723 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro::
# 1724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin {STR_VAR_1} und kann mit Stolz\n"
# 1725 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "behaupten, dass ich ein Pokéfan bin!$"
# 1726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1727 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1::
# 1728 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Meine geliebten Pokémon:\n"
# 1729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1730 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1731 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask::
# 1732 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
# 1733 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sind sie nicht allerliebst? Komm! Wir\n"
# 1734 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "müssen einfach ein Team bilden!$"
# 1735 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept::
# 1737 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Vielen Dank!\n"
# 1738 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns sofort an!$"
# 1739 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1740 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject::
# 1741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Weißt du, meine geliebten Pokémon sind\n"
# 1742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "die Besten. Wie ärgerlich…$"
# 1743 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1744 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro::
# 1745 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, ich bin Schwimmerin {STR_VAR_1}.$"
# 1746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1747 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1::
# 1748 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
# 1749 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein$"
# 1750 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask::
# 1752 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\n"
# 1753 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Damit lässt es sich gut trainieren!\p"
# 1754 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wir beide sollten ein Team bilden!$"
# 1755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept::
# 1757 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cool!\n"
# 1758 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich werde uns registrieren.$"
# 1759 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1760 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject::
# 1761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Für das nächste Mal schuldest du mir\n"
# 1762 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "einen Teamkampf!$"
# 1763 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro::
# 1765 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was geht ab?\n"
# 1766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Triathlet {STR_VAR_1}.$"
# 1767 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1768 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1::
# 1769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich habe ein paar ganz anständige\n"
# 1770 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pokémon. Ein {STR_VAR_2}, das {STR_VAR_1}$"
# 1771 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1772 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask::
# 1773 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein {STR_VAR_2},\n"
# 1774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "das {STR_VAR_1} kann.\p"
# 1775 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Und du und ich würden auch ein ganz\n"
# 1776 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "anständiges Team abgeben. Oder?$"
# 1777 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1778 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept::
# 1779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wunderbar!\n"
# 1780 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Warte, ich melde uns eben an.$"
# 1781 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1782 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject::
# 1783 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nächstes Mal erwarte ich, dass wir ein \n"
# 1784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Team werden. Vergiss das nicht.$"
# 1785 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro::
# 1787 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich bin Triathlet {STR_VAR_1}.$"
# 1788 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1789 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1::
# 1790 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann, und ein$"
# 1792 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask::
# 1794 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann. So\n"
# 1795 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "sieht mein Paar aus.\p"
# 1796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Was meinst du? Ich würde sagen, wir\n"
# 1797 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "würden ein gutes Team abgeben.$"
# 1798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1799 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept::
# 1800 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Das wollte ich hören!\n"
# 1801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich melde uns schnell an.$"
# 1802 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject::
# 1804 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Du gibst mir aber nochmal die Chance,\n"
# 1805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "mit dir ein Team zu bilden, oder?$"
# 1806 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1807 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro::
# 1808 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hallo! Ich bin {STR_VAR_1},\n"
# 1809 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "ein Schwimmer.$"
# 1810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1::
# 1812 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Schau dir mal diese Prachtexemplare an!\n"
# 1813 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"
# 1814 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1815 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask::
# 1816 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
# 1817 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "kann!\p"
# 1818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Niedlich, was? Und beeindruckend?\n"
# 1819 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Bildest du mit uns ein perfektes Team?$"
# 1820 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1821 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept::
# 1822 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Fantastisch!\n"
# 1823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ich registriere uns!$"
# 1824 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"

# 1825 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject::
# 1826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Nächstes Mal, wenn wir uns treffen,\n"
# 1827 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "müssen wir aber ein Team bilden!!!$"
