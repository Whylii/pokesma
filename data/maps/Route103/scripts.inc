Route103_EventScript_PkmnSign::
# 2 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_PkmnSign_Text_0, MSGBOX_SIGN
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
# 41 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_PkmnSign_7
	return

Route103_EventScript_PkmnSign_2:
# 6 "data/maps/Route103/scripts.pory"
	release
	end

Route103_EventScript_PkmnSign_5:
# 11 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignGras, MSGBOX_SIGN
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
	msgbox Route103_Text_PkmnSignWasser, MSGBOX_SIGN
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
	end

Route103_EventScript_PkmnSign_7:
# 42 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignAngel, MSGBOX_SIGN
# 43 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 44 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 45 "data/maps/Route103/scripts.pory"
	delay 60
# 46 "data/maps/Route103/scripts.pory"
	hidemonpic
# 47 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 48 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 49 "data/maps/Route103/scripts.pory"
	delay 60
# 50 "data/maps/Route103/scripts.pory"
	hidemonpic
# 51 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignAngel2, MSGBOX_SIGN
# 52 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 53 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 54 "data/maps/Route103/scripts.pory"
	delay 60
# 55 "data/maps/Route103/scripts.pory"
	hidemonpic
# 56 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 57 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 58 "data/maps/Route103/scripts.pory"
	delay 60
# 59 "data/maps/Route103/scripts.pory"
	hidemonpic
# 60 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 61 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 62 "data/maps/Route103/scripts.pory"
	delay 60
# 63 "data/maps/Route103/scripts.pory"
	hidemonpic
# 64 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PkmnSignAngel3, MSGBOX_SIGN
# 65 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_SHARPEDO, 10, 3
# 66 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_SHARPEDO, 0
# 67 "data/maps/Route103/scripts.pory"
	delay 60
# 68 "data/maps/Route103/scripts.pory"
	hidemonpic
# 69 "data/maps/Route103/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 70 "data/maps/Route103/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 71 "data/maps/Route103/scripts.pory"
	delay 60
# 72 "data/maps/Route103/scripts.pory"
	hidemonpic
# 73 "data/maps/Route103/scripts.pory"
	release
	end


# 99 "data/maps/Route103/scripts.pory"

# 100 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 101 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 102 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 103 "data/maps/Route103/scripts.pory"
	.byte 0
# 104 "data/maps/Route103/scripts.pory"

# 105 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 106 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 107 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 108 "data/maps/Route103/scripts.pory"
	end
# 109 "data/maps/Route103/scripts.pory"

# 110 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 111 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 112 "data/maps/Route103/scripts.pory"
	end
# 113 "data/maps/Route103/scripts.pory"

# 114 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 115 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 116 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 117 "data/maps/Route103/scripts.pory"
	return
# 118 "data/maps/Route103/scripts.pory"

# 119 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 120 "data/maps/Route103/scripts.pory"
	lockall
# 121 "data/maps/Route103/scripts.pory"
	checkplayergender
# 122 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 123 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 124 "data/maps/Route103/scripts.pory"
	end
# 125 "data/maps/Route103/scripts.pory"

# 126 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 127 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 128 "data/maps/Route103/scripts.pory"
	closemessage
# 129 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 130 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 131 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 133 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 135 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 137 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 138 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 139 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 140 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 141 "data/maps/Route103/scripts.pory"
	end
# 142 "data/maps/Route103/scripts.pory"

# 143 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 144 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 145 "data/maps/Route103/scripts.pory"
	closemessage
# 146 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 147 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 148 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 149 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 150 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 152 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 154 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 155 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 156 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 157 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 158 "data/maps/Route103/scripts.pory"
	end
# 159 "data/maps/Route103/scripts.pory"

# 160 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 161 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 162 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 163 "data/maps/Route103/scripts.pory"
	end
# 164 "data/maps/Route103/scripts.pory"

# 165 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 166 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 167 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 168 "data/maps/Route103/scripts.pory"
	end
# 169 "data/maps/Route103/scripts.pory"

# 170 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 171 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 172 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 173 "data/maps/Route103/scripts.pory"
	end
