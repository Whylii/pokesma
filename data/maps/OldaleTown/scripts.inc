OldaleTown_MapScripts::
# 2 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 17 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/OldaleTown/scripts.pory"
	random 3
# 6 "data/maps/OldaleTown/scripts.pory"
	switch VAR_RESULT
# 7 "data/maps/OldaleTown/scripts.pory"
	case 0, OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 10 "data/maps/OldaleTown/scripts.pory"
	case 1, OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 12 "data/maps/OldaleTown/scripts.pory"
	case 2, OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return

OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 11 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return

OldaleTown_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 13 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_TEMP_1
# 14 "data/maps/OldaleTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return


# 20 "data/maps/OldaleTown/scripts.pory"

# 21 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 22 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 24 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 25 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 26 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 27 "data/maps/OldaleTown/scripts.pory"
	end
# 28 "data/maps/OldaleTown/scripts.pory"

# 29 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 30 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 31 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 32 "data/maps/OldaleTown/scripts.pory"
	return
# 33 "data/maps/OldaleTown/scripts.pory"

# 34 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 35 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 36 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/OldaleTown/scripts.pory"
	return
# 38 "data/maps/OldaleTown/scripts.pory"

# 39 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 40 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 41 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/OldaleTown/scripts.pory"
	return
# 43 "data/maps/OldaleTown/scripts.pory"

# 44 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 45 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 46 "data/maps/OldaleTown/scripts.pory"
	end
# 47 "data/maps/OldaleTown/scripts.pory"

# 48 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 49 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 50 "data/maps/OldaleTown/scripts.pory"
	end
# 51 "data/maps/OldaleTown/scripts.pory"

# 52 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 53 "data/maps/OldaleTown/scripts.pory"
	lock
# 54 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 55 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 56 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 57 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 58 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 59 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 60 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 61 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 62 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 63 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 64 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 65 "data/maps/OldaleTown/scripts.pory"
	end
# 66 "data/maps/OldaleTown/scripts.pory"

# 67 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 69 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 70 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 72 "data/maps/OldaleTown/scripts.pory"
	end
# 73 "data/maps/OldaleTown/scripts.pory"

# 74 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 75 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 76 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 77 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 79 "data/maps/OldaleTown/scripts.pory"
	end
# 80 "data/maps/OldaleTown/scripts.pory"

# 81 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 82 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 83 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 84 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 86 "data/maps/OldaleTown/scripts.pory"
	end
# 87 "data/maps/OldaleTown/scripts.pory"

# 88 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 90 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 91 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 93 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 94 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/OldaleTown/scripts.pory"
	release
# 96 "data/maps/OldaleTown/scripts.pory"
	end
# 97 "data/maps/OldaleTown/scripts.pory"

# 98 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 99 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 100 "data/maps/OldaleTown/scripts.pory"
	release
# 101 "data/maps/OldaleTown/scripts.pory"
	end
# 102 "data/maps/OldaleTown/scripts.pory"

# 103 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 104 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 105 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/OldaleTown/scripts.pory"
	release
# 107 "data/maps/OldaleTown/scripts.pory"
	end
# 108 "data/maps/OldaleTown/scripts.pory"

# 109 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 116 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/OldaleTown/scripts.pory"
	step_end
# 119 "data/maps/OldaleTown/scripts.pory"

# 120 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 131 "data/maps/OldaleTown/scripts.pory"
	step_end
# 132 "data/maps/OldaleTown/scripts.pory"

# 133 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 142 "data/maps/OldaleTown/scripts.pory"
	step_end
# 143 "data/maps/OldaleTown/scripts.pory"

# 144 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/OldaleTown/scripts.pory"
	step_end
# 159 "data/maps/OldaleTown/scripts.pory"

# 160 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	step_end
# 169 "data/maps/OldaleTown/scripts.pory"

# 170 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 171 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 172 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 173 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 174 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	step_end
# 181 "data/maps/OldaleTown/scripts.pory"

# 182 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 190 "data/maps/OldaleTown/scripts.pory"
	step_end
