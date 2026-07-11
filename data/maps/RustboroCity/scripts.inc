# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 3 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 4 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 5 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity/scripts.pory"

# 7 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 8 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 9 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 11 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 13 "data/maps/RustboroCity/scripts.pory"
	end
# 14 "data/maps/RustboroCity/scripts.pory"

# 15 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 16 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 17 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 18 "data/maps/RustboroCity/scripts.pory"
	end
# 19 "data/maps/RustboroCity/scripts.pory"

# 20 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 21 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 22 "data/maps/RustboroCity/scripts.pory"
	end
# 23 "data/maps/RustboroCity/scripts.pory"

# 24 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 25 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 26 "data/maps/RustboroCity/scripts.pory"
	return
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 29 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 30 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 33 "data/maps/RustboroCity/scripts.pory"
	lockall
# 34 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 35 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 36 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 39 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 40 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 41 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 42 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 43 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 44 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 46 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 50 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 52 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 53 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 57 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 58 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 59 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 60 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 61 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 62 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 63 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 64 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 65 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 69 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 70 "data/maps/RustboroCity/scripts.pory"

# 71 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 72 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 74 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 75 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 76 "data/maps/RustboroCity/scripts.pory"

# 77 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 78 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 79 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 80 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 82 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 83 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 84 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 85 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 86 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 87 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 88 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 89 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 90 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 91 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 92 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 93 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 94 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 95 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 96 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 97 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 98 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 99 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 100 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 101 "data/maps/RustboroCity/scripts.pory"
	end
# 102 "data/maps/RustboroCity/scripts.pory"

# 103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 104 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 105 "data/maps/RustboroCity/scripts.pory"
	step_end
# 106 "data/maps/RustboroCity/scripts.pory"

# 107 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 108 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 109 "data/maps/RustboroCity/scripts.pory"
	step_end
# 110 "data/maps/RustboroCity/scripts.pory"

# 111 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 112 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 113 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 114 "data/maps/RustboroCity/scripts.pory"
	step_end
# 115 "data/maps/RustboroCity/scripts.pory"

# 116 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 118 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 123 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 124 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 125 "data/maps/RustboroCity/scripts.pory"
	step_end
# 126 "data/maps/RustboroCity/scripts.pory"

# 127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 128 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 129 "data/maps/RustboroCity/scripts.pory"
	step_end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 132 "data/maps/RustboroCity/scripts.pory"
	lock
# 133 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 134 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 135 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 136 "data/maps/RustboroCity/scripts.pory"
	release
# 137 "data/maps/RustboroCity/scripts.pory"
	end
# 138 "data/maps/RustboroCity/scripts.pory"

# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 140 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 141 "data/maps/RustboroCity/scripts.pory"
	release
# 142 "data/maps/RustboroCity/scripts.pory"
	end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 145 "data/maps/RustboroCity/scripts.pory"
	lock
# 146 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 147 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 148 "data/maps/RustboroCity/scripts.pory"
	release
# 149 "data/maps/RustboroCity/scripts.pory"
	end
# 150 "data/maps/RustboroCity/scripts.pory"

# 151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 152 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 153 "data/maps/RustboroCity/scripts.pory"
	end
# 154 "data/maps/RustboroCity/scripts.pory"

# 155 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 156 "data/maps/RustboroCity/scripts.pory"
	lock
# 157 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 158 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 159 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity/scripts.pory"
	release
# 161 "data/maps/RustboroCity/scripts.pory"
	end
# 162 "data/maps/RustboroCity/scripts.pory"

# 163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 165 "data/maps/RustboroCity/scripts.pory"
	release
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 169 "data/maps/RustboroCity/scripts.pory"
	lock
# 170 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 171 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 172 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 173 "data/maps/RustboroCity/scripts.pory"
	release
# 174 "data/maps/RustboroCity/scripts.pory"
	end
# 175 "data/maps/RustboroCity/scripts.pory"

# 176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity/scripts.pory"
	release
# 179 "data/maps/RustboroCity/scripts.pory"
	end
# 180 "data/maps/RustboroCity/scripts.pory"

# 181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 187 "data/maps/RustboroCity/scripts.pory"
	end
