Route110_EventScript_PkmnSign::
# 2 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_PkmnSign_Text_0, MSGBOX_SIGN
# 4 "data/maps/Route110/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route110_EventScript_PkmnSign_Text_1, Route110_EventScript_PkmnSign_Text_2, Route110_EventScript_PkmnSign_Text_3
# 5 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq Route110_EventScript_PkmnSign_2
# 9 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_PkmnSign_5
# 42 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_PkmnSign_6
# 58 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_PkmnSign_7
	return

Route110_EventScript_PkmnSign_2:
# 6 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_PkmnSign_5:
# 11 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PkmnSignGras, MSGBOX_SIGN
# 12 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 13 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 14 "data/maps/Route110/scripts.pory"
	delay 60
# 15 "data/maps/Route110/scripts.pory"
	hidemonpic
# 16 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_ELECTRIKE, 10, 3
# 17 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_ELECTRIKE, 0
# 18 "data/maps/Route110/scripts.pory"
	delay 60
# 19 "data/maps/Route110/scripts.pory"
	hidemonpic
# 20 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_GULPIN, 10, 3
# 21 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_GULPIN, 0
# 22 "data/maps/Route110/scripts.pory"
	delay 60
# 23 "data/maps/Route110/scripts.pory"
	hidemonpic
# 24 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_MINUN, 10, 3
# 25 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_MINUN, 0
# 26 "data/maps/Route110/scripts.pory"
	delay 60
# 27 "data/maps/Route110/scripts.pory"
	hidemonpic
# 28 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_ODDISH, 10, 3
# 29 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_ODDISH, 0
# 30 "data/maps/Route110/scripts.pory"
	delay 60
# 31 "data/maps/Route110/scripts.pory"
	hidemonpic
# 32 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 33 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 34 "data/maps/Route110/scripts.pory"
	delay 60
# 35 "data/maps/Route110/scripts.pory"
	hidemonpic
# 36 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_PLUSLE, 10, 3
# 37 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_PLUSLE, 0
# 38 "data/maps/Route110/scripts.pory"
	delay 60
# 39 "data/maps/Route110/scripts.pory"
	hidemonpic
# 40 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_PkmnSign_6:
# 43 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PkmnSignWasser, MSGBOX_SIGN
# 44 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 45 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 46 "data/maps/Route110/scripts.pory"
	delay 60
# 47 "data/maps/Route110/scripts.pory"
	hidemonpic
# 48 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 49 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 50 "data/maps/Route110/scripts.pory"
	delay 60
# 51 "data/maps/Route110/scripts.pory"
	hidemonpic
# 52 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_PELIPPER, 10, 3
# 53 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_PELIPPER, 0
# 54 "data/maps/Route110/scripts.pory"
	delay 60
# 55 "data/maps/Route110/scripts.pory"
	hidemonpic
# 56 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_PkmnSign_7:
# 59 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PkmnSignAngel, MSGBOX_SIGN
# 60 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 61 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 62 "data/maps/Route110/scripts.pory"
	delay 60
# 63 "data/maps/Route110/scripts.pory"
	hidemonpic
# 64 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 65 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 66 "data/maps/Route110/scripts.pory"
	delay 60
# 67 "data/maps/Route110/scripts.pory"
	hidemonpic
# 68 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PkmnSignAngel2, MSGBOX_SIGN
# 69 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 70 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 71 "data/maps/Route110/scripts.pory"
	delay 60
# 72 "data/maps/Route110/scripts.pory"
	hidemonpic
# 73 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 74 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 75 "data/maps/Route110/scripts.pory"
	delay 60
# 76 "data/maps/Route110/scripts.pory"
	hidemonpic
# 77 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 78 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 79 "data/maps/Route110/scripts.pory"
	delay 60
# 80 "data/maps/Route110/scripts.pory"
	hidemonpic
# 81 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_PkmnSignAngel3, MSGBOX_SIGN
# 82 "data/maps/Route110/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 83 "data/maps/Route110/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 84 "data/maps/Route110/scripts.pory"
	delay 60
# 85 "data/maps/Route110/scripts.pory"
	hidemonpic
# 86 "data/maps/Route110/scripts.pory"
	release
	end


# 112 "data/maps/Route110/scripts.pory"

# 113 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 114 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 115 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 116 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 117 "data/maps/Route110/scripts.pory"
	.byte 0
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 120 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 124 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 125 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 126 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 127 "data/maps/Route110/scripts.pory"
	end
# 128 "data/maps/Route110/scripts.pory"

# 129 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 130 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 131 "data/maps/Route110/scripts.pory"
	return
# 132 "data/maps/Route110/scripts.pory"

# 133 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 134 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 135 "data/maps/Route110/scripts.pory"
	.2byte 0
# 136 "data/maps/Route110/scripts.pory"

# 137 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 138 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 139 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 140 "data/maps/Route110/scripts.pory"
	return
# 141 "data/maps/Route110/scripts.pory"

# 142 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 143 "data/maps/Route110/scripts.pory"
	lock
# 144 "data/maps/Route110/scripts.pory"
	faceplayer
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 146 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 147 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route110/scripts.pory"
	release
# 149 "data/maps/Route110/scripts.pory"
	end
# 150 "data/maps/Route110/scripts.pory"

# 151 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 152 "data/maps/Route110/scripts.pory"
	lock
# 153 "data/maps/Route110/scripts.pory"
	faceplayer
# 154 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 155 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 156 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route110/scripts.pory"
	release
# 158 "data/maps/Route110/scripts.pory"
	end
# 159 "data/maps/Route110/scripts.pory"

# 160 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 161 "data/maps/Route110/scripts.pory"
	lock
# 162 "data/maps/Route110/scripts.pory"
	faceplayer
# 163 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 164 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 165 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route110/scripts.pory"
	release
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 170 "data/maps/Route110/scripts.pory"
	lock
# 171 "data/maps/Route110/scripts.pory"
	faceplayer
# 172 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 173 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 174 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route110/scripts.pory"
	release
# 176 "data/maps/Route110/scripts.pory"
	end
# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 179 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 180 "data/maps/Route110/scripts.pory"
	end
