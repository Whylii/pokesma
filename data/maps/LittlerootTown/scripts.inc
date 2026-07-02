LittlerootTown_EventScript_OldMan::
# 2 "data/maps/LittlerootTown/scripts.pory"
	checkitem ITEM_EXP_SHARE
# 3 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LittlerootTown_EventScript_OldMan_2
# 7 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownOldMan, MSGBOX_NPC
LittlerootTown_EventScript_OldMan_1:
# 9 "data/maps/LittlerootTown/scripts.pory"
	release
	return

LittlerootTown_EventScript_OldMan_2:
# 4 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownOldManAlreadyHasEXPShare, MSGBOX_NPC
	goto LittlerootTown_EventScript_OldMan_1


LittlerootTown_MapScripts::
# 21 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 37 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 38 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 39 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 23 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_1
# 24 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/LittlerootTown/scripts.pory"
	random 3
# 26 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 30 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 32 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 29 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return

LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 31 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return

LittlerootTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 33 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 34 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return


# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 44 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 45 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 46 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 47 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 48 "data/maps/LittlerootTown/scripts.pory"

# 49 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 50 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 51 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 52 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 53 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 54 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 55 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 56 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 59 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 60 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 61 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 62 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 63 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 64 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 65 "data/maps/LittlerootTown/scripts.pory"

# 66 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 67 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 68 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 69 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 70 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 71 "data/maps/LittlerootTown/scripts.pory"

# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 74 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 75 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 76 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 77 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 78 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 79 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 80 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 81 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 82 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 83 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 84 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 85 "data/maps/LittlerootTown/scripts.pory"
	end
# 86 "data/maps/LittlerootTown/scripts.pory"

# 87 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 88 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 92 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 93 "data/maps/LittlerootTown/scripts.pory"
	return
# 94 "data/maps/LittlerootTown/scripts.pory"

# 95 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 96 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 97 "data/maps/LittlerootTown/scripts.pory"
	return
# 98 "data/maps/LittlerootTown/scripts.pory"

# 99 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 100 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 101 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 102 "data/maps/LittlerootTown/scripts.pory"
	return
# 103 "data/maps/LittlerootTown/scripts.pory"

# 104 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 105 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 106 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 110 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 111 "data/maps/LittlerootTown/scripts.pory"
	return
# 112 "data/maps/LittlerootTown/scripts.pory"

# 113 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 114 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 115 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 116 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 117 "data/maps/LittlerootTown/scripts.pory"
	return
# 118 "data/maps/LittlerootTown/scripts.pory"

# 119 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 120 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 121 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 122 "data/maps/LittlerootTown/scripts.pory"
	return
# 123 "data/maps/LittlerootTown/scripts.pory"

# 124 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 125 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 126 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 127 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 128 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 129 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 130 "data/maps/LittlerootTown/scripts.pory"
	return
# 131 "data/maps/LittlerootTown/scripts.pory"

# 132 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 133 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 134 "data/maps/LittlerootTown/scripts.pory"
	return
# 135 "data/maps/LittlerootTown/scripts.pory"

# 136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 137 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 138 "data/maps/LittlerootTown/scripts.pory"
	return
# 139 "data/maps/LittlerootTown/scripts.pory"

# 140 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 141 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 142 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 143 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 144 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 145 "data/maps/LittlerootTown/scripts.pory"

# 146 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 147 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 148 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 149 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 150 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 151 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 152 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 154 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 155 "data/maps/LittlerootTown/scripts.pory"
	end
# 156 "data/maps/LittlerootTown/scripts.pory"

# 157 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 158 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 159 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 160 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 161 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 162 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 163 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 164 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 165 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 166 "data/maps/LittlerootTown/scripts.pory"
	end
# 167 "data/maps/LittlerootTown/scripts.pory"

# 168 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 169 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 170 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 174 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 175 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 176 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 177 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 179 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 180 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 181 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 182 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 184 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 185 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 186 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 187 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 188 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 189 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 190 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 191 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 192 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 194 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 195 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 196 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 197 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 198 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 199 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 200 "data/maps/LittlerootTown/scripts.pory"
	return
# 201 "data/maps/LittlerootTown/scripts.pory"

# 202 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 204 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown/scripts.pory"

# 206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 209 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 210 "data/maps/LittlerootTown/scripts.pory"

# 211 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 212 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 214 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 215 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown/scripts.pory"

