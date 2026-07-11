# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 3 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 4 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 5 "data/maps/Route128/scripts.pory"
	.byte 0
# 6 "data/maps/Route128/scripts.pory"

# 7 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 8 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 9 "data/maps/Route128/scripts.pory"
	end
# 10 "data/maps/Route128/scripts.pory"

# 11 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 12 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 13 "data/maps/Route128/scripts.pory"
	.2byte 0
# 14 "data/maps/Route128/scripts.pory"

# 15 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 16 "data/maps/Route128/scripts.pory"
	lockall
# 17 "data/maps/Route128/scripts.pory"
	delay 20
# 18 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieLookAround
# 19 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 21 "data/maps/Route128/scripts.pory"
	closemessage
# 22 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieBackUp
# 23 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 25 "data/maps/Route128/scripts.pory"
	closemessage
# 26 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachArchie
# 27 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 31 "data/maps/Route128/scripts.pory"
	closemessage
# 32 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachPlayer
# 33 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 37 "data/maps/Route128/scripts.pory"
	closemessage
# 38 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieRunLeft
# 39 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 40 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieWalkLeft
# 41 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 43 "data/maps/Route128/scripts.pory"
	closemessage
# 44 "data/maps/Route128/scripts.pory"
	delay 40
# 45 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieExit
# 46 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieExit
# 47 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_MAXIE
# 49 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_ARCHIE
# 50 "data/maps/Route128/scripts.pory"
	delay 100
# 51 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 52 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 53 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 54 "data/maps/Route128/scripts.pory"
	addobject LOCALID_ROUTE128_STEVEN
# 55 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenApproachPlayer
# 56 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 58 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 60 "data/maps/Route128/scripts.pory"
	closemessage
# 61 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenWalkUp
# 62 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 65 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 66 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 68 "data/maps/Route128/scripts.pory"
	closemessage
# 69 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route128/scripts.pory"
	delay 50
# 72 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 73 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 74 "data/maps/Route128/scripts.pory"
	delay 15
# 75 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_STEVEN
# 76 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 77 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 79 "data/maps/Route128/scripts.pory"
	releaseall
# 80 "data/maps/Route128/scripts.pory"
	end
# 81 "data/maps/Route128/scripts.pory"

# 82 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 83 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 84 "data/maps/Route128/scripts.pory"
	step_end
# 85 "data/maps/Route128/scripts.pory"

# 86 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 87 "data/maps/Route128/scripts.pory"
	walk_left
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 89 "data/maps/Route128/scripts.pory"
	walk_left
# 90 "data/maps/Route128/scripts.pory"
	walk_left
# 91 "data/maps/Route128/scripts.pory"
	walk_left
# 92 "data/maps/Route128/scripts.pory"
	walk_left
# 93 "data/maps/Route128/scripts.pory"
	walk_up
# 94 "data/maps/Route128/scripts.pory"
	walk_up
# 95 "data/maps/Route128/scripts.pory"
	walk_up
# 96 "data/maps/Route128/scripts.pory"
	walk_up
# 97 "data/maps/Route128/scripts.pory"
	walk_up
# 98 "data/maps/Route128/scripts.pory"
	walk_up
# 99 "data/maps/Route128/scripts.pory"
	step_end
# 100 "data/maps/Route128/scripts.pory"

# 101 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 102 "data/maps/Route128/scripts.pory"
	walk_up
# 103 "data/maps/Route128/scripts.pory"
	step_end
# 104 "data/maps/Route128/scripts.pory"

# 105 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 106 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route128/scripts.pory"
	step_end
# 108 "data/maps/Route128/scripts.pory"

# 109 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 110 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 112 "data/maps/Route128/scripts.pory"
	delay_16
# 113 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 114 "data/maps/Route128/scripts.pory"
	delay_16
# 115 "data/maps/Route128/scripts.pory"
	delay_16
# 116 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 117 "data/maps/Route128/scripts.pory"
	step_end
# 118 "data/maps/Route128/scripts.pory"

# 119 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 120 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 121 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 122 "data/maps/Route128/scripts.pory"
	delay_16
# 123 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 124 "data/maps/Route128/scripts.pory"
	step_end
# 125 "data/maps/Route128/scripts.pory"

# 126 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 127 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 128 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 129 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 130 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/Route128/scripts.pory"
	step_end
