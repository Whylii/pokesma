Route104_EventScript_PkmnSign::
# 2 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_PkmnSign_Text_0, MSGBOX_SIGN
# 4 "data/maps/Route104/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route104_EventScript_PkmnSign_Text_1, Route104_EventScript_PkmnSign_Text_2, Route104_EventScript_PkmnSign_Text_3
# 5 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq Route104_EventScript_PkmnSign_2
# 9 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_PkmnSign_5
# 34 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_PkmnSign_6
# 46 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_PkmnSign_7
	return

Route104_EventScript_PkmnSign_2:
# 6 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_PkmnSign_5:
# 11 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PkmnSignGras, MSGBOX_SIGN
# 12 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 13 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 14 "data/maps/Route104/scripts.pory"
	delay 60
# 15 "data/maps/Route104/scripts.pory"
	hidemonpic
# 16 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_WURMPLE, 10, 3
# 17 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_WURMPLE, 0
# 18 "data/maps/Route104/scripts.pory"
	delay 60
# 19 "data/maps/Route104/scripts.pory"
	hidemonpic
# 20 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_MARILL, 10, 3
# 21 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_MARILL, 0
# 22 "data/maps/Route104/scripts.pory"
	delay 60
# 23 "data/maps/Route104/scripts.pory"
	hidemonpic
# 24 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_TAILLOW, 10, 3
# 25 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_TAILLOW, 0
# 26 "data/maps/Route104/scripts.pory"
	delay 60
# 27 "data/maps/Route104/scripts.pory"
	hidemonpic
# 28 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 29 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 30 "data/maps/Route104/scripts.pory"
	delay 60
# 31 "data/maps/Route104/scripts.pory"
	hidemonpic
# 32 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_PkmnSign_6:
# 35 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PkmnSignWasser, MSGBOX_SIGN
# 36 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 37 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 38 "data/maps/Route104/scripts.pory"
	delay 60
# 39 "data/maps/Route104/scripts.pory"
	hidemonpic
# 40 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_PELIPPER, 10, 3
# 41 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_PELIPPER, 0
# 42 "data/maps/Route104/scripts.pory"
	delay 60
# 43 "data/maps/Route104/scripts.pory"
	hidemonpic
# 44 "data/maps/Route104/scripts.pory"
	release
	end

Route104_EventScript_PkmnSign_7:
# 47 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PkmnSignAngel, MSGBOX_SIGN
# 48 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 49 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 50 "data/maps/Route104/scripts.pory"
	delay 60
# 51 "data/maps/Route104/scripts.pory"
	hidemonpic
# 52 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PkmnSignAngel2, MSGBOX_SIGN
# 53 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 54 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 55 "data/maps/Route104/scripts.pory"
	delay 60
# 56 "data/maps/Route104/scripts.pory"
	hidemonpic
# 57 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PkmnSignAngel3, MSGBOX_SIGN
# 58 "data/maps/Route104/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 59 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 60 "data/maps/Route104/scripts.pory"
	delay 60
# 61 "data/maps/Route104/scripts.pory"
	hidemonpic
# 62 "data/maps/Route104/scripts.pory"
	release
	end


Route104_MapScripts::
# 89 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route104_MapScripts_MAP_SCRIPT_ON_LOAD
# 100 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 101 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_LOAD:
# 90 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_1
# 91 "data/maps/Route104/scripts.pory"
	setflag FLAG_TEMP_2
# 92 "data/maps/Route104/scripts.pory"
	random 2
# 93 "data/maps/Route104/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/Route104/scripts.pory"
	case 0, Route104_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 96 "data/maps/Route104/scripts.pory"
	case 1, Route104_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Route104_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 95 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_1
	return

Route104_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 97 "data/maps/Route104/scripts.pory"
	clearflag FLAG_TEMP_2
	return


# 104 "data/maps/Route104/scripts.pory"

# 105 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 106 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 107 "data/maps/Route104/scripts.pory"
	.2byte 0
# 108 "data/maps/Route104/scripts.pory"

# 109 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 110 "data/maps/Route104/scripts.pory"
	lockall
# 111 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 112 "data/maps/Route104/scripts.pory"
	end
# 113 "data/maps/Route104/scripts.pory"

# 114 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 115 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 116 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 117 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 118 "data/maps/Route104/scripts.pory"
	end
# 119 "data/maps/Route104/scripts.pory"

# 120 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 121 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 122 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 123 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 124 "data/maps/Route104/scripts.pory"
	return
# 125 "data/maps/Route104/scripts.pory"

# 126 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 127 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 128 "data/maps/Route104/scripts.pory"
	return
# 129 "data/maps/Route104/scripts.pory"

# 130 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 131 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 132 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 133 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 134 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
# 135 "data/maps/Route104/scripts.pory"
	return
# 136 "data/maps/Route104/scripts.pory"

# 137 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 138 "data/maps/Route104/scripts.pory"
	return
# 139 "data/maps/Route104/scripts.pory"

# 140 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 141 "data/maps/Route104/scripts.pory"
	lockall
# 142 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 143 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 144 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 146 "data/maps/Route104/scripts.pory"

# 147 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 148 "data/maps/Route104/scripts.pory"
	lockall
# 149 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 150 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 151 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 152 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 153 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route104/scripts.pory"
	delay 10