# 188 "data/maps/RustboroCity/scripts.pory"

# 189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 190 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 191 "data/maps/RustboroCity/scripts.pory"
	end
# 192 "data/maps/RustboroCity/scripts.pory"

# 193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 194 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 195 "data/maps/RustboroCity/scripts.pory"
	end
# 196 "data/maps/RustboroCity/scripts.pory"

# 197 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 198 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 199 "data/maps/RustboroCity/scripts.pory"
	end
# 200 "data/maps/RustboroCity/scripts.pory"

# 201 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 204 "data/maps/RustboroCity/scripts.pory"
	end
# 205 "data/maps/RustboroCity/scripts.pory"

# 206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 207 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 208 "data/maps/RustboroCity/scripts.pory"
	end
# 209 "data/maps/RustboroCity/scripts.pory"

# 210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 211 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 212 "data/maps/RustboroCity/scripts.pory"
	end
# 213 "data/maps/RustboroCity/scripts.pory"

# 214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 216 "data/maps/RustboroCity/scripts.pory"
	end
# 217 "data/maps/RustboroCity/scripts.pory"

# 218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 219 "data/maps/RustboroCity/scripts.pory"
	lock
# 220 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 221 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 222 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 223 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/RustboroCity/scripts.pory"
	release
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 228 "data/maps/RustboroCity/scripts.pory"
	lock
# 229 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 230 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 231 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 232 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/RustboroCity/scripts.pory"
	release
# 234 "data/maps/RustboroCity/scripts.pory"
	end
# 235 "data/maps/RustboroCity/scripts.pory"

# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 237 "data/maps/RustboroCity/scripts.pory"
	lock
# 238 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 239 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity/scripts.pory"
	release
# 241 "data/maps/RustboroCity/scripts.pory"
	end
# 242 "data/maps/RustboroCity/scripts.pory"

# 243 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 244 "data/maps/RustboroCity/scripts.pory"
	lockall
# 245 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 246 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 247 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 248 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 249 "data/maps/RustboroCity/scripts.pory"
	end
# 250 "data/maps/RustboroCity/scripts.pory"

# 251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 252 "data/maps/RustboroCity/scripts.pory"
	lockall
# 253 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 254 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 255 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 256 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 257 "data/maps/RustboroCity/scripts.pory"
	end
# 258 "data/maps/RustboroCity/scripts.pory"

# 259 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 260 "data/maps/RustboroCity/scripts.pory"
	lockall
# 261 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 262 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 263 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 264 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 265 "data/maps/RustboroCity/scripts.pory"
	end
# 266 "data/maps/RustboroCity/scripts.pory"

# 267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 268 "data/maps/RustboroCity/scripts.pory"
	lockall
# 269 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 270 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 271 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 272 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 273 "data/maps/RustboroCity/scripts.pory"
	end
# 274 "data/maps/RustboroCity/scripts.pory"

# 275 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 276 "data/maps/RustboroCity/scripts.pory"
	lockall
# 277 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 278 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 279 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 280 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 281 "data/maps/RustboroCity/scripts.pory"
	end
# 282 "data/maps/RustboroCity/scripts.pory"

# 283 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 284 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 285 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 286 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 287 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 288 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 289 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 290 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 292 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 293 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 295 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 296 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 297 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 299 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 300 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 301 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 302 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 303 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 304 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 305 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 306 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 307 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 308 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 309 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 310 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 311 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 312 "data/maps/RustboroCity/scripts.pory"
	end
# 313 "data/maps/RustboroCity/scripts.pory"

# 314 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 315 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 316 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 317 "data/maps/RustboroCity/scripts.pory"
	return
# 318 "data/maps/RustboroCity/scripts.pory"

# 319 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 320 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 321 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 322 "data/maps/RustboroCity/scripts.pory"
	return
# 323 "data/maps/RustboroCity/scripts.pory"

# 324 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 326 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 327 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/RustboroCity/scripts.pory"
	return
# 329 "data/maps/RustboroCity/scripts.pory"

# 330 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 331 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 332 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 333 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 334 "data/maps/RustboroCity/scripts.pory"
	return
