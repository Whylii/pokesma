RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 17 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_1
# 4 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_2
# 5 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_TEMP_3
# 6 "data/maps/RustboroCity/scripts.pory"
	random 3
# 7 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 10 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 12 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_1
	return

RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 11 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_2
	return

RustboroCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 13 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_TEMP_3
	return


# 20 "data/maps/RustboroCity/scripts.pory"

# 21 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 22 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 23 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 24 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 25 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 26 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 27 "data/maps/RustboroCity/scripts.pory"
	end
# 28 "data/maps/RustboroCity/scripts.pory"

# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 30 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 31 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
# 32 "data/maps/RustboroCity/scripts.pory"
	end
# 33 "data/maps/RustboroCity/scripts.pory"

# 34 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 35 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
# 36 "data/maps/RustboroCity/scripts.pory"
	end
# 37 "data/maps/RustboroCity/scripts.pory"

# 38 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 39 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 40 "data/maps/RustboroCity/scripts.pory"
	return
# 41 "data/maps/RustboroCity/scripts.pory"

# 42 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 43 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 44 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 45 "data/maps/RustboroCity/scripts.pory"

# 46 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 47 "data/maps/RustboroCity/scripts.pory"
	lockall
# 48 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 49 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 50 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 52 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 53 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 57 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 58 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 59 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 60 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 67 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 68 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 69 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 70 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 72 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 73 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 74 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 75 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 76 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 77 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 78 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 79 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 80 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 82 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 83 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 84 "data/maps/RustboroCity/scripts.pory"

# 85 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 86 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 87 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 89 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 90 "data/maps/RustboroCity/scripts.pory"

# 91 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 92 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 93 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 94 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 98 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 99 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 100 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 101 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 102 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 103 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 104 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 105 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 107 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 108 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 110 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 111 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 112 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 113 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 114 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 115 "data/maps/RustboroCity/scripts.pory"
	end
# 116 "data/maps/RustboroCity/scripts.pory"

# 117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 118 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 119 "data/maps/RustboroCity/scripts.pory"
	step_end
# 120 "data/maps/RustboroCity/scripts.pory"

# 121 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 122 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 123 "data/maps/RustboroCity/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity/scripts.pory"

# 125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 126 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 127 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity/scripts.pory"
	step_end
# 129 "data/maps/RustboroCity/scripts.pory"

# 130 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 132 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 133 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 135 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 139 "data/maps/RustboroCity/scripts.pory"
	step_end
# 140 "data/maps/RustboroCity/scripts.pory"

# 141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 142 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 143 "data/maps/RustboroCity/scripts.pory"
	step_end
# 144 "data/maps/RustboroCity/scripts.pory"

# 145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 146 "data/maps/RustboroCity/scripts.pory"
	lock
# 147 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 148 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 149 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity/scripts.pory"
	release
# 151 "data/maps/RustboroCity/scripts.pory"
	end
# 152 "data/maps/RustboroCity/scripts.pory"

# 153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 154 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity/scripts.pory"
	release
# 156 "data/maps/RustboroCity/scripts.pory"
	end
# 157 "data/maps/RustboroCity/scripts.pory"

# 158 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 159 "data/maps/RustboroCity/scripts.pory"
	lock
# 160 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity/scripts.pory"
	release
# 163 "data/maps/RustboroCity/scripts.pory"
	end
# 164 "data/maps/RustboroCity/scripts.pory"

# 165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 166 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 167 "data/maps/RustboroCity/scripts.pory"
	end
# 168 "data/maps/RustboroCity/scripts.pory"

# 169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 170 "data/maps/RustboroCity/scripts.pory"
	lock
# 171 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 172 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity/scripts.pory"
	release
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 178 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity/scripts.pory"
	release
# 180 "data/maps/RustboroCity/scripts.pory"
	end
# 181 "data/maps/RustboroCity/scripts.pory"

# 182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 183 "data/maps/RustboroCity/scripts.pory"
	lock
# 184 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 185 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity/scripts.pory"
	release
# 188 "data/maps/RustboroCity/scripts.pory"
	end
# 189 "data/maps/RustboroCity/scripts.pory"

# 190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity/scripts.pory"
	release
# 193 "data/maps/RustboroCity/scripts.pory"
	end
# 194 "data/maps/RustboroCity/scripts.pory"

