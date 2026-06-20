Route116_EventScript_PkmnSign::
# 2 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_PkmnSignGras, MSGBOX_SIGN
# 3 "data/maps/Route116/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 4 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 5 "data/maps/Route116/scripts.pory"
	delay 60
# 6 "data/maps/Route116/scripts.pory"
	hidemonpic
# 7 "data/maps/Route116/scripts.pory"
	showmonpic SPECIES_WHISMUR, 10, 3
# 8 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_WHISMUR, 0
# 9 "data/maps/Route116/scripts.pory"
	delay 60
# 10 "data/maps/Route116/scripts.pory"
	hidemonpic
# 11 "data/maps/Route116/scripts.pory"
	showmonpic SPECIES_NINCADA, 10, 3
# 12 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_NINCADA, 0
# 13 "data/maps/Route116/scripts.pory"
	delay 60
# 14 "data/maps/Route116/scripts.pory"
	hidemonpic
# 15 "data/maps/Route116/scripts.pory"
	showmonpic SPECIES_TAILLOW, 10, 3
# 16 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_TAILLOW, 0
# 17 "data/maps/Route116/scripts.pory"
	delay 60
# 18 "data/maps/Route116/scripts.pory"
	hidemonpic
# 19 "data/maps/Route116/scripts.pory"
	showmonpic SPECIES_ABRA, 10, 3
# 20 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_ABRA, 0
# 21 "data/maps/Route116/scripts.pory"
	delay 60
# 22 "data/maps/Route116/scripts.pory"
	hidemonpic
# 23 "data/maps/Route116/scripts.pory"
	showmonpic SPECIES_SKITTY, 10, 3
# 24 "data/maps/Route116/scripts.pory"
	playmoncry SPECIES_SKITTY, 0
# 25 "data/maps/Route116/scripts.pory"
	delay 60
# 26 "data/maps/Route116/scripts.pory"
	hidemonpic
# 27 "data/maps/Route116/scripts.pory"
	release
	end


# 36 "data/maps/Route116/scripts.pory"

# 37 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 38 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 39 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 40 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 41 "data/maps/Route116/scripts.pory"
	.byte 0
# 42 "data/maps/Route116/scripts.pory"

# 43 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 44 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 45 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 46 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 47 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 48 "data/maps/Route116/scripts.pory"
	end
# 49 "data/maps/Route116/scripts.pory"

# 50 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 51 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_ROUTE116_WANDAS_BF, 38, 10
# 52 "data/maps/Route116/scripts.pory"
	return
# 53 "data/maps/Route116/scripts.pory"

# 54 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 55 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 56 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 57 "data/maps/Route116/scripts.pory"
	end
# 58 "data/maps/Route116/scripts.pory"

# 59 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 60 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 61 "data/maps/Route116/scripts.pory"
	.2byte 0
# 62 "data/maps/Route116/scripts.pory"

# 63 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 64 "data/maps/Route116/scripts.pory"
	lock
# 65 "data/maps/Route116/scripts.pory"
	faceplayer
# 66 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 67 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 68 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 69 "data/maps/Route116/scripts.pory"
	release
# 70 "data/maps/Route116/scripts.pory"
	end
# 71 "data/maps/Route116/scripts.pory"

# 72 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 73 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 74 "data/maps/Route116/scripts.pory"
	release
# 75 "data/maps/Route116/scripts.pory"
	end
# 76 "data/maps/Route116/scripts.pory"

# 77 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 78 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 79 "data/maps/Route116/scripts.pory"
	release
# 80 "data/maps/Route116/scripts.pory"
	end
# 81 "data/maps/Route116/scripts.pory"

# 82 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 83 "data/maps/Route116/scripts.pory"
	lock
# 84 "data/maps/Route116/scripts.pory"
	faceplayer
# 85 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 86 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 87 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 88 "data/maps/Route116/scripts.pory"
	end
# 89 "data/maps/Route116/scripts.pory"

# 90 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall::
# 91 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 92 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 93 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForRepeatBall
# 94 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 95 "data/maps/Route116/scripts.pory"
	closemessage
# 96 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 97 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 98 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 99 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 100 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 101 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 102 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 103 "data/maps/Route116/scripts.pory"
	release