# 217 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 218 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 219 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 220 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 221 "data/maps/LittlerootTown/scripts.pory"

# 222 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 223 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 224 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 225 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 226 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 228 "data/maps/LittlerootTown/scripts.pory"

# 229 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 230 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 231 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 232 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 233 "data/maps/LittlerootTown/scripts.pory"

# 234 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 235 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 236 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 237 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 238 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 239 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 240 "data/maps/LittlerootTown/scripts.pory"

# 241 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 242 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 243 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 244 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 245 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 247 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 248 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 249 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 250 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 251 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 252 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 253 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 254 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 255 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 256 "data/maps/LittlerootTown/scripts.pory"
	end
# 257 "data/maps/LittlerootTown/scripts.pory"

# 258 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 259 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 260 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 263 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 264 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 265 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 266 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 267 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 268 "data/maps/LittlerootTown/scripts.pory"
	end
# 269 "data/maps/LittlerootTown/scripts.pory"

# 270 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 271 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 272 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 273 "data/maps/LittlerootTown/scripts.pory"
	end
# 274 "data/maps/LittlerootTown/scripts.pory"

# 275 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 276 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 277 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 278 "data/maps/LittlerootTown/scripts.pory"
	end
# 279 "data/maps/LittlerootTown/scripts.pory"

# 280 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 281 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 282 "data/maps/LittlerootTown/scripts.pory"
	end
# 283 "data/maps/LittlerootTown/scripts.pory"

# 284 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 285 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 286 "data/maps/LittlerootTown/scripts.pory"
	end
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 289 "data/maps/LittlerootTown/scripts.pory"
	lock
# 290 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 291 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 292 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 293 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 294 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown/scripts.pory"
	release
# 296 "data/maps/LittlerootTown/scripts.pory"
	end
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 299 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 300 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 301 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 303 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 305 "data/maps/LittlerootTown/scripts.pory"
	release
# 306 "data/maps/LittlerootTown/scripts.pory"
	end
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 309 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 310 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 311 "data/maps/LittlerootTown/scripts.pory"
	release
# 312 "data/maps/LittlerootTown/scripts.pory"
	end
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 315 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 316 "data/maps/LittlerootTown/scripts.pory"
	release
# 317 "data/maps/LittlerootTown/scripts.pory"
	end
# 318 "data/maps/LittlerootTown/scripts.pory"

# 319 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 320 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 321 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 322 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 324 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 325 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 327 "data/maps/LittlerootTown/scripts.pory"
	end
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 330 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 331 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 332 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 333 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 334 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 335 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 336 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 337 "data/maps/LittlerootTown/scripts.pory"
	return
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 340 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 341 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 342 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 343 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 344 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 352 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 353 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 357 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 358 "data/maps/LittlerootTown/scripts.pory"

# 359 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 360 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 369 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown/scripts.pory"

# 371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 372 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 375 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 376 "data/maps/LittlerootTown/scripts.pory"

# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 378 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 379 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 380 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 381 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 382 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 383 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 385 "data/maps/LittlerootTown/scripts.pory"
	end
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 388 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 389 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 390 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 391 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 392 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 393 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 394 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 395 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 397 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 399 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 400 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 401 "data/maps/LittlerootTown/scripts.pory"

# 402 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 403 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 404 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 405 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 406 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 407 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 408 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 409 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 412 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 413 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 414 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 417 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 418 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 419 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 420 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 421 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 422 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 423 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 424 "data/maps/LittlerootTown/scripts.pory"
	end
# 425 "data/maps/LittlerootTown/scripts.pory"

# 426 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 427 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 428 "data/maps/LittlerootTown/scripts.pory"
	end
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 431 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 432 "data/maps/LittlerootTown/scripts.pory"
	end
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 435 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 436 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 437 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 438 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 439 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 440 "data/maps/LittlerootTown/scripts.pory"
	end
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 443 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 444 "data/maps/LittlerootTown/scripts.pory"
	return
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 447 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 448 "data/maps/LittlerootTown/scripts.pory"
	return
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 451 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 452 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 453 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 454 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 455 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 456 "data/maps/LittlerootTown/scripts.pory"
	end
# 457 "data/maps/LittlerootTown/scripts.pory"

# 458 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 459 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 460 "data/maps/LittlerootTown/scripts.pory"
	return