# 181 "data/maps/Route110/scripts.pory"

# 182 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 183 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 184 "data/maps/Route110/scripts.pory"
	end
# 185 "data/maps/Route110/scripts.pory"

# 186 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 187 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 188 "data/maps/Route110/scripts.pory"
	end
# 189 "data/maps/Route110/scripts.pory"

# 190 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 191 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 192 "data/maps/Route110/scripts.pory"
	end
# 193 "data/maps/Route110/scripts.pory"

# 194 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 195 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 196 "data/maps/Route110/scripts.pory"
	end
# 197 "data/maps/Route110/scripts.pory"

# 198 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 199 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 200 "data/maps/Route110/scripts.pory"
	end
# 201 "data/maps/Route110/scripts.pory"

# 202 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 203 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 204 "data/maps/Route110/scripts.pory"
	end
# 205 "data/maps/Route110/scripts.pory"

# 206 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 211 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 212 "data/maps/Route110/scripts.pory"
	end
# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 215 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 216 "data/maps/Route110/scripts.pory"
	end
# 217 "data/maps/Route110/scripts.pory"

# 218 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 223 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 224 "data/maps/Route110/scripts.pory"
	end
# 225 "data/maps/Route110/scripts.pory"

# 226 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 227 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 231 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 232 "data/maps/Route110/scripts.pory"
	end
# 233 "data/maps/Route110/scripts.pory"

# 234 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 235 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 236 "data/maps/Route110/scripts.pory"
	end
# 237 "data/maps/Route110/scripts.pory"

# 238 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 239 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 240 "data/maps/Route110/scripts.pory"
	end
# 241 "data/maps/Route110/scripts.pory"

# 242 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 243 "data/maps/Route110/scripts.pory"
	lockall
# 244 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 245 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 246 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 247 "data/maps/Route110/scripts.pory"
	releaseall
# 248 "data/maps/Route110/scripts.pory"
	end
# 249 "data/maps/Route110/scripts.pory"

# 250 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 251 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 252 "data/maps/Route110/scripts.pory"
	releaseall
# 253 "data/maps/Route110/scripts.pory"
	end
# 254 "data/maps/Route110/scripts.pory"

# 255 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 256 "data/maps/Route110/scripts.pory"
	lock
# 257 "data/maps/Route110/scripts.pory"
	faceplayer
# 258 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 259 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 260 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 262 "data/maps/Route110/scripts.pory"
	release
# 263 "data/maps/Route110/scripts.pory"
	end
# 264 "data/maps/Route110/scripts.pory"

# 265 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 267 "data/maps/Route110/scripts.pory"
	release
# 268 "data/maps/Route110/scripts.pory"
	end
# 269 "data/maps/Route110/scripts.pory"

# 270 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 271 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 272 "data/maps/Route110/scripts.pory"
	release
# 273 "data/maps/Route110/scripts.pory"
	end
# 274 "data/maps/Route110/scripts.pory"

# 275 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 276 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 277 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route110/scripts.pory"
	end
# 279 "data/maps/Route110/scripts.pory"

# 280 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 281 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 282 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 283 "data/maps/Route110/scripts.pory"
	end
# 284 "data/maps/Route110/scripts.pory"

# 285 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 286 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 287 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 288 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 289 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 290 "data/maps/Route110/scripts.pory"
	release
# 291 "data/maps/Route110/scripts.pory"
	end
# 292 "data/maps/Route110/scripts.pory"

# 293 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 294 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 295 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 297 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 298 "data/maps/Route110/scripts.pory"
	release
# 299 "data/maps/Route110/scripts.pory"
	end
# 300 "data/maps/Route110/scripts.pory"

# 301 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 302 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 303 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route110/scripts.pory"
	end
# 305 "data/maps/Route110/scripts.pory"

# 306 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 307 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 308 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route110/scripts.pory"
	end
# 310 "data/maps/Route110/scripts.pory"

# 311 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 312 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 313 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 314 "data/maps/Route110/scripts.pory"
	end
# 315 "data/maps/Route110/scripts.pory"

# 316 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 317 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 318 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 319 "data/maps/Route110/scripts.pory"
	end
# 320 "data/maps/Route110/scripts.pory"

# 321 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 322 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 323 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 324 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 325 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 326 "data/maps/Route110/scripts.pory"
	release
# 327 "data/maps/Route110/scripts.pory"
	end
# 328 "data/maps/Route110/scripts.pory"

# 329 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 330 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 331 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 332 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 333 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 334 "data/maps/Route110/scripts.pory"
	release
# 335 "data/maps/Route110/scripts.pory"
	end
# 336 "data/maps/Route110/scripts.pory"

# 337 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 338 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 339 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 340 "data/maps/Route110/scripts.pory"
	end
# 341 "data/maps/Route110/scripts.pory"

# 342 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 343 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 344 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route110/scripts.pory"
	end
# 346 "data/maps/Route110/scripts.pory"

# 347 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 348 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 349 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 350 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 351 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 352 "data/maps/Route110/scripts.pory"
	release
# 353 "data/maps/Route110/scripts.pory"
	end
# 354 "data/maps/Route110/scripts.pory"

# 355 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 356 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 357 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 359 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 360 "data/maps/Route110/scripts.pory"
	release
# 361 "data/maps/Route110/scripts.pory"
	end
# 362 "data/maps/Route110/scripts.pory"

# 363 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 364 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 365 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route110/scripts.pory"
	end
# 367 "data/maps/Route110/scripts.pory"

# 368 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 369 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 370 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 371 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 372 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 373 "data/maps/Route110/scripts.pory"
	release
# 374 "data/maps/Route110/scripts.pory"
	end
# 375 "data/maps/Route110/scripts.pory"

# 376 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 377 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 378 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 380 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 381 "data/maps/Route110/scripts.pory"
	release
# 382 "data/maps/Route110/scripts.pory"
	end
# 383 "data/maps/Route110/scripts.pory"

# 384 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 385 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 386 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/Route110/scripts.pory"
	end
# 388 "data/maps/Route110/scripts.pory"

# 389 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 390 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 391 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/Route110/scripts.pory"
	end