# 104 "data/maps/Route116/scripts.pory"
	end
# 105 "data/maps/Route116/scripts.pory"

# 106 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 107 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 108 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route116/scripts.pory"
	return
# 110 "data/maps/Route116/scripts.pory"

# 111 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 112 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 113 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route116/scripts.pory"
	return
# 115 "data/maps/Route116/scripts.pory"

# 116 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain::
# 117 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 118 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 119 "data/maps/Route116/scripts.pory"
	end
# 120 "data/maps/Route116/scripts.pory"

# 121 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall::
# 122 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 123 "data/maps/Route116/scripts.pory"
	release
# 124 "data/maps/Route116/scripts.pory"
	end
# 125 "data/maps/Route116/scripts.pory"

# 126 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 127 "data/maps/Route116/scripts.pory"
	walk_left
# 128 "data/maps/Route116/scripts.pory"
	walk_left
# 129 "data/maps/Route116/scripts.pory"
	walk_left
# 130 "data/maps/Route116/scripts.pory"
	walk_left
# 131 "data/maps/Route116/scripts.pory"
	walk_left
# 132 "data/maps/Route116/scripts.pory"
	walk_left
# 133 "data/maps/Route116/scripts.pory"
	walk_left
# 134 "data/maps/Route116/scripts.pory"
	walk_left
# 135 "data/maps/Route116/scripts.pory"
	step_end
# 136 "data/maps/Route116/scripts.pory"

# 137 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 138 "data/maps/Route116/scripts.pory"
	walk_down
# 139 "data/maps/Route116/scripts.pory"
	walk_left
# 140 "data/maps/Route116/scripts.pory"
	walk_left
# 141 "data/maps/Route116/scripts.pory"
	walk_left
# 142 "data/maps/Route116/scripts.pory"
	walk_left
# 143 "data/maps/Route116/scripts.pory"
	walk_left
# 144 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 146 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 148 "data/maps/Route116/scripts.pory"
	step_end
# 149 "data/maps/Route116/scripts.pory"

# 150 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 151 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 152 "data/maps/Route116/scripts.pory"
	end
# 153 "data/maps/Route116/scripts.pory"

# 154 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 155 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 156 "data/maps/Route116/scripts.pory"
	end
# 157 "data/maps/Route116/scripts.pory"

# 158 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 159 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 160 "data/maps/Route116/scripts.pory"
	end
# 161 "data/maps/Route116/scripts.pory"

# 162 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 163 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 164 "data/maps/Route116/scripts.pory"
	end
# 165 "data/maps/Route116/scripts.pory"

# 166 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 167 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 168 "data/maps/Route116/scripts.pory"
	end
# 169 "data/maps/Route116/scripts.pory"

# 170 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 171 "data/maps/Route116/scripts.pory"
	lock
# 172 "data/maps/Route116/scripts.pory"
	faceplayer
# 173 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 174 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 175 "data/maps/Route116/scripts.pory"
	release
# 176 "data/maps/Route116/scripts.pory"
	end
# 177 "data/maps/Route116/scripts.pory"

# 178 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 179 "data/maps/Route116/scripts.pory"
	lockall
# 180 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_ROUTE116_BRINEY, Common_Movement_WalkInPlaceFasterRight
# 181 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 182 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 183 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 184 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 185 "data/maps/Route116/scripts.pory"
	releaseall
# 186 "data/maps/Route116/scripts.pory"
	end
# 187 "data/maps/Route116/scripts.pory"

# 188 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 189 "data/maps/Route116/scripts.pory"
	lock
# 190 "data/maps/Route116/scripts.pory"
	faceplayer
# 191 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 192 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 193 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 194 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 195 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 196 "data/maps/Route116/scripts.pory"
	release
# 197 "data/maps/Route116/scripts.pory"
	end
# 198 "data/maps/Route116/scripts.pory"

# 199 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 200 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 201 "data/maps/Route116/scripts.pory"
	closemessage
# 202 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 203 "data/maps/Route116/scripts.pory"
	end
# 204 "data/maps/Route116/scripts.pory"

# 205 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 206 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 207 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 208 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 209 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 210 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 211 "data/maps/Route116/scripts.pory"
	release