# 195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 196 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 197 "data/maps/RustboroCity/scripts.pory"
	end
# 198 "data/maps/RustboroCity/scripts.pory"

# 199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 200 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 201 "data/maps/RustboroCity/scripts.pory"
	end
# 202 "data/maps/RustboroCity/scripts.pory"

# 203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 204 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 205 "data/maps/RustboroCity/scripts.pory"
	end
# 206 "data/maps/RustboroCity/scripts.pory"

# 207 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 209 "data/maps/RustboroCity/scripts.pory"
	end
# 210 "data/maps/RustboroCity/scripts.pory"

# 211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 212 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 213 "data/maps/RustboroCity/scripts.pory"
	end
# 214 "data/maps/RustboroCity/scripts.pory"

# 215 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 216 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 217 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 218 "data/maps/RustboroCity/scripts.pory"
	end
# 219 "data/maps/RustboroCity/scripts.pory"

# 220 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 221 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 222 "data/maps/RustboroCity/scripts.pory"
	end
# 223 "data/maps/RustboroCity/scripts.pory"

# 224 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 225 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 226 "data/maps/RustboroCity/scripts.pory"
	end
# 227 "data/maps/RustboroCity/scripts.pory"

# 228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 229 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 230 "data/maps/RustboroCity/scripts.pory"
	end
# 231 "data/maps/RustboroCity/scripts.pory"

# 232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 233 "data/maps/RustboroCity/scripts.pory"
	lock
# 234 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 235 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 236 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 237 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/RustboroCity/scripts.pory"
	release
# 239 "data/maps/RustboroCity/scripts.pory"
	end
# 240 "data/maps/RustboroCity/scripts.pory"

# 241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 242 "data/maps/RustboroCity/scripts.pory"
	lock
# 243 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 244 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 245 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 246 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 247 "data/maps/RustboroCity/scripts.pory"
	release
# 248 "data/maps/RustboroCity/scripts.pory"
	end
# 249 "data/maps/RustboroCity/scripts.pory"

# 250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 251 "data/maps/RustboroCity/scripts.pory"
	lock
# 252 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 253 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 254 "data/maps/RustboroCity/scripts.pory"
	release
# 255 "data/maps/RustboroCity/scripts.pory"
	end
# 256 "data/maps/RustboroCity/scripts.pory"

# 257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 258 "data/maps/RustboroCity/scripts.pory"
	lockall
# 259 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 260 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 261 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 262 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 263 "data/maps/RustboroCity/scripts.pory"
	end
# 264 "data/maps/RustboroCity/scripts.pory"

# 265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 266 "data/maps/RustboroCity/scripts.pory"
	lockall
# 267 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 268 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 269 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 270 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 271 "data/maps/RustboroCity/scripts.pory"
	end
# 272 "data/maps/RustboroCity/scripts.pory"

# 273 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 274 "data/maps/RustboroCity/scripts.pory"
	lockall
# 275 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 276 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 277 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 278 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 279 "data/maps/RustboroCity/scripts.pory"
	end
# 280 "data/maps/RustboroCity/scripts.pory"

# 281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 282 "data/maps/RustboroCity/scripts.pory"
	lockall
# 283 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 284 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 285 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 286 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 287 "data/maps/RustboroCity/scripts.pory"
	end
# 288 "data/maps/RustboroCity/scripts.pory"

# 289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 290 "data/maps/RustboroCity/scripts.pory"
	lockall
# 291 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 292 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 293 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 294 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 295 "data/maps/RustboroCity/scripts.pory"
	end
# 296 "data/maps/RustboroCity/scripts.pory"

# 297 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 298 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 299 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 300 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 301 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 302 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 303 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_Movement_GruntEscape
# 304 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 306 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 307 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 309 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 310 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 311 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 313 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 314 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 315 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 316 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 317 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 319 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 320 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 321 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 322 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 323 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 324 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 325 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 326 "data/maps/RustboroCity/scripts.pory"
	end
# 327 "data/maps/RustboroCity/scripts.pory"

# 328 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 330 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 331 "data/maps/RustboroCity/scripts.pory"
	return
# 332 "data/maps/RustboroCity/scripts.pory"

# 333 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 335 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 336 "data/maps/RustboroCity/scripts.pory"
	return