# 155 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 156 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 157 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBackUp
# 158 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 160 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route104/scripts.pory"
	delay 20
# 162 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 163 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 164 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 165 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 166 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 168 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 170 "data/maps/Route104/scripts.pory"

# 171 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 172 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 173 "data/maps/Route104/scripts.pory"
	checkplayergender
# 174 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 175 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 176 "data/maps/Route104/scripts.pory"
	return
# 177 "data/maps/Route104/scripts.pory"

# 178 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 179 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 180 "data/maps/Route104/scripts.pory"
	return
# 181 "data/maps/Route104/scripts.pory"

# 182 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 183 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 184 "data/maps/Route104/scripts.pory"
	return
# 185 "data/maps/Route104/scripts.pory"

# 186 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 187 "data/maps/Route104/scripts.pory"
	checkplayergender
# 188 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 189 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 190 "data/maps/Route104/scripts.pory"
	end
# 191 "data/maps/Route104/scripts.pory"

# 192 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 193 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 194 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 195 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 196 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 197 "data/maps/Route104/scripts.pory"
	closemessage
# 198 "data/maps/Route104/scripts.pory"
	delay 30
# 199 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 200 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 201 "data/maps/Route104/scripts.pory"
	waitfanfare
# 202 "data/maps/Route104/scripts.pory"
	closemessage
# 203 "data/maps/Route104/scripts.pory"
	delay 30
# 204 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 205 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 206 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 207 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 208 "data/maps/Route104/scripts.pory"
	closemessage
# 209 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 211 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 213 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 214 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 215 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 216 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 217 "data/maps/Route104/scripts.pory"
	releaseall
# 218 "data/maps/Route104/scripts.pory"
	end
# 219 "data/maps/Route104/scripts.pory"

# 220 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 221 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 222 "data/maps/Route104/scripts.pory"
	step_end
# 223 "data/maps/Route104/scripts.pory"

# 224 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 225 "data/maps/Route104/scripts.pory"
	walk_down
# 226 "data/maps/Route104/scripts.pory"
	face_right
# 227 "data/maps/Route104/scripts.pory"
	step_end
# 228 "data/maps/Route104/scripts.pory"

# 229 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 230 "data/maps/Route104/scripts.pory"
	delay_4
# 231 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 232 "data/maps/Route104/scripts.pory"
	step_end
# 233 "data/maps/Route104/scripts.pory"

# 234 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 235 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 236 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 237 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 238 "data/maps/Route104/scripts.pory"
	releaseall
# 239 "data/maps/Route104/scripts.pory"
	end
# 240 "data/maps/Route104/scripts.pory"

# 241 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 242 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 243 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 244 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 245 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 246 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 247 "data/maps/Route104/scripts.pory"
	end
# 248 "data/maps/Route104/scripts.pory"

# 249 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 250 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 251 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 252 "data/maps/Route104/scripts.pory"
	releaseall
# 253 "data/maps/Route104/scripts.pory"
	end
# 254 "data/maps/Route104/scripts.pory"

# 255 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 256 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 257 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 258 "data/maps/Route104/scripts.pory"
	return
# 259 "data/maps/Route104/scripts.pory"

# 260 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 261 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 262 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 263 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 264 "data/maps/Route104/scripts.pory"
	end
# 265 "data/maps/Route104/scripts.pory"

# 266 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 267 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 268 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 269 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 270 "data/maps/Route104/scripts.pory"
	end
# 271 "data/maps/Route104/scripts.pory"

# 272 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 273 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 274 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 275 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 276 "data/maps/Route104/scripts.pory"
	end
# 277 "data/maps/Route104/scripts.pory"

# 278 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 279 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 280 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 281 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 282 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 283 "data/maps/Route104/scripts.pory"
	closemessage
# 284 "data/maps/Route104/scripts.pory"
	delay 30
# 285 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 286 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 287 "data/maps/Route104/scripts.pory"
	waitfanfare
# 288 "data/maps/Route104/scripts.pory"
	closemessage
# 289 "data/maps/Route104/scripts.pory"
	delay 30
# 290 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 291 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerFaceRival
# 292 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 293 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 294 "data/maps/Route104/scripts.pory"
	closemessage
# 295 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_Movement_RivalApproachPlayer
# 297 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 299 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 300 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 301 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 302 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 303 "data/maps/Route104/scripts.pory"
	releaseall
# 304 "data/maps/Route104/scripts.pory"
	end
# 305 "data/maps/Route104/scripts.pory"

# 306 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 307 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 308 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 309 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 310 "data/maps/Route104/scripts.pory"
	releaseall
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 315 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 316 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 317 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 318 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 319 "data/maps/Route104/scripts.pory"
	end
# 320 "data/maps/Route104/scripts.pory"

# 321 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 322 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 323 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 324 "data/maps/Route104/scripts.pory"
	releaseall
# 325 "data/maps/Route104/scripts.pory"
	end
# 326 "data/maps/Route104/scripts.pory"

# 327 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 328 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 329 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 330 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 331 "data/maps/Route104/scripts.pory"
	end
# 332 "data/maps/Route104/scripts.pory"

# 333 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 334 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 335 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 336 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 337 "data/maps/Route104/scripts.pory"
	end
# 338 "data/maps/Route104/scripts.pory"

# 339 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 340 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 341 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 342 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 343 "data/maps/Route104/scripts.pory"
	end
