Route103_EventScript_PkmnSign::
# 2 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_PkmnSign_Text_0, MSGBOX_DEFAULT
# 4 "data/maps/Route103/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route103_EventScript_PkmnSign_Text_1, Route103_EventScript_PkmnSign_Text_2, Route103_EventScript_PkmnSign_Text_3
# 5 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq Route103_EventScript_PkmnSign_2
# 9 "data/maps/Route103/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_PkmnSign_5
# 26 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_PkmnSign_6
# 42 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_PkmnSign_7
	return

Route103_EventScript_PkmnSign_2:
# 6 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_PkmnSign_5:
# 11 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignGras, MSGBOX_DEFAULT
# 12 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 13 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 14 "data/maps/Route103/scripts.pory"
	delay 60
# 15 "data/maps/Route103/scripts.pory"
	hidemonpic
# 16 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 17 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 18 "data/maps/Route103/scripts.pory"
	delay 60
# 19 "data/maps/Route103/scripts.pory"
	hidemonpic
# 20 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_ZIGZAGOON, 10, 3
# 21 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 22 "data/maps/Route103/scripts.pory"
	delay 60
# 23 "data/maps/Route103/scripts.pory"
	hidemonpic
# 24 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_PkmnSign_6:
# 27 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignWasser, MSGBOX_DEFAULT
# 28 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 29 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 30 "data/maps/Route103/scripts.pory"
	delay 60
# 31 "data/maps/Route103/scripts.pory"
	hidemonpic
# 32 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 33 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 34 "data/maps/Route103/scripts.pory"
	delay 60
# 35 "data/maps/Route103/scripts.pory"
	hidemonpic
# 36 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_PELIPPER, 10, 3
# 37 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_PELIPPER, 0
# 38 "data/maps/Route103/scripts.pory"
	delay 60
# 39 "data/maps/Route103/scripts.pory"
	hidemonpic
# 40 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_PkmnSign_7:
# 43 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignAngel, MSGBOX_DEFAULT
# 44 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 45 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 46 "data/maps/Route103/scripts.pory"
	delay 60
# 47 "data/maps/Route103/scripts.pory"
	hidemonpic
# 48 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 49 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 50 "data/maps/Route103/scripts.pory"
	delay 60
# 51 "data/maps/Route103/scripts.pory"
	hidemonpic
# 52 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignAngel2, MSGBOX_DEFAULT
# 53 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 54 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 55 "data/maps/Route103/scripts.pory"
	delay 60
# 56 "data/maps/Route103/scripts.pory"
	hidemonpic
# 57 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 58 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 59 "data/maps/Route103/scripts.pory"
	delay 60
# 60 "data/maps/Route103/scripts.pory"
	hidemonpic
# 61 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 62 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 63 "data/maps/Route103/scripts.pory"
	delay 60
# 64 "data/maps/Route103/scripts.pory"
	hidemonpic
# 65 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignAngel3, MSGBOX_DEFAULT
# 66 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_SHARPEDO, 10, 3
# 67 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_SHARPEDO, 0
# 68 "data/maps/Route103/scripts.pory"
	delay 60
# 69 "data/maps/Route103/scripts.pory"
	hidemonpic
# 70 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 71 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 72 "data/maps/Route103/scripts.pory"
	delay 60
# 73 "data/maps/Route103/scripts.pory"
	hidemonpic
# 74 "data/maps/Route103/scripts.pory"
	release
	end


# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 102 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 103 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 104 "data/maps/Route103/scripts.pory"
	.byte 0
# 105 "data/maps/Route103/scripts.pory"

# 106 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 107 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 108 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 109 "data/maps/Route103/scripts.pory"
	end
# 110 "data/maps/Route103/scripts.pory"

# 111 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 112 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 113 "data/maps/Route103/scripts.pory"
	end
# 114 "data/maps/Route103/scripts.pory"

# 115 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 116 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 117 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 118 "data/maps/Route103/scripts.pory"
	return
# 119 "data/maps/Route103/scripts.pory"

# 120 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 121 "data/maps/Route103/scripts.pory"
	lockall
# 122 "data/maps/Route103/scripts.pory"
	checkplayergender
# 123 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 124 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 125 "data/maps/Route103/scripts.pory"
	end
# 126 "data/maps/Route103/scripts.pory"

# 127 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 128 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 129 "data/maps/Route103/scripts.pory"
	closemessage
# 130 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 131 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 132 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 134 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 136 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 138 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 139 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 140 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 141 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 142 "data/maps/Route103/scripts.pory"
	end