# 337 "data/maps/RustboroCity/scripts.pory"

# 338 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 340 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 341 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/RustboroCity/scripts.pory"
	return
# 343 "data/maps/RustboroCity/scripts.pory"

# 344 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 345 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 346 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 347 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/RustboroCity/scripts.pory"
	return
# 349 "data/maps/RustboroCity/scripts.pory"

# 350 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 351 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 352 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 353 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 354 "data/maps/RustboroCity/scripts.pory"
	return
# 355 "data/maps/RustboroCity/scripts.pory"

# 356 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 358 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 359 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 360 "data/maps/RustboroCity/scripts.pory"
	return
# 361 "data/maps/RustboroCity/scripts.pory"

# 362 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 363 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 364 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 365 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 367 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/RustboroCity/scripts.pory"
	return
# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	step_end
# 390 "data/maps/RustboroCity/scripts.pory"

# 391 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 408 "data/maps/RustboroCity/scripts.pory"
	step_end
# 409 "data/maps/RustboroCity/scripts.pory"

# 410 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 418 "data/maps/RustboroCity/scripts.pory"
	step_end
# 419 "data/maps/RustboroCity/scripts.pory"

# 420 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 431 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	step_end
# 436 "data/maps/RustboroCity/scripts.pory"

# 437 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 438 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 443 "data/maps/RustboroCity/scripts.pory"
	step_end
# 444 "data/maps/RustboroCity/scripts.pory"

# 445 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 446 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 451 "data/maps/RustboroCity/scripts.pory"
	step_end
# 452 "data/maps/RustboroCity/scripts.pory"

# 453 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 454 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 460 "data/maps/RustboroCity/scripts.pory"
	step_end
# 461 "data/maps/RustboroCity/scripts.pory"

# 462 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 463 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 471 "data/maps/RustboroCity/scripts.pory"
	step_end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 474 "data/maps/RustboroCity/scripts.pory"
	lock
# 475 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 476 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 477 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 478 "data/maps/RustboroCity/scripts.pory"
	release
# 479 "data/maps/RustboroCity/scripts.pory"
	end
# 480 "data/maps/RustboroCity/scripts.pory"

# 481 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 482 "data/maps/RustboroCity/scripts.pory"
	waitse
# 483 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 484 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 485 "data/maps/RustboroCity/scripts.pory"
	end
# 486 "data/maps/RustboroCity/scripts.pory"

# 487 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 488 "data/maps/RustboroCity/scripts.pory"
	lockall
# 489 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 490 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 491 "data/maps/RustboroCity/scripts.pory"
	end
# 492 "data/maps/RustboroCity/scripts.pory"

# 493 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 494 "data/maps/RustboroCity/scripts.pory"
	lockall
# 495 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 496 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 497 "data/maps/RustboroCity/scripts.pory"
	end
# 498 "data/maps/RustboroCity/scripts.pory"

# 499 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 500 "data/maps/RustboroCity/scripts.pory"
	lockall
# 501 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 502 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 503 "data/maps/RustboroCity/scripts.pory"
	end
# 504 "data/maps/RustboroCity/scripts.pory"

# 505 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 506 "data/maps/RustboroCity/scripts.pory"
	lockall
# 507 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 508 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 509 "data/maps/RustboroCity/scripts.pory"
	end
# 510 "data/maps/RustboroCity/scripts.pory"

# 511 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 512 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 513 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 514 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 515 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 516 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 517 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 518 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 519 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 520 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 521 "data/maps/RustboroCity/scripts.pory"
	end
# 522 "data/maps/RustboroCity/scripts.pory"

# 523 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 524 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 525 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 526 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 531 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	return
# 535 "data/maps/RustboroCity/scripts.pory"

# 536 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 537 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 538 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	return
# 547 "data/maps/RustboroCity/scripts.pory"

# 548 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
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
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 561 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 562 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 567 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 569 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 571 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/RustboroCity/scripts.pory"
	return
# 573 "data/maps/RustboroCity/scripts.pory"

# 574 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 575 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 576 "data/maps/RustboroCity/scripts.pory"
	step_end
# 577 "data/maps/RustboroCity/scripts.pory"

# 578 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 579 "data/maps/RustboroCity/scripts.pory"
	lockall
# 580 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 581 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 582 "data/maps/RustboroCity/scripts.pory"
	end
