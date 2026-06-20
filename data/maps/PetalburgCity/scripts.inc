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


# 69 "data/maps/PetalburgCity/scripts.pory"

# 70 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 71 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 72 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 73 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 74 "data/maps/PetalburgCity/scripts.pory"

# 75 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 76 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 77 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 78 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 79 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 80 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 81 "data/maps/PetalburgCity/scripts.pory"
	end
# 82 "data/maps/PetalburgCity/scripts.pory"

# 83 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 84 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 85 "data/maps/PetalburgCity/scripts.pory"
	return
# 86 "data/maps/PetalburgCity/scripts.pory"

# 87 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 88 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 89 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 90 "data/maps/PetalburgCity/scripts.pory"
	return
# 91 "data/maps/PetalburgCity/scripts.pory"

# 92 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 93 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 94 "data/maps/PetalburgCity/scripts.pory"
	return
# 95 "data/maps/PetalburgCity/scripts.pory"

# 96 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 97 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 98 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 99 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 100 "data/maps/PetalburgCity/scripts.pory"

# 101 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 102 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 103 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 104 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 105 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 106 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 107 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 110 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 112 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 113 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 114 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 115 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 116 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 117 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 118 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 119 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 120 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 121 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 122 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 123 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 124 "data/maps/PetalburgCity/scripts.pory"
	end
# 125 "data/maps/PetalburgCity/scripts.pory"

# 126 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 127 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 128 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 129 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 130 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 131 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 133 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 134 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 135 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 136 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 137 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 138 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 139 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 140 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 141 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 142 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 143 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 144 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 145 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 146 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 147 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 148 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 149 "data/maps/PetalburgCity/scripts.pory"
	end
# 150 "data/maps/PetalburgCity/scripts.pory"

# 151 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 152 "data/maps/PetalburgCity/scripts.pory"
	lock
# 153 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 154 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 155 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 156 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 157 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/PetalburgCity/scripts.pory"
	release
# 159 "data/maps/PetalburgCity/scripts.pory"
	end
# 160 "data/maps/PetalburgCity/scripts.pory"

# 161 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 162 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 163 "data/maps/PetalburgCity/scripts.pory"
	end
# 164 "data/maps/PetalburgCity/scripts.pory"

# 165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 166 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 184 "data/maps/PetalburgCity/scripts.pory"

# 185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 189 "data/maps/PetalburgCity/scripts.pory"

# 190 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 191 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	walk_up
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 208 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 209 "data/maps/PetalburgCity/scripts.pory"

# 210 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 212 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 213 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 214 "data/maps/PetalburgCity/scripts.pory"

# 215 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 216 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 247 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 248 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 251 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 252 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 254 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 255 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 256 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 258 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 274 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 276 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 277 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 279 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 281 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 282 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 284 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 285 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 286 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 287 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 288 "data/maps/PetalburgCity/scripts.pory"

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 290 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 291 "data/maps/PetalburgCity/scripts.pory"
	end
# 292 "data/maps/PetalburgCity/scripts.pory"

# 293 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 294 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 295 "data/maps/PetalburgCity/scripts.pory"
	end
# 296 "data/maps/PetalburgCity/scripts.pory"

# 297 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 298 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 299 "data/maps/PetalburgCity/scripts.pory"
	end
# 300 "data/maps/PetalburgCity/scripts.pory"

# 301 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 302 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 303 "data/maps/PetalburgCity/scripts.pory"
	end
# 304 "data/maps/PetalburgCity/scripts.pory"

# 305 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 306 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 307 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 308 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 309 "data/maps/PetalburgCity/scripts.pory"
	end
# 310 "data/maps/PetalburgCity/scripts.pory"

# 311 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 312 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 313 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 314 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 315 "data/maps/PetalburgCity/scripts.pory"
	end
# 316 "data/maps/PetalburgCity/scripts.pory"

# 317 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 318 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 319 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 320 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 321 "data/maps/PetalburgCity/scripts.pory"
	end
# 322 "data/maps/PetalburgCity/scripts.pory"

# 323 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 324 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 325 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 326 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 327 "data/maps/PetalburgCity/scripts.pory"
	end
# 328 "data/maps/PetalburgCity/scripts.pory"