# 143 "data/maps/Route103/scripts.pory"

# 144 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 145 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 146 "data/maps/Route103/scripts.pory"
	closemessage
# 147 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 148 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 149 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 151 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 153 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 155 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 156 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 157 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 158 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 159 "data/maps/Route103/scripts.pory"
	end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 162 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 163 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 164 "data/maps/Route103/scripts.pory"
	end
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 167 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 168 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 169 "data/maps/Route103/scripts.pory"
	end
# 170 "data/maps/Route103/scripts.pory"

# 171 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 172 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 173 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 174 "data/maps/Route103/scripts.pory"
	end
# 175 "data/maps/Route103/scripts.pory"

# 176 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 177 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 178 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 179 "data/maps/Route103/scripts.pory"
	end
# 180 "data/maps/Route103/scripts.pory"

# 181 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 182 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 183 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 184 "data/maps/Route103/scripts.pory"
	end
# 185 "data/maps/Route103/scripts.pory"

# 186 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 187 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 188 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 189 "data/maps/Route103/scripts.pory"
	end
# 190 "data/maps/Route103/scripts.pory"

# 191 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 192 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 193 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 194 "data/maps/Route103/scripts.pory"
	end
# 195 "data/maps/Route103/scripts.pory"

# 196 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 197 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 198 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 199 "data/maps/Route103/scripts.pory"
	end
# 200 "data/maps/Route103/scripts.pory"

# 201 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 202 "data/maps/Route103/scripts.pory"
	closemessage
# 203 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 204 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 205 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 206 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 207 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 208 "data/maps/Route103/scripts.pory"
	end
# 209 "data/maps/Route103/scripts.pory"

# 210 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 211 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 212 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 213 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 215 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 216 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 218 "data/maps/Route103/scripts.pory"
	end
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 221 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 222 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 223 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 225 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 226 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 228 "data/maps/Route103/scripts.pory"
	end
# 229 "data/maps/Route103/scripts.pory"

# 230 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 231 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 232 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 234 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 235 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 237 "data/maps/Route103/scripts.pory"
	end
# 238 "data/maps/Route103/scripts.pory"

# 239 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 240 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 241 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 242 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 243 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 244 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 245 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 246 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 247 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 248 "data/maps/Route103/scripts.pory"
	releaseall
# 249 "data/maps/Route103/scripts.pory"
	end
# 250 "data/maps/Route103/scripts.pory"

# 251 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 252 "data/maps/Route103/scripts.pory"
	walk_left
# 253 "data/maps/Route103/scripts.pory"
	walk_down
# 254 "data/maps/Route103/scripts.pory"
	step_end
# 255 "data/maps/Route103/scripts.pory"

# 256 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 257 "data/maps/Route103/scripts.pory"
	jump_2_down
# 258 "data/maps/Route103/scripts.pory"
	delay_16
# 259 "data/maps/Route103/scripts.pory"
	walk_down
# 260 "data/maps/Route103/scripts.pory"
	walk_down
# 261 "data/maps/Route103/scripts.pory"
	walk_down
# 262 "data/maps/Route103/scripts.pory"
	walk_down
# 263 "data/maps/Route103/scripts.pory"
	step_end
# 264 "data/maps/Route103/scripts.pory"

# 265 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 266 "data/maps/Route103/scripts.pory"
	delay_16
# 267 "data/maps/Route103/scripts.pory"
	delay_4
# 268 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 269 "data/maps/Route103/scripts.pory"
	delay_16
# 270 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 271 "data/maps/Route103/scripts.pory"
	step_end
# 272 "data/maps/Route103/scripts.pory"

# 273 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 274 "data/maps/Route103/scripts.pory"
	walk_down
# 275 "data/maps/Route103/scripts.pory"
	step_end
# 276 "data/maps/Route103/scripts.pory"

# 277 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 278 "data/maps/Route103/scripts.pory"
	jump_2_down
# 279 "data/maps/Route103/scripts.pory"
	delay_16
# 280 "data/maps/Route103/scripts.pory"
	walk_down
# 281 "data/maps/Route103/scripts.pory"
	walk_down
# 282 "data/maps/Route103/scripts.pory"
	walk_down
# 283 "data/maps/Route103/scripts.pory"
	step_end
# 284 "data/maps/Route103/scripts.pory"

# 285 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 286 "data/maps/Route103/scripts.pory"
	delay_16
# 287 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 288 "data/maps/Route103/scripts.pory"
	step_end
# 289 "data/maps/Route103/scripts.pory"