# 583 "data/maps/RustboroCity/scripts.pory"

# 584 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 585 "data/maps/RustboroCity/scripts.pory"
	lockall
# 586 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 587 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 588 "data/maps/RustboroCity/scripts.pory"
	end
# 589 "data/maps/RustboroCity/scripts.pory"

# 590 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 591 "data/maps/RustboroCity/scripts.pory"
	lockall
# 592 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 593 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 594 "data/maps/RustboroCity/scripts.pory"
	end
# 595 "data/maps/RustboroCity/scripts.pory"

# 596 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 597 "data/maps/RustboroCity/scripts.pory"
	lockall
# 598 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 599 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 600 "data/maps/RustboroCity/scripts.pory"
	end
# 601 "data/maps/RustboroCity/scripts.pory"

# 602 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 608 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 610 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 611 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 612 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 613 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 614 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 615 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 616 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 617 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 618 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 619 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 620 "data/maps/RustboroCity/scripts.pory"
	end
# 621 "data/maps/RustboroCity/scripts.pory"

# 622 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 623 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 624 "data/maps/RustboroCity/scripts.pory"
	return
# 625 "data/maps/RustboroCity/scripts.pory"

# 626 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 630 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 631 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 633 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/RustboroCity/scripts.pory"
	return
# 637 "data/maps/RustboroCity/scripts.pory"

# 638 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 642 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 643 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 645 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	return
# 649 "data/maps/RustboroCity/scripts.pory"

# 650 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
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
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
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
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	return
# 675 "data/maps/RustboroCity/scripts.pory"

# 676 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 680 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 681 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 683 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 684 "data/maps/RustboroCity/scripts.pory"
	return
# 685 "data/maps/RustboroCity/scripts.pory"

# 686 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 687 "data/maps/RustboroCity/scripts.pory"
	lockall
# 688 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 689 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 690 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 692 "data/maps/RustboroCity/scripts.pory"

# 693 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 694 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 695 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 696 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 697 "data/maps/RustboroCity/scripts.pory"
	return
# 698 "data/maps/RustboroCity/scripts.pory"

# 699 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 700 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 701 "data/maps/RustboroCity/scripts.pory"
	return
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 704 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 705 "data/maps/RustboroCity/scripts.pory"
	return
# 706 "data/maps/RustboroCity/scripts.pory"

# 707 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 708 "data/maps/RustboroCity/scripts.pory"
	lockall
# 709 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 710 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 711 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 712 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 720 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 722 "data/maps/RustboroCity/scripts.pory"

# 723 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 724 "data/maps/RustboroCity/scripts.pory"
	lockall
# 725 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 729 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 730 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 732 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 736 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 738 "data/maps/RustboroCity/scripts.pory"

# 739 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 740 "data/maps/RustboroCity/scripts.pory"
	lockall
# 741 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 745 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 746 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 748 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 752 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 754 "data/maps/RustboroCity/scripts.pory"

# 755 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 756 "data/maps/RustboroCity/scripts.pory"
	lockall
# 757 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 761 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 762 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 764 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 768 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 769 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 770 "data/maps/RustboroCity/scripts.pory"

# 771 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 772 "data/maps/RustboroCity/scripts.pory"
	lockall
# 773 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 780 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 784 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 786 "data/maps/RustboroCity/scripts.pory"

# 787 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 788 "data/maps/RustboroCity/scripts.pory"
	lockall
# 789 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 800 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 801 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 802 "data/maps/RustboroCity/scripts.pory"

# 803 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 804 "data/maps/RustboroCity/scripts.pory"
	lockall
# 805 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 816 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 817 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 818 "data/maps/RustboroCity/scripts.pory"

# 819 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 820 "data/maps/RustboroCity/scripts.pory"
	lockall
# 821 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 822 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 823 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 828 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 829 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 830 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 832 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 833 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 834 "data/maps/RustboroCity/scripts.pory"

# 835 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 836 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 837 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 838 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 839 "data/maps/RustboroCity/scripts.pory"
	end
# 840 "data/maps/RustboroCity/scripts.pory"

# 841 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 842 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 843 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 844 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 845 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 846 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 847 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 848 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 849 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 850 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 851 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 852 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 853 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 854 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 855 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 856 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 857 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 858 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 859 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 860 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 861 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 862 "data/maps/RustboroCity/scripts.pory"
	end
