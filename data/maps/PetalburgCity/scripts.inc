PetalburgCity_EventScript_PkmnSign::
# 2 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_PkmnSign_Text_0, MSGBOX_SIGN
# 4 "data/maps/PetalburgCity/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PetalburgCity_EventScript_PkmnSign_Text_1, PetalburgCity_EventScript_PkmnSign_Text_2
# 5 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq PetalburgCity_EventScript_PkmnSign_2
# 9 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_PkmnSign_5
# 18 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_PkmnSign_6
	return

PetalburgCity_EventScript_PkmnSign_2:
# 6 "data/maps/PetalburgCity/scripts.pory"
	release
	end

PetalburgCity_EventScript_PkmnSign_5:
# 11 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_PkmnSignWasser, MSGBOX_SIGN
# 12 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_MARILL, 10, 3
# 13 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MARILL, 0
# 14 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 15 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 16 "data/maps/PetalburgCity/scripts.pory"
	release
	end

PetalburgCity_EventScript_PkmnSign_6:
# 19 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_PkmnSignAngel, MSGBOX_SIGN
# 20 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 21 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 22 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 23 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 24 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_GOLDEEN, 10, 3
# 25 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_GOLDEEN, 0
# 26 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 27 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 28 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_PkmnSignAngel2, MSGBOX_SIGN
# 29 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 30 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 31 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 32 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 33 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_GOLDEEN, 10, 3
# 34 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_GOLDEEN, 0
# 35 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 36 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 37 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_CORPHISH, 10, 3
# 38 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_CORPHISH, 0
# 39 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 40 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 41 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_PkmnSignAngel3, MSGBOX_SIGN
# 42 "data/maps/PetalburgCity/scripts.pory"
	showmonpic SPECIES_CORPHISH, 10, 3
# 43 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_CORPHISH, 0
# 44 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 45 "data/maps/PetalburgCity/scripts.pory"
	hidemonpic
# 46 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_MapScripts::
# 70 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 97 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 98 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 71 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_1
# 72 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_2
# 73 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_3
# 74 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_TEMP_4
# 75 "data/maps/PetalburgCity/scripts.pory"
	random 6
# 76 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_RESULT
# 77 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 80 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 83 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 86 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 89 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 92 "data/maps/PetalburgCity/scripts.pory"
	case 5, PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 78 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 79 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_2
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 81 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 82 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_3
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 84 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 85 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_4
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 87 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 88 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_3
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 90 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 91 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_4
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 93 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_3
# 94 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_TEMP_4
	return


# 101 "data/maps/PetalburgCity/scripts.pory"

# 102 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 103 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 104 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 105 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 106 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 107 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 108 "data/maps/PetalburgCity/scripts.pory"
	end
# 109 "data/maps/PetalburgCity/scripts.pory"

# 110 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 111 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 112 "data/maps/PetalburgCity/scripts.pory"
	return
# 113 "data/maps/PetalburgCity/scripts.pory"

# 114 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 115 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 116 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 117 "data/maps/PetalburgCity/scripts.pory"
	return
# 118 "data/maps/PetalburgCity/scripts.pory"

# 119 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 120 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 121 "data/maps/PetalburgCity/scripts.pory"
	return
# 122 "data/maps/PetalburgCity/scripts.pory"

# 123 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 124 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 125 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 126 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 127 "data/maps/PetalburgCity/scripts.pory"

# 128 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 129 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 130 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 131 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 132 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 133 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 134 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 136 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 137 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 138 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 139 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 140 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 141 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 142 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 143 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 144 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 145 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 146 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 147 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 148 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 149 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 150 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 151 "data/maps/PetalburgCity/scripts.pory"
	end
# 152 "data/maps/PetalburgCity/scripts.pory"

# 153 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 154 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 155 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 156 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 157 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 158 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 160 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 161 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 162 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 163 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 164 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 165 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 167 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 168 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 169 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 170 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 171 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 172 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 173 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 174 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 175 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 176 "data/maps/PetalburgCity/scripts.pory"
	end
# 177 "data/maps/PetalburgCity/scripts.pory"

# 178 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 179 "data/maps/PetalburgCity/scripts.pory"
	lock
# 180 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 181 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 182 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 183 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 184 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/PetalburgCity/scripts.pory"
	release
# 186 "data/maps/PetalburgCity/scripts.pory"
	end
# 187 "data/maps/PetalburgCity/scripts.pory"

# 188 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 189 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 190 "data/maps/PetalburgCity/scripts.pory"
	end
# 191 "data/maps/PetalburgCity/scripts.pory"

