LittlerootTown_EventScript_OldMan::
# 2 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTownOldMan, MSGBOX_NPC
# 3 "data/maps/LittlerootTown/scripts.pory"
	release
	return


# 11 "data/maps/LittlerootTown/scripts.pory"

# 12 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 13 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 14 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 15 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 16 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 17 "data/maps/LittlerootTown/scripts.pory"

# 18 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 23 "data/maps/LittlerootTown/scripts.pory"

# 24 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 32 "data/maps/LittlerootTown/scripts.pory"

# 33 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 34 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 35 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 40 "data/maps/LittlerootTown/scripts.pory"

# 41 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 42 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 43 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 44 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 45 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 46 "data/maps/LittlerootTown/scripts.pory"

# 47 "data/maps/LittlerootTown/scripts.pory"

# 48 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 49 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 50 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 58 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 59 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 60 "data/maps/LittlerootTown/scripts.pory"
	end
# 61 "data/maps/LittlerootTown/scripts.pory"

# 62 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 63 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 64 "data/maps/LittlerootTown/scripts.pory"
	return
# 65 "data/maps/LittlerootTown/scripts.pory"

# 66 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/LittlerootTown/scripts.pory"
	return
# 69 "data/maps/LittlerootTown/scripts.pory"

# 70 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 71 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 72 "data/maps/LittlerootTown/scripts.pory"
	return
# 73 "data/maps/LittlerootTown/scripts.pory"

# 74 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 76 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 81 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 82 "data/maps/LittlerootTown/scripts.pory"
	return
# 83 "data/maps/LittlerootTown/scripts.pory"

# 84 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 86 "data/maps/LittlerootTown/scripts.pory"
	return
# 87 "data/maps/LittlerootTown/scripts.pory"

# 88 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 89 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 91 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 92 "data/maps/LittlerootTown/scripts.pory"
	return
# 93 "data/maps/LittlerootTown/scripts.pory"

# 94 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 95 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 96 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 97 "data/maps/LittlerootTown/scripts.pory"
	return
# 98 "data/maps/LittlerootTown/scripts.pory"

# 99 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 100 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 101 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 102 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 103 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 104 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 105 "data/maps/LittlerootTown/scripts.pory"
	return
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 108 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 109 "data/maps/LittlerootTown/scripts.pory"
	return
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 112 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 113 "data/maps/LittlerootTown/scripts.pory"
	return
# 114 "data/maps/LittlerootTown/scripts.pory"

# 115 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 116 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 117 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 118 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 119 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 120 "data/maps/LittlerootTown/scripts.pory"

# 121 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 122 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 123 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 124 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 125 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 126 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 127 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 128 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 129 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 130 "data/maps/LittlerootTown/scripts.pory"
	end
# 131 "data/maps/LittlerootTown/scripts.pory"

# 132 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 133 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 134 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 135 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 136 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 137 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 138 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 139 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 140 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 141 "data/maps/LittlerootTown/scripts.pory"
	end
# 142 "data/maps/LittlerootTown/scripts.pory"

# 143 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 144 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 145 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 146 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 147 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 149 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 150 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 151 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitHouse
# 152 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 153 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 154 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 155 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 156 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 157 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 159 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachDoor
# 161 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 162 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 164 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomEnterHouse
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 169 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 170 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 171 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 172 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 173 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 174 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 175 "data/maps/LittlerootTown/scripts.pory"
	return
# 176 "data/maps/LittlerootTown/scripts.pory"

# 177 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 178 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 179 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 180 "data/maps/LittlerootTown/scripts.pory"

# 181 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 182 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 184 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown/scripts.pory"

# 186 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 187 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 188 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 193 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 195 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 196 "data/maps/LittlerootTown/scripts.pory"

# 197 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 198 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 205 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown/scripts.pory"

# 209 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 210 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 211 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 212 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 213 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 214 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 217 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 218 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 219 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 220 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 222 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 223 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 224 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 225 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 226 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 227 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 228 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 229 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 230 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 231 "data/maps/LittlerootTown/scripts.pory"
	end
# 232 "data/maps/LittlerootTown/scripts.pory"

# 233 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 234 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 235 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 236 "data/maps/LittlerootTown/scripts.pory"

# 237 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 238 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 239 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 240 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 241 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 242 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 243 "data/maps/LittlerootTown/scripts.pory"
	end
# 244 "data/maps/LittlerootTown/scripts.pory"

# 245 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 247 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 248 "data/maps/LittlerootTown/scripts.pory"
	end
# 249 "data/maps/LittlerootTown/scripts.pory"

# 250 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 251 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 252 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 253 "data/maps/LittlerootTown/scripts.pory"
	end
# 254 "data/maps/LittlerootTown/scripts.pory"

# 255 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 256 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 257 "data/maps/LittlerootTown/scripts.pory"
	end
# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 260 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 261 "data/maps/LittlerootTown/scripts.pory"
	end
# 262 "data/maps/LittlerootTown/scripts.pory"

# 263 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 264 "data/maps/LittlerootTown/scripts.pory"
	lock
# 265 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 266 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 267 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 268 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 269 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 270 "data/maps/LittlerootTown/scripts.pory"
	release
# 271 "data/maps/LittlerootTown/scripts.pory"
	end
# 272 "data/maps/LittlerootTown/scripts.pory"

# 273 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 274 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 275 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 277 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 278 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 280 "data/maps/LittlerootTown/scripts.pory"
	release
# 281 "data/maps/LittlerootTown/scripts.pory"
	end
# 282 "data/maps/LittlerootTown/scripts.pory"

# 283 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 284 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 285 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 286 "data/maps/LittlerootTown/scripts.pory"
	release
# 287 "data/maps/LittlerootTown/scripts.pory"
	end
# 288 "data/maps/LittlerootTown/scripts.pory"

# 289 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 290 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown/scripts.pory"
	release
# 292 "data/maps/LittlerootTown/scripts.pory"
	end
# 293 "data/maps/LittlerootTown/scripts.pory"

# 294 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 295 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 296 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 297 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 298 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 299 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 300 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 302 "data/maps/LittlerootTown/scripts.pory"
	end
# 303 "data/maps/LittlerootTown/scripts.pory"

# 304 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 305 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 306 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 307 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 309 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 310 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 311 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 312 "data/maps/LittlerootTown/scripts.pory"
	return
# 313 "data/maps/LittlerootTown/scripts.pory"

# 314 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 315 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 316 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 317 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 318 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 319 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 321 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 322 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 323 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 326 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 327 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 328 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 329 "data/maps/LittlerootTown/scripts.pory"

# 330 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 333 "data/maps/LittlerootTown/scripts.pory"

# 334 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 338 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 344 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 347 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 349 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 350 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 351 "data/maps/LittlerootTown/scripts.pory"

# 352 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 353 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 354 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 355 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 356 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 357 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 358 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 359 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 360 "data/maps/LittlerootTown/scripts.pory"
	end
# 361 "data/maps/LittlerootTown/scripts.pory"

# 362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 363 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 365 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 366 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 368 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 370 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 374 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 375 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 376 "data/maps/LittlerootTown/scripts.pory"

# 377 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 383 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 384 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 385 "data/maps/LittlerootTown/scripts.pory"

# 386 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 387 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 388 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 389 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 390 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 391 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 393 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 394 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 395 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 396 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 397 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 398 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 399 "data/maps/LittlerootTown/scripts.pory"
	end
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 402 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 403 "data/maps/LittlerootTown/scripts.pory"
	end
# 404 "data/maps/LittlerootTown/scripts.pory"

# 405 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 406 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 407 "data/maps/LittlerootTown/scripts.pory"
	end
# 408 "data/maps/LittlerootTown/scripts.pory"

# 409 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 410 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 411 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 412 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 413 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 414 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 415 "data/maps/LittlerootTown/scripts.pory"
	end
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 418 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 419 "data/maps/LittlerootTown/scripts.pory"
	return
# 420 "data/maps/LittlerootTown/scripts.pory"

# 421 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 422 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 423 "data/maps/LittlerootTown/scripts.pory"
	return
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 426 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 427 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 428 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 429 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 430 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 431 "data/maps/LittlerootTown/scripts.pory"
	end
# 432 "data/maps/LittlerootTown/scripts.pory"

# 433 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 434 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 435 "data/maps/LittlerootTown/scripts.pory"
	return
# 436 "data/maps/LittlerootTown/scripts.pory"

# 437 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 438 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 439 "data/maps/LittlerootTown/scripts.pory"
	return
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 442 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 443 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 444 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 445 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 446 "data/maps/LittlerootTown/scripts.pory"
	end
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 449 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 450 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 451 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 452 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 453 "data/maps/LittlerootTown/scripts.pory"
	end
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 456 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 457 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 458 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 459 "data/maps/LittlerootTown/scripts.pory"
	end
# 460 "data/maps/LittlerootTown/scripts.pory"

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 462 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 463 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 474 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 475 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 476 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 480 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 481 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 482 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 483 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 484 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 485 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 486 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 487 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 488 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 489 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 491 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 492 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 493 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 495 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 496 "data/maps/LittlerootTown/scripts.pory"
	end
# 497 "data/maps/LittlerootTown/scripts.pory"

# 498 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 499 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 500 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 501 "data/maps/LittlerootTown/scripts.pory"
	return
# 502 "data/maps/LittlerootTown/scripts.pory"

# 503 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 504 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 505 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 506 "data/maps/LittlerootTown/scripts.pory"
	return
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 509 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 510 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 511 "data/maps/LittlerootTown/scripts.pory"
	return