# 863 "data/maps/RustboroCity/scripts.pory"

# 864 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 865 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 866 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 867 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 868 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 869 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 870 "data/maps/RustboroCity/scripts.pory"
	end
# 871 "data/maps/RustboroCity/scripts.pory"

# 872 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 873 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 874 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 875 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 876 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 877 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 878 "data/maps/RustboroCity/scripts.pory"
	end
# 879 "data/maps/RustboroCity/scripts.pory"

# 880 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 881 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 882 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 883 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 884 "data/maps/RustboroCity/scripts.pory"
	end
# 885 "data/maps/RustboroCity/scripts.pory"

# 886 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 887 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 888 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 889 "data/maps/RustboroCity/scripts.pory"
	return
# 890 "data/maps/RustboroCity/scripts.pory"

# 891 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 892 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 893 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 894 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 895 "data/maps/RustboroCity/scripts.pory"
	end
# 896 "data/maps/RustboroCity/scripts.pory"

# 897 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 898 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 899 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 900 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 901 "data/maps/RustboroCity/scripts.pory"
	end
# 902 "data/maps/RustboroCity/scripts.pory"

# 903 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 904 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 905 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 906 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 907 "data/maps/RustboroCity/scripts.pory"
	end
# 908 "data/maps/RustboroCity/scripts.pory"

# 909 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 910 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 911 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 912 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 913 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 914 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 915 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 916 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 917 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 918 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 919 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 920 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 921 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 922 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 923 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 924 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 925 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 926 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 927 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 928 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 929 "data/maps/RustboroCity/scripts.pory"
	end
# 930 "data/maps/RustboroCity/scripts.pory"

# 931 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 932 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 933 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 934 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 935 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 936 "data/maps/RustboroCity/scripts.pory"
	end
# 937 "data/maps/RustboroCity/scripts.pory"

# 938 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 939 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 940 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 941 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 942 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 943 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 944 "data/maps/RustboroCity/scripts.pory"
	end
# 945 "data/maps/RustboroCity/scripts.pory"

# 946 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 947 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 948 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 949 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 950 "data/maps/RustboroCity/scripts.pory"
	end
# 951 "data/maps/RustboroCity/scripts.pory"

# 952 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 953 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 954 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 955 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 956 "data/maps/RustboroCity/scripts.pory"
	end
# 957 "data/maps/RustboroCity/scripts.pory"

# 958 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 959 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 960 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 961 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 962 "data/maps/RustboroCity/scripts.pory"
	end
# 963 "data/maps/RustboroCity/scripts.pory"

# 964 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 965 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 966 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 967 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 968 "data/maps/RustboroCity/scripts.pory"
	end
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 971 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 972 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 973 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 974 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 975 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 976 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 977 "data/maps/RustboroCity/scripts.pory"
	step_end
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 980 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 981 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 982 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 983 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 984 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 985 "data/maps/RustboroCity/scripts.pory"
	step_end
# 986 "data/maps/RustboroCity/scripts.pory"

# 987 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 988 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 989 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 990 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 992 "data/maps/RustboroCity/scripts.pory"
	step_end
# 993 "data/maps/RustboroCity/scripts.pory"

# 994 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 997 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 998 "data/maps/RustboroCity/scripts.pory"
	step_end
# 999 "data/maps/RustboroCity/scripts.pory"

# 1000 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1001 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1002 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1003 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1004 "data/maps/RustboroCity/scripts.pory"

# 1005 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1006 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1007 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1008 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1009 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1010 "data/maps/RustboroCity/scripts.pory"

# 1011 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1012 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1013 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1014 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1015 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1016 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1017 "data/maps/RustboroCity/scripts.pory"

# 1018 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1019 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1020 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1021 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1022 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1023 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1024 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1025 "data/maps/RustboroCity/scripts.pory"

# 1026 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1027 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1028 "data/maps/RustboroCity/scripts.pory"
	end
# 1029 "data/maps/RustboroCity/scripts.pory"

# 1030 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "Die Devon Corporation…\n"
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "Wir nennen sie kurz Devon.\p"
# 1033 "data/maps/RustboroCity/scripts.pory"
	.string "Die Firma stellt viele praktische\n"
# 1034 "data/maps/RustboroCity/scripts.pory"
	.string "Dinge her.$"