# 344 "data/maps/Route104/scripts.pory"

# 345 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 346 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 347 "data/maps/Route104/scripts.pory"
	walk_down
# 348 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 349 "data/maps/Route104/scripts.pory"
	step_end
# 350 "data/maps/Route104/scripts.pory"

# 351 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 352 "data/maps/Route104/scripts.pory"
	walk_down
# 353 "data/maps/Route104/scripts.pory"
	step_end
# 354 "data/maps/Route104/scripts.pory"

# 355 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 356 "data/maps/Route104/scripts.pory"
	lock
# 357 "data/maps/Route104/scripts.pory"
	faceplayer
# 358 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 359 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 360 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 361 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 362 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 363 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 364 "data/maps/Route104/scripts.pory"
	release
# 365 "data/maps/Route104/scripts.pory"
	end
# 366 "data/maps/Route104/scripts.pory"

# 367 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 368 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 369 "data/maps/Route104/scripts.pory"
	release
# 370 "data/maps/Route104/scripts.pory"
	end
# 371 "data/maps/Route104/scripts.pory"

# 372 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 373 "data/maps/Route104/scripts.pory"
	lock
# 374 "data/maps/Route104/scripts.pory"
	faceplayer
# 375 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 376 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 377 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 378 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 379 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 380 "data/maps/Route104/scripts.pory"
	release
# 381 "data/maps/Route104/scripts.pory"
	end
# 382 "data/maps/Route104/scripts.pory"

# 383 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 384 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 385 "data/maps/Route104/scripts.pory"
	release
# 386 "data/maps/Route104/scripts.pory"
	end
# 387 "data/maps/Route104/scripts.pory"

# 388 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 389 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 390 "data/maps/Route104/scripts.pory"
	end
# 391 "data/maps/Route104/scripts.pory"

# 392 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 393 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 394 "data/maps/Route104/scripts.pory"
	end
# 395 "data/maps/Route104/scripts.pory"

# 396 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 397 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 398 "data/maps/Route104/scripts.pory"
	end
# 399 "data/maps/Route104/scripts.pory"

# 400 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 401 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 402 "data/maps/Route104/scripts.pory"
	end
# 403 "data/maps/Route104/scripts.pory"

# 404 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 405 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 406 "data/maps/Route104/scripts.pory"
	end
# 407 "data/maps/Route104/scripts.pory"

# 408 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 409 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 410 "data/maps/Route104/scripts.pory"
	end
# 411 "data/maps/Route104/scripts.pory"

# 412 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 413 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 414 "data/maps/Route104/scripts.pory"
	end
# 415 "data/maps/Route104/scripts.pory"

# 416 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 417 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 418 "data/maps/Route104/scripts.pory"
	end
# 419 "data/maps/Route104/scripts.pory"

# 420 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 421 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 422 "data/maps/Route104/scripts.pory"
	end
# 423 "data/maps/Route104/scripts.pory"

# 424 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 425 "data/maps/Route104/scripts.pory"
	lock
# 426 "data/maps/Route104/scripts.pory"
	faceplayer
# 427 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 428 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 429 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 430 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 431 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 432 "data/maps/Route104/scripts.pory"
	release
# 433 "data/maps/Route104/scripts.pory"
	end
# 434 "data/maps/Route104/scripts.pory"

# 435 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 436 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 437 "data/maps/Route104/scripts.pory"
	release
# 438 "data/maps/Route104/scripts.pory"
	end
# 439 "data/maps/Route104/scripts.pory"

# 440 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 441 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 442 "data/maps/Route104/scripts.pory"
	end
# 443 "data/maps/Route104/scripts.pory"

# 444 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 445 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 446 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 447 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_Movement_BrineyBoardBoat
# 448 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 449 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 450 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerBoardBoat
# 451 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 453 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 454 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 455 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 456 "data/maps/Route104/scripts.pory"
	end
# 457 "data/maps/Route104/scripts.pory"

# 458 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 459 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 460 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 461 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 462 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 463 "data/maps/Route104/scripts.pory"

# 464 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 465 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 466 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 467 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 468 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 469 "data/maps/Route104/scripts.pory"
	waitmessage
# 470 "data/maps/Route104/scripts.pory"
	delay 30
# 471 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 472 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 473 "data/maps/Route104/scripts.pory"
	waitfanfare
# 474 "data/maps/Route104/scripts.pory"
	closemessage
# 475 "data/maps/Route104/scripts.pory"
	delay 30
# 476 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 477 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 478 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 479 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 480 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 481 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 482 "data/maps/Route104/scripts.pory"

# 483 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 484 "data/maps/Route104/scripts.pory"
	delay 50
# 485 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerExitBoat
# 486 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 487 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 488 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 489 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 490 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 492 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 493 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 494 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 495 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_Movement_BrineyExitBoat
# 496 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 497 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 498 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 499 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 500 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 501 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 502 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 503 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 504 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 505 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 506 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 507 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 508 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 509 "data/maps/Route104/scripts.pory"
	end
# 510 "data/maps/Route104/scripts.pory"

# 511 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 512 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 513 "data/maps/Route104/scripts.pory"
	releaseall
# 514 "data/maps/Route104/scripts.pory"
	end
# 515 "data/maps/Route104/scripts.pory"

# 516 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 517 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 518 "data/maps/Route104/scripts.pory"
	releaseall