# 132 "data/maps/Route128/scripts.pory"

# 133 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 134 "data/maps/Route128/scripts.pory"
	delay_16
# 135 "data/maps/Route128/scripts.pory"
	delay_16
# 136 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 138 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 143 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 144 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 146 "data/maps/Route128/scripts.pory"
	step_end
# 147 "data/maps/Route128/scripts.pory"

# 148 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 149 "data/maps/Route128/scripts.pory"
	walk_left
# 150 "data/maps/Route128/scripts.pory"
	walk_left
# 151 "data/maps/Route128/scripts.pory"
	delay_8
# 152 "data/maps/Route128/scripts.pory"
	delay_4
# 153 "data/maps/Route128/scripts.pory"
	step_end
# 154 "data/maps/Route128/scripts.pory"

# 155 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 156 "data/maps/Route128/scripts.pory"
	walk_left
# 157 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/Route128/scripts.pory"
	step_end
# 159 "data/maps/Route128/scripts.pory"

# 160 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 161 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 162 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 163 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 169 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route128/scripts.pory"
	step_end
# 172 "data/maps/Route128/scripts.pory"

# 173 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 174 "data/maps/Route128/scripts.pory"
	walk_right
# 175 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 176 "data/maps/Route128/scripts.pory"
	step_end
# 177 "data/maps/Route128/scripts.pory"

# 178 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 179 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 180 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 181 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 182 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 183 "data/maps/Route128/scripts.pory"
	release
# 184 "data/maps/Route128/scripts.pory"
	end
# 185 "data/maps/Route128/scripts.pory"

# 186 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 187 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 188 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 190 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 191 "data/maps/Route128/scripts.pory"
	release
# 192 "data/maps/Route128/scripts.pory"
	end
# 193 "data/maps/Route128/scripts.pory"

# 194 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 195 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 196 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route128/scripts.pory"
	end
# 198 "data/maps/Route128/scripts.pory"

# 199 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 200 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 201 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 202 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 203 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 204 "data/maps/Route128/scripts.pory"
	release
# 205 "data/maps/Route128/scripts.pory"
	end
# 206 "data/maps/Route128/scripts.pory"

# 207 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 208 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 209 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 211 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 212 "data/maps/Route128/scripts.pory"
	release
# 213 "data/maps/Route128/scripts.pory"
	end
# 214 "data/maps/Route128/scripts.pory"

# 215 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 216 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 217 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route128/scripts.pory"
	end
# 219 "data/maps/Route128/scripts.pory"

# 220 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 221 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 222 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route128/scripts.pory"
	end
# 224 "data/maps/Route128/scripts.pory"

# 225 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 226 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 227 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route128/scripts.pory"
	end
# 229 "data/maps/Route128/scripts.pory"

# 230 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 231 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 232 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route128/scripts.pory"
	end
# 234 "data/maps/Route128/scripts.pory"

# 235 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 236 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 237 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route128/scripts.pory"
	end
# 239 "data/maps/Route128/scripts.pory"

# 240 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 241 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 242 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route128/scripts.pory"
	end
# 244 "data/maps/Route128/scripts.pory"

# 245 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 246 "data/maps/Route128/scripts.pory"
	.string "Adrian: Was ist passiert… Was für\n"
# 247 "data/maps/Route128/scripts.pory"
	.string "ein Furcht erregendes Szenario…\p"
# 248 "data/maps/Route128/scripts.pory"
	.string "Habe ich… einen schrecklichen Fehler\n"
# 249 "data/maps/Route128/scripts.pory"
	.string "begangen?$"
# 250 "data/maps/Route128/scripts.pory"

# 251 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 252 "data/maps/Route128/scripts.pory"
	.string "Ich…\n"
# 253 "data/maps/Route128/scripts.pory"
	.string "Ich wollte doch nur…$"
# 254 "data/maps/Route128/scripts.pory"

# 255 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 256 "data/maps/Route128/scripts.pory"
	.string "Marc: Begreifst du es nun,\n"
# 257 "data/maps/Route128/scripts.pory"
	.string "Adrian?\p"
# 258 "data/maps/Route128/scripts.pory"
	.string "Begreifst du nun die schrecklichen\n"
# 259 "data/maps/Route128/scripts.pory"
	.string "Folgen deines katastrophalen Traums?\p"