# 212 "data/maps/Route116/scripts.pory"
	end
# 213 "data/maps/Route116/scripts.pory"

# 214 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 215 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 216 "data/maps/Route116/scripts.pory"
	closemessage
# 217 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 218 "data/maps/Route116/scripts.pory"
	end
# 219 "data/maps/Route116/scripts.pory"

# 220 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 221 "data/maps/Route116/scripts.pory"
	delay 20
# 222 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 223 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 224 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 225 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 226 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 227 "data/maps/Route116/scripts.pory"
	release
# 228 "data/maps/Route116/scripts.pory"
	end
# 229 "data/maps/Route116/scripts.pory"

# 230 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 231 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 232 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route116/scripts.pory"
	return
# 234 "data/maps/Route116/scripts.pory"

# 235 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 236 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 237 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route116/scripts.pory"
	return
# 239 "data/maps/Route116/scripts.pory"

# 240 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 241 "data/maps/Route116/scripts.pory"
	walk_left
# 242 "data/maps/Route116/scripts.pory"
	walk_left
# 243 "data/maps/Route116/scripts.pory"
	walk_left
# 244 "data/maps/Route116/scripts.pory"
	walk_left
# 245 "data/maps/Route116/scripts.pory"
	walk_left
# 246 "data/maps/Route116/scripts.pory"
	walk_left
# 247 "data/maps/Route116/scripts.pory"
	walk_left
# 248 "data/maps/Route116/scripts.pory"
	walk_left
# 249 "data/maps/Route116/scripts.pory"
	walk_left
# 250 "data/maps/Route116/scripts.pory"
	step_end
# 251 "data/maps/Route116/scripts.pory"

# 252 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 253 "data/maps/Route116/scripts.pory"
	walk_up
# 254 "data/maps/Route116/scripts.pory"
	walk_left
# 255 "data/maps/Route116/scripts.pory"
	walk_left
# 256 "data/maps/Route116/scripts.pory"
	walk_left
# 257 "data/maps/Route116/scripts.pory"
	walk_left
# 258 "data/maps/Route116/scripts.pory"
	walk_left
# 259 "data/maps/Route116/scripts.pory"
	walk_left
# 260 "data/maps/Route116/scripts.pory"
	walk_left
# 261 "data/maps/Route116/scripts.pory"
	walk_left
# 262 "data/maps/Route116/scripts.pory"
	walk_left
# 263 "data/maps/Route116/scripts.pory"
	step_end
# 264 "data/maps/Route116/scripts.pory"

# 265 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 266 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 267 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/Route116/scripts.pory"
	end
# 269 "data/maps/Route116/scripts.pory"

# 270 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 271 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 272 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/Route116/scripts.pory"
	end
# 274 "data/maps/Route116/scripts.pory"

# 275 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 276 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 277 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 278 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 279 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 280 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 281 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 282 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 283 "data/maps/Route116/scripts.pory"
	release
# 284 "data/maps/Route116/scripts.pory"
	end
# 285 "data/maps/Route116/scripts.pory"

# 286 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 287 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 288 "data/maps/Route116/scripts.pory"
	release
# 289 "data/maps/Route116/scripts.pory"
	end
# 290 "data/maps/Route116/scripts.pory"

# 291 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 292 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 293 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 294 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 295 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 296 "data/maps/Route116/scripts.pory"
	release
# 297 "data/maps/Route116/scripts.pory"
	end
# 298 "data/maps/Route116/scripts.pory"

# 299 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 300 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 301 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 302 "data/maps/Route116/scripts.pory"
	release
# 303 "data/maps/Route116/scripts.pory"
	end
# 304 "data/maps/Route116/scripts.pory"

# 305 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 306 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 307 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 308 "data/maps/Route116/scripts.pory"
	release
# 309 "data/maps/Route116/scripts.pory"
	end
# 310 "data/maps/Route116/scripts.pory"

# 311 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 312 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 313 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route116/scripts.pory"
	end
# 315 "data/maps/Route116/scripts.pory"

# 316 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 317 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 318 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route116/scripts.pory"
	end
# 320 "data/maps/Route116/scripts.pory"