# 512 "data/maps/LittlerootTown/scripts.pory"

# 513 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 514 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/LittlerootTown/scripts.pory"
	return
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 519 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 520 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/LittlerootTown/scripts.pory"
	return
# 542 "data/maps/LittlerootTown/scripts.pory"

# 543 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	return
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	return
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	return
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	return
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	return
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 600 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 601 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	return
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 607 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 608 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/LittlerootTown/scripts.pory"
	return
# 628 "data/maps/LittlerootTown/scripts.pory"

# 629 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 630 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/LittlerootTown/scripts.pory"
	return
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 635 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 637 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 638 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 642 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 644 "data/maps/LittlerootTown/scripts.pory"
	return
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 647 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 649 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 650 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 651 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 654 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 656 "data/maps/LittlerootTown/scripts.pory"
	return
# 657 "data/maps/LittlerootTown/scripts.pory"

# 658 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 659 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 661 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 662 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 663 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 666 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 668 "data/maps/LittlerootTown/scripts.pory"
	return
# 669 "data/maps/LittlerootTown/scripts.pory"

# 670 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 671 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 673 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 674 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 675 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 678 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 680 "data/maps/LittlerootTown/scripts.pory"
	return
# 681 "data/maps/LittlerootTown/scripts.pory"

# 682 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 686 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 687 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 689 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 690 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 692 "data/maps/LittlerootTown/scripts.pory"
	return
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 695 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 698 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 699 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 701 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 702 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 704 "data/maps/LittlerootTown/scripts.pory"
	return
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 707 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 709 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 710 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 711 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 713 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 714 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 716 "data/maps/LittlerootTown/scripts.pory"
	return
# 717 "data/maps/LittlerootTown/scripts.pory"

# 718 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 719 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 721 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 723 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 726 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 727 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 728 "data/maps/LittlerootTown/scripts.pory"
	return
# 729 "data/maps/LittlerootTown/scripts.pory"

# 730 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 731 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 732 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 737 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 738 "data/maps/LittlerootTown/scripts.pory"

# 739 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 753 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 754 "data/maps/LittlerootTown/scripts.pory"

# 755 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 756 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 761 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 762 "data/maps/LittlerootTown/scripts.pory"

# 763 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 772 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 773 "data/maps/LittlerootTown/scripts.pory"

# 774 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 778 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 779 "data/maps/LittlerootTown/scripts.pory"

# 780 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 783 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 792 "data/maps/LittlerootTown/scripts.pory"

# 793 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 798 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 799 "data/maps/LittlerootTown/scripts.pory"

# 800 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 806 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 807 "data/maps/LittlerootTown/scripts.pory"

# 808 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 814 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 815 "data/maps/LittlerootTown/scripts.pory"

# 816 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 817 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 822 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 823 "data/maps/LittlerootTown/scripts.pory"

# 824 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 831 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 832 "data/maps/LittlerootTown/scripts.pory"

# 833 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 837 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 838 "data/maps/LittlerootTown/scripts.pory"

# 839 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 844 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 845 "data/maps/LittlerootTown/scripts.pory"

# 846 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 851 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 857 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 858 "data/maps/LittlerootTown/scripts.pory"

# 859 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 860 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 866 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 867 "data/maps/LittlerootTown/scripts.pory"

# 868 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 874 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 875 "data/maps/LittlerootTown/scripts.pory"

# 876 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 877 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 878 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 879 "data/maps/LittlerootTown/scripts.pory"

# 880 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 881 "data/maps/LittlerootTown/scripts.pory"
	lock
# 882 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 883 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 884 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 885 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 886 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 887 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 889 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 890 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 891 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 892 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 893 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 894 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 895 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 896 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 897 "data/maps/LittlerootTown/scripts.pory"
	end
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 900 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 901 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 902 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 903 "data/maps/LittlerootTown/scripts.pory"
	release
# 904 "data/maps/LittlerootTown/scripts.pory"
	end
# 905 "data/maps/LittlerootTown/scripts.pory"

# 906 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 907 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 908 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 909 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 910 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 911 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 912 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 913 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 914 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 915 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 916 "data/maps/LittlerootTown/scripts.pory"
	return
# 917 "data/maps/LittlerootTown/scripts.pory"

# 918 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: {PLAYER}, wir sind da, Schatz!\p"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "Die Fahrt im Umzugswagen zwischen all\n"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "unseren Sachen war bestimmt ermüdend.\p"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "Nun, wir sind in Wurzelheim.\p"
# 923 "data/maps/LittlerootTown/scripts.pory"
	.string "Wie gefällt es dir?\n"
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "Dies ist unser neues Zuhause!\p"
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "Ist das idyllisch! Man kann hier sicher\n"
# 926 "data/maps/LittlerootTown/scripts.pory"
	.string "wunderbar leben, meinst du nicht?\p"
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "Und… du bekommst dein eigenes\n"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "Zimmer, {PLAYER}! Lass uns hineingehen!$"
# 929 "data/maps/LittlerootTown/scripts.pory"