# 174 "data/maps/Route103/scripts.pory"

# 175 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 176 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 177 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 178 "data/maps/Route103/scripts.pory"
	end
# 179 "data/maps/Route103/scripts.pory"

# 180 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 181 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 182 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 183 "data/maps/Route103/scripts.pory"
	end
# 184 "data/maps/Route103/scripts.pory"

# 185 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 186 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 187 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 188 "data/maps/Route103/scripts.pory"
	end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 191 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 192 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 193 "data/maps/Route103/scripts.pory"
	end
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 196 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 197 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 198 "data/maps/Route103/scripts.pory"
	end
# 199 "data/maps/Route103/scripts.pory"

# 200 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 201 "data/maps/Route103/scripts.pory"
	closemessage
# 202 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 203 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 204 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 205 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 206 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 207 "data/maps/Route103/scripts.pory"
	end
# 208 "data/maps/Route103/scripts.pory"

# 209 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 210 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 211 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 212 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 214 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 215 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 217 "data/maps/Route103/scripts.pory"
	end
# 218 "data/maps/Route103/scripts.pory"

# 219 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 220 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 221 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 222 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 224 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 225 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 227 "data/maps/Route103/scripts.pory"
	end
# 228 "data/maps/Route103/scripts.pory"

# 229 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 230 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit1
# 231 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 233 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_Movement_RivalExit2
# 234 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 239 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 240 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 241 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 242 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 243 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 244 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 245 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 246 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 247 "data/maps/Route103/scripts.pory"
	releaseall
# 248 "data/maps/Route103/scripts.pory"
	end
# 249 "data/maps/Route103/scripts.pory"

# 250 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 251 "data/maps/Route103/scripts.pory"
	walk_left
# 252 "data/maps/Route103/scripts.pory"
	walk_down
# 253 "data/maps/Route103/scripts.pory"
	step_end
# 254 "data/maps/Route103/scripts.pory"

# 255 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 256 "data/maps/Route103/scripts.pory"
	jump_2_down
# 257 "data/maps/Route103/scripts.pory"
	delay_16
# 258 "data/maps/Route103/scripts.pory"
	walk_down
# 259 "data/maps/Route103/scripts.pory"
	walk_down
# 260 "data/maps/Route103/scripts.pory"
	walk_down
# 261 "data/maps/Route103/scripts.pory"
	walk_down
# 262 "data/maps/Route103/scripts.pory"
	step_end
# 263 "data/maps/Route103/scripts.pory"

# 264 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 265 "data/maps/Route103/scripts.pory"
	delay_16
# 266 "data/maps/Route103/scripts.pory"
	delay_4
# 267 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 268 "data/maps/Route103/scripts.pory"
	delay_16
# 269 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 270 "data/maps/Route103/scripts.pory"
	step_end
# 271 "data/maps/Route103/scripts.pory"

# 272 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 273 "data/maps/Route103/scripts.pory"
	walk_down
# 274 "data/maps/Route103/scripts.pory"
	step_end
# 275 "data/maps/Route103/scripts.pory"

# 276 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 277 "data/maps/Route103/scripts.pory"
	jump_2_down
# 278 "data/maps/Route103/scripts.pory"
	delay_16
# 279 "data/maps/Route103/scripts.pory"
	walk_down
# 280 "data/maps/Route103/scripts.pory"
	walk_down
# 281 "data/maps/Route103/scripts.pory"
	walk_down
# 282 "data/maps/Route103/scripts.pory"
	step_end
# 283 "data/maps/Route103/scripts.pory"

# 284 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 285 "data/maps/Route103/scripts.pory"
	delay_16
# 286 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 287 "data/maps/Route103/scripts.pory"
	step_end
# 288 "data/maps/Route103/scripts.pory"

# 289 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 290 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 291 "data/maps/Route103/scripts.pory"
	end
# 292 "data/maps/Route103/scripts.pory"

# 293 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 294 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 295 "data/maps/Route103/scripts.pory"
	end
# 296 "data/maps/Route103/scripts.pory"

# 297 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 298 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 299 "data/maps/Route103/scripts.pory"
	end