# 329 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 333 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 335 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 337 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 339 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 340 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 341 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 342 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 343 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 344 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 345 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 346 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 347 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 348 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 350 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 351 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 353 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 357 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 358 "data/maps/PetalburgCity/scripts.pory"
	end
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 361 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 362 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 364 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/PetalburgCity/scripts.pory"
	return
# 366 "data/maps/PetalburgCity/scripts.pory"

# 367 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 368 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 369 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgCity/scripts.pory"
	return
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 373 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 374 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 375 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 376 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 377 "data/maps/PetalburgCity/scripts.pory"
	return
# 378 "data/maps/PetalburgCity/scripts.pory"

# 379 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 380 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 381 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 383 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/PetalburgCity/scripts.pory"
	return
# 385 "data/maps/PetalburgCity/scripts.pory"

# 386 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 387 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 388 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 389 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/PetalburgCity/scripts.pory"
	return
# 391 "data/maps/PetalburgCity/scripts.pory"

# 392 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 393 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 394 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 395 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 396 "data/maps/PetalburgCity/scripts.pory"
	return
# 397 "data/maps/PetalburgCity/scripts.pory"

# 398 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 399 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 400 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 401 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/PetalburgCity/scripts.pory"
	return
# 403 "data/maps/PetalburgCity/scripts.pory"

# 404 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 405 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 406 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 407 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/PetalburgCity/scripts.pory"
	return
# 409 "data/maps/PetalburgCity/scripts.pory"

# 410 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 411 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 412 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 413 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 414 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 415 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 416 "data/maps/PetalburgCity/scripts.pory"

# 417 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 423 "data/maps/PetalburgCity/scripts.pory"

# 424 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 428 "data/maps/PetalburgCity/scripts.pory"

# 429 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 434 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 442 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 443 "data/maps/PetalburgCity/scripts.pory"

# 444 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 455 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 456 "data/maps/PetalburgCity/scripts.pory"

# 457 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 471 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 472 "data/maps/PetalburgCity/scripts.pory"

# 473 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 484 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 485 "data/maps/PetalburgCity/scripts.pory"

# 486 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
PetalburgCity_Movement_BoyWalkAway:
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 513 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 514 "data/maps/PetalburgCity/scripts.pory"

# 515 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 519 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 520 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 521 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 522 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 523 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 525 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 528 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 529 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 540 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 541 "data/maps/PetalburgCity/scripts.pory"

# 542 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 543 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
PetalburgCity_Movement_PlayerWalkToGym3:
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 556 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 557 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 564 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 565 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 568 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 569 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 570 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 572 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 573 "data/maps/PetalburgCity/scripts.pory"
	end
# 574 "data/maps/PetalburgCity/scripts.pory"

# 575 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 576 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 577 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 578 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 579 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 580 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 581 "data/maps/PetalburgCity/scripts.pory"
	end
# 582 "data/maps/PetalburgCity/scripts.pory"

# 583 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 584 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 585 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 586 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 587 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 588 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 589 "data/maps/PetalburgCity/scripts.pory"
	end
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 592 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 593 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 594 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 595 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 596 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 597 "data/maps/PetalburgCity/scripts.pory"
	end
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 600 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 601 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 603 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 604 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 606 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 607 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 608 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 610 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 612 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 613 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 614 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 615 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 617 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 618 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 619 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 620 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 622 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 623 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 624 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 625 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 626 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 627 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 628 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 629 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 630 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 631 "data/maps/PetalburgCity/scripts.pory"
	end
# 632 "data/maps/PetalburgCity/scripts.pory"

# 633 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 634 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 635 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 636 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/PetalburgCity/scripts.pory"
	return
# 638 "data/maps/PetalburgCity/scripts.pory"

# 639 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 640 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 641 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 642 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/PetalburgCity/scripts.pory"
	return
# 644 "data/maps/PetalburgCity/scripts.pory"

# 645 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 646 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 647 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 648 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/PetalburgCity/scripts.pory"
	return
# 650 "data/maps/PetalburgCity/scripts.pory"

# 651 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 652 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 653 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 654 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/PetalburgCity/scripts.pory"
	return
# 656 "data/maps/PetalburgCity/scripts.pory"

# 657 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity/scripts.pory"

# 664 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 670 "data/maps/PetalburgCity/scripts.pory"