# 321 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 322 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 323 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 324 "data/maps/Route116/scripts.pory"
	end
# 325 "data/maps/Route116/scripts.pory"

# 326 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 327 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 328 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 329 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 330 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 331 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 332 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 333 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 334 "data/maps/Route116/scripts.pory"
	release
# 335 "data/maps/Route116/scripts.pory"
	end
# 336 "data/maps/Route116/scripts.pory"

# 337 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 338 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 339 "data/maps/Route116/scripts.pory"
	release
# 340 "data/maps/Route116/scripts.pory"
	end
# 341 "data/maps/Route116/scripts.pory"

# 342 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 343 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 344 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 346 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 347 "data/maps/Route116/scripts.pory"
	release
# 348 "data/maps/Route116/scripts.pory"
	end
# 349 "data/maps/Route116/scripts.pory"

# 350 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 351 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 352 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 353 "data/maps/Route116/scripts.pory"
	release
# 354 "data/maps/Route116/scripts.pory"
	end
# 355 "data/maps/Route116/scripts.pory"

# 356 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 357 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 358 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 359 "data/maps/Route116/scripts.pory"
	release
# 360 "data/maps/Route116/scripts.pory"
	end
# 361 "data/maps/Route116/scripts.pory"

# 362 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 363 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 364 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 365 "data/maps/Route116/scripts.pory"
	end
# 366 "data/maps/Route116/scripts.pory"

# 367 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 368 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 369 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/Route116/scripts.pory"
	end
# 371 "data/maps/Route116/scripts.pory"

# 372 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 373 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 374 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/Route116/scripts.pory"
	end
# 376 "data/maps/Route116/scripts.pory"

# 377 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 378 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 379 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/Route116/scripts.pory"
	end
# 381 "data/maps/Route116/scripts.pory"

# 382 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 383 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 384 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/Route116/scripts.pory"
	end
# 386 "data/maps/Route116/scripts.pory"

# 387 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 388 "data/maps/Route116/scripts.pory"
	.string "Oooh, was mache ich nur?!?\p"
# 389 "data/maps/Route116/scripts.pory"
	.string "Pecko und ich waren auf einem Spazier-\n"
# 390 "data/maps/Route116/scripts.pory"
	.string "gang und da kam so ein Schlägertyp…\p"
# 391 "data/maps/Route116/scripts.pory"
	.string "Der Schurke hat mir meinen Liebling\n"
# 392 "data/maps/Route116/scripts.pory"
	.string "Pecko geklaut!\p"
# 393 "data/maps/Route116/scripts.pory"
	.string "Ooooooooooooaaaargh! Pecko!$"
# 394 "data/maps/Route116/scripts.pory"

# 395 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 396 "data/maps/Route116/scripts.pory"
	.string "Nnn… Brüll!\p"
# 397 "data/maps/Route116/scripts.pory"
	.string "Ich will diesen Tunnel graben!$"
# 398 "data/maps/Route116/scripts.pory"

# 399 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 400 "data/maps/Route116/scripts.pory"
	.string "Nnn… Brüll!\n"
# 401 "data/maps/Route116/scripts.pory"
	.string "Was ist hier los?\p"
# 402 "data/maps/Route116/scripts.pory"
	.string "Ich war dabei, einen Tunnel ohne Werk-\n"
# 403 "data/maps/Route116/scripts.pory"
	.string "zeug zu graben, als so ein Idiot mich\l"
# 404 "data/maps/Route116/scripts.pory"
	.string "verjagt hat!\p"
# 405 "data/maps/Route116/scripts.pory"
	.string "Dieser Tunnel ist voller Pokémon, die\n"
# 406 "data/maps/Route116/scripts.pory"
	.string "sensibel auf Lärm reagieren. Sie können\l"
# 407 "data/maps/Route116/scripts.pory"
	.string "einen Aufruhr veranstalten.\p"
# 408 "data/maps/Route116/scripts.pory"
	.string "Daher arbeiten wir ohne schwere\n"
# 409 "data/maps/Route116/scripts.pory"
	.string "Maschinen an dem Tunnel…\p"
# 410 "data/maps/Route116/scripts.pory"
	.string "Ich befürchte, dieser Idiot wird\n"