# 1035 "data/maps/RustboroCity/scripts.pory"

# 1036 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1037 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? Ein verschlagen wirkender Mann?\p"
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich so darüber nachdenke, fällt mir\n"
# 1039 "data/maps/RustboroCity/scripts.pory"
	.string "ein, dass ich einen zwielichtigen Typen\l"
# 1040 "data/maps/RustboroCity/scripts.pory"
	.string "eben hier an der Ecke gesehen habe.$"
# 1041 "data/maps/RustboroCity/scripts.pory"

# 1042 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1043 "data/maps/RustboroCity/scripts.pory"
	.string "Hast du schon die Herausforderung der\n"
# 1044 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Arena angenommen?\p"
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "Ich glaube, wenn sie den glänzenden\n"
# 1046 "data/maps/RustboroCity/scripts.pory"
	.string "Orden der Arena in der Hand halten, wird\l"
# 1047 "data/maps/RustboroCity/scripts.pory"
	.string "den Trainern klar, was von ihnen\l"
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "verlangt wird.$"
# 1049 "data/maps/RustboroCity/scripts.pory"

# 1050 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, das ist der Orden der Arena von\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "Metarost City!\p"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "Von allen Arena-Orden ist der von\n"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "Metarost City der coolste, sage ich dir.$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Wer magst du wohl sein?\n"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "Ein neues Gesicht in dieser Gegend.\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "Bist du gerade in die Pokémon Trainer-\n"
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "schule gekommen?$"
# 1061 "data/maps/RustboroCity/scripts.pory"

# 1062 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "Ich habe den Arenaleiter heraus-\n"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "gefordert, aber…\p"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "Es ist nicht einfach, mit meinen Feuer-\n"
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon zu gewinnen…\p"
# 1067 "data/maps/RustboroCity/scripts.pory"
	.string "Feuer-Pokémon haben keinen guten\n"
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "Stand gegenüber Gestein-Pokémon.$"
# 1069 "data/maps/RustboroCity/scripts.pory"

# 1070 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "Der alte Seebär Mr. Brack lebt in einer\n"
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "Er geht sehr oft in dem Tunnel\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "spazieren.$"
# 1075 "data/maps/RustboroCity/scripts.pory"

# 1076 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1077 "data/maps/RustboroCity/scripts.pory"
	.string "Der alte Seebär Mr. Brack lebt in einer\n"
# 1078 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "Er sagt, er wäre in Graphitport City\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "gewesen, um etwas für sein Haustier,\l"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "Pecko, zu kaufen.\p"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "Der alte Seebär muss sein Pecko\n"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "wirklich sehr lieben.$"
# 1084 "data/maps/RustboroCity/scripts.pory"

# 1085 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, du hast ja auch Pokémon dabei.\p"
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich größer bin, werde ich auch\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "immer Pokémon dabeihaben.$"
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainerschule!\p"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich in diese Schule gehe, werde ich\n"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "später seltene Pokémon fangen können?$"
# 1094 "data/maps/RustboroCity/scripts.pory"

# 1095 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ein Pokémon Erfahrungen im Kampf\n"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "sammelt, kann es vorkommen, dass es\l"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "irgendwann sein Aussehen verändert.$"
# 1099 "data/maps/RustboroCity/scripts.pory"

# 1100 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "Ein Pokémon verändert sein Aussehen?!\n"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn es das tun würde, wäre ich zu Tode\l"
# 1103 "data/maps/RustboroCity/scripts.pory"
	.string "erschrocken!$"
# 1104 "data/maps/RustboroCity/scripts.pory"

# 1105 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "Ein Pokémon, das du durch Tausch\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "erhältst, wächst schnell.\p"
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "Aber wenn dir Orden von bestimmten\n"
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "Arenen fehlen, wird es dir eventuell\l"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "nicht gehorchen.$"
# 1111 "data/maps/RustboroCity/scripts.pory"

# 1112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "Geh weg! Aus dem Weg!$"
# 1114 "data/maps/RustboroCity/scripts.pory"