# 671 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 686 "data/maps/PetalburgCity/scripts.pory"

# 687 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 688 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 690 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 691 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 710 "data/maps/PetalburgCity/scripts.pory"

# 711 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 712 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 713 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 714 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 717 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 723 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 724 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 735 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 737 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 738 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 739 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 740 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 746 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 747 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 758 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 759 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 760 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 761 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 762 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 763 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 766 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 767 "data/maps/PetalburgCity/scripts.pory"
	end
# 768 "data/maps/PetalburgCity/scripts.pory"

# 769 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "Wohin ist unser Heiko nur gegangen?\p"
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "Wir müssen doch bald nach Wiesenflur\n"
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "aufbrechen…$"
# 773 "data/maps/PetalburgCity/scripts.pory"

# 774 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "He da! Bist du vielleicht…\n"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "ein Anfänger unter den Trainern?\p"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "Weißt du, was Pokémon-Trainer machen,\n"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "wenn sie in einen neuen Ort kommen?\p"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "Sie sehen sich als Erstes die Arena\n"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "im Ort an.$"
# 781 "data/maps/PetalburgCity/scripts.pory"

# 782 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "Schau. Das ist die Arena von\n"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "Blütenburg City.$"
# 785 "data/maps/PetalburgCity/scripts.pory"

# 786 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "Das ist das Logo der Arena. Daran\n"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "kannst du immer eine Arena erkennen.$"
# 789 "data/maps/PetalburgCity/scripts.pory"

# 790 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "Mein Gesicht spiegelt sich im Wasser…\p"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "Ein schimmerndes Lächeln der Hoffnung.\p"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "Oder ist es der Ausdruck düsterer\n"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "Stille, an dem die Angst nagt…\p"
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "Was siehst du in deinem Spiegelbild?$"
# 796 "data/maps/PetalburgCity/scripts.pory"

# 797 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "Nehmen wir an, du hättest 6 Pokémon.\n"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "Wenn du jetzt ein weiteres fängst…\p"
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "wird es automatisch in das Pokémon-\n"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "Lagerungs-System gesendet.$"
# 802 "data/maps/PetalburgCity/scripts.pory"

# 803 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "Pokémon Arena von Blütenburg City\n"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "Leiter: Norman\l"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "“Ein Mann, der nach Stärke strebt!”$"
# 807 "data/maps/PetalburgCity/scripts.pory"

# 808 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "Blütenburg City\n"
# 810 "data/maps/PetalburgCity/scripts.pory"
	.string "“Wo Menschen Hand in Hand\l"
# 811 "data/maps/PetalburgCity/scripts.pory"
	.string "mit der Natur gehen.”$"
# 812 "data/maps/PetalburgCity/scripts.pory"

# 813 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "Heikos Haus$"
# 815 "data/maps/PetalburgCity/scripts.pory"

# 816 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "Entschuldige bitte!\p"
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "Lass mich raten! Deine Kleidung verrät\n"
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "mir, dass du ein Trainer bist.\l"
# 820 "data/maps/PetalburgCity/scripts.pory"
	.string "Habe ich Recht?$"
# 821 "data/maps/PetalburgCity/scripts.pory"

# 822 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … …\n"
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "…\p"
# 825 "data/maps/PetalburgCity/scripts.pory"
	.string "Nun, vielleicht auch nicht.\n"
# 826 "data/maps/PetalburgCity/scripts.pory"
	.string "Deine Kleidung ist noch relativ sauber.\p"
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "Entweder bist du gerade erst Trainer\n"
# 828 "data/maps/PetalburgCity/scripts.pory"
	.string "geworden oder du bist einfach ein ganz\l"
# 829 "data/maps/PetalburgCity/scripts.pory"
	.string "normales Kind.$"
# 830 "data/maps/PetalburgCity/scripts.pory"

# 831 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 832 "data/maps/PetalburgCity/scripts.pory"
	.string "Ich reise durch das Land, immer auf der\n"
# 833 "data/maps/PetalburgCity/scripts.pory"
	.string "Suche nach talentierten Trainern.\p"
# 834 "data/maps/PetalburgCity/scripts.pory"
	.string "Tut mir Leid, wenn ich dich aufgehalten\n"
# 835 "data/maps/PetalburgCity/scripts.pory"
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