# 290 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 291 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 292 "data/maps/Route103/scripts.pory"
	end
# 293 "data/maps/Route103/scripts.pory"

# 294 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 295 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 296 "data/maps/Route103/scripts.pory"
	end
# 297 "data/maps/Route103/scripts.pory"

# 298 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 299 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 300 "data/maps/Route103/scripts.pory"
	end
# 301 "data/maps/Route103/scripts.pory"

# 302 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 303 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 304 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route103/scripts.pory"
	end
# 306 "data/maps/Route103/scripts.pory"

# 307 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 308 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 309 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 310 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 311 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route103/scripts.pory"
	end
# 313 "data/maps/Route103/scripts.pory"

# 314 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 315 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 316 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 317 "data/maps/Route103/scripts.pory"
	release
# 318 "data/maps/Route103/scripts.pory"
	end
# 319 "data/maps/Route103/scripts.pory"

# 320 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 321 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 322 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route103/scripts.pory"
	end
# 324 "data/maps/Route103/scripts.pory"

# 325 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 326 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 327 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 328 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 329 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route103/scripts.pory"
	end
# 331 "data/maps/Route103/scripts.pory"

# 332 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 333 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 334 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 335 "data/maps/Route103/scripts.pory"
	release
# 336 "data/maps/Route103/scripts.pory"
	end
# 337 "data/maps/Route103/scripts.pory"

# 338 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 339 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 340 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 341 "data/maps/Route103/scripts.pory"
	end
# 342 "data/maps/Route103/scripts.pory"

# 343 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 344 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 345 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route103/scripts.pory"
	end
# 347 "data/maps/Route103/scripts.pory"

# 348 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 349 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 350 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 351 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 352 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 353 "data/maps/Route103/scripts.pory"
	release
# 354 "data/maps/Route103/scripts.pory"
	end
# 355 "data/maps/Route103/scripts.pory"

# 356 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 357 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 358 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 360 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 361 "data/maps/Route103/scripts.pory"
	release
# 362 "data/maps/Route103/scripts.pory"
	end
# 363 "data/maps/Route103/scripts.pory"

# 364 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 365 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 366 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/Route103/scripts.pory"
	end
# 368 "data/maps/Route103/scripts.pory"

# 369 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 370 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 371 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/Route103/scripts.pory"
	end
# 373 "data/maps/Route103/scripts.pory"

# 374 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 375 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 376 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/Route103/scripts.pory"
	end
# 378 "data/maps/Route103/scripts.pory"

# 379 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 380 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 381 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route103/scripts.pory"
	end
# 383 "data/maps/Route103/scripts.pory"

# 384 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 385 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 386 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/Route103/scripts.pory"
	end
# 388 "data/maps/Route103/scripts.pory"

# 389 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 390 "data/maps/Route103/scripts.pory"
	.string "Maike: Mal seh’n… Das Pokémon von\n"
# 391 "data/maps/Route103/scripts.pory"
	.string "Route 103 besitzt…$"
# 392 "data/maps/Route103/scripts.pory"

# 393 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 394 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 395 "data/maps/Route103/scripts.pory"
	.string "… Oh… Ich seh schon. Mein Vater hat dir\n"
# 396 "data/maps/Route103/scripts.pory"
	.string "ein Pokémon geschenkt.\p"
# 397 "data/maps/Route103/scripts.pory"
	.string "Wenn wir schon mal hier sind, lass uns\n"
# 398 "data/maps/Route103/scripts.pory"
	.string "doch kämpfen!\p"
# 399 "data/maps/Route103/scripts.pory"
	.string "Ich gebe dir einen Vorgeschmack auf\n"
# 400 "data/maps/Route103/scripts.pory"
	.string "das Leben als Trainer.$"
# 401 "data/maps/Route103/scripts.pory"

# 402 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 403 "data/maps/Route103/scripts.pory"
	.string "Wow! Das war spitze!\n"
# 404 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, du bist ein Naturtalent!$"
# 405 "data/maps/Route103/scripts.pory"

# 406 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 407 "data/maps/Route103/scripts.pory"
	.string "Maike: Ich glaube, ich weiß jetzt, warum\n"
# 408 "data/maps/Route103/scripts.pory"
	.string "mein Vater dich ausgesucht hat.\p"
# 409 "data/maps/Route103/scripts.pory"
	.string "Ich meine, du hast dein Pokémon erst\n"
# 410 "data/maps/Route103/scripts.pory"
	.string "sehr kurze Zeit und es mag dich bereits.\p"