# 519 "data/maps/Route104/scripts.pory"
	end
# 520 "data/maps/Route104/scripts.pory"

# 521 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 522 "data/maps/Route104/scripts.pory"
	walk_down
# 523 "data/maps/Route104/scripts.pory"
	walk_down
# 524 "data/maps/Route104/scripts.pory"
	walk_down
# 525 "data/maps/Route104/scripts.pory"
	walk_down
# 526 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 527 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 528 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 529 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 543 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 544 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 545 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 546 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 547 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 554 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 555 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 556 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 557 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 558 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 559 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 595 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 596 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 597 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 598 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 599 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 600 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 601 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 602 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 603 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 604 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 605 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 606 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 607 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 608 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 609 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 610 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 611 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 612 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 613 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 614 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 615 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 616 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 617 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 618 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 619 "data/maps/Route104/scripts.pory"
	step_end
# 620 "data/maps/Route104/scripts.pory"

# 621 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 622 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 623 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 624 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 625 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 626 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 627 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 628 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 629 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 630 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 634 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 635 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 636 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 637 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 638 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 639 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 640 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 643 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 644 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 645 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 650 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 651 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 652 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 653 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 655 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 656 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 657 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 658 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 659 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 660 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 694 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 695 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 696 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 697 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 698 "data/maps/Route104/scripts.pory"
	walk_right
# 699 "data/maps/Route104/scripts.pory"
	walk_right
# 700 "data/maps/Route104/scripts.pory"
	walk_down
# 701 "data/maps/Route104/scripts.pory"
	walk_down
# 702 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 703 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 704 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 705 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 706 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 707 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 708 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 709 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 710 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 711 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 712 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 713 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 714 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 715 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 716 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 717 "data/maps/Route104/scripts.pory"
	walk_down
# 718 "data/maps/Route104/scripts.pory"
	walk_down
# 719 "data/maps/Route104/scripts.pory"
	step_end
# 720 "data/maps/Route104/scripts.pory"

# 721 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 722 "data/maps/Route104/scripts.pory"
	walk_down
# 723 "data/maps/Route104/scripts.pory"
	walk_down
# 724 "data/maps/Route104/scripts.pory"
	walk_down
# 725 "data/maps/Route104/scripts.pory"
	walk_down
# 726 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 727 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 728 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 729 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 743 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 744 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 745 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 746 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 747 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 748 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 749 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 750 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 751 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 754 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 755 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 756 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 757 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 758 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 759 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 792 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 793 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 794 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 795 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 796 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 797 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 798 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 799 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 800 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 801 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 802 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 803 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 804 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 805 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 806 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 807 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 808 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 809 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 810 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 811 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 812 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 813 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 814 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 815 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 816 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 817 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 818 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 819 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 820 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 821 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 822 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 823 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 824 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 825 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 826 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 827 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 828 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 829 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 830 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 831 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 832 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 833 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 834 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 835 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 836 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 837 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 838 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 839 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 840 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 841 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 842 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 843 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 844 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 845 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 846 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 847 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 848 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 849 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 850 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 851 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 852 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 853 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 854 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 855 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 856 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 857 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 858 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 859 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 860 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 861 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 862 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 863 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 864 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 865 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 866 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 867 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 868 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 869 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 870 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 871 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 872 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 873 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 874 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 875 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 876 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 877 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 878 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 879 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 880 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 881 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 882 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 883 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 884 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 885 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 886 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 887 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 888 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 889 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 890 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 891 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 892 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 893 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 894 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 895 "data/maps/Route104/scripts.pory"
	walk_right
# 896 "data/maps/Route104/scripts.pory"
	walk_right
# 897 "data/maps/Route104/scripts.pory"
	walk_down
# 898 "data/maps/Route104/scripts.pory"
	walk_down
# 899 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 900 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 901 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 902 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 903 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 904 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 905 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 906 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 907 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 908 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 909 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 910 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 911 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 912 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 913 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 914 "data/maps/Route104/scripts.pory"
	walk_down
# 915 "data/maps/Route104/scripts.pory"
	walk_down
# 916 "data/maps/Route104/scripts.pory"
	step_end
# 917 "data/maps/Route104/scripts.pory"

# 918 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 919 "data/maps/Route104/scripts.pory"
	walk_left
# 920 "data/maps/Route104/scripts.pory"
	walk_down
# 921 "data/maps/Route104/scripts.pory"
	walk_down
# 922 "data/maps/Route104/scripts.pory"
	step_end
# 923 "data/maps/Route104/scripts.pory"

# 924 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 925 "data/maps/Route104/scripts.pory"
	walk_down
# 926 "data/maps/Route104/scripts.pory"
	step_end
# 927 "data/maps/Route104/scripts.pory"

# 928 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 929 "data/maps/Route104/scripts.pory"
	walk_down
# 930 "data/maps/Route104/scripts.pory"
	walk_left
# 931 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 932 "data/maps/Route104/scripts.pory"
	step_end
# 933 "data/maps/Route104/scripts.pory"

# 934 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 935 "data/maps/Route104/scripts.pory"
	walk_down
# 936 "data/maps/Route104/scripts.pory"
	walk_down
# 937 "data/maps/Route104/scripts.pory"
	step_end
# 938 "data/maps/Route104/scripts.pory"

# 939 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 940 "data/maps/Route104/scripts.pory"
	walk_down