# 461 "data/maps/LittlerootTown/scripts.pory"

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 463 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 464 "data/maps/LittlerootTown/scripts.pory"
	return
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 468 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 469 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 474 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 475 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 476 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 477 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 478 "data/maps/LittlerootTown/scripts.pory"
	end
# 479 "data/maps/LittlerootTown/scripts.pory"

# 480 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 481 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 482 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 483 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 484 "data/maps/LittlerootTown/scripts.pory"
	end
# 485 "data/maps/LittlerootTown/scripts.pory"

# 486 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 487 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 488 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 489 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 490 "data/maps/LittlerootTown/scripts.pory"
	end
# 491 "data/maps/LittlerootTown/scripts.pory"

# 492 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 493 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 494 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 495 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 496 "data/maps/LittlerootTown/scripts.pory"
	end
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 499 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 501 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 502 "data/maps/LittlerootTown/scripts.pory"
	end
# 503 "data/maps/LittlerootTown/scripts.pory"

# 504 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 505 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 506 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 507 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 508 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 509 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 510 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 511 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 512 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 513 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 514 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 515 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 516 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 517 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 520 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 521 "data/maps/LittlerootTown/scripts.pory"
	end
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 524 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 525 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 526 "data/maps/LittlerootTown/scripts.pory"
	return
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 529 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 530 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 531 "data/maps/LittlerootTown/scripts.pory"
	return
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 534 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 535 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 536 "data/maps/LittlerootTown/scripts.pory"
	return
# 537 "data/maps/LittlerootTown/scripts.pory"

# 538 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 539 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/LittlerootTown/scripts.pory"
	return
# 542 "data/maps/LittlerootTown/scripts.pory"

# 543 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 545 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 546 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 547 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 548 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 549 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 550 "data/maps/LittlerootTown/scripts.pory"
	return
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 553 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 554 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 555 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 556 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 557 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 558 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 559 "data/maps/LittlerootTown/scripts.pory"
	return
# 560 "data/maps/LittlerootTown/scripts.pory"

# 561 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 563 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 565 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/LittlerootTown/scripts.pory"
	return
# 567 "data/maps/LittlerootTown/scripts.pory"

# 568 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	return
# 574 "data/maps/LittlerootTown/scripts.pory"

# 575 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown/scripts.pory"
	return
# 581 "data/maps/LittlerootTown/scripts.pory"

# 582 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	return
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 591 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	return
# 595 "data/maps/LittlerootTown/scripts.pory"

# 596 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	return
# 602 "data/maps/LittlerootTown/scripts.pory"

# 603 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 605 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 607 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/LittlerootTown/scripts.pory"
	return
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 611 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 612 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 614 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 615 "data/maps/LittlerootTown/scripts.pory"
	return
# 616 "data/maps/LittlerootTown/scripts.pory"

# 617 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 618 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 619 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 620 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 621 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 628 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/LittlerootTown/scripts.pory"
	return
# 630 "data/maps/LittlerootTown/scripts.pory"

# 631 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 632 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 633 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 634 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 635 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 636 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 637 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 638 "data/maps/LittlerootTown/scripts.pory"
	return
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 641 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 642 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 643 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 644 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 645 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 647 "data/maps/LittlerootTown/scripts.pory"
	return
# 648 "data/maps/LittlerootTown/scripts.pory"

# 649 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 650 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 651 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/LittlerootTown/scripts.pory"
	return
# 653 "data/maps/LittlerootTown/scripts.pory"

# 654 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 655 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/LittlerootTown/scripts.pory"
	return
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 663 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 664 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 667 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 669 "data/maps/LittlerootTown/scripts.pory"
	return
# 670 "data/maps/LittlerootTown/scripts.pory"

# 671 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 679 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 681 "data/maps/LittlerootTown/scripts.pory"
	return
# 682 "data/maps/LittlerootTown/scripts.pory"

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 691 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 693 "data/maps/LittlerootTown/scripts.pory"
	return
# 694 "data/maps/LittlerootTown/scripts.pory"

# 695 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 703 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 705 "data/maps/LittlerootTown/scripts.pory"
	return
# 706 "data/maps/LittlerootTown/scripts.pory"

# 707 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 715 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 717 "data/maps/LittlerootTown/scripts.pory"
	return
# 718 "data/maps/LittlerootTown/scripts.pory"