# 393 "data/maps/Route110/scripts.pory"

# 394 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 395 "data/maps/Route110/scripts.pory"
	end
# 396 "data/maps/Route110/scripts.pory"

# 397 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 398 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 399 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 400 "data/maps/Route110/scripts.pory"
	end
# 401 "data/maps/Route110/scripts.pory"

# 402 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 403 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 404 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/Route110/scripts.pory"
	end
# 406 "data/maps/Route110/scripts.pory"

# 407 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 408 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 409 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 410 "data/maps/Route110/scripts.pory"
	end
# 411 "data/maps/Route110/scripts.pory"

# 412 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 413 "data/maps/Route110/scripts.pory"
	lockall
# 414 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 415 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 417 "data/maps/Route110/scripts.pory"
	releaseall
# 418 "data/maps/Route110/scripts.pory"
	end
# 419 "data/maps/Route110/scripts.pory"

# 420 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 421 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 422 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 423 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 424 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 425 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 426 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 427 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 428 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 429 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 430 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 431 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 432 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 433 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 434 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 435 "data/maps/Route110/scripts.pory"
	end
# 436 "data/maps/Route110/scripts.pory"

# 437 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 438 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 439 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 440 "data/maps/Route110/scripts.pory"
	end
# 441 "data/maps/Route110/scripts.pory"

# 442 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 443 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 444 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 445 "data/maps/Route110/scripts.pory"
	end
# 446 "data/maps/Route110/scripts.pory"

# 447 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 448 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 449 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 450 "data/maps/Route110/scripts.pory"
	end
# 451 "data/maps/Route110/scripts.pory"

# 452 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 453 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 454 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 458 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 459 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 460 "data/maps/Route110/scripts.pory"
	end
# 461 "data/maps/Route110/scripts.pory"

# 462 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 463 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 464 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 465 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 466 "data/maps/Route110/scripts.pory"
	return
# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 469 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 470 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 471 "data/maps/Route110/scripts.pory"
	end
# 472 "data/maps/Route110/scripts.pory"

# 473 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 474 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 475 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 476 "data/maps/Route110/scripts.pory"
	end
# 477 "data/maps/Route110/scripts.pory"

# 478 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 479 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 480 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 481 "data/maps/Route110/scripts.pory"
	end
# 482 "data/maps/Route110/scripts.pory"

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 484 "data/maps/Route110/scripts.pory"
	lockall
# 485 "data/maps/Route110/scripts.pory"
	checkplayergender
# 486 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 487 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 488 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 489 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 491 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 493 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 494 "data/maps/Route110/scripts.pory"
	delay 30
# 495 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 496 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 497 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 498 "data/maps/Route110/scripts.pory"
	checkplayergender
# 499 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 500 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 501 "data/maps/Route110/scripts.pory"
	releaseall
# 502 "data/maps/Route110/scripts.pory"
	end
# 503 "data/maps/Route110/scripts.pory"

# 504 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 505 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 506 "data/maps/Route110/scripts.pory"
	return
# 507 "data/maps/Route110/scripts.pory"

# 508 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 509 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 510 "data/maps/Route110/scripts.pory"
	return
# 511 "data/maps/Route110/scripts.pory"

# 512 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 513 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 514 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 515 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 516 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 517 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 518 "data/maps/Route110/scripts.pory"
	end
# 519 "data/maps/Route110/scripts.pory"

# 520 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 521 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 522 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 523 "data/maps/Route110/scripts.pory"
	end
# 524 "data/maps/Route110/scripts.pory"

# 525 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 526 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 527 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 528 "data/maps/Route110/scripts.pory"
	end
# 529 "data/maps/Route110/scripts.pory"

# 530 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 531 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 532 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 533 "data/maps/Route110/scripts.pory"
	end
# 534 "data/maps/Route110/scripts.pory"

# 535 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 536 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 537 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 538 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 539 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 540 "data/maps/Route110/scripts.pory"
	end
# 541 "data/maps/Route110/scripts.pory"

# 542 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 543 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 544 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 545 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 546 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 547 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 548 "data/maps/Route110/scripts.pory"
	end
# 549 "data/maps/Route110/scripts.pory"

# 550 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 551 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 552 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 553 "data/maps/Route110/scripts.pory"
	end
# 554 "data/maps/Route110/scripts.pory"

# 555 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 556 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 557 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 558 "data/maps/Route110/scripts.pory"
	end
# 559 "data/maps/Route110/scripts.pory"

# 560 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 561 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 562 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 563 "data/maps/Route110/scripts.pory"
	end
# 564 "data/maps/Route110/scripts.pory"

# 565 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 566 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 567 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 568 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 569 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 570 "data/maps/Route110/scripts.pory"
	end
# 571 "data/maps/Route110/scripts.pory"

# 572 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 573 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 574 "data/maps/Route110/scripts.pory"
	return
# 575 "data/maps/Route110/scripts.pory"

# 576 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 577 "data/maps/Route110/scripts.pory"
	closemessage
# 578 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 579 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 580 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 581 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 582 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 583 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 584 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 585 "data/maps/Route110/scripts.pory"
	delay 45
# 586 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 587 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 588 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 589 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 590 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 591 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 592 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 593 "data/maps/Route110/scripts.pory"
	releaseall
# 594 "data/maps/Route110/scripts.pory"
	end
# 595 "data/maps/Route110/scripts.pory"

# 596 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 597 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer1
# 598 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 599 "data/maps/Route110/scripts.pory"
	return
# 600 "data/maps/Route110/scripts.pory"

# 601 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 602 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer2
# 603 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 604 "data/maps/Route110/scripts.pory"
	return
# 605 "data/maps/Route110/scripts.pory"

# 606 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 607 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_Movement_RivalApproachPlayer3
# 608 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 609 "data/maps/Route110/scripts.pory"
	return
# 610 "data/maps/Route110/scripts.pory"

# 611 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 612 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 613 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route110/scripts.pory"
	return
# 615 "data/maps/Route110/scripts.pory"

# 616 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 617 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 618 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route110/scripts.pory"
	return
# 620 "data/maps/Route110/scripts.pory"