# 941 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 942 "data/maps/Route104/scripts.pory"
	step_end
# 943 "data/maps/Route104/scripts.pory"

# 944 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 945 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 946 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 947 "data/maps/Route104/scripts.pory"
	end
# 948 "data/maps/Route104/scripts.pory"

# 949 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 950 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 951 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 952 "data/maps/Route104/scripts.pory"
	end
# 953 "data/maps/Route104/scripts.pory"

# 954 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 955 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 956 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 957 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 958 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 959 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 960 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 961 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 962 "data/maps/Route104/scripts.pory"
	release
# 963 "data/maps/Route104/scripts.pory"
	end
# 964 "data/maps/Route104/scripts.pory"

# 965 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 966 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 967 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 968 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 969 "data/maps/Route104/scripts.pory"
	release
# 970 "data/maps/Route104/scripts.pory"
	end
# 971 "data/maps/Route104/scripts.pory"

# 972 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 973 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 974 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 975 "data/maps/Route104/scripts.pory"
	release
# 976 "data/maps/Route104/scripts.pory"
	end
# 977 "data/maps/Route104/scripts.pory"

# 978 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 979 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 980 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 981 "data/maps/Route104/scripts.pory"
	release
# 982 "data/maps/Route104/scripts.pory"
	end
# 983 "data/maps/Route104/scripts.pory"

# 984 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 985 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 986 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 987 "data/maps/Route104/scripts.pory"
	release
# 988 "data/maps/Route104/scripts.pory"
	end
# 989 "data/maps/Route104/scripts.pory"

# 990 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 991 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 992 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 993 "data/maps/Route104/scripts.pory"
	end
# 994 "data/maps/Route104/scripts.pory"

# 995 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 996 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 997 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 998 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 999 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 1000 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1001 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 1002 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1003 "data/maps/Route104/scripts.pory"
	release
# 1004 "data/maps/Route104/scripts.pory"
	end
# 1005 "data/maps/Route104/scripts.pory"

# 1006 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 1007 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1008 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1009 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 1010 "data/maps/Route104/scripts.pory"
	release
# 1011 "data/maps/Route104/scripts.pory"
	end
# 1012 "data/maps/Route104/scripts.pory"

# 1013 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 1014 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 1015 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1016 "data/maps/Route104/scripts.pory"
	release
# 1017 "data/maps/Route104/scripts.pory"
	end
# 1018 "data/maps/Route104/scripts.pory"

# 1019 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 1020 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 1021 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 1022 "data/maps/Route104/scripts.pory"
	release
# 1023 "data/maps/Route104/scripts.pory"
	end
# 1024 "data/maps/Route104/scripts.pory"

# 1025 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 1026 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 1027 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 1028 "data/maps/Route104/scripts.pory"
	release
# 1029 "data/maps/Route104/scripts.pory"
	end
# 1030 "data/maps/Route104/scripts.pory"

# 1031 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 1032 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 1033 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 1034 "data/maps/Route104/scripts.pory"
	end
# 1035 "data/maps/Route104/scripts.pory"

# 1036 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 1037 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 1038 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 1039 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 1040 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 1041 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 1042 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 1043 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1044 "data/maps/Route104/scripts.pory"
	release
# 1045 "data/maps/Route104/scripts.pory"
	end
# 1046 "data/maps/Route104/scripts.pory"

# 1047 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 1048 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 1049 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 1050 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 1051 "data/maps/Route104/scripts.pory"
	release
# 1052 "data/maps/Route104/scripts.pory"
	end
# 1053 "data/maps/Route104/scripts.pory"

# 1054 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 1055 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 1056 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1057 "data/maps/Route104/scripts.pory"
	release
# 1058 "data/maps/Route104/scripts.pory"
	end
# 1059 "data/maps/Route104/scripts.pory"

# 1060 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 1061 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 1062 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 1063 "data/maps/Route104/scripts.pory"
	release
# 1064 "data/maps/Route104/scripts.pory"
	end
# 1065 "data/maps/Route104/scripts.pory"

# 1066 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 1067 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 1068 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 1069 "data/maps/Route104/scripts.pory"
	release
# 1070 "data/maps/Route104/scripts.pory"
	end
# 1071 "data/maps/Route104/scripts.pory"

# 1072 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 1073 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 1074 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1075 "data/maps/Route104/scripts.pory"
	end
# 1076 "data/maps/Route104/scripts.pory"

# 1077 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 1078 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1079 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1080 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1081 "data/maps/Route104/scripts.pory"
	release
# 1082 "data/maps/Route104/scripts.pory"
	end
# 1083 "data/maps/Route104/scripts.pory"

# 1084 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 1085 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1086 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1087 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1088 "data/maps/Route104/scripts.pory"
	release
# 1089 "data/maps/Route104/scripts.pory"
	end
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 1092 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1093 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1094 "data/maps/Route104/scripts.pory"
	end
# 1095 "data/maps/Route104/scripts.pory"

# 1096 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1097 "data/maps/Route104/scripts.pory"
	.string "In dieser Hütte am Meer lebt Mr. Brack.\p"
# 1098 "data/maps/Route104/scripts.pory"
	.string "Er war einst ein stolzer Seemann, der\n"
# 1099 "data/maps/Route104/scripts.pory"
	.string "niemals Angst vor dem Meer hatte.$"