# 719 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 720 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 724 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 726 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 727 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 729 "data/maps/LittlerootTown/scripts.pory"
	return
# 730 "data/maps/LittlerootTown/scripts.pory"

# 731 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 732 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 734 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 736 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 737 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 738 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 739 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 740 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 741 "data/maps/LittlerootTown/scripts.pory"
	return
# 742 "data/maps/LittlerootTown/scripts.pory"

# 743 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 744 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 745 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 746 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 747 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 748 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 749 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 750 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 751 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 752 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 753 "data/maps/LittlerootTown/scripts.pory"
	return
# 754 "data/maps/LittlerootTown/scripts.pory"

# 755 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 762 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 763 "data/maps/LittlerootTown/scripts.pory"

# 764 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 771 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 778 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 779 "data/maps/LittlerootTown/scripts.pory"

# 780 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 786 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 787 "data/maps/LittlerootTown/scripts.pory"

# 788 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 791 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 792 "data/maps/LittlerootTown/scripts.pory"

# 793 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 797 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 803 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 804 "data/maps/LittlerootTown/scripts.pory"

# 805 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 808 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 816 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 831 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 832 "data/maps/LittlerootTown/scripts.pory"

# 833 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 839 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 840 "data/maps/LittlerootTown/scripts.pory"

# 841 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 847 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 848 "data/maps/LittlerootTown/scripts.pory"

# 849 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 856 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 857 "data/maps/LittlerootTown/scripts.pory"

# 858 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 862 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 863 "data/maps/LittlerootTown/scripts.pory"

# 864 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 868 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 869 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 870 "data/maps/LittlerootTown/scripts.pory"

# 871 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 875 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 876 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 877 "data/maps/LittlerootTown/scripts.pory"

# 878 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 882 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 883 "data/maps/LittlerootTown/scripts.pory"

# 884 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 888 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 889 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 890 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 891 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 895 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 896 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 897 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 899 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 900 "data/maps/LittlerootTown/scripts.pory"

# 901 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 902 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 903 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 904 "data/maps/LittlerootTown/scripts.pory"

# 905 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 906 "data/maps/LittlerootTown/scripts.pory"
	lock
# 907 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 908 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 909 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 910 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 911 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 912 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 913 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 914 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 915 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 916 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 917 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 918 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 919 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 920 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 921 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 922 "data/maps/LittlerootTown/scripts.pory"
	end
# 923 "data/maps/LittlerootTown/scripts.pory"

# 924 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 925 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 926 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 927 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 928 "data/maps/LittlerootTown/scripts.pory"
	release
# 929 "data/maps/LittlerootTown/scripts.pory"
	end
# 930 "data/maps/LittlerootTown/scripts.pory"

# 931 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 932 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 933 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 934 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 935 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 936 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 937 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 938 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 939 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 940 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 941 "data/maps/LittlerootTown/scripts.pory"
	return
# 942 "data/maps/LittlerootTown/scripts.pory"

# 943 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: {PLAYER}, wir sind da, Schatz!\p"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "Die Fahrt im Umzugswagen zwischen all\n"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "unseren Sachen war bestimmt ermüdend.\p"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "Nun, wir sind in Wurzelheim.\p"
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "Wie gefällt es dir?\n"
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "Dies ist unser neues Zuhause!\p"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "Ist das idyllisch! Man kann hier sicher\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "wunderbar leben, meinst du nicht?\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "Und… du bekommst dein eigenes\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "Zimmer, {PLAYER}! Lass uns hineingehen!$"
# 954 "data/maps/LittlerootTown/scripts.pory"

# 955 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: Warte, {PLAYER}!$"
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: {PLAYER}! Hast du dich schon\n"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birk vorgestellt?\p"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! Was für ein hübsches Pokémon! Du\n"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "hast es von Prof. Birk erhalten? Toll!\p"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "Du bist das Kind deines Vaters! Wunder-\n"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "bar. Du siehst gut aus mit deinem\l"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon!\p"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "Hier, Liebling! Für eine Abenteuerreise\n"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "sind diese Turbotreter wie geschaffen.\p"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "Sie werden deinen Schritt\n"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "beschleunigen!$"
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} zieht die Turbotreter an.$"
# 973 "data/maps/LittlerootTown/scripts.pory"