# 1115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "Warte! Waaaaarte doch! Bitte!\p"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "Du kannst doch nicht einfach meine\n"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "Waren stehlen!$"
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, du bist das!\p"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist dieser großartige Trainer, der\n"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "mir im Blütenburgwald geholfen hat.\p"
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Hilf mir! Team Aqua hat mich aus-\n"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "geraubt! Ich muss die Devon-Waren\l"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "zurückbekommen.\p"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "Wenn ich sie nicht bekomme…\n"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "dann habe ich ein riesiges Problem.$"
# 1129 "data/maps/RustboroCity/scripts.pory"

# 1130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "Ich glaube, dieser zwielichtige Typ ist\n"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "in Richtung Tunnel gelaufen.$"
# 1133 "data/maps/RustboroCity/scripts.pory"

# 1134 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! Und? Wie sieht es aus?\n"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "Die Devon-Waren?\p"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "Du hast es geschafft!\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "Du hast sie zurückbekommen!\p"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist wirklich ein großer Trainer!\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "Ich weiß! Ich werde dir zum Dank einen\l"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "weiteren Superball schenken!$"
# 1142 "data/maps/RustboroCity/scripts.pory"

# 1143 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist mit Items überfrachtet.\n"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "Ich kann dir den Superball nicht geben.$"
# 1146 "data/maps/RustboroCity/scripts.pory"

# 1147 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "Bitte entschuldige!\n"
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "Würdest du mir bitte folgen?$"
# 1150 "data/maps/RustboroCity/scripts.pory"

# 1151 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Oh, hi, {PLAYER}{KUN}!\p"
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Dein Pokénav besitzt die Trainer/Ruf-\n"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Funktion!\p"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "Wir tragen uns gegenseitig ein, so\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "bleiben wir in Kontakt.\p"
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1158 "data/maps/RustboroCity/scripts.pory"

# 1159 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "Maike wurde im Pokénav-Verzeichnis\n"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "eingetragen.$"
# 1162 "data/maps/RustboroCity/scripts.pory"

# 1163 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Ach, übrigens. Ich habe Mr.\n"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "Brack im Blütenburgwald gesehen.\p"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "Ich glaube, er ist auf dem Weg zu seiner\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "Wie geht es mit deinem Pokédex voran?\n"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "Meiner sieht schon ganz anständig aus.\p"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "Daher…\n"
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "Wie wäre es mit einem kleinen Kampf?$"
# 1172 "data/maps/RustboroCity/scripts.pory"

# 1173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Oh, was ist das?\p"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "Du hast dich aber nicht um deine\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon gekümmert? Und auch\l"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "nicht viele gefangen?\p"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "Als Trainer machst du wirklich keinen\n"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "guten Eindruck!$"
# 1180 "data/maps/RustboroCity/scripts.pory"

# 1181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Was hältst du von einem Kampf?$"
# 1183 "data/maps/RustboroCity/scripts.pory"

# 1184 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Du bist gerade erst Trainer\n"
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "geworden, {PLAYER}{KUN}. Ich werde nicht\l"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "verlieren.$"
# 1188 "data/maps/RustboroCity/scripts.pory"

# 1189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "AchDuSchande!\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist besser, als ich gedacht habe.$"
# 1192 "data/maps/RustboroCity/scripts.pory"

# 1193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "Maike: Ach, übrigens. Ich habe Mr.\n"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "Brack im Blütenburgwald gesehen.\p"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, du bist gerade hierher\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "gezogen, daher kannst du das nicht\l"
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "wissen, aber Mr. Brack war Seefahrer.$"
# 1199 "data/maps/RustboroCity/scripts.pory"

# 1200 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Oh, hey, {PLAYER}!\p"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "Dein Pokénav besitzt die Trainer/Ruf-\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "Funktion! Cool!\p"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "Wir tragen uns gegenseitig ein, dann\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "können wir jederzeit miteinander reden!\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1207 "data/maps/RustboroCity/scripts.pory"

# 1208 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "Brix wurde im Pokénav-Verzeichnis\n"
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "eingetragen.$"
# 1211 "data/maps/RustboroCity/scripts.pory"

# 1212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Ich habe Mr. Brack im\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "Blütenburgwald gesehen, {PLAYER}.\p"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "Ich wette, er ist auf dem Weg zu seiner\n"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "Hütte am Meer.\p"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, wie sieht es mit\n"
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "deinem Pokédex aus?\p"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "Meiner ist eine Wucht.\p"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "Zeig mir, wie gut du geworden bist.\n"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "Ich werde dich jetzt testen!$"
# 1222 "data/maps/RustboroCity/scripts.pory"