# 335 "data/maps/RustboroCity/scripts.pory"

# 336 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 337 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 338 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 339 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/RustboroCity/scripts.pory"
	return
# 341 "data/maps/RustboroCity/scripts.pory"

# 342 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 343 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 344 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 345 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 346 "data/maps/RustboroCity/scripts.pory"
	return
# 347 "data/maps/RustboroCity/scripts.pory"

# 348 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 350 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 351 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 352 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 353 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/RustboroCity/scripts.pory"
	return
# 355 "data/maps/RustboroCity/scripts.pory"

# 356 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 375 "data/maps/RustboroCity/scripts.pory"
	step_end
# 376 "data/maps/RustboroCity/scripts.pory"

# 377 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 394 "data/maps/RustboroCity/scripts.pory"
	step_end
# 395 "data/maps/RustboroCity/scripts.pory"

# 396 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 404 "data/maps/RustboroCity/scripts.pory"
	step_end
# 405 "data/maps/RustboroCity/scripts.pory"

# 406 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 414 "data/maps/RustboroCity/scripts.pory"
	step_end
# 415 "data/maps/RustboroCity/scripts.pory"

# 416 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 417 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 421 "data/maps/RustboroCity/scripts.pory"
	step_end
# 422 "data/maps/RustboroCity/scripts.pory"

# 423 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 424 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 429 "data/maps/RustboroCity/scripts.pory"
	step_end
# 430 "data/maps/RustboroCity/scripts.pory"

# 431 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	step_end
# 438 "data/maps/RustboroCity/scripts.pory"

# 439 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 446 "data/maps/RustboroCity/scripts.pory"
	step_end
# 447 "data/maps/RustboroCity/scripts.pory"

# 448 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 449 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 457 "data/maps/RustboroCity/scripts.pory"
	step_end
# 458 "data/maps/RustboroCity/scripts.pory"

# 459 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 460 "data/maps/RustboroCity/scripts.pory"
	lock
# 461 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 462 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 463 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 464 "data/maps/RustboroCity/scripts.pory"
	release
# 465 "data/maps/RustboroCity/scripts.pory"
	end
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 468 "data/maps/RustboroCity/scripts.pory"
	waitse
# 469 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 470 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 471 "data/maps/RustboroCity/scripts.pory"
	end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 474 "data/maps/RustboroCity/scripts.pory"
	lockall
# 475 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 476 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 477 "data/maps/RustboroCity/scripts.pory"
	end
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 480 "data/maps/RustboroCity/scripts.pory"
	lockall
# 481 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 482 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 483 "data/maps/RustboroCity/scripts.pory"
	end
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 486 "data/maps/RustboroCity/scripts.pory"
	lockall
# 487 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 488 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 492 "data/maps/RustboroCity/scripts.pory"
	lockall
# 493 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 494 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 495 "data/maps/RustboroCity/scripts.pory"
	end
# 496 "data/maps/RustboroCity/scripts.pory"

# 497 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 498 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 499 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 500 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 501 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 502 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 503 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 504 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 505 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 506 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 507 "data/maps/RustboroCity/scripts.pory"
	end
# 508 "data/maps/RustboroCity/scripts.pory"

# 509 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 510 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 511 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 512 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 514 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 515 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 516 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 517 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 519 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 520 "data/maps/RustboroCity/scripts.pory"
	return
# 521 "data/maps/RustboroCity/scripts.pory"

# 522 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 523 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 524 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 531 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/RustboroCity/scripts.pory"
	return
# 533 "data/maps/RustboroCity/scripts.pory"

# 534 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	return
# 545 "data/maps/RustboroCity/scripts.pory"

# 546 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 555 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 557 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/RustboroCity/scripts.pory"
	return
# 559 "data/maps/RustboroCity/scripts.pory"

# 560 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 561 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 562 "data/maps/RustboroCity/scripts.pory"
	step_end
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 565 "data/maps/RustboroCity/scripts.pory"
	lockall
# 566 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 567 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 568 "data/maps/RustboroCity/scripts.pory"
	end
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 571 "data/maps/RustboroCity/scripts.pory"
	lockall
# 572 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 573 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 574 "data/maps/RustboroCity/scripts.pory"
	end