# 974 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: {PLAYER}, für diese Schuhe gibt\n"
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "es eine Bedienungsanleitung.\p"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "“Halte den B-Knopf gedrückt,\n"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "wenn du diese Turbotreter anhast,\l"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "um zu rennen!\p"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "Schlüpf in diese Turbotreter und\n"
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "erobere die Welt da draußen!”$"
# 982 "data/maps/LittlerootTown/scripts.pory"

# 983 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "Sich vorzustellen, dass du nun dein\n"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "eigenes Pokémon besitzt…\l"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "Dein Vater wird überglücklich sein.\p"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "… Aber sei bitte vorsichtig.\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "Sollte etwas passieren, komm wieder\l"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "nach Hause.\p"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "Lauf, schnapp’ sie dir alle, Schatz!$"
# 993 "data/maps/LittlerootTown/scripts.pory"

# 994 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "Wenn du einen PC benutzt, kannst du\n"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "dort Items und Pokémon lagern.\p"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "Die Kraft der Wissenschaft ist\n"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "atemberaubend!$"
# 999 "data/maps/LittlerootTown/scripts.pory"

# 1000 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birk verbringt seine Tage in\n"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "seinem Labor, dann rennt er plötzlich\l"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "nach draußen in die Wildnis, um zu\l"
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "forschen…\p"
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "Wann ist Prof. Birk eigentlich mal\n"
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "zu Hause?$"
# 1007 "data/maps/LittlerootTown/scripts.pory"

# 1008 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "Äh… Ähm… Hihi…\p"
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "Wenn du durch das hohe Gras läufst,\n"
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "wirst du wilde Pokémon entdecken.$"
# 1012 "data/maps/LittlerootTown/scripts.pory"

# 1013 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "Das ist gefährlich, wenn du kein eigenes\n"
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon dabeihast.$"
# 1016 "data/maps/LittlerootTown/scripts.pory"

# 1017 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "Äh… Hallo!\p"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "Da ist ein fürchterliches Pokémon!\n"
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich kann seinen Ruf hören!\p"
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich würde mir ja gerne mal ansehen,\n"
# 1022 "data/maps/LittlerootTown/scripts.pory"
	.string "was da los ist, aber ich habe kein\l"
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon…\p"
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "Kannst du nicht für mich nachschauen,\n"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "was da los ist?$"
# 1026 "data/maps/LittlerootTown/scripts.pory"

# 1027 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "Du hast Prof. Birk gerettet!\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich bin total froh!$"
# 1030 "data/maps/LittlerootTown/scripts.pory"

# 1031 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1032 "data/maps/LittlerootTown/scripts.pory"
	.string "Gehst du Pokémon fangen?\n"
# 1033 "data/maps/LittlerootTown/scripts.pory"
	.string "Viel Glück!$"
# 1034 "data/maps/LittlerootTown/scripts.pory"

# 1035 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "Wurzelheim\n"
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "“Ein Ort, wie es ihn nur einmal gibt.”$"
# 1038 "data/maps/LittlerootTown/scripts.pory"

# 1039 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birks Pokémon-Labor$"
# 1041 "data/maps/LittlerootTown/scripts.pory"

# 1042 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1043 "data/maps/LittlerootTown/scripts.pory"
	.string "Haus von {PLAYER}$"
# 1044 "data/maps/LittlerootTown/scripts.pory"

# 1045 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birks Haus$"
# 1047 "data/maps/LittlerootTown/scripts.pory"

# 1048 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birk: Na, {PLAYER}{KUN}!\n"
# 1050 "data/maps/LittlerootTown/scripts.pory"
	.string "Das war wirklich gute Arbeit!\p"
# 1051 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich wusste vom ersten Augenblick an,\n"
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "dass du etwas Besonderes bist. Aber\l"
# 1053 "data/maps/LittlerootTown/scripts.pory"
	.string "das hätte selbst ich nicht erwartet.\p"
# 1054 "data/maps/LittlerootTown/scripts.pory"
	.string "Ach ja. Du hast doch noch den\n"
# 1055 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokédex, den ich dir gegeben habe?\p"
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich will dir etwas zeigen.\n"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "Lass uns in mein Labor gehen.$"

LittlerootTownOldManAlreadyHasEXPShare::
# 11 "data/maps/LittlerootTown/scripts.pory"
	.string "Na dann,\n"
	.string "Viel Spaß!$"

LittlerootTownOldMan::
# 15 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh,\n"
	.string "Hallo {PLAYER}!$"