# 411 "data/maps/Route116/scripts.pory"
	.string "irgendetwas Dummes tun und die\l"
# 412 "data/maps/Route116/scripts.pory"
	.string "Pokémon in Aufruhr versetzen.$"
# 413 "data/maps/Route116/scripts.pory"

# 414 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 415 "data/maps/Route116/scripts.pory"
	.string "Nnn… Brüll!\p"
# 416 "data/maps/Route116/scripts.pory"
	.string "Dieser dämliche Idiot ist aus dem Tun-\n"
# 417 "data/maps/Route116/scripts.pory"
	.string "nel abgehauen. Ich kann weitergraben!$"
# 418 "data/maps/Route116/scripts.pory"

# 419 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 420 "data/maps/Route116/scripts.pory"
	.string "Oh! Du bist das!\p"
# 421 "data/maps/Route116/scripts.pory"
	.string "Du hast mir nicht nur im Blüten-\n"
# 422 "data/maps/Route116/scripts.pory"
	.string "burgwald geholfen, sondern auch\l"
# 423 "data/maps/Route116/scripts.pory"
	.string "mein gestohlenes Paket zurückgeholt\l"
# 424 "data/maps/Route116/scripts.pory"
	.string "und nach Graphitport City gebracht!\p"
# 425 "data/maps/Route116/scripts.pory"
	.string "Kapt. Brigg hat uns über die Ankunft\n"
# 426 "data/maps/Route116/scripts.pory"
	.string "des Paketes unterrichtet!\p"
# 427 "data/maps/Route116/scripts.pory"
	.string "Vielen, vielen Dank!\p"
# 428 "data/maps/Route116/scripts.pory"
	.string "Wäre ich ein Meer, würde ich\n"
# 429 "data/maps/Route116/scripts.pory"
	.string "dich in Dankbarkeit baden und als\l"
# 430 "data/maps/Route116/scripts.pory"
	.string "Held auf meinen Wellen tragen!\p"
# 431 "data/maps/Route116/scripts.pory"
	.string "Ich habe für dich, den wunderbarsten\n"
# 432 "data/maps/Route116/scripts.pory"
	.string "Trainer, gute Nachrichten!\p"
# 433 "data/maps/Route116/scripts.pory"
	.string "Unsere Firma hat vor kurzem eine\n"
# 434 "data/maps/Route116/scripts.pory"
	.string "neue Art von Pokéball entwickelt…\p"
# 435 "data/maps/Route116/scripts.pory"
	.string "Als Zeichen meiner Dankbarkeit\n"
# 436 "data/maps/Route116/scripts.pory"
	.string "schenke ich ihn dem wunderbarsten\l"
# 437 "data/maps/Route116/scripts.pory"
	.string "Trainer!$"
# 438 "data/maps/Route116/scripts.pory"

# 439 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart:
# 440 "data/maps/Route116/scripts.pory"
	.string "Unser neuer Pokéball wird im\n"
# 441 "data/maps/Route116/scripts.pory"
	.string "Markt in Metarost City erhältlich sein.\p"
# 442 "data/maps/Route116/scripts.pory"
	.string "Bitte, probiere ihn aus!\n"
# 443 "data/maps/Route116/scripts.pory"
	.string "Vielen Dank und Lebewohl.$"
# 444 "data/maps/Route116/scripts.pory"

# 445 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 446 "data/maps/Route116/scripts.pory"
	.string "Dein Beutel ist brechend voll.\n"
# 447 "data/maps/Route116/scripts.pory"
	.string "Ich kann dir diesen Wiederball nicht\l"
# 448 "data/maps/Route116/scripts.pory"
	.string "geben.$"
# 449 "data/maps/Route116/scripts.pory"

# 450 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 451 "data/maps/Route116/scripts.pory"
	.string "Als Zeichen unseres Dankes für die\n"
# 452 "data/maps/Route116/scripts.pory"
	.string "Überbringung unseres Paketes, habe ich\l"
# 453 "data/maps/Route116/scripts.pory"
	.string "eine neue Art von Pokéball für dich.\l"
# 454 "data/maps/Route116/scripts.pory"
	.string "Für unseren wunderbarsten Trainer!$"