# 1223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Oh, hast du ein Problem? Nicht\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "genügend Selbstbewusstsein und\l"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "Vertrauen in deine Pokémon, was?$"
# 1227 "data/maps/RustboroCity/scripts.pory"

# 1228 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Wie geht’s? Lust auf einen Kampf?$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Ich weiß, du bist gerade erst ein\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "Trainer geworden, aber ich werde mich\l"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "nicht zurückhalten.$"
# 1235 "data/maps/RustboroCity/scripts.pory"

# 1236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist ziemlich gut.$"
# 1239 "data/maps/RustboroCity/scripts.pory"

# 1240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "Brix: Kennst du eigentlich Mr. Brack?\n"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "Den Typ, den ich getroffen habe?\p"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "Du bist gerade erst hierher gezogen,\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "daher weißt du das vielleicht noch\l"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "nicht, aber Mr. Brack war mal Seefahrer.$"
# 1246 "data/maps/RustboroCity/scripts.pory"

# 1247 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "“Tunnel zur Abkürzung steht vor\n"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "Fertigstellung!”\p"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "… Das steht auf dem Schild, aber\n"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "darüber wurde ein “X”\l"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "in roter Farbe gemalt…$"
# 1253 "data/maps/RustboroCity/scripts.pory"

# 1254 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "“Alles, was man im Leben braucht - \n"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "wir stellen es her.”$"
# 1258 "data/maps/RustboroCity/scripts.pory"

# 1259 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Arena von Metarost City\n"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "Leiterin: Felizia\p"
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "“Gestein-Liebhaberin und\n"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "Musterschülerin!”$"
# 1264 "data/maps/RustboroCity/scripts.pory"

# 1265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Filiale\p"
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "“Zutritt nur für Angestellte von Devon\n"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "und autorisierte Personen.”$"
# 1269 "data/maps/RustboroCity/scripts.pory"

# 1270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "Metarost City\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "“Diese Stadt steht im Zeichen der\n"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "Integration von Natur und\l"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "Wissenschaften.”$"
# 1275 "data/maps/RustboroCity/scripts.pory"

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainerschule\p"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "“Wir bringen dir alles über\n"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon bei!”$"
# 1280 "data/maps/RustboroCity/scripts.pory"

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "Haus des Zerschneiders$"
# 1283 "data/maps/RustboroCity/scripts.pory"

# 1284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Ich habe neues Zubehör für den Pokénav\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "entwickelt…\p"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "Und es funktioniert großartig!\p"
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "Zeigst du mir mal deinen Pokénav,\n"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}? Den du von unserem\l"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "Präsidenten bekommen hast.$"
# 1291 "data/maps/RustboroCity/scripts.pory"

# 1292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "Hier, bitte schön, {PLAYER}.\p"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "Ich habe deinen Pokénav mit dem\n"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "so genannten Trainer/Ruf\l"
# 1296 "data/maps/RustboroCity/scripts.pory"
	.string "ausgestattet.\p"
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "Trage deine Freunde und andere\n"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "Personen in das Verzeichnis ein. Dann\l"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "kannst du mit ihnen reden.\p"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "Du solltest auch unseren Präsidenten\n"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Trumm eintragen, {PLAYER}.\p"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "Probier es mal aus.\n"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "Ruf unseren Präsidenten an.$"
# 1304 "data/maps/RustboroCity/scripts.pory"

# 1305 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "Wähle Pokénav.$"
# 1307 "data/maps/RustboroCity/scripts.pory"

# 1308 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "So, jetzt muss ich aber weiterarbeiten.\n"
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "Pass auf dich auf, {PLAYER}.$"
# 1311 "data/maps/RustboroCity/scripts.pory"

# 1312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "Weißt du das schon?\p"
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "Du kannst auch an 2-gegen-2-Kämpfen\n"
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "teilnehmen, wenn du allein unterwegs\l"
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "bist.\p"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "Triffst du auf zwei Trainer und hast\n"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "mindestens zwei Pokémon dabei, werden\l"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "sie dich beide herausfordern.\p"
# 1320 "data/maps/RustboroCity/scripts.pory"
	.string "Ich finde es total cool, wenn man allein\n"
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "zwei Trainer besiegt. Meinst du nicht?$"