# 1100 "data/maps/Route104/scripts.pory"

# 1101 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1102 "data/maps/Route104/scripts.pory"
	.string "Das Meer, was?\p"
# 1103 "data/maps/Route104/scripts.pory"
	.string "Ich möchte zu gerne wissen, wie es auf\n"
# 1104 "data/maps/Route104/scripts.pory"
	.string "dem Meeresgrund aussieht…$"
# 1105 "data/maps/Route104/scripts.pory"

# 1106 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1107 "data/maps/Route104/scripts.pory"
	.string "Bevor du einen Pokéball wirfst,\n"
# 1108 "data/maps/Route104/scripts.pory"
	.string "schwäche das Pokémon erst.\p"
# 1109 "data/maps/Route104/scripts.pory"
	.string "Wenn es vergiftet ist, eine Verbrennung\n"
# 1110 "data/maps/Route104/scripts.pory"
	.string "hat oder schläft, kann es leichter\l"
# 1111 "data/maps/Route104/scripts.pory"
	.string "gefangen werden.$"
# 1112 "data/maps/Route104/scripts.pory"

# 1113 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1114 "data/maps/Route104/scripts.pory"
	.string "Du bist ein gemeiner Dieb, wenn du ver-\n"
# 1115 "data/maps/Route104/scripts.pory"
	.string "suchst, das Pokémon eines anderen zu\l"
# 1116 "data/maps/Route104/scripts.pory"
	.string "stehlen.\p"
# 1117 "data/maps/Route104/scripts.pory"
	.string "Du solltest deine Pokébälle nur auf\n"
# 1118 "data/maps/Route104/scripts.pory"
	.string "wilde Pokémon werfen.$"
# 1119 "data/maps/Route104/scripts.pory"

# 1120 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1121 "data/maps/Route104/scripts.pory"
	.string "Oh, nein, ich bin kein Trainer.\p"
# 1122 "data/maps/Route104/scripts.pory"
	.string "Aber es stimmt schon, wenn Trainer sich\n"
# 1123 "data/maps/Route104/scripts.pory"
	.string "in die Augen schauen, ist das eine\l"
# 1124 "data/maps/Route104/scripts.pory"
	.string "Herausforderung zum Kampf.\p"
# 1125 "data/maps/Route104/scripts.pory"
	.string "Willst du nicht kämpfen, weiche ihren\n"
# 1126 "data/maps/Route104/scripts.pory"
	.string "Blicken aus.$"
# 1127 "data/maps/Route104/scripts.pory"

# 1128 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1129 "data/maps/Route104/scripts.pory"
	.string "Ich liebe es, meinen Mund voller\n"
# 1130 "data/maps/Route104/scripts.pory"
	.string "Saatkörner zu nehmen und sie dann in\l"
# 1131 "data/maps/Route104/scripts.pory"
	.string "hohem Bogen auszuspucken.\p"
# 1132 "data/maps/Route104/scripts.pory"
	.string "Du kannst dies hier haben, versuch es\n"
# 1133 "data/maps/Route104/scripts.pory"
	.string "einfach mal!\p"
# 1134 "data/maps/Route104/scripts.pory"
	.string "Wende es an einem Pokémon an und es\n"
# 1135 "data/maps/Route104/scripts.pory"
	.string "wird lernen, in schneller Folge\l"
# 1136 "data/maps/Route104/scripts.pory"
	.string "Saatkörner auszuspucken.$"
# 1137 "data/maps/Route104/scripts.pory"

# 1138 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1139 "data/maps/Route104/scripts.pory"
	.string "Ein Hinweis noch!\p"
# 1140 "data/maps/Route104/scripts.pory"
	.string "Eine TM, eine Technische Maschine,\n"
# 1141 "data/maps/Route104/scripts.pory"
	.string "kann nur einmal beigebracht werden.\p"
# 1142 "data/maps/Route104/scripts.pory"
	.string "Das war einmal. Dank Whyli\n"
# 1143 "data/maps/Route104/scripts.pory"
	.string "sind TMs hier unbegrenzt nutzbar.$"
# 1144 "data/maps/Route104/scripts.pory"

# 1145 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1146 "data/maps/Route104/scripts.pory"
	.string "Der Blumenladen verkauft seit kurzem\n"
# 1147 "data/maps/Route104/scripts.pory"
	.string "junge Bäume.\p"
# 1148 "data/maps/Route104/scripts.pory"
	.string "Das macht mich so glücklich, dass ich\n"
# 1149 "data/maps/Route104/scripts.pory"
	.string "ganz viele gekauft habe. Dieses\l"
# 1150 "data/maps/Route104/scripts.pory"
	.string "Schlohkraut brauche ich nicht, das\l"
# 1151 "data/maps/Route104/scripts.pory"
	.string "schenke ich dir.$"
# 1152 "data/maps/Route104/scripts.pory"

# 1153 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1154 "data/maps/Route104/scripts.pory"
	.string "Der Blumenladen verkauft seit kurzem\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "junge Bäume.\p"
# 1156 "data/maps/Route104/scripts.pory"
	.string "Das macht mich so glücklich, dass ich\n"
# 1157 "data/maps/Route104/scripts.pory"
	.string "ganz viele gekauft habe. Wohin damit?$"
# 1158 "data/maps/Route104/scripts.pory"