# 621 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 622 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 623 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 624 "data/maps/Route110/scripts.pory"
	return
# 625 "data/maps/Route110/scripts.pory"

# 626 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 627 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
# 628 "data/maps/Route110/scripts.pory"
	return
# 629 "data/maps/Route110/scripts.pory"

# 630 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 631 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
# 632 "data/maps/Route110/scripts.pory"
	return
# 633 "data/maps/Route110/scripts.pory"

# 634 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 635 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
# 636 "data/maps/Route110/scripts.pory"
	return
# 637 "data/maps/Route110/scripts.pory"

# 638 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 639 "data/maps/Route110/scripts.pory"
	walk_down
# 640 "data/maps/Route110/scripts.pory"
	walk_left
# 641 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 642 "data/maps/Route110/scripts.pory"
	step_end
# 643 "data/maps/Route110/scripts.pory"

# 644 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 645 "data/maps/Route110/scripts.pory"
	walk_down
# 646 "data/maps/Route110/scripts.pory"
	step_end
# 647 "data/maps/Route110/scripts.pory"

# 648 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 649 "data/maps/Route110/scripts.pory"
	walk_down
# 650 "data/maps/Route110/scripts.pory"
	walk_right
# 651 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 652 "data/maps/Route110/scripts.pory"
	step_end
# 653 "data/maps/Route110/scripts.pory"

# 654 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 655 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 656 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 657 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 658 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 659 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 660 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 661 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 662 "data/maps/Route110/scripts.pory"
	step_end
# 663 "data/maps/Route110/scripts.pory"

# 664 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 665 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 666 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 667 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 668 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 669 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 670 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 671 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 672 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 673 "data/maps/Route110/scripts.pory"
	step_end
# 674 "data/maps/Route110/scripts.pory"

# 675 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 676 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 677 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 678 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 679 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 680 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 681 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 682 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 683 "data/maps/Route110/scripts.pory"
	step_end
# 684 "data/maps/Route110/scripts.pory"

# 685 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 686 "data/maps/Route110/scripts.pory"
	lockall
# 687 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 688 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 689 "data/maps/Route110/scripts.pory"

# 690 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 691 "data/maps/Route110/scripts.pory"
	lockall
# 692 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 693 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 694 "data/maps/Route110/scripts.pory"

# 695 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 696 "data/maps/Route110/scripts.pory"
	lockall
# 697 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 698 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 699 "data/maps/Route110/scripts.pory"

# 700 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 701 "data/maps/Route110/scripts.pory"
	lockall
# 702 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 703 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 704 "data/maps/Route110/scripts.pory"

# 705 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 706 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 707 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchEntrance
# 708 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 709 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 710 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 711 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 712 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 713 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 714 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 715 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 716 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 717 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 718 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 719 "data/maps/Route110/scripts.pory"
	closemessage
# 720 "data/maps/Route110/scripts.pory"
	delay 20
# 721 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 722 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 723 "data/maps/Route110/scripts.pory"
	delay 10
# 724 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 725 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 726 "data/maps/Route110/scripts.pory"
	delay 20
# 727 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 728 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 729 "data/maps/Route110/scripts.pory"
	delay 30
# 730 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 731 "data/maps/Route110/scripts.pory"
	closemessage
# 732 "data/maps/Route110/scripts.pory"
	delay 30
# 733 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 734 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 735 "data/maps/Route110/scripts.pory"
	waitfanfare
# 736 "data/maps/Route110/scripts.pory"
	closemessage
# 737 "data/maps/Route110/scripts.pory"
	delay 30
# 738 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 739 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 740 "data/maps/Route110/scripts.pory"
	closemessage
# 741 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 742 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 743 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 744 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 745 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 746 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 747 "data/maps/Route110/scripts.pory"
	releaseall
# 748 "data/maps/Route110/scripts.pory"
	end
# 749 "data/maps/Route110/scripts.pory"

# 750 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 751 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer1
# 752 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 753 "data/maps/Route110/scripts.pory"
	return
# 754 "data/maps/Route110/scripts.pory"

# 755 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 756 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer2
# 757 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 758 "data/maps/Route110/scripts.pory"
	return
# 759 "data/maps/Route110/scripts.pory"

# 760 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 761 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer3
# 762 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 763 "data/maps/Route110/scripts.pory"
	return
# 764 "data/maps/Route110/scripts.pory"

# 765 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 766 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchApproachPlayer4
# 767 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 768 "data/maps/Route110/scripts.pory"
	return
# 769 "data/maps/Route110/scripts.pory"

# 770 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 771 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit1
# 772 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 773 "data/maps/Route110/scripts.pory"
	return
# 774 "data/maps/Route110/scripts.pory"

# 775 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 776 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit2
# 777 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 778 "data/maps/Route110/scripts.pory"
	return
# 779 "data/maps/Route110/scripts.pory"

# 780 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 781 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit3
# 782 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 783 "data/maps/Route110/scripts.pory"
	return
# 784 "data/maps/Route110/scripts.pory"

# 785 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 786 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_Movement_BirchExit4
# 787 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 788 "data/maps/Route110/scripts.pory"
	return
# 789 "data/maps/Route110/scripts.pory"

# 790 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 791 "data/maps/Route110/scripts.pory"
	walk_down
# 792 "data/maps/Route110/scripts.pory"
	walk_down
# 793 "data/maps/Route110/scripts.pory"
	walk_down
# 794 "data/maps/Route110/scripts.pory"
	step_end
# 795 "data/maps/Route110/scripts.pory"

# 796 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 797 "data/maps/Route110/scripts.pory"
	walk_down
# 798 "data/maps/Route110/scripts.pory"
	walk_left
# 799 "data/maps/Route110/scripts.pory"
	walk_left
# 800 "data/maps/Route110/scripts.pory"
	walk_down
# 801 "data/maps/Route110/scripts.pory"
	step_end
# 802 "data/maps/Route110/scripts.pory"

# 803 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 804 "data/maps/Route110/scripts.pory"
	walk_down
# 805 "data/maps/Route110/scripts.pory"
	walk_left
# 806 "data/maps/Route110/scripts.pory"
	walk_down