# 930 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: Warte, {PLAYER}!$"
# 932 "data/maps/LittlerootTown/scripts.pory"

# 933 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: {PLAYER}! Hast du dich schon\n"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birk vorgestellt?\p"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! Was für ein hübsches Pokémon! Du\n"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "hast es von Prof. Birk erhalten? Toll!\p"
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "Du bist das Kind deines Vaters! Wunder-\n"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "bar. Du siehst gut aus mit deinem\l"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon!\p"
# 941 "data/maps/LittlerootTown/scripts.pory"
	.string "Hier, Liebling! Für eine Abenteuerreise\n"
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "sind diese Turbotreter wie geschaffen.\p"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "Sie werden deinen Schritt\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "beschleunigen!$"
# 945 "data/maps/LittlerootTown/scripts.pory"

# 946 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} zieht die Turbotreter an.$"
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "Mum: {PLAYER}, für diese Schuhe gibt\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "es eine Bedienungsanleitung.\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "“Halte den B-Knopf gedrückt,\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "wenn du diese Turbotreter anhast,\l"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "um zu rennen!\p"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "Schlüpf in diese Turbotreter und\n"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "erobere die Welt da draußen!”$"
# 957 "data/maps/LittlerootTown/scripts.pory"

# 958 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "Sich vorzustellen, dass du nun dein\n"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "eigenes Pokémon besitzt…\l"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "Dein Vater wird überglücklich sein.\p"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "… Aber sei bitte vorsichtig.\n"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "Sollte etwas passieren, komm wieder\l"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "nach Hause.\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "Lauf, schnapp’ sie dir alle, Schatz!$"
# 968 "data/maps/LittlerootTown/scripts.pory"

# 969 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "Wenn du einen PC benutzt, kannst du\n"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "dort Items und Pokémon lagern.\p"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "Die Kraft der Wissenschaft ist\n"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "atemberaubend!$"
# 974 "data/maps/LittlerootTown/scripts.pory"

# 975 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birk verbringt seine Tage in\n"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "seinem Labor, dann rennt er plötzlich\l"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "nach draußen in die Wildnis, um zu\l"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "forschen…\p"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "Wann ist Prof. Birk eigentlich mal\n"
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "zu Hause?$"
# 982 "data/maps/LittlerootTown/scripts.pory"

# 983 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "Äh… Ähm… Hihi…\p"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "Wenn du durch das hohe Gras läufst,\n"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "wirst du wilde Pokémon entdecken.$"
# 987 "data/maps/LittlerootTown/scripts.pory"

# 988 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "Das ist gefährlich, wenn du kein eigenes\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon dabeihast.$"
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "Äh… Hallo!\p"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "Da ist ein fürchterliches Pokémon!\n"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich kann seinen Ruf hören!\p"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich würde mir ja gerne mal ansehen,\n"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "was da los ist, aber ich habe kein\l"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon…\p"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "Kannst du nicht für mich nachschauen,\n"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "was da los ist?$"
# 1001 "data/maps/LittlerootTown/scripts.pory"

# 1002 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "Du hast Prof. Birk gerettet!\n"
# 1004 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich bin total froh!$"
# 1005 "data/maps/LittlerootTown/scripts.pory"

# 1006 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "Gehst du Pokémon fangen?\n"
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "Viel Glück!$"
# 1009 "data/maps/LittlerootTown/scripts.pory"

# 1010 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "Wurzelheim\n"
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "“Ein Ort, wie es ihn nur einmal gibt.”$"
# 1013 "data/maps/LittlerootTown/scripts.pory"

# 1014 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birks Pokémon-Labor$"
# 1016 "data/maps/LittlerootTown/scripts.pory"

# 1017 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "Haus von {PLAYER}$"
# 1019 "data/maps/LittlerootTown/scripts.pory"

# 1020 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birks Haus$"
# 1022 "data/maps/LittlerootTown/scripts.pory"

# 1023 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birk: Na, {PLAYER}{KUN}!\n"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "Das war wirklich gute Arbeit!\p"
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich wusste vom ersten Augenblick an,\n"
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "dass du etwas Besonderes bist. Aber\l"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "das hätte selbst ich nicht erwartet.\p"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "Ach ja. Du hast doch noch den\n"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokédex, den ich dir gegeben habe?\p"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "Ich will dir etwas zeigen.\n"
# 1032 "data/maps/LittlerootTown/scripts.pory"
	.string "Lass uns in mein Labor gehen.$"

LittlerootTownOldMan::
# 6 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh,\n"
	.string "Hallo {PLAYER}!$"