# 192 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 193 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 210 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 211 "data/maps/PetalburgCity/scripts.pory"

# 212 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 215 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 216 "data/maps/PetalburgCity/scripts.pory"

# 217 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 218 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 235 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 236 "data/maps/PetalburgCity/scripts.pory"

# 237 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 239 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 240 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 241 "data/maps/PetalburgCity/scripts.pory"

# 242 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 243 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 247 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 249 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 250 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 255 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 259 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 260 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 261 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 262 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 263 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 264 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 265 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 266 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 267 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 268 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 269 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 270 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 271 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 272 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 275 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 276 "data/maps/PetalburgCity/scripts.pory"

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 278 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 281 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 285 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 286 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 288 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 290 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 291 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 292 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 294 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 295 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 296 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 297 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 298 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 299 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 300 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 301 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 302 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 303 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 304 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 305 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 306 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 307 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 308 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 309 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 310 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 311 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 312 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 313 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 314 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 317 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 318 "data/maps/PetalburgCity/scripts.pory"
	end
# 319 "data/maps/PetalburgCity/scripts.pory"

# 320 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 321 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 322 "data/maps/PetalburgCity/scripts.pory"
	end
# 323 "data/maps/PetalburgCity/scripts.pory"

# 324 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 325 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 326 "data/maps/PetalburgCity/scripts.pory"
	end
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 329 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 330 "data/maps/PetalburgCity/scripts.pory"
	end
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 333 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 334 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 336 "data/maps/PetalburgCity/scripts.pory"
	end
# 337 "data/maps/PetalburgCity/scripts.pory"

# 338 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 339 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 340 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 341 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 342 "data/maps/PetalburgCity/scripts.pory"
	end
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 345 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 346 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 347 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 348 "data/maps/PetalburgCity/scripts.pory"
	end
# 349 "data/maps/PetalburgCity/scripts.pory"

# 350 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 351 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 352 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 353 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 354 "data/maps/PetalburgCity/scripts.pory"
	end
# 355 "data/maps/PetalburgCity/scripts.pory"

# 356 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 357 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 358 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 360 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 361 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 362 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 364 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 366 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 367 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 368 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 369 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 370 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 371 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 372 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 373 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 374 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 375 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 376 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 377 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 378 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 380 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 381 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 382 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 383 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 384 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 385 "data/maps/PetalburgCity/scripts.pory"
	end
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 388 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 389 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 391 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 392 "data/maps/PetalburgCity/scripts.pory"
	return
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 395 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 396 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 397 "data/maps/PetalburgCity/scripts.pory"
	return
# 398 "data/maps/PetalburgCity/scripts.pory"

# 399 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 400 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 401 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 403 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 404 "data/maps/PetalburgCity/scripts.pory"
	return
# 405 "data/maps/PetalburgCity/scripts.pory"

# 406 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 407 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 408 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 409 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 410 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 411 "data/maps/PetalburgCity/scripts.pory"
	return
# 412 "data/maps/PetalburgCity/scripts.pory"

# 413 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 414 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 415 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 416 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/PetalburgCity/scripts.pory"
	return
# 418 "data/maps/PetalburgCity/scripts.pory"

# 419 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 420 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 421 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 422 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 423 "data/maps/PetalburgCity/scripts.pory"
	return
# 424 "data/maps/PetalburgCity/scripts.pory"

# 425 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 426 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 427 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 428 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/PetalburgCity/scripts.pory"
	return
# 430 "data/maps/PetalburgCity/scripts.pory"

# 431 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 432 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 433 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 434 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 435 "data/maps/PetalburgCity/scripts.pory"
	return
# 436 "data/maps/PetalburgCity/scripts.pory"

# 437 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 438 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 439 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 440 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 441 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 442 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 443 "data/maps/PetalburgCity/scripts.pory"

# 444 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 449 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 450 "data/maps/PetalburgCity/scripts.pory"

# 451 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 455 "data/maps/PetalburgCity/scripts.pory"

# 456 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 461 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 462 "data/maps/PetalburgCity/scripts.pory"

# 463 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 469 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 470 "data/maps/PetalburgCity/scripts.pory"

# 471 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 483 "data/maps/PetalburgCity/scripts.pory"

# 484 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 498 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 499 "data/maps/PetalburgCity/scripts.pory"

# 500 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 511 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 512 "data/maps/PetalburgCity/scripts.pory"

# 513 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 525 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 540 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 541 "data/maps/PetalburgCity/scripts.pory"

# 542 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 552 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 553 "data/maps/PetalburgCity/scripts.pory"