# 575 "data/maps/RustboroCity/scripts.pory"

# 576 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 577 "data/maps/RustboroCity/scripts.pory"
	lockall
# 578 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 579 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 580 "data/maps/RustboroCity/scripts.pory"
	end
# 581 "data/maps/RustboroCity/scripts.pory"

# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 583 "data/maps/RustboroCity/scripts.pory"
	lockall
# 584 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 585 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 586 "data/maps/RustboroCity/scripts.pory"
	end
# 587 "data/maps/RustboroCity/scripts.pory"

# 588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 589 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 590 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 591 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 592 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 593 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 594 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 595 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 596 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 597 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 598 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 599 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 600 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 601 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 602 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 603 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 604 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 605 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 606 "data/maps/RustboroCity/scripts.pory"
	end
# 607 "data/maps/RustboroCity/scripts.pory"

# 608 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 609 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 610 "data/maps/RustboroCity/scripts.pory"
	return
# 611 "data/maps/RustboroCity/scripts.pory"

# 612 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 613 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 614 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 616 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 617 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 619 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 621 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/RustboroCity/scripts.pory"
	return
# 623 "data/maps/RustboroCity/scripts.pory"

# 624 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 625 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 626 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 628 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 629 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 633 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/RustboroCity/scripts.pory"
	return
# 635 "data/maps/RustboroCity/scripts.pory"

# 636 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 637 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 638 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 645 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/RustboroCity/scripts.pory"
	return
# 647 "data/maps/RustboroCity/scripts.pory"

# 648 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 649 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 650 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 657 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 659 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/RustboroCity/scripts.pory"
	return
# 661 "data/maps/RustboroCity/scripts.pory"

# 662 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 669 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/RustboroCity/scripts.pory"
	return
# 671 "data/maps/RustboroCity/scripts.pory"

# 672 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 673 "data/maps/RustboroCity/scripts.pory"
	lockall
# 674 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 678 "data/maps/RustboroCity/scripts.pory"

# 679 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 680 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 681 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 682 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 683 "data/maps/RustboroCity/scripts.pory"
	return
# 684 "data/maps/RustboroCity/scripts.pory"

# 685 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 686 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 687 "data/maps/RustboroCity/scripts.pory"
	return
# 688 "data/maps/RustboroCity/scripts.pory"

# 689 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 690 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 691 "data/maps/RustboroCity/scripts.pory"
	return
# 692 "data/maps/RustboroCity/scripts.pory"

# 693 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 694 "data/maps/RustboroCity/scripts.pory"
	lockall
# 695 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 696 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 697 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 702 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 703 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 704 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 705 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 706 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 707 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 708 "data/maps/RustboroCity/scripts.pory"

# 709 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 710 "data/maps/RustboroCity/scripts.pory"
	lockall
# 711 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 712 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 713 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 720 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 722 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 724 "data/maps/RustboroCity/scripts.pory"

# 725 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 726 "data/maps/RustboroCity/scripts.pory"
	lockall
# 727 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 736 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 738 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 740 "data/maps/RustboroCity/scripts.pory"

# 741 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 742 "data/maps/RustboroCity/scripts.pory"
	lockall
# 743 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 752 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 756 "data/maps/RustboroCity/scripts.pory"

# 757 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 758 "data/maps/RustboroCity/scripts.pory"
	lockall
# 759 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 768 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 769 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 770 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 772 "data/maps/RustboroCity/scripts.pory"

# 773 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 774 "data/maps/RustboroCity/scripts.pory"
	lockall
# 775 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 784 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 786 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 788 "data/maps/RustboroCity/scripts.pory"

# 789 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 790 "data/maps/RustboroCity/scripts.pory"
	lockall
# 791 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 800 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 801 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 802 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 804 "data/maps/RustboroCity/scripts.pory"

# 805 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 806 "data/maps/RustboroCity/scripts.pory"
	lockall
# 807 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 816 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 817 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 818 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 820 "data/maps/RustboroCity/scripts.pory"

# 821 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 822 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 823 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 824 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 825 "data/maps/RustboroCity/scripts.pory"
	end
# 826 "data/maps/RustboroCity/scripts.pory"