# 191 "data/maps/OldaleTown/scripts.pory"

# 192 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 197 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 198 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 200 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 201 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 202 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 203 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 204 "data/maps/OldaleTown/scripts.pory"
	step_end
# 205 "data/maps/OldaleTown/scripts.pory"

# 206 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 207 "data/maps/OldaleTown/scripts.pory"
	lock
# 208 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 209 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 210 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 211 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 212 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 213 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/OldaleTown/scripts.pory"
	release
# 215 "data/maps/OldaleTown/scripts.pory"
	end
# 216 "data/maps/OldaleTown/scripts.pory"

# 217 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 218 "data/maps/OldaleTown/scripts.pory"
	lockall
# 219 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 220 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 221 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 223 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 224 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 225 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 227 "data/maps/OldaleTown/scripts.pory"
	end
# 228 "data/maps/OldaleTown/scripts.pory"

# 229 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 230 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 231 "data/maps/OldaleTown/scripts.pory"
	release
# 232 "data/maps/OldaleTown/scripts.pory"
	end
# 233 "data/maps/OldaleTown/scripts.pory"

# 234 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 235 "data/maps/OldaleTown/scripts.pory"
	lockall
# 236 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 237 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 239 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 240 "data/maps/OldaleTown/scripts.pory"
	end
# 241 "data/maps/OldaleTown/scripts.pory"

# 242 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 243 "data/maps/OldaleTown/scripts.pory"
	lockall
# 244 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 245 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 247 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 248 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 249 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 250 "data/maps/OldaleTown/scripts.pory"
	end
# 251 "data/maps/OldaleTown/scripts.pory"

# 252 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 253 "data/maps/OldaleTown/scripts.pory"
	lockall
# 254 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 255 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 256 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 257 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 259 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 260 "data/maps/OldaleTown/scripts.pory"
	end
# 261 "data/maps/OldaleTown/scripts.pory"

# 262 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 263 "data/maps/OldaleTown/scripts.pory"
	lockall
# 264 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 265 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 266 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 267 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 268 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 269 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 270 "data/maps/OldaleTown/scripts.pory"
	end
# 271 "data/maps/OldaleTown/scripts.pory"

# 272 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 273 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 274 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 275 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 276 "data/maps/OldaleTown/scripts.pory"
	end
# 277 "data/maps/OldaleTown/scripts.pory"

# 278 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 279 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 280 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 281 "data/maps/OldaleTown/scripts.pory"
	end
# 282 "data/maps/OldaleTown/scripts.pory"

# 283 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 284 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 285 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 286 "data/maps/OldaleTown/scripts.pory"
	end
# 287 "data/maps/OldaleTown/scripts.pory"

# 288 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 289 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 290 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 291 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 292 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 293 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 295 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 296 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 297 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 298 "data/maps/OldaleTown/scripts.pory"
	end
# 299 "data/maps/OldaleTown/scripts.pory"

# 300 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 301 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 302 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 303 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/OldaleTown/scripts.pory"
	return
# 305 "data/maps/OldaleTown/scripts.pory"

# 306 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 307 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 308 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 309 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 310 "data/maps/OldaleTown/scripts.pory"
	return
# 311 "data/maps/OldaleTown/scripts.pory"

# 312 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 313 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 314 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 315 "data/maps/OldaleTown/scripts.pory"
	step_end
# 316 "data/maps/OldaleTown/scripts.pory"

# 317 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 318 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 319 "data/maps/OldaleTown/scripts.pory"
	step_end
# 320 "data/maps/OldaleTown/scripts.pory"

# 321 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 322 "data/maps/OldaleTown/scripts.pory"
	face_left
# 323 "data/maps/OldaleTown/scripts.pory"
	step_end
# 324 "data/maps/OldaleTown/scripts.pory"

# 325 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 326 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 327 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 328 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 329 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 330 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 331 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 332 "data/maps/OldaleTown/scripts.pory"
	step_end
# 333 "data/maps/OldaleTown/scripts.pory"

