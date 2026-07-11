# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts::
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"

# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition:
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_SLATEPORT_HARBOR_STATE, 1, SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_ShowSSTidal
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"

# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal::
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"

# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene::
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN, 12, 13
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 22 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"

# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger0::
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"

# 30 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"

# 36 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"

# 42 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger3::
# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 49 "data/maps/SlateportCity_Harbor/scripts.pory"

# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_GRUNT
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_ARCHIE
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_SUBMARINE
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 0, SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 1, SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 2, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_0x8008, 3, SlateportCity_Harbor_EventScript_SternApproachPlayer
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"

# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0::
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"

# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1::
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"

# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer::
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"

# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"

# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused, Archie instead shares above identical movement script with Grunt
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub:
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"

# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"

# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0:
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"

# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1:
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"

# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer:
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"

# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp:
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"

# 158 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"

# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"

# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"

# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"

# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"

# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"

# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"

# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"

# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideplayer
# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SLATEPORT_HARBOR_SS_TIDAL
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"

# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"

# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"

# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"

# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_faster_up
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"

# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"

# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"

# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"

# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"

# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"

# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"

# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"

# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"

# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"

# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"

# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"

# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"

# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"

# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"

# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"

# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"

# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"

# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"

# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Verzeihung?\n"
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Du suchst nach einem Schiff?\p"
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, das tut mir Leid, aber die Fähre\n"
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "steht momentan nicht zur Verfügung…$"
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"

# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hallo! Möchtest du mit der Fähre\n"
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "fahren? Zeigst du mir bitte dein\l"
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ticket?$"
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"

# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} hat kein Ticket…\p"
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Das tut mir schrecklich Leid.\p"
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Nur mit einem Ticket kannst du mit der\n"
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Fähre fahren.$"
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"

# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} zückt das Ticket.\p"
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfekt! Damit kannst du an Bord!\p"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Und wo soll die Reise hingehen?$"
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"

# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Bitte segle ein andermal mit uns!$"
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"

# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Nach Seegrasulb City?$"
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"

# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Zur Kampfzone?$"
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"

# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Bitte komm an Bord. Wir legen bald ab.$"
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"

# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Und wo soll die Reise hingehen?$"
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"

# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Eine Reise zum Meeresboden…\n"
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ich frage mich, wie es dort wohl ist?\p"
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Eines Tages möchte ich auch einmal so\n"
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "tief unter Wasser reisen.$"
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"

# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Um eine sichere Schiffsreise zu\n"
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "gewährleisten, müssen wir stets auf\l"
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "das Wetter achten.\p"
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Apropos Wetter: Ein Typ vom Klima-\n"
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Institut hat mir etwas Interessantes\l"
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "erzählt.\p"
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Er sagte, dass im ganzen Land das\n"
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Wetter verrückt spielt!\p"
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Du solltest mal zum Klima-Institut\n"
# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "gehen und dich umhören.$"
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"

# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ich wäre gerne mit Kapt. Brigg auf die\n"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Expedition zum Meeresboden gegangen.\p"
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Aber das U-Boot ist zu klein für mich.\p"
# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ich könnte mich ja reinquetschen, aber\n"
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "dann hätte der Kapitän keinen Platz\l"
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "mehr…$"
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"

# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Diese Schlägertypen…\p"
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Das sind die gleichen Typen, die\n"
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "versucht haben, die Devon-Waren aus\l"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "dem Museum zu stehlen.$"
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"

# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove:
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Adrain: Oh?\n"
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Nicht du schon wieder… Stöhn…\p"
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Du bist ganz schön hartnäckig, uns\n"
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "bis hierher zu folgen, das muss ich\l"
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "schon sagen.\p"
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Und nun…\n"
# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Niemand kann uns stoppen! Niemand!\p"
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oder willst du uns etwa in unser Ver-\n"
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "steck in Seegrasulb City folgen?\p"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ahahahaha…$"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"

# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine:
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Warum…\p"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Warum sollte Team Aqua mein Tief-\n"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "see-Forschungsboot 1 stehlen wollen?\p"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Sie können doch nicht hinter dem\n"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "schlafenden Pokémon am Meeresgrund\l"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "her sein…\p"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Selbst wenn ich sie verfolgen würde…\n"
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ich hätte keine Chance gegen sie…$"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"

# 475 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive:
# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Oh, {PLAYER}{KUN}…\p"
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… Du konntest Team Aqua nicht\n"
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "aufhalten…\p"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, nein, mach dir bitte keine Vorwürfe!\n"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Die Schuld liegt nicht bei dir.\p"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ein U-Boot zu verfolgen und aufzu-\n"
# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "halten ist für die meisten Menschen\l"
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "unmöglich.\p"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Du benötigst ein Pokémon, das weiß, wie\n"
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "man Taucher ausführt…\p"
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Vielleicht, wenn du dich nach\n"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Moosbach City begibst…\p"
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Dort trifft man auf viele Taucher.\n"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Vielleicht kann dir einer das\l"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "beibringen…$"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"

# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub:
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Ein U-Boot einzuholen und\n"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "aufzuhalten… Das ist unmöglich.\p"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Du benötigst ein Pokémon, das weiß, wie\n"
# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "man Taucher ausführt…\p"
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Vielleicht, wenn du dich nach\n"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Moosbach City begibst…\p"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Dort trifft man auf viele Taucher, \n"
# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "vielleicht kann dir einer das bei-\l"
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "bringen…$"
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"

# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Oh, ja.\n"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Mr. Brack kam in unsere Werft.\p"
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Nun dauert es nicht mehr lange, bis wir\n"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "unsere Fähre fertig stellen!$"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"

# 509 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: {PLAYER}{KUN}!\p"
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Wir haben die Fähre MS Tide endlich\n"
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "fertig gestellt.\p"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Ohne die Hilfe deines Freundes Mr.\n"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Brack hätten wir das nicht geschafft.\p"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Bitte nimm an einer kurzen Fahrt teil!$"
# 516 "data/maps/SlateportCity_Harbor/scripts.pory"

# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Oh?\n"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, das Item, das du da hast…\p"
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Das ist ein Scanner! Der würde uns\n"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "sicher bei unseren Forschungen helfen.\p"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, würdest du ihn gegen etwas\n"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "anderes eintauschen?\p"
# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Zum Beispiel gegen einen Abysszahn\n"
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "oder eine Abyssplatte?$"
# 526 "data/maps/SlateportCity_Harbor/scripts.pory"

# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Bist du sicher? Aber damit\n"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "kannst du doch nichts anfangen…\p"
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Also gut. Wenn du aber den Scanner doch\n"
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "noch gegen etwas anderes tauschen\l"
# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "willst, dann lass es mich wissen!$"
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"

# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Du möchtest den\n"
# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Abysszahn dafür haben?$"
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"

# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Du möchtest die\n"
# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Abyssplatte dafür haben?$"
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"

# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Was hättest du gerne?$"
# 544 "data/maps/SlateportCity_Harbor/scripts.pory"

# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} gibt Kapt. Brigg den Scanner.$"
# 547 "data/maps/SlateportCity_Harbor/scripts.pory"

# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Kapt. Brigg: Danke, {PLAYER}{KUN}!\n"
# 550 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Das wird unsere Forschungen weiter-\l"
# 551 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "bringen!$"