# 300 "data/maps/Route103/scripts.pory"

# 301 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 302 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 303 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route103/scripts.pory"
	end
# 305 "data/maps/Route103/scripts.pory"

# 306 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 307 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 308 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 309 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 310 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route103/scripts.pory"
	end
# 312 "data/maps/Route103/scripts.pory"

# 313 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 314 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 315 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 316 "data/maps/Route103/scripts.pory"
	release
# 317 "data/maps/Route103/scripts.pory"
	end
# 318 "data/maps/Route103/scripts.pory"

# 319 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 320 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 321 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route103/scripts.pory"
	end
# 323 "data/maps/Route103/scripts.pory"

# 324 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 325 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 326 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 327 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 328 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 329 "data/maps/Route103/scripts.pory"
	end
# 330 "data/maps/Route103/scripts.pory"

# 331 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 332 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 333 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 334 "data/maps/Route103/scripts.pory"
	release
# 335 "data/maps/Route103/scripts.pory"
	end
# 336 "data/maps/Route103/scripts.pory"

# 337 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 338 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 339 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route103/scripts.pory"
	end
# 341 "data/maps/Route103/scripts.pory"

# 342 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 343 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 344 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route103/scripts.pory"
	end
# 346 "data/maps/Route103/scripts.pory"

# 347 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 348 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 349 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 350 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 351 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 352 "data/maps/Route103/scripts.pory"
	release
# 353 "data/maps/Route103/scripts.pory"
	end
# 354 "data/maps/Route103/scripts.pory"

# 355 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 356 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 357 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 359 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 360 "data/maps/Route103/scripts.pory"
	release
# 361 "data/maps/Route103/scripts.pory"
	end
# 362 "data/maps/Route103/scripts.pory"

# 363 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 364 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 365 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route103/scripts.pory"
	end
# 367 "data/maps/Route103/scripts.pory"

# 368 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 369 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 370 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route103/scripts.pory"
	end
# 372 "data/maps/Route103/scripts.pory"

# 373 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 374 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 375 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route103/scripts.pory"
	end
# 377 "data/maps/Route103/scripts.pory"

# 378 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 379 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 380 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route103/scripts.pory"
	end
# 382 "data/maps/Route103/scripts.pory"

# 383 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 384 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 385 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route103/scripts.pory"
	end
# 387 "data/maps/Route103/scripts.pory"

# 388 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 389 "data/maps/Route103/scripts.pory"
	.string "Maike: Mal seh’n… Das Pokémon von\n"
# 390 "data/maps/Route103/scripts.pory"
	.string "Route 103 besitzt…$"
# 391 "data/maps/Route103/scripts.pory"

# 392 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 393 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 394 "data/maps/Route103/scripts.pory"
	.string "… Oh… Ich seh schon. Mein Vater hat dir\n"
# 395 "data/maps/Route103/scripts.pory"
	.string "ein Pokémon geschenkt.\p"
# 396 "data/maps/Route103/scripts.pory"
	.string "Wenn wir schon mal hier sind, lass uns\n"
# 397 "data/maps/Route103/scripts.pory"
	.string "doch kämpfen!\p"
# 398 "data/maps/Route103/scripts.pory"
	.string "Ich gebe dir einen Vorgeschmack auf\n"
# 399 "data/maps/Route103/scripts.pory"
	.string "das Leben als Trainer.$"
# 400 "data/maps/Route103/scripts.pory"

# 401 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 402 "data/maps/Route103/scripts.pory"
	.string "Wow! Das war spitze!\n"
# 403 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, du bist ein Naturtalent!$"
# 404 "data/maps/Route103/scripts.pory"

# 405 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 406 "data/maps/Route103/scripts.pory"
	.string "Maike: Ich glaube, ich weiß jetzt, warum\n"
# 407 "data/maps/Route103/scripts.pory"
	.string "mein Vater dich ausgesucht hat.\p"
# 408 "data/maps/Route103/scripts.pory"
	.string "Ich meine, du hast dein Pokémon erst\n"