# 1159 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1160 "data/maps/Route104/scripts.pory"
	.string "Mr. Bracks Hütte$"
# 1161 "data/maps/Route104/scripts.pory"

# 1162 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1163 "data/maps/Route104/scripts.pory"
	.string "Route 104\n"
# 1164 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} Blütenburg City$"
# 1165 "data/maps/Route104/scripts.pory"

# 1166 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1167 "data/maps/Route104/scripts.pory"
	.string "Route 104\n"
# 1168 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} Metarost City$"
# 1169 "data/maps/Route104/scripts.pory"

# 1170 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1171 "data/maps/Route104/scripts.pory"
	.string "Blütentraum Blumenladen$"
# 1172 "data/maps/Route104/scripts.pory"

# 1173 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1174 "data/maps/Route104/scripts.pory"
	.string "Tipps für Trainer\p"
# 1175 "data/maps/Route104/scripts.pory"
	.string "Hast du ein Pokémon gefangen,\n"
# 1176 "data/maps/Route104/scripts.pory"
	.string "wird dir die Effektivität\l"
# 1177 "data/maps/Route104/scripts.pory"
	.string "deiner Attacken angezeigt.\p"
# 1178 "data/maps/Route104/scripts.pory"
	.string "{CIRCLE_DOT} = sehr effektiv,\n"
# 1179 "data/maps/Route104/scripts.pory"
	.string "{TRIANGLE} = nicht sehr effektiv,\l"
# 1180 "data/maps/Route104/scripts.pory"
	.string "{BIG_MULT_X} = keine Wirkung,\l"
# 1181 "data/maps/Route104/scripts.pory"
	.string "{CIRCLE_HOLLOW} = normale Effektivität.$"
# 1182 "data/maps/Route104/scripts.pory"

# 1183 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1184 "data/maps/Route104/scripts.pory"
	.string "Maike: Oh, hi, {PLAYER}{KUN}!\p"
# 1185 "data/maps/Route104/scripts.pory"
	.string "Devon hat deinen Pokénav mit einem\n"
# 1186 "data/maps/Route104/scripts.pory"
	.string "Trainer/Ruf-System ausgestattet?\p"
# 1187 "data/maps/Route104/scripts.pory"
	.string "Wir sollten uns gegenseitig eintragen,\n"
# 1188 "data/maps/Route104/scripts.pory"
	.string "dann können wir jederzeit miteinander\l"
# 1189 "data/maps/Route104/scripts.pory"
	.string "reden.$"
# 1190 "data/maps/Route104/scripts.pory"

# 1191 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1192 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} trägt Maike in das Pokénav-\n"
# 1193 "data/maps/Route104/scripts.pory"
	.string "Verzeichnis ein.$"
# 1194 "data/maps/Route104/scripts.pory"

# 1195 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1196 "data/maps/Route104/scripts.pory"
	.string "Maike: Und, {PLAYER}{KUN}?\n"
# 1197 "data/maps/Route104/scripts.pory"
	.string "Wie geht es mit deinem Pokédex voran?$"
# 1198 "data/maps/Route104/scripts.pory"

# 1199 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1200 "data/maps/Route104/scripts.pory"
	.string "Meiner sieht schon ganz anständig aus.\n"
# 1201 "data/maps/Route104/scripts.pory"
	.string "Daher…\l"
# 1202 "data/maps/Route104/scripts.pory"
	.string "Wie wäre es mit einem kleinen Kampf?$"
# 1203 "data/maps/Route104/scripts.pory"

# 1204 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1205 "data/maps/Route104/scripts.pory"
	.string "Maike: Oh, was ist das?\p"
# 1206 "data/maps/Route104/scripts.pory"
	.string "Du hast dich aber nicht um deine\n"
# 1207 "data/maps/Route104/scripts.pory"
	.string "Pokémon gekümmert? Und auch\l"
# 1208 "data/maps/Route104/scripts.pory"
	.string "nicht viele gefangen?\p"
# 1209 "data/maps/Route104/scripts.pory"
	.string "Als Trainer machst du wirklich keinen\n"
# 1210 "data/maps/Route104/scripts.pory"
	.string "guten Eindruck!$"
# 1211 "data/maps/Route104/scripts.pory"

# 1212 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1213 "data/maps/Route104/scripts.pory"
	.string "Maike: Was hältst du von einem Kampf?$"
# 1214 "data/maps/Route104/scripts.pory"

# 1215 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1216 "data/maps/Route104/scripts.pory"
	.string "Maike: Du bist gerade erst Trainer\n"
# 1217 "data/maps/Route104/scripts.pory"
	.string "geworden, {PLAYER}{KUN}. Ich werde nicht\l"
# 1218 "data/maps/Route104/scripts.pory"
	.string "verlieren.$"
# 1219 "data/maps/Route104/scripts.pory"

# 1220 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1221 "data/maps/Route104/scripts.pory"
	.string "AchDuSchande!\n"
# 1222 "data/maps/Route104/scripts.pory"
	.string "Du bist besser als ich gedacht habe.$"
# 1223 "data/maps/Route104/scripts.pory"

# 1224 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1225 "data/maps/Route104/scripts.pory"
	.string "Maike: Du bist wirklich sehr gut im\n"
# 1226 "data/maps/Route104/scripts.pory"
	.string "Umgang mit Pokémon.\p"