# 554 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 555 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 556 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 557 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 562 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 563 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 564 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 565 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 566 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 567 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 568 "data/maps/PetalburgCity/scripts.pory"

# 569 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 570 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 571 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 572 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 573 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 578 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 579 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 584 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 585 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 586 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 587 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 588 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 589 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 592 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 593 "data/maps/PetalburgCity/scripts.pory"

# 594 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 595 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 596 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 597 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 598 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 599 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 600 "data/maps/PetalburgCity/scripts.pory"
	end
# 601 "data/maps/PetalburgCity/scripts.pory"

# 602 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 603 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 604 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 605 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 606 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 607 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 608 "data/maps/PetalburgCity/scripts.pory"
	end
# 609 "data/maps/PetalburgCity/scripts.pory"

# 610 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 611 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 612 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 613 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 614 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 615 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 616 "data/maps/PetalburgCity/scripts.pory"
	end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 619 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 620 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 621 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 622 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 623 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 624 "data/maps/PetalburgCity/scripts.pory"
	end
# 625 "data/maps/PetalburgCity/scripts.pory"

# 626 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 627 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 628 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 630 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 631 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 633 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 635 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 637 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 639 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 640 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 641 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 642 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 644 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 645 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 646 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 647 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 649 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 650 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 651 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 652 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 653 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 654 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 655 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 656 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 657 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 658 "data/maps/PetalburgCity/scripts.pory"
	end
# 659 "data/maps/PetalburgCity/scripts.pory"

# 660 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 661 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 662 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 663 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/PetalburgCity/scripts.pory"
	return
# 665 "data/maps/PetalburgCity/scripts.pory"

# 666 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 667 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 668 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 669 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/PetalburgCity/scripts.pory"
	return
# 671 "data/maps/PetalburgCity/scripts.pory"

# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 673 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 674 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 675 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/PetalburgCity/scripts.pory"
	return
# 677 "data/maps/PetalburgCity/scripts.pory"

# 678 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 679 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 680 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 681 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/PetalburgCity/scripts.pory"
	return
# 683 "data/maps/PetalburgCity/scripts.pory"

# 684 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 697 "data/maps/PetalburgCity/scripts.pory"

# 698 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 710 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 711 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 712 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 713 "data/maps/PetalburgCity/scripts.pory"

# 714 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 715 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 717 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 718 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 719 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 721 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 724 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 725 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 726 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 727 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 729 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 730 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 731 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 732 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 733 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 734 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 735 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 736 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 739 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 740 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 741 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 742 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 744 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 745 "data/maps/PetalburgCity/scripts.pory"

# 746 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 748 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 749 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 750 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 751 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 752 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 753 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 754 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 755 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 756 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 757 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 758 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 759 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 760 "data/maps/PetalburgCity/scripts.pory"

# 761 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 762 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 763 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 764 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 765 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 766 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 767 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 768 "data/maps/PetalburgCity/scripts.pory"

# 769 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 770 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 771 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 772 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 773 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 774 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 775 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 776 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 777 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 778 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 779 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 780 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 781 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 782 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 783 "data/maps/PetalburgCity/scripts.pory"

# 784 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 785 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 786 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 787 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 788 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 789 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 790 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 791 "data/maps/PetalburgCity/scripts.pory"

# 792 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 793 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 794 "data/maps/PetalburgCity/scripts.pory"
	end
# 795 "data/maps/PetalburgCity/scripts.pory"

# 796 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "Wohin ist unser Heiko nur gegangen?\p"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "Wir müssen doch bald nach Wiesenflur\n"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "aufbrechen…$"
# 800 "data/maps/PetalburgCity/scripts.pory"

# 801 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "He da! Bist du vielleicht…\n"
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "ein Anfänger unter den Trainern?\p"
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "Weißt du, was Pokémon-Trainer machen,\n"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "wenn sie in einen neuen Ort kommen?\p"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "Sie sehen sich als Erstes die Arena\n"
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "im Ort an.$"
# 808 "data/maps/PetalburgCity/scripts.pory"

# 809 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "Schau. Das ist die Arena von\n"
# 811 "data/maps/PetalburgCity/scripts.pory"
	.string "Blütenburg City.$"
# 812 "data/maps/PetalburgCity/scripts.pory"

# 813 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "Das ist das Logo der Arena. Daran\n"
# 815 "data/maps/PetalburgCity/scripts.pory"
	.string "kannst du immer eine Arena erkennen.$"
# 816 "data/maps/PetalburgCity/scripts.pory"

# 817 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "Mein Gesicht spiegelt sich im Wasser…\p"
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "Ein schimmerndes Lächeln der Hoffnung.\p"
# 820 "data/maps/PetalburgCity/scripts.pory"
	.string "Oder ist es der Ausdruck düsterer\n"