# 334 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 335 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 336 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 337 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 338 "data/maps/OldaleTown/scripts.pory"
	step_end
# 339 "data/maps/OldaleTown/scripts.pory"

# 340 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 341 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 342 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 343 "data/maps/OldaleTown/scripts.pory"
	step_end
# 344 "data/maps/OldaleTown/scripts.pory"

# 345 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 346 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 348 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 349 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 350 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 351 "data/maps/OldaleTown/scripts.pory"
	step_end
# 352 "data/maps/OldaleTown/scripts.pory"

# 353 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 354 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 355 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 356 "data/maps/OldaleTown/scripts.pory"
	step_end
# 357 "data/maps/OldaleTown/scripts.pory"

# 358 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 359 "data/maps/OldaleTown/scripts.pory"
	.string "Ich möchte eine Pause einlegen, daher\n"
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "speichere ich mein Spiel.$"
# 361 "data/maps/OldaleTown/scripts.pory"

# 362 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 364 "data/maps/OldaleTown/scripts.pory"
	.string "Ich arbeite in einem Supermarkt.\p"
# 365 "data/maps/OldaleTown/scripts.pory"
	.string "Kommst du bitte einmal mit mir?$"
# 366 "data/maps/OldaleTown/scripts.pory"

# 367 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "Dies ist ein Pokémon-Supermarkt.\n"
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "Er ist an dem blauen Dach erkennbar.\p"
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "Wir verkaufen eine Menge nützlicher\n"
# 371 "data/maps/OldaleTown/scripts.pory"
	.string "Dinge, wie Pokébälle, mit denen man\l"
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "Pokémon fängt.\p"
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "Hier, dies ist ein Item, quasi als Werbe-\n"
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "geschenk für dich.$"
# 375 "data/maps/OldaleTown/scripts.pory"

# 376 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 377 "data/maps/OldaleTown/scripts.pory"
	.string "Ein Trank kann zu jeder Zeit eingesetzt\n"
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "werden, daher ist er in manchen\l"
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "Situationen wertvoller als ein Pokémon-\l"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "Center.$"
# 381 "data/maps/OldaleTown/scripts.pory"

# 382 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaah! Warte!\n"
# 384 "data/maps/OldaleTown/scripts.pory"
	.string "Bitte nicht dort entlang laufen!\p"
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "Ich habe dort die Fußspuren eines\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "seltenen Pokémon gesehen!\p"
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "Warte, bis ich fertig bin, sie\n"
# 388 "data/maps/OldaleTown/scripts.pory"
	.string "abzuzeichnen, okay?$"
# 389 "data/maps/OldaleTown/scripts.pory"

# 390 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "Ich habe dort die Fußspuren eines\n"
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "seltenen Pokémon gesehen!\p"
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "Warte, bis ich fertig bin, sie\n"
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "abzuzeichnen, okay?$"
# 395 "data/maps/OldaleTown/scripts.pory"

# 396 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "Ich habe die Fußspuren eines seltenen\n"
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "Pokémon abgezeichnet.\p"
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "Aber hinterher habe ich festgestellt,\n"
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "dass es meine eigenen Spuren waren…$"
# 401 "data/maps/OldaleTown/scripts.pory"

# 402 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 403 "data/maps/OldaleTown/scripts.pory"
	.string "Maike: {PLAYER}{KUN}!\n"
# 404 "data/maps/OldaleTown/scripts.pory"
	.string "Hier entlang!\l"
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "Lass uns nach Hause gehen!$"
# 406 "data/maps/OldaleTown/scripts.pory"

# 407 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 408 "data/maps/OldaleTown/scripts.pory"
	.string "Brix: Ich gehe nun in das Labor\n"
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "meines Vaters. {PLAYER}, du solltest\l"
# 410 "data/maps/OldaleTown/scripts.pory"
	.string "auch zurücklaufen.$"
# 411 "data/maps/OldaleTown/scripts.pory"

# 412 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "Rosaltstadt\n"
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "“Wo seltene Dinge ihren Anfang nehmen.”$"