# 260 "data/maps/Route128/scripts.pory"
	.string "Wir müssen uns beeilen! Wir müssen\n"
# 261 "data/maps/Route128/scripts.pory"
	.string "etwas unternehmen, bevor die Situation\l"
# 262 "data/maps/Route128/scripts.pory"
	.string "völlig außer Kontrolle gerät!$"
# 263 "data/maps/Route128/scripts.pory"

# 264 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 265 "data/maps/Route128/scripts.pory"
	.string "Marc: {PLAYER}, sag jetzt nichts.\p"
# 266 "data/maps/Route128/scripts.pory"
	.string "Ich weiß, ich bin nicht der Richtige, um\n"
# 267 "data/maps/Route128/scripts.pory"
	.string "Adrian zu kritisieren…\p"
# 268 "data/maps/Route128/scripts.pory"
	.string "Aber wie die Dinge jetzt liegen, werden\n"
# 269 "data/maps/Route128/scripts.pory"
	.string "wir Menschen wohl nicht in der Lage\l"
# 270 "data/maps/Route128/scripts.pory"
	.string "sein, etwas zu tun.\p"
# 271 "data/maps/Route128/scripts.pory"
	.string "Aber wir dürfen auch nicht einfach\n"
# 272 "data/maps/Route128/scripts.pory"
	.string "daneben stehen und zuschauen.\p"
# 273 "data/maps/Route128/scripts.pory"
	.string "Adrian und ich haben die\n"
# 274 "data/maps/Route128/scripts.pory"
	.string "Verantwortung, dies alles zu\l"
# 275 "data/maps/Route128/scripts.pory"
	.string "verändern…$"
# 276 "data/maps/Route128/scripts.pory"

# 277 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 278 "data/maps/Route128/scripts.pory"
	.string "Marc: Das ist ja unglaublich…\p"
# 279 "data/maps/Route128/scripts.pory"
	.string "Ein super-antikes Pokémon…\p"
# 280 "data/maps/Route128/scripts.pory"
	.string "Seine Kraft ist unglaublich. Es hat\n"
# 281 "data/maps/Route128/scripts.pory"
	.string "das Gleichgewicht der Natur verändert.$"
# 282 "data/maps/Route128/scripts.pory"

# 283 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 284 "data/maps/Route128/scripts.pory"
	.string "Troy: {PLAYER}{KUN}!\n"
# 285 "data/maps/Route128/scripts.pory"
	.string "Was geht hier vor?$"
# 286 "data/maps/Route128/scripts.pory"

# 287 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 288 "data/maps/Route128/scripts.pory"
	.string "Das ist schrecklich…\p"
# 289 "data/maps/Route128/scripts.pory"
	.string "Nach der sengenden Hitze kam die\n"
# 290 "data/maps/Route128/scripts.pory"
	.string "Überschwemmung.\p"
# 291 "data/maps/Route128/scripts.pory"
	.string "Wenn das nicht aufhört, wird ganz\n"
# 292 "data/maps/Route128/scripts.pory"
	.string "Hoenn… Nein, die ganze Welt wird\l"
# 293 "data/maps/Route128/scripts.pory"
	.string "untergehen.\p"
# 294 "data/maps/Route128/scripts.pory"
	.string "Von Xeneroville aus breitet sich eine\n"
# 295 "data/maps/Route128/scripts.pory"
	.string "gigantische Regenwolke aus…\p"
# 296 "data/maps/Route128/scripts.pory"
	.string "Was in aller Welt passiert da nur?\p"
# 297 "data/maps/Route128/scripts.pory"
	.string "Aber wir sollten hier nicht die Zeit mit\n"
# 298 "data/maps/Route128/scripts.pory"
	.string "Reden vertun…\p"
# 299 "data/maps/Route128/scripts.pory"
	.string "In Xeneroville bekommen wir\n"
# 300 "data/maps/Route128/scripts.pory"
	.string "hoffentlich Antworten…$"
# 301 "data/maps/Route128/scripts.pory"

# 302 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis:
# 303 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 304 "data/maps/Route128/scripts.pory"
	.string "Ich weiß nicht, was du vorhast, aber tue\l"
# 305 "data/maps/Route128/scripts.pory"
	.string "nichts Unüberlegtes.\p"
# 306 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 307 "data/maps/Route128/scripts.pory"
	.string "Ich gehe nach Xeneroville.$"