# 827 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 828 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 829 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 830 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 831 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 832 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 833 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 834 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 835 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 836 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 837 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 838 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 839 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 840 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 841 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 842 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 843 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 844 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 846 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 847 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 848 "data/maps/RustboroCity/scripts.pory"
	end
# 849 "data/maps/RustboroCity/scripts.pory"

# 850 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 851 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 852 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 853 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 854 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 855 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 856 "data/maps/RustboroCity/scripts.pory"
	end
# 857 "data/maps/RustboroCity/scripts.pory"

# 858 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 859 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 860 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 861 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 862 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 863 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 864 "data/maps/RustboroCity/scripts.pory"
	end
# 865 "data/maps/RustboroCity/scripts.pory"

# 866 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 867 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 868 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 869 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 870 "data/maps/RustboroCity/scripts.pory"
	end
# 871 "data/maps/RustboroCity/scripts.pory"

# 872 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 873 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 874 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 875 "data/maps/RustboroCity/scripts.pory"
	return
# 876 "data/maps/RustboroCity/scripts.pory"

# 877 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 878 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 879 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 880 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 881 "data/maps/RustboroCity/scripts.pory"
	end
# 882 "data/maps/RustboroCity/scripts.pory"

# 883 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 884 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 885 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 886 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 887 "data/maps/RustboroCity/scripts.pory"
	end
# 888 "data/maps/RustboroCity/scripts.pory"

# 889 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 890 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 891 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 892 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 893 "data/maps/RustboroCity/scripts.pory"
	end
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 896 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 897 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 898 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 899 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 900 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 901 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 902 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 903 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 904 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 905 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 906 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 907 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 908 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 909 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 910 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 911 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 912 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 913 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 914 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 915 "data/maps/RustboroCity/scripts.pory"
	end
# 916 "data/maps/RustboroCity/scripts.pory"

# 917 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 918 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 919 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 920 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 921 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 922 "data/maps/RustboroCity/scripts.pory"
	end
# 923 "data/maps/RustboroCity/scripts.pory"

# 924 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 925 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 926 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 927 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 928 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 929 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 930 "data/maps/RustboroCity/scripts.pory"
	end
# 931 "data/maps/RustboroCity/scripts.pory"

# 932 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 934 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 935 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 936 "data/maps/RustboroCity/scripts.pory"
	end
# 937 "data/maps/RustboroCity/scripts.pory"

# 938 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 939 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 940 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 941 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 942 "data/maps/RustboroCity/scripts.pory"
	end
# 943 "data/maps/RustboroCity/scripts.pory"

# 944 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 945 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 946 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 947 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 948 "data/maps/RustboroCity/scripts.pory"
	end
# 949 "data/maps/RustboroCity/scripts.pory"

# 950 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 951 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 952 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 953 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 954 "data/maps/RustboroCity/scripts.pory"
	end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 957 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 958 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 959 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 960 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 961 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 962 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 963 "data/maps/RustboroCity/scripts.pory"
	step_end
# 964 "data/maps/RustboroCity/scripts.pory"

# 965 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 966 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 967 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 968 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 969 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 970 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 971 "data/maps/RustboroCity/scripts.pory"
	step_end
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 974 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 976 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 977 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 978 "data/maps/RustboroCity/scripts.pory"
	step_end
# 979 "data/maps/RustboroCity/scripts.pory"

# 980 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 983 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 984 "data/maps/RustboroCity/scripts.pory"
	step_end
# 985 "data/maps/RustboroCity/scripts.pory"

# 986 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 987 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 989 "data/maps/RustboroCity/scripts.pory"
	step_end
# 990 "data/maps/RustboroCity/scripts.pory"

# 991 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 995 "data/maps/RustboroCity/scripts.pory"
	step_end
# 996 "data/maps/RustboroCity/scripts.pory"

# 997 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 998 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1001 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1002 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1003 "data/maps/RustboroCity/scripts.pory"

# 1004 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1005 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1006 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1007 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1008 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1009 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1010 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1011 "data/maps/RustboroCity/scripts.pory"

# 1012 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1013 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1014 "data/maps/RustboroCity/scripts.pory"
	end