# 455 "data/maps/Route116/scripts.pory"

# 456 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 457 "data/maps/Route116/scripts.pory"
	.string "Ich habe meine Brille fallen lassen…\n"
# 458 "data/maps/Route116/scripts.pory"
	.string "Kannst du mir helfen, sie zu finden?$"
# 459 "data/maps/Route116/scripts.pory"

# 460 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 461 "data/maps/Route116/scripts.pory"
	.string "Deine Brille…\n"
# 462 "data/maps/Route116/scripts.pory"
	.string "Darf ich sie mal kurz ausprobieren?$"
# 463 "data/maps/Route116/scripts.pory"

# 464 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 465 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 466 "data/maps/Route116/scripts.pory"
	.string "Das ist ein Schattenglas.\l"
# 467 "data/maps/Route116/scripts.pory"
	.string "Das habe ich nicht gesucht…\p"
# 468 "data/maps/Route116/scripts.pory"
	.string "Vielleicht ist meine Brille gar nicht\n"
# 469 "data/maps/Route116/scripts.pory"
	.string "hier zu finden…$"
# 470 "data/maps/Route116/scripts.pory"

# 471 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 472 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 473 "data/maps/Route116/scripts.pory"
	.string "Ich kann meine Brille nirgends finden…\l"
# 474 "data/maps/Route116/scripts.pory"
	.string "Vielleicht liegt sie gar nicht hier…$"
# 475 "data/maps/Route116/scripts.pory"

# 476 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 477 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 478 "data/maps/Route116/scripts.pory"
	.string "Das ist ein Schattenglas.\l"
# 479 "data/maps/Route116/scripts.pory"
	.string "Das habe ich nicht gesucht…$"
# 480 "data/maps/Route116/scripts.pory"

# 481 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 482 "data/maps/Route116/scripts.pory"
	.string "Route 116\n"
# 483 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} Metarost City$"
# 484 "data/maps/Route116/scripts.pory"

# 485 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 486 "data/maps/Route116/scripts.pory"
	.string "Metaflurtunnel\n"
# 487 "data/maps/Route116/scripts.pory"
	.string "“Verbindet Metarost City und\p"
# 488 "data/maps/Route116/scripts.pory"
	.string "Wiesenflur.\n"
# 489 "data/maps/Route116/scripts.pory"
	.string "Das Tunnelprojekt wurde abgebrochen.”$"
# 490 "data/maps/Route116/scripts.pory"

# 491 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 492 "data/maps/Route116/scripts.pory"
	.string "Bergrasthaus$"
# 493 "data/maps/Route116/scripts.pory"

# 494 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 495 "data/maps/Route116/scripts.pory"
	.string "Tipps für Trainer\p"
# 496 "data/maps/Route116/scripts.pory"
	.string "Wenn du die Entwicklung eines Pokémon\n"
# 497 "data/maps/Route116/scripts.pory"
	.string "stoppen willst, musst du den B-Knopf\l"
# 498 "data/maps/Route116/scripts.pory"
	.string "drücken, während es sich entwickeln\l"
# 499 "data/maps/Route116/scripts.pory"
	.string "will.\p"
# 500 "data/maps/Route116/scripts.pory"
	.string "Das Pokémon entwickelt sich dann nicht.\n"
# 501 "data/maps/Route116/scripts.pory"
	.string "Das nennt man Entwicklungsstopp.$"
# 502 "data/maps/Route116/scripts.pory"

# 503 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 504 "data/maps/Route116/scripts.pory"
	.string "Tipps für Trainer\p"
# 505 "data/maps/Route116/scripts.pory"
	.string "Dein Beutel hat mehrere Taschen.\p"
# 506 "data/maps/Route116/scripts.pory"
	.string "Items werden automatisch in die dafür\n"
# 507 "data/maps/Route116/scripts.pory"
	.string "vorgesehene Tasche gelegt.\p"
# 508 "data/maps/Route116/scripts.pory"
	.string "Kein Trainer kann auf einen eigenen\n"
# 509 "data/maps/Route116/scripts.pory"
	.string "Beutel verzichten.$"

Route116_Text_PkmnSignGras::
# 31 "data/maps/Route116/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im hohen Gras:$"