# 807 "data/maps/Route110/scripts.pory"
	step_end
# 808 "data/maps/Route110/scripts.pory"

# 809 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 810 "data/maps/Route110/scripts.pory"
	walk_down
# 811 "data/maps/Route110/scripts.pory"
	walk_down
# 812 "data/maps/Route110/scripts.pory"
	step_end
# 813 "data/maps/Route110/scripts.pory"

# 814 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 815 "data/maps/Route110/scripts.pory"
	walk_down
# 816 "data/maps/Route110/scripts.pory"
	walk_right
# 817 "data/maps/Route110/scripts.pory"
	walk_down
# 818 "data/maps/Route110/scripts.pory"
	step_end
# 819 "data/maps/Route110/scripts.pory"

# 820 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 821 "data/maps/Route110/scripts.pory"
	walk_up
# 822 "data/maps/Route110/scripts.pory"
	walk_up
# 823 "data/maps/Route110/scripts.pory"
	walk_right
# 824 "data/maps/Route110/scripts.pory"
	walk_up
# 825 "data/maps/Route110/scripts.pory"
	walk_up
# 826 "data/maps/Route110/scripts.pory"
	walk_up
# 827 "data/maps/Route110/scripts.pory"
	step_end
# 828 "data/maps/Route110/scripts.pory"

# 829 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 830 "data/maps/Route110/scripts.pory"
	walk_up
# 831 "data/maps/Route110/scripts.pory"
	walk_up
# 832 "data/maps/Route110/scripts.pory"
	walk_up
# 833 "data/maps/Route110/scripts.pory"
	walk_up
# 834 "data/maps/Route110/scripts.pory"
	walk_up
# 835 "data/maps/Route110/scripts.pory"
	step_end
# 836 "data/maps/Route110/scripts.pory"

# 837 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 838 "data/maps/Route110/scripts.pory"
	walk_up
# 839 "data/maps/Route110/scripts.pory"
	walk_up
# 840 "data/maps/Route110/scripts.pory"
	walk_up
# 841 "data/maps/Route110/scripts.pory"
	walk_up
# 842 "data/maps/Route110/scripts.pory"
	walk_up
# 843 "data/maps/Route110/scripts.pory"
	step_end
# 844 "data/maps/Route110/scripts.pory"

# 845 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 846 "data/maps/Route110/scripts.pory"
	walk_up
# 847 "data/maps/Route110/scripts.pory"
	walk_up
# 848 "data/maps/Route110/scripts.pory"
	walk_up
# 849 "data/maps/Route110/scripts.pory"
	walk_up
# 850 "data/maps/Route110/scripts.pory"
	walk_up
# 851 "data/maps/Route110/scripts.pory"
	step_end
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 854 "data/maps/Route110/scripts.pory"
	.string "Team Aquas Aktivitäten müssen im\n"
# 855 "data/maps/Route110/scripts.pory"
	.string "Moment geheim bleiben!$"
# 856 "data/maps/Route110/scripts.pory"

# 857 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 858 "data/maps/Route110/scripts.pory"
	.string "Ich würde liebend gerne nach\n"
# 859 "data/maps/Route110/scripts.pory"
	.string "Graphitport City gehen und ein\l"
# 860 "data/maps/Route110/scripts.pory"
	.string "bisschen Krawall machen.$"
# 861 "data/maps/Route110/scripts.pory"

# 862 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 863 "data/maps/Route110/scripts.pory"
	.string "Das ist mein erster Job, seit ich\n"
# 864 "data/maps/Route110/scripts.pory"
	.string "Team Aqua beigetreten bin. Ich bin\l"
# 865 "data/maps/Route110/scripts.pory"
	.string "ganz nervös.$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 868 "data/maps/Route110/scripts.pory"
	.string "Team Aquas Aktionen zaubern ein\n"
# 869 "data/maps/Route110/scripts.pory"
	.string "Lächeln auf jedes Gesicht!$"
# 870 "data/maps/Route110/scripts.pory"

# 871 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 872 "data/maps/Route110/scripts.pory"
	.string "Maike: Hi, {PLAYER}{KUN}, wir haben uns ja\n"
# 873 "data/maps/Route110/scripts.pory"
	.string "lange nicht gesehen!\p"
# 874 "data/maps/Route110/scripts.pory"
	.string "Während ich auf der Suche nach\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "weiteren Pokémon war, sind meine\l"
# 876 "data/maps/Route110/scripts.pory"
	.string "Pokémon stärker geworden.\p"
# 877 "data/maps/Route110/scripts.pory"
	.string "Daher…\n"
# 878 "data/maps/Route110/scripts.pory"
	.string "Wie wäre es mit einem kleinen Kampf?$"
# 879 "data/maps/Route110/scripts.pory"

# 880 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 881 "data/maps/Route110/scripts.pory"
	.string "AchDuSchande!\n"
# 882 "data/maps/Route110/scripts.pory"
	.string "Du bist besser, als ich gedacht habe.$"
# 883 "data/maps/Route110/scripts.pory"

# 884 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 885 "data/maps/Route110/scripts.pory"
	.string "Maike: {PLAYER}{KUN}, du hast auch fleißig\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "trainiert, nicht wahr?\p"
# 887 "data/maps/Route110/scripts.pory"
	.string "Ich denke, du verdienst eine Belohnung!\n"
# 888 "data/maps/Route110/scripts.pory"
	.string "Hier, dies ist von mir für dich!$"
# 889 "data/maps/Route110/scripts.pory"

# 890 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 891 "data/maps/Route110/scripts.pory"
	.string "Maike: Das ist ein Detektor.\p"
# 892 "data/maps/Route110/scripts.pory"
	.string "Probier ihn mal aus. Wenn irgendwo ein\n"
# 893 "data/maps/Route110/scripts.pory"
	.string "Item versteckt ist, gibt er ein\l"
# 894 "data/maps/Route110/scripts.pory"
	.string "Geräusch von sich.\p"
# 895 "data/maps/Route110/scripts.pory"
	.string "Bis zum nächsten Mal, {PLAYER}{KUN}.\p"