# 1015 "data/maps/RustboroCity/scripts.pory"

# 1016 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "Die Devon Corporation…\n"
# 1018 "data/maps/RustboroCity/scripts.pory"
	.string "Wir nennen sie kurz Devon.\p"
# 1019 "data/maps/RustboroCity/scripts.pory"
	.string "Die Firma stellt viele praktische\n"
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "Dinge her.$"
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? Ein verschlagen wirkender Mann?\p"
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich so darüber nachdenke, fällt mir\n"
# 1025 "data/maps/RustboroCity/scripts.pory"
	.string "ein, dass ich einen zwielichtigen Typen\l"
# 1026 "data/maps/RustboroCity/scripts.pory"
	.string "eben hier an der Ecke gesehen habe.$"
# 1027 "data/maps/RustboroCity/scripts.pory"

# 1028 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "Hast du schon die Herausforderung der\n"
# 1030 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Arena angenommen?\p"
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "Ich glaube, wenn sie den glänzenden\n"
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "Orden der Arena in der Hand halten, wird\l"
# 1033 "data/maps/RustboroCity/scripts.pory"
	.string "den Trainern klar, was von ihnen\l"
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "verlangt wird.$"
# 1035 "data/maps/RustboroCity/scripts.pory"

# 1036 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, das ist der Orden der Arena von\n"
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "Metarost City!\p"
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "Von allen Arena-Orden ist der von\n"
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "Metarost City der coolste, sage ich dir.$"
# 1041 "data/maps/RustboroCity/scripts.pory"

# 1042 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Wer magst du wohl sein?\n"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "Ein neues Gesicht in dieser Gegend.\p"
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "Bist du gerade in die Pokémon Trainer-\n"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "schule gekommen?$"
# 1047 "data/maps/RustboroCity/scripts.pory"

# 1048 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1049 "data/maps/RustboroCity/scripts.pory"
	.string "Ich habe den Arenaleiter heraus-\n"
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "gefordert, aber…\p"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "Es ist nicht einfach, mit meinen Feuer-\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon zu gewinnen…\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "Feuer-Pokémon haben keinen guten\n"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "Stand gegenüber Gestein-Pokémon.$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "Der alte Seebär Mr. Brack lebt in einer\n"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "Er geht sehr oft in dem Tunnel\n"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "spazieren.$"
# 1061 "data/maps/RustboroCity/scripts.pory"

# 1062 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "Der alte Seebär Mr. Brack lebt in einer\n"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "Er sagt, er wäre in Graphitport City\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "gewesen, um etwas für sein Haustier,\l"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "Pecko, zu kaufen.\p"
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "Der alte Seebär muss sein Pecko\n"
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "wirklich sehr lieben.$"
# 1070 "data/maps/RustboroCity/scripts.pory"

# 1071 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, du hast ja auch Pokémon dabei.\p"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich größer bin, werde ich auch\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "immer Pokémon dabeihaben.$"
# 1075 "data/maps/RustboroCity/scripts.pory"

# 1076 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainerschule!\p"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich in diese Schule gehe, werde ich\n"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "später seltene Pokémon fangen können?$"
# 1080 "data/maps/RustboroCity/scripts.pory"

# 1081 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ein Pokémon Erfahrungen im Kampf\n"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "sammelt, kann es vorkommen, dass es\l"
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "irgendwann sein Aussehen verändert.$"
# 1085 "data/maps/RustboroCity/scripts.pory"

# 1086 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "Ein Pokémon verändert sein Aussehen?!\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn es das tun würde, wäre ich zu Tode\l"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "erschrocken!$"
# 1090 "data/maps/RustboroCity/scripts.pory"

# 1091 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "Ein Pokémon, das du durch Tausch\n"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "erhältst, wächst schnell.\p"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "Aber wenn dir Orden von bestimmten\n"
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "Arenen fehlen, wird es dir eventuell\l"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "nicht gehorchen.$"
# 1097 "data/maps/RustboroCity/scripts.pory"

# 1098 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "Geh weg! Aus dem Weg!$"
# 1100 "data/maps/RustboroCity/scripts.pory"