# 821 "data/maps/PetalburgCity/scripts.pory"
	.string "Stille, an dem die Angst nagt…\p"
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "Was siehst du in deinem Spiegelbild?$"
# 823 "data/maps/PetalburgCity/scripts.pory"

# 824 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "Nehmen wir an, du hättest 6 Pokémon.\n"
# 826 "data/maps/PetalburgCity/scripts.pory"
	.string "Wenn du jetzt ein weiteres fängst…\p"
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "wird es automatisch in das Pokémon-\n"
# 828 "data/maps/PetalburgCity/scripts.pory"
	.string "Lagerungs-System gesendet.$"
# 829 "data/maps/PetalburgCity/scripts.pory"

# 830 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 831 "data/maps/PetalburgCity/scripts.pory"
	.string "Pokémon Arena von Blütenburg City\n"
# 832 "data/maps/PetalburgCity/scripts.pory"
	.string "Leiter: Norman\l"
# 833 "data/maps/PetalburgCity/scripts.pory"
	.string "“Ein Mann, der nach Stärke strebt!”$"
# 834 "data/maps/PetalburgCity/scripts.pory"

# 835 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 836 "data/maps/PetalburgCity/scripts.pory"
	.string "Blütenburg City\n"
# 837 "data/maps/PetalburgCity/scripts.pory"
	.string "“Wo Menschen Hand in Hand\l"
# 838 "data/maps/PetalburgCity/scripts.pory"
	.string "mit der Natur gehen.”$"
# 839 "data/maps/PetalburgCity/scripts.pory"

# 840 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 841 "data/maps/PetalburgCity/scripts.pory"
	.string "Heikos Haus$"
# 842 "data/maps/PetalburgCity/scripts.pory"

# 843 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 844 "data/maps/PetalburgCity/scripts.pory"
	.string "Entschuldige bitte!\p"
# 845 "data/maps/PetalburgCity/scripts.pory"
	.string "Lass mich raten! Deine Kleidung verrät\n"
# 846 "data/maps/PetalburgCity/scripts.pory"
	.string "mir, dass du ein Trainer bist.\l"
# 847 "data/maps/PetalburgCity/scripts.pory"
	.string "Habe ich Recht?$"
# 848 "data/maps/PetalburgCity/scripts.pory"

# 849 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 850 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … …\n"
# 851 "data/maps/PetalburgCity/scripts.pory"
	.string "…\p"
# 852 "data/maps/PetalburgCity/scripts.pory"
	.string "Nun, vielleicht auch nicht.\n"
# 853 "data/maps/PetalburgCity/scripts.pory"
	.string "Deine Kleidung ist noch relativ sauber.\p"
# 854 "data/maps/PetalburgCity/scripts.pory"
	.string "Entweder bist du gerade erst Trainer\n"
# 855 "data/maps/PetalburgCity/scripts.pory"
	.string "geworden oder du bist einfach ein ganz\l"
# 856 "data/maps/PetalburgCity/scripts.pory"
	.string "normales Kind.$"
# 857 "data/maps/PetalburgCity/scripts.pory"

# 858 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 859 "data/maps/PetalburgCity/scripts.pory"
	.string "Ich reise durch das Land, immer auf der\n"
# 860 "data/maps/PetalburgCity/scripts.pory"
	.string "Suche nach talentierten Trainern.\p"
# 861 "data/maps/PetalburgCity/scripts.pory"
	.string "Tut mir Leid, wenn ich dich aufgehalten\n"
# 862 "data/maps/PetalburgCity/scripts.pory"
	.string "habe.$"

PetalburgCity_EventScript_PkmnSign_Text_0:
# 2 "data/maps/PetalburgCity/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die in dieser Stadt leben.$"

PetalburgCity_EventScript_PkmnSign_Text_1:
# 4 "data/maps/PetalburgCity/scripts.pory"
	.string "Wasser$"

PetalburgCity_EventScript_PkmnSign_Text_2:
# 4 "data/maps/PetalburgCity/scripts.pory"
	.string "Angel$"

PetalburgCity_Text_PkmnSignWasser::
# 51 "data/maps/PetalburgCity/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

PetalburgCity_Text_PkmnSignAngel::
# 56 "data/maps/PetalburgCity/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

PetalburgCity_Text_PkmnSignAngel2::
# 60 "data/maps/PetalburgCity/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

PetalburgCity_Text_PkmnSignAngel3::
# 64 "data/maps/PetalburgCity/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