# 411 "data/maps/Route103/scripts.pory"
	.string "Du wirst es einfach haben, dich mit\n"
# 412 "data/maps/Route103/scripts.pory"
	.string "jeder Art von Pokémon anzufreunden.\p"
# 413 "data/maps/Route103/scripts.pory"
	.string "Nun wird es aber Zeit, zurück ins Labor\n"
# 414 "data/maps/Route103/scripts.pory"
	.string "zu gehen!$"
# 415 "data/maps/Route103/scripts.pory"

# 416 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 417 "data/maps/Route103/scripts.pory"
	.string "Brix: So… Dieses und jenes leben an\n"
# 418 "data/maps/Route103/scripts.pory"
	.string "der Route 103…$"
# 419 "data/maps/Route103/scripts.pory"

# 420 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 421 "data/maps/Route103/scripts.pory"
	.string "Hey, da ist ja {PLAYER}!\p"
# 422 "data/maps/Route103/scripts.pory"
	.string "… Oh ja. Mein Vater hat dir ein Pokémon\n"
# 423 "data/maps/Route103/scripts.pory"
	.string "geschenkt, nicht wahr?\p"
# 424 "data/maps/Route103/scripts.pory"
	.string "Wenn wir schon mal hier sind, lass uns\n"
# 425 "data/maps/Route103/scripts.pory"
	.string "doch einen kleinen Kampf austragen.\p"
# 426 "data/maps/Route103/scripts.pory"
	.string "Ich bringe dir bei, was ein Trainer\n"
# 427 "data/maps/Route103/scripts.pory"
	.string "wissen muss.$"
# 428 "data/maps/Route103/scripts.pory"

# 429 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 430 "data/maps/Route103/scripts.pory"
	.string "Hey, {PLAYER}, das war gar nicht so übel.$"
# 431 "data/maps/Route103/scripts.pory"

# 432 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 433 "data/maps/Route103/scripts.pory"
	.string "Brix: Ich denke, ich habe es kapiert.\n"
# 434 "data/maps/Route103/scripts.pory"
	.string "Ich weiß jetzt, warum mein Vater dich\l"
# 435 "data/maps/Route103/scripts.pory"
	.string "ausgesucht hat.\p"
# 436 "data/maps/Route103/scripts.pory"
	.string "Du hast dein Pokémon noch nicht lange,\n"
# 437 "data/maps/Route103/scripts.pory"
	.string "und doch mag es dich schon.\p"
# 438 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, ich glaube, du kannst mit\n"
# 439 "data/maps/Route103/scripts.pory"
	.string "jedem Pokémon Freundschaft schließen.\p"
# 440 "data/maps/Route103/scripts.pory"
	.string "Wir sollten nun zurück zum Labor gehen.$"
# 441 "data/maps/Route103/scripts.pory"

# 442 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 443 "data/maps/Route103/scripts.pory"
	.string "Mein Pokémon ist unglaublich müde…\n"
# 444 "data/maps/Route103/scripts.pory"
	.string "Ich hätte einen Trank mitnehmen sollen.$"
# 445 "data/maps/Route103/scripts.pory"

# 446 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 447 "data/maps/Route103/scripts.pory"
	.string "Wenn du von hier das Meer überquerst,\n"
# 448 "data/maps/Route103/scripts.pory"
	.string "nimmst du eine Abkürzung nach\l"
# 449 "data/maps/Route103/scripts.pory"
	.string "Rosaltstadt.\p"
# 450 "data/maps/Route103/scripts.pory"
	.string "Hahaha, ist das kein praktischer Tipp?$"
# 451 "data/maps/Route103/scripts.pory"

# 452 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 453 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 454 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} Rosaltstadt$"

Route103_EventScript_PkmnSign_Text_0:
# 2 "data/maps/Route103/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die auf dieser Route leben.$"

Route103_EventScript_PkmnSign_Text_1:
# 4 "data/maps/Route103/scripts.pory"
	.string "Hohes Gras$"

Route103_EventScript_PkmnSign_Text_2:
# 4 "data/maps/Route103/scripts.pory"
	.string "Wasser$"

Route103_EventScript_PkmnSign_Text_3:
# 4 "data/maps/Route103/scripts.pory"
	.string "Angel$"

Route103_Text_PkmnSignGras::
# 79 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im hohen Gras:$"

Route103_Text_PkmnSignWasser::
# 83 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route103_Text_PkmnSignAngel::
# 87 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route103_Text_PkmnSignAngel2::
# 91 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route103_Text_PkmnSignAngel3::
# 95 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