# 1101 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "Warte! Waaaaarte doch! Bitte!\p"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "Du kannst doch nicht einfach meine\n"
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "Waren stehlen!$"
# 1105 "data/maps/RustboroCity/scripts.pory"

# 1106 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, du bist das!\p"
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist dieser großartige Trainer, der\n"
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "mir im Blütenburgwald geholfen hat.\p"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "Hilf mir! Team Aqua hat mich aus-\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "geraubt! Ich muss die Devon-Waren\l"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "zurückbekommen.\p"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich sie nicht bekomme…\n"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "dann habe ich ein riesiges Problem.$"
# 1115 "data/maps/RustboroCity/scripts.pory"

# 1116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "Ich glaube, dieser zwielichtige Typ ist\n"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "in Richtung Tunnel gelaufen.$"
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! Und? Wie sieht es aus?\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "Die Devon-Waren?\p"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "Du hast es geschafft!\n"
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Du hast sie zurückbekommen!\p"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist wirklich ein großer Trainer!\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Ich weiß! Ich werde dir zum Dank einen\l"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "weiteren Superball schenken!$"
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist mit Items überfrachtet.\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "Ich kann dir den Superball nicht geben.$"
# 1132 "data/maps/RustboroCity/scripts.pory"

# 1133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "Bitte entschuldige!\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "Würdest du mir bitte folgen?$"
# 1136 "data/maps/RustboroCity/scripts.pory"

# 1137 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Oh, hi, {PLAYER}{KUN}!\p"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "Dein Pokénav besitzt die Trainer/Ruf-\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "Funktion!\p"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "Wir tragen uns gegenseitig ein, so\n"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "bleiben wir in Kontakt.\p"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1144 "data/maps/RustboroCity/scripts.pory"

# 1145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "Maike wurde im Pokénav-Verzeichnis\n"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "eingetragen.$"
# 1148 "data/maps/RustboroCity/scripts.pory"

# 1149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Ach, übrigens. Ich habe Mr.\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "Brack im Blütenburgwald gesehen.\p"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "Ich glaube, er ist auf dem Weg zu seiner\n"
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Wie geht es mit deinem Pokédex voran?\n"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "Meiner sieht schon ganz anständig aus.\p"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "Daher…\n"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "Wie wäre es mit einem kleinen Kampf?$"
# 1158 "data/maps/RustboroCity/scripts.pory"

# 1159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Oh, was ist das?\p"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "Du hast dich aber nicht um deine\n"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon gekümmert? Und auch\l"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "nicht viele gefangen?\p"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "Als Trainer machst du wirklich keinen\n"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "guten Eindruck!$"
# 1166 "data/maps/RustboroCity/scripts.pory"

# 1167 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Was hältst du von einem Kampf?$"
# 1169 "data/maps/RustboroCity/scripts.pory"

# 1170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Du bist gerade erst Trainer\n"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "geworden, {PLAYER}{KUN}. Ich werde nicht\l"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "verlieren.$"
# 1174 "data/maps/RustboroCity/scripts.pory"

# 1175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "AchDuSchande!\n"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist besser, als ich gedacht habe.$"
# 1178 "data/maps/RustboroCity/scripts.pory"

# 1179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Ach, übrigens. Ich habe Mr.\n"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "Brack im Blütenburgwald gesehen.\p"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, du bist gerade hierher\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "gezogen, daher kannst du das nicht\l"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "wissen, aber Mr. Brack war Seefahrer.$"
# 1185 "data/maps/RustboroCity/scripts.pory"

# 1186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Oh, hey, {PLAYER}!\p"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "Dein Pokénav besitzt die Trainer/Ruf-\n"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "Funktion! Cool!\p"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "Wir tragen uns gegenseitig ein, dann\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "können wir jederzeit miteinander reden!\p"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "Brix wurde im Pokénav-Verzeichnis\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "eingetragen.$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Ich habe Mr. Brack im\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "Blütenburgwald gesehen, {PLAYER}.\p"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "Ich wette, er ist auf dem Weg zu seiner\n"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, wie sieht es mit\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "deinem Pokédex aus?\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "Meiner ist eine Wucht.\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "Zeig mir, wie gut du geworden bist.\n"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "Ich werde dich jetzt testen!$"
# 1208 "data/maps/RustboroCity/scripts.pory"