# 409 "data/maps/Route103/scripts.pory"
	.string "sehr kurze Zeit und es mag dich bereits.\p"
# 410 "data/maps/Route103/scripts.pory"
	.string "Du wirst es einfach haben, dich mit\n"
# 411 "data/maps/Route103/scripts.pory"
	.string "jeder Art von Pokémon anzufreunden.\p"
# 412 "data/maps/Route103/scripts.pory"
	.string "Nun wird es aber Zeit, zurück ins Labor\n"
# 413 "data/maps/Route103/scripts.pory"
	.string "zu gehen!$"
# 414 "data/maps/Route103/scripts.pory"

# 415 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 416 "data/maps/Route103/scripts.pory"
	.string "Brix: So… Dieses und jenes leben an\n"
# 417 "data/maps/Route103/scripts.pory"
	.string "der Route 103…$"
# 418 "data/maps/Route103/scripts.pory"

# 419 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 420 "data/maps/Route103/scripts.pory"
	.string "Hey, da ist ja {PLAYER}!\p"
# 421 "data/maps/Route103/scripts.pory"
	.string "… Oh ja. Mein Vater hat dir ein Pokémon\n"
# 422 "data/maps/Route103/scripts.pory"
	.string "geschenkt, nicht wahr?\p"
# 423 "data/maps/Route103/scripts.pory"
	.string "Wenn wir schon mal hier sind, lass uns\n"
# 424 "data/maps/Route103/scripts.pory"
	.string "doch einen kleinen Kampf austragen.\p"
# 425 "data/maps/Route103/scripts.pory"
	.string "Ich bringe dir bei, was ein Trainer\n"
# 426 "data/maps/Route103/scripts.pory"
	.string "wissen muss.$"
# 427 "data/maps/Route103/scripts.pory"

# 428 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 429 "data/maps/Route103/scripts.pory"
	.string "Hey, {PLAYER}, das war gar nicht so übel.$"
# 430 "data/maps/Route103/scripts.pory"

# 431 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 432 "data/maps/Route103/scripts.pory"
	.string "Brix: Ich denke, ich habe es kapiert.\n"
# 433 "data/maps/Route103/scripts.pory"
	.string "Ich weiß jetzt, warum mein Vater dich\l"
# 434 "data/maps/Route103/scripts.pory"
	.string "ausgesucht hat.\p"
# 435 "data/maps/Route103/scripts.pory"
	.string "Du hast dein Pokémon noch nicht lange,\n"
# 436 "data/maps/Route103/scripts.pory"
	.string "und doch mag es dich schon.\p"
# 437 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, ich glaube, du kannst mit\n"
# 438 "data/maps/Route103/scripts.pory"
	.string "jedem Pokémon Freundschaft schließen.\p"
# 439 "data/maps/Route103/scripts.pory"
	.string "Wir sollten nun zurück zum Labor gehen.$"
# 440 "data/maps/Route103/scripts.pory"

# 441 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 442 "data/maps/Route103/scripts.pory"
	.string "Mein Pokémon ist unglaublich müde…\n"
# 443 "data/maps/Route103/scripts.pory"
	.string "Ich hätte einen Trank mitnehmen sollen.$"
# 444 "data/maps/Route103/scripts.pory"

# 445 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 446 "data/maps/Route103/scripts.pory"
	.string "Wenn du von hier das Meer überquerst,\n"
# 447 "data/maps/Route103/scripts.pory"
	.string "nimmst du eine Abkürzung nach\l"
# 448 "data/maps/Route103/scripts.pory"
	.string "Rosaltstadt.\p"
# 449 "data/maps/Route103/scripts.pory"
	.string "Hahaha, ist das kein praktischer Tipp?$"
# 450 "data/maps/Route103/scripts.pory"

# 451 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 452 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 453 "data/maps/Route103/scripts.pory"
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
# 78 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im hohen Gras:$"

Route103_Text_PkmnSignWasser::
# 82 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route103_Text_PkmnSignAngel::
# 86 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route103_Text_PkmnSignAngel2::
# 90 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route103_Text_PkmnSignAngel3::
# 94 "data/maps/Route103/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