# 1227 "data/maps/Route104/scripts.pory"
	.string "Aber anstatt sie nur kämpfen zu lassen,\n"
# 1228 "data/maps/Route104/scripts.pory"
	.string "solltest du dir ein Beispiel an Mr. Brack\l"
# 1229 "data/maps/Route104/scripts.pory"
	.string "nehmen.\p"
# 1230 "data/maps/Route104/scripts.pory"
	.string "Es ist wichtig, dass man sich mit den\n"
# 1231 "data/maps/Route104/scripts.pory"
	.string "Pokémon anfreundet.$"
# 1232 "data/maps/Route104/scripts.pory"

# 1233 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1234 "data/maps/Route104/scripts.pory"
	.string "Brix: Hey, {PLAYER}!\p"
# 1235 "data/maps/Route104/scripts.pory"
	.string "Cool! Devon hat deinen Pokénav mit\n"
# 1236 "data/maps/Route104/scripts.pory"
	.string "einem Trainer/Ruf-System\l"
# 1237 "data/maps/Route104/scripts.pory"
	.string "ausgestattet?\p"
# 1238 "data/maps/Route104/scripts.pory"
	.string "Wir sollten uns gegenseitig eintragen,\n"
# 1239 "data/maps/Route104/scripts.pory"
	.string "dann können wir jederzeit miteinander\l"
# 1240 "data/maps/Route104/scripts.pory"
	.string "reden.$"
# 1241 "data/maps/Route104/scripts.pory"

# 1242 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1243 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} trägt Brix in das Pokénav-\n"
# 1244 "data/maps/Route104/scripts.pory"
	.string "Verzeichnis ein.$"
# 1245 "data/maps/Route104/scripts.pory"

# 1246 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1247 "data/maps/Route104/scripts.pory"
	.string "Brix: {PLAYER}, wie sieht es mit\n"
# 1248 "data/maps/Route104/scripts.pory"
	.string "deinem Pokédex aus?$"
# 1249 "data/maps/Route104/scripts.pory"

# 1250 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1251 "data/maps/Route104/scripts.pory"
	.string "Mir? Mir geht es gut! Alles bestens!\p"
# 1252 "data/maps/Route104/scripts.pory"
	.string "Willst du mal sehen, wie gut ich im Kampf\n"
# 1253 "data/maps/Route104/scripts.pory"
	.string "bin?$"
# 1254 "data/maps/Route104/scripts.pory"

# 1255 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1256 "data/maps/Route104/scripts.pory"
	.string "Brix: Oh, hast du ein Problem? Nicht\n"
# 1257 "data/maps/Route104/scripts.pory"
	.string "genügend Selbstbewusstsein und\l"
# 1258 "data/maps/Route104/scripts.pory"
	.string "Vertrauen in deine Pokémon, was?$"
# 1259 "data/maps/Route104/scripts.pory"

# 1260 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1261 "data/maps/Route104/scripts.pory"
	.string "Brix: Wie geht’s? Lust auf einen Kampf?$"
# 1262 "data/maps/Route104/scripts.pory"

# 1263 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1264 "data/maps/Route104/scripts.pory"
	.string "Brix: Ich weiß, du bist gerade erst ein\n"
# 1265 "data/maps/Route104/scripts.pory"
	.string "Trainer geworden, aber ich werde mich\l"
# 1266 "data/maps/Route104/scripts.pory"
	.string "nicht zurückhalten.$"
# 1267 "data/maps/Route104/scripts.pory"

# 1268 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1269 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1270 "data/maps/Route104/scripts.pory"
	.string "Du bist ziemlich gut.$"
# 1271 "data/maps/Route104/scripts.pory"

# 1272 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1273 "data/maps/Route104/scripts.pory"
	.string "Brix: Du bist sehr gut im Umgang mit\n"
# 1274 "data/maps/Route104/scripts.pory"
	.string "Pokémon geworden.\p"
# 1275 "data/maps/Route104/scripts.pory"
	.string "Aber du solltest deine Pokémon nicht\n"
# 1276 "data/maps/Route104/scripts.pory"
	.string "nur kämpfen lassen.\p"
# 1277 "data/maps/Route104/scripts.pory"
	.string "Mach es wie Mr. Brack. Es ist wichtig,\n"
# 1278 "data/maps/Route104/scripts.pory"
	.string "dass man sich mit ihnen anfreundet.$"

Route104_EventScript_PkmnSign_Text_0:
# 2 "data/maps/Route104/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die auf dieser Route leben.$"

Route104_EventScript_PkmnSign_Text_1:
# 4 "data/maps/Route104/scripts.pory"
	.string "Hohes Gras$"

Route104_EventScript_PkmnSign_Text_2:
# 4 "data/maps/Route104/scripts.pory"
	.string "Wasser$"

Route104_EventScript_PkmnSign_Text_3:
# 4 "data/maps/Route104/scripts.pory"
	.string "Angel$"

Route104_Text_PkmnSignGras::
# 67 "data/maps/Route104/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im hohen Gras:$"

Route104_Text_PkmnSignWasser::
# 71 "data/maps/Route104/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route104_Text_PkmnSignAngel::
# 75 "data/maps/Route104/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route104_Text_PkmnSignAngel2::
# 79 "data/maps/Route104/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route104_Text_PkmnSignAngel3::
# 83 "data/maps/Route104/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