# 1209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Oh, hast du ein Problem? Nicht\n"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "genügend Selbstbewusstsein und\l"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "Vertrauen in deine Pokémon, was?$"
# 1213 "data/maps/RustboroCity/scripts.pory"

# 1214 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Wie geht's? Lust auf einen Kampf?$"
# 1216 "data/maps/RustboroCity/scripts.pory"

# 1217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Ich weiß, du bist gerade erst ein\n"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "Trainer geworden, aber ich werde mich\l"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "nicht zurückhalten.$"
# 1221 "data/maps/RustboroCity/scripts.pory"

# 1222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist ziemlich gut.$"
# 1225 "data/maps/RustboroCity/scripts.pory"

# 1226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Kennst du eigentlich Mr. Brack?\n"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "Den Typ, den ich getroffen habe?\p"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist gerade erst hierher gezogen,\n"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "daher weißt du das vielleicht noch\l"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "nicht, aber Mr. Brack war mal Seefahrer.$"
# 1232 "data/maps/RustboroCity/scripts.pory"

# 1233 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "Tunnel zur Abkürzung steht vor\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "Fertigstellung!\p"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "… Das steht auf dem Schild, aber\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "darüber wurde ein X\l"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "in roter Farbe gemalt…$"
# 1239 "data/maps/RustboroCity/scripts.pory"

# 1240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "Alles, was man im Leben braucht - \n"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "wir stellen es her.$"
# 1244 "data/maps/RustboroCity/scripts.pory"

# 1245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Arena von Metarost City\n"
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "Leiterin: Felizia\p"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "Gestein-Liebhaberin und\n"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "Musterschülerin!$"
# 1250 "data/maps/RustboroCity/scripts.pory"

# 1251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Filiale\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "Zutritt nur für Angestellte von Devon\n"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "und autorisierte Personen.$"
# 1255 "data/maps/RustboroCity/scripts.pory"

# 1256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "Metarost City\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "Diese Stadt steht im Zeichen der\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "Integration von Natur und\l"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "Wissenschaften.$"
# 1261 "data/maps/RustboroCity/scripts.pory"

# 1262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainerschule\p"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "Wir bringen dir alles über\n"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon bei!$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "Haus des Zerschneiders$"
# 1269 "data/maps/RustboroCity/scripts.pory"

# 1270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "Ich habe neues Zubehör für den Pokénav\n"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "entwickelt…\p"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "Und es funktioniert großartig!\p"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "Zeigst du mir mal deinen Pokénav,\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}? Den du von unserem\l"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "Präsidenten bekommen hast.$"
# 1277 "data/maps/RustboroCity/scripts.pory"

# 1278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "Hier, bitte schön, {PLAYER}.\p"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "Ich habe deinen Pokénav mit dem\n"
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "so genannten Trainer/Ruf\l"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "ausgestattet.\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "Trage deine Freunde und andere\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "Personen in das Verzeichnis ein. Dann\l"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "kannst du mit ihnen reden.\p"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "Du solltest auch unseren Präsidenten\n"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "Trumm eintragen, {PLAYER}.\p"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "Probier es mal aus.\n"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "Ruf unseren Präsidenten an.$"
# 1290 "data/maps/RustboroCity/scripts.pory"

# 1291 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "Wähle Pokénav.$"
# 1293 "data/maps/RustboroCity/scripts.pory"

# 1294 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "So, jetzt muss ich aber weiterarbeiten.\n"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "Pass auf dich auf, {PLAYER}.$"
# 1297 "data/maps/RustboroCity/scripts.pory"

# 1298 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "Weißt du das schon?\p"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "Du kannst auch an 2-gegen-2-Kämpfen\n"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "teilnehmen, wenn du allein unterwegs\l"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "bist.\p"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "Triffst du auf zwei Trainer und hast\n"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "mindestens zwei Pokémon dabei, werden\l"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "sie dich beide herausfordern.\p"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "Ich finde es total cool, wenn man allein\n"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "zwei Trainer besiegt. Meinst du nicht?$"