# 896 "data/maps/Route110/scripts.pory"
	.string "Es hört sich aus meinem Munde zwar blöd\n"
# 897 "data/maps/Route110/scripts.pory"
	.string "an, aber bis dahin solltest du viel mehr\l"
# 898 "data/maps/Route110/scripts.pory"
	.string "trainiert haben.$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 901 "data/maps/Route110/scripts.pory"
	.string "Brix: Hey, {PLAYER}.\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "Hier treibst du dich also herum.\l"
# 903 "data/maps/Route110/scripts.pory"
	.string "Wie geht es?\p"
# 904 "data/maps/Route110/scripts.pory"
	.string "Hast du deine Pokémon gut aufgezogen?\n"
# 905 "data/maps/Route110/scripts.pory"
	.string "Ich werde das für dich überprüfen.$"
# 906 "data/maps/Route110/scripts.pory"

# 907 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 908 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 909 "data/maps/Route110/scripts.pory"
	.string "Du bist ziemlich gut.$"
# 910 "data/maps/Route110/scripts.pory"

# 911 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 912 "data/maps/Route110/scripts.pory"
	.string "Brix: {PLAYER}, du hast trainiert,\n"
# 913 "data/maps/Route110/scripts.pory"
	.string "ohne dass ich etwas davon\l"
# 914 "data/maps/Route110/scripts.pory"
	.string "mitbekommen habe…\p"
# 915 "data/maps/Route110/scripts.pory"
	.string "Aber genug!\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "Hier, das ist für dich!$"
# 917 "data/maps/Route110/scripts.pory"

# 918 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 919 "data/maps/Route110/scripts.pory"
	.string "Brix: Das ist ein Detektor.\p"
# 920 "data/maps/Route110/scripts.pory"
	.string "Probier ihn mal aus. \p"
# 921 "data/maps/Route110/scripts.pory"
	.string "Ist irgendwo ein Item versteckt, gibt\n"
# 922 "data/maps/Route110/scripts.pory"
	.string "er ein Geräusch von sich.\p"
# 923 "data/maps/Route110/scripts.pory"
	.string "Wie auch immer, ich suche jetzt weiter\n"
# 924 "data/maps/Route110/scripts.pory"
	.string "nach Pokémon.$"
# 925 "data/maps/Route110/scripts.pory"

# 926 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 927 "data/maps/Route110/scripts.pory"
	.string "Wäre das nicht ein Spaß, mit einem Fahr-\n"
# 928 "data/maps/Route110/scripts.pory"
	.string "rad mit Vollgas den Radweg\l"
# 929 "data/maps/Route110/scripts.pory"
	.string "entlangzudüsen?$"
# 930 "data/maps/Route110/scripts.pory"

# 931 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 932 "data/maps/Route110/scripts.pory"
	.string "Gefällt es dir, wie mein raben-\n"
# 933 "data/maps/Route110/scripts.pory"
	.string "schwarzes Haar im Wind weht?\p"
# 934 "data/maps/Route110/scripts.pory"
	.string "Ich habe nur deshalb die Haare wachsen\n"
# 935 "data/maps/Route110/scripts.pory"
	.string "lassen!$"
# 936 "data/maps/Route110/scripts.pory"

# 937 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 938 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, du hast ein Rad von Radla!\p"
# 939 "data/maps/Route110/scripts.pory"
	.string "Oh, das ist mehr als offensichtlich.\n"
# 940 "data/maps/Route110/scripts.pory"
	.string "Es steht ja dort geschrieben…\p"
# 941 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\p"
# 943 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\n"
# 944 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\p"
# 945 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\n"
# 946 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\p"
# 947 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\n"
# 948 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla,\p"
# 949 "data/maps/Route110/scripts.pory"
	.string "Radla, Radla, Radla, Radla, Radla…\n"
# 950 "data/maps/Route110/scripts.pory"
	.string "Der Name steht überall.\p"
# 951 "data/maps/Route110/scripts.pory"
	.string "Du solltest damit überall herumfahren,\n"
# 952 "data/maps/Route110/scripts.pory"
	.string "eine bessere Werbung gibt es nicht!$"
# 953 "data/maps/Route110/scripts.pory"

# 954 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 955 "data/maps/Route110/scripts.pory"
	.string "Zwei Straßen, eine oben, eine unten…\p"
# 956 "data/maps/Route110/scripts.pory"
	.string "Eine Straße für Menschen und eine für\n"
# 957 "data/maps/Route110/scripts.pory"
	.string "Pokémon. Das ist nur recht und billig.$"
# 958 "data/maps/Route110/scripts.pory"

# 959 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 960 "data/maps/Route110/scripts.pory"
	.string "Ich habe kein Rad, ich werde gemüt-\n"
# 961 "data/maps/Route110/scripts.pory"
	.string "lich über die untere Straße schlendern.$"
# 962 "data/maps/Route110/scripts.pory"

# 963 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 964 "data/maps/Route110/scripts.pory"
	.string "Neue Techniken zu lernen, gibt dem\n"
# 965 "data/maps/Route110/scripts.pory"
	.string "Radfahren erst die richtige Würze.\p"
# 966 "data/maps/Route110/scripts.pory"
	.string "Einige Orte kannst du nur erreichen,\n"
# 967 "data/maps/Route110/scripts.pory"
	.string "wenn du die richtige Technik anwendest.$"
# 968 "data/maps/Route110/scripts.pory"

# 969 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 970 "data/maps/Route110/scripts.pory"
	.string "Was soll ich tun?\p"
# 971 "data/maps/Route110/scripts.pory"
	.string "Schnurstracks über den Radweg nach\n"
# 972 "data/maps/Route110/scripts.pory"
	.string "Malvenfroh City fahren oder die untere\p"
# 973 "data/maps/Route110/scripts.pory"
	.string "Straße nehmen und nach Pokémon\n"
# 974 "data/maps/Route110/scripts.pory"
	.string "suchen?$"
# 975 "data/maps/Route110/scripts.pory"

# 976 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 977 "data/maps/Route110/scripts.pory"
	.string "Anzahl der Zusammenstöße:\n"
# 978 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 979 "data/maps/Route110/scripts.pory"
	.string "Zeit:\n"
# 980 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 981 "data/maps/Route110/scripts.pory"

# 982 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 983 "data/maps/Route110/scripts.pory"
	.string "Bravo! Eine hervorragende Leistung!\p"
# 984 "data/maps/Route110/scripts.pory"
	.string "Ich glaube, dein Talent zum Radfahren\n"
# 985 "data/maps/Route110/scripts.pory"
	.string "kommt tief aus deinem innersten Herzen.\l"
# 986 "data/maps/Route110/scripts.pory"
	.string "Du hast mich bis in die Seele getroffen!$"
# 987 "data/maps/Route110/scripts.pory"

# 988 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 989 "data/maps/Route110/scripts.pory"
	.string "Deine Technik ist bemerkenswert.\p"
# 990 "data/maps/Route110/scripts.pory"
	.string "Achte stets darauf, dass du nicht zu\n"
# 991 "data/maps/Route110/scripts.pory"
	.string "schnell fährst und mit niemandem zu-\l"
# 992 "data/maps/Route110/scripts.pory"
	.string "sammenstößt.$"
# 993 "data/maps/Route110/scripts.pory"

# 994 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 995 "data/maps/Route110/scripts.pory"
	.string "Ich rate dir, weiter zu üben.\p"
# 996 "data/maps/Route110/scripts.pory"
	.string "Und ich wünsche dir, dass du das Ver-\n"
# 997 "data/maps/Route110/scripts.pory"
	.string "gnügen des Radfahrens nie vergisst.$"
# 998 "data/maps/Route110/scripts.pory"

# 999 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1000 "data/maps/Route110/scripts.pory"
	.string "Ich sage… dein Talent zum Radfahren\n"
# 1001 "data/maps/Route110/scripts.pory"
	.string "ist einfach miserabel.\p"
# 1002 "data/maps/Route110/scripts.pory"
	.string "Du brauchst wirklich noch viel mehr\n"
# 1003 "data/maps/Route110/scripts.pory"
	.string "Übung im Radfahren.$"
# 1004 "data/maps/Route110/scripts.pory"

# 1005 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1006 "data/maps/Route110/scripts.pory"
	.string "… Ich bin entgeistert…\p"
# 1007 "data/maps/Route110/scripts.pory"
	.string "Du hast wirklich kein Talent zum\n"
# 1008 "data/maps/Route110/scripts.pory"
	.string "Radfahren.\p"
# 1009 "data/maps/Route110/scripts.pory"
	.string "Du solltest ernsthaft darüber nach-\n"
# 1010 "data/maps/Route110/scripts.pory"
	.string "denken, dein Rad bei Radla\l"
# 1011 "data/maps/Route110/scripts.pory"
	.string "zurückzugeben.$"
# 1012 "data/maps/Route110/scripts.pory"

# 1013 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1014 "data/maps/Route110/scripts.pory"
	.string "Dies ist der Radweg.\p"
# 1015 "data/maps/Route110/scripts.pory"
	.string "Wenn du mit einem Eilrad von Malven-\n"
# 1016 "data/maps/Route110/scripts.pory"
	.string "froh City nach Graphitport City\p"
# 1017 "data/maps/Route110/scripts.pory"
	.string "fährst, wirst du nach der Anzahl der\n"
# 1018 "data/maps/Route110/scripts.pory"
	.string "Zusammenstöße und deiner Zeit\l"
# 1019 "data/maps/Route110/scripts.pory"
	.string "bewertet.$"
# 1020 "data/maps/Route110/scripts.pory"

# 1021 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1022 "data/maps/Route110/scripts.pory"
	.string "Unabhängig von den Resultaten möchte\n"
# 1023 "data/maps/Route110/scripts.pory"
	.string "ich mehr Herausforderungen von dir\l"
# 1024 "data/maps/Route110/scripts.pory"
	.string "sehen. Immer das höchste Ziel im Auge\l"
# 1025 "data/maps/Route110/scripts.pory"
	.string "behalten!$"
# 1026 "data/maps/Route110/scripts.pory"

# 1027 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1028 "data/maps/Route110/scripts.pory"
	.string "Auf diesem Radweg werden die, die\n"
# 1029 "data/maps/Route110/scripts.pory"
	.string "Eilräder fahren, nach ihren Zu-\l"
# 1030 "data/maps/Route110/scripts.pory"
	.string "sammenstößen und ihrer Zeit bewertet.\p"
# 1031 "data/maps/Route110/scripts.pory"
	.string "Kunsträder nehmen nicht am\n"
# 1032 "data/maps/Route110/scripts.pory"
	.string "Wettkampf teil. Sie sind zu einfach\l"
# 1033 "data/maps/Route110/scripts.pory"
	.string "zu lenken.$"
# 1034 "data/maps/Route110/scripts.pory"

# 1035 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 1036 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 1037 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Graphitport City$"
# 1038 "data/maps/Route110/scripts.pory"

# 1039 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1040 "data/maps/Route110/scripts.pory"
	.string "Küstenradweg$"
# 1041 "data/maps/Route110/scripts.pory"

# 1042 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 1043 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua war hier!”\p"
# 1044 "data/maps/Route110/scripts.pory"
	.string "Das hat jemand auf das Schild\n"
# 1045 "data/maps/Route110/scripts.pory"
	.string "gekritzelt. Ein anderer hat es \l"
# 1046 "data/maps/Route110/scripts.pory"
	.string "überschrieben.\p"
# 1047 "data/maps/Route110/scripts.pory"
	.string "“Team Magma ist das beste Team!”\n"
# 1048 "data/maps/Route110/scripts.pory"
	.string "steht da nun.$"
# 1049 "data/maps/Route110/scripts.pory"

# 1050 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 1051 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 1052 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 1053 "data/maps/Route110/scripts.pory"

# 1054 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1055 "data/maps/Route110/scripts.pory"
	.string "Küstenparkplatz$"
# 1056 "data/maps/Route110/scripts.pory"

# 1057 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1058 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 1059 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Malvenfroh City$"
# 1060 "data/maps/Route110/scripts.pory"

# 1061 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1062 "data/maps/Route110/scripts.pory"
	.string "Tipps für Trainer\p"
# 1063 "data/maps/Route110/scripts.pory"
	.string "Der Gegner kann paralysiert oder\n"
# 1064 "data/maps/Route110/scripts.pory"
	.string "in Schlaf versetzt werden und ist damit\l"
# 1065 "data/maps/Route110/scripts.pory"
	.string "wehrlos.\p"
# 1066 "data/maps/Route110/scripts.pory"
	.string "Das sind wichtige Techniken in einem\n"
# 1067 "data/maps/Route110/scripts.pory"
	.string "Pokémon-Kampf.$"
# 1068 "data/maps/Route110/scripts.pory"

# 1069 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1070 "data/maps/Route110/scripts.pory"
	.string "Tipps für Trainer\p"
# 1071 "data/maps/Route110/scripts.pory"
	.string "Die Items in dem Beutel können mit\n"
# 1072 "data/maps/Route110/scripts.pory"
	.string "Select neu geordnet werden.$"
# 1073 "data/maps/Route110/scripts.pory"

# 1074 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 1075 "data/maps/Route110/scripts.pory"
	.string "“Drei Schritte {RIGHT_ARROW} und zwei Schritte {UP_ARROW}\n"
# 1076 "data/maps/Route110/scripts.pory"
	.string "und du erreichst das wundersame\l"
# 1077 "data/maps/Route110/scripts.pory"
	.string "Rätselhaus.”$"
# 1078 "data/maps/Route110/scripts.pory"

# 1079 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 1080 "data/maps/Route110/scripts.pory"
	.string "Das beste Ergebnis…\p"
# 1081 "data/maps/Route110/scripts.pory"
	.string "Anzahl der Zusammenstöße: {STR_VAR_1}\p"
# 1082 "data/maps/Route110/scripts.pory"
	.string "Zeit: {STR_VAR_2}$"
# 1083 "data/maps/Route110/scripts.pory"

# 1084 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1085 "data/maps/Route110/scripts.pory"
	.string "Das beste Ergebnis…\p"
# 1086 "data/maps/Route110/scripts.pory"
	.string "Niemand scheint sich bis jetzt der He-\n"
# 1087 "data/maps/Route110/scripts.pory"
	.string "rausforderung gestellt zu haben…$"
# 1088 "data/maps/Route110/scripts.pory"

# 1089 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1090 "data/maps/Route110/scripts.pory"
	.string "Prof. Birk: Oh, {PLAYER}{KUN}!\n"
# 1091 "data/maps/Route110/scripts.pory"
	.string "Ich dachte mir schon, dass ich dich hier\l"
# 1092 "data/maps/Route110/scripts.pory"
	.string "treffe!\p"
# 1093 "data/maps/Route110/scripts.pory"
	.string "Und wo mag {RIVAL} sein?$"
# 1094 "data/maps/Route110/scripts.pory"

# 1095 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1096 "data/maps/Route110/scripts.pory"
	.string "Ach so.\n"
# 1097 "data/maps/Route110/scripts.pory"
	.string "Ihr beiden seid nicht zusammen\l"
# 1098 "data/maps/Route110/scripts.pory"
	.string "unterwegs.\p"
# 1099 "data/maps/Route110/scripts.pory"
	.string "Ich habe schon davon gehört. Dein\n"
# 1100 "data/maps/Route110/scripts.pory"
	.string "Pokénav ist mit dem Trainer/Ruf-\l"
# 1101 "data/maps/Route110/scripts.pory"
	.string "System ausgerüstet.\p"
# 1102 "data/maps/Route110/scripts.pory"
	.string "Dann werde ich dich in mein Pokénav-\n"
# 1103 "data/maps/Route110/scripts.pory"
	.string "Verzeichnis eintragen.\p"
# 1104 "data/maps/Route110/scripts.pory"
	.string "So kann ich deinen Pokédex beurteilen,\n"
# 1105 "data/maps/Route110/scripts.pory"
	.string "auch wenn du weit weg bist.\p"
# 1106 "data/maps/Route110/scripts.pory"
	.string "… … … … …$"
# 1107 "data/maps/Route110/scripts.pory"

# 1108 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1109 "data/maps/Route110/scripts.pory"
	.string "Prof. Birk wurde in das Pokénav-\n"
# 1110 "data/maps/Route110/scripts.pory"
	.string "Verzeichnis eingetragen.$"
# 1111 "data/maps/Route110/scripts.pory"

# 1112 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1113 "data/maps/Route110/scripts.pory"
	.string "Prof. Birk: {PLAYER}{KUN}…\p"
# 1114 "data/maps/Route110/scripts.pory"
	.string "Bitte achte ein wenig auf {RIVAL}.\n"
# 1115 "data/maps/Route110/scripts.pory"
	.string "… … … … …\l"
# 1116 "data/maps/Route110/scripts.pory"
	.string "…\p"
# 1117 "data/maps/Route110/scripts.pory"
	.string "Nun muss ich mich aber beeilen.\n"
# 1118 "data/maps/Route110/scripts.pory"
	.string "Man sieht sich, {PLAYER}{KUN}.$"

Route110_EventScript_PkmnSign_Text_0:
# 2 "data/maps/Route110/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die auf dieser Route leben.$"

Route110_EventScript_PkmnSign_Text_1:
# 4 "data/maps/Route110/scripts.pory"
	.string "Hohes Gras$"

Route110_EventScript_PkmnSign_Text_2:
# 4 "data/maps/Route110/scripts.pory"
	.string "Wasser$"

Route110_EventScript_PkmnSign_Text_3:
# 4 "data/maps/Route110/scripts.pory"
	.string "Angel$"

Route110_Text_PkmnSignGras::
# 91 "data/maps/Route110/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im hohen Gras:$"

Route110_Text_PkmnSignWasser::
# 95 "data/maps/Route110/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route110_Text_PkmnSignAngel::
# 99 "data/maps/Route110/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route110_Text_PkmnSignAngel2::
# 103 "data/maps/Route110/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route110_Text_PkmnSignAngel3::
# 107 "data/maps/Route110/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
