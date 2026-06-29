RusturfTunnel_EventScript_PkmnSign::
# 2 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PkmnSignCave, MSGBOX_SIGN
# 3 "data/maps/RusturfTunnel/scripts.pory"
	showmonpic SPECIES_WHISMUR, 10, 3
# 4 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WHISMUR, 0
# 5 "data/maps/RusturfTunnel/scripts.pory"
	delay 60
# 6 "data/maps/RusturfTunnel/scripts.pory"
	hidemonpic
# 7 "data/maps/RusturfTunnel/scripts.pory"
	release
	end


# 16 "data/maps/RusturfTunnel/scripts.pory"

# 17 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 18 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 19 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 20 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 21 "data/maps/RusturfTunnel/scripts.pory"

# 22 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 23 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 24 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 25 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 26 "data/maps/RusturfTunnel/scripts.pory"

# 27 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 28 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 29 "data/maps/RusturfTunnel/scripts.pory"
	end
# 30 "data/maps/RusturfTunnel/scripts.pory"

# 31 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 32 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 33 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
# 34 "data/maps/RusturfTunnel/scripts.pory"
	return
# 35 "data/maps/RusturfTunnel/scripts.pory"

# 36 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 37 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 38 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 39 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 40 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 41 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 42 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 43 "data/maps/RusturfTunnel/scripts.pory"
	release
# 44 "data/maps/RusturfTunnel/scripts.pory"
	end
# 45 "data/maps/RusturfTunnel/scripts.pory"

# 46 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 47 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 48 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 49 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 50 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 51 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 52 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 53 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 54 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 55 "data/maps/RusturfTunnel/scripts.pory"
	release
# 56 "data/maps/RusturfTunnel/scripts.pory"
	end
# 57 "data/maps/RusturfTunnel/scripts.pory"

# 58 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 59 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 60 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 61 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 62 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 63 "data/maps/RusturfTunnel/scripts.pory"
	release
# 64 "data/maps/RusturfTunnel/scripts.pory"
	end
# 65 "data/maps/RusturfTunnel/scripts.pory"

# 66 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 67 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 68 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 69 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 72 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 73 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 74 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 75 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 76 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 77 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 78 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 79 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 80 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 81 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 82 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 83 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 84 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 85 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 86 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 87 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 88 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 89 "data/maps/RusturfTunnel/scripts.pory"
	end
# 90 "data/maps/RusturfTunnel/scripts.pory"

# 91 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 92 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 93 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 94 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 95 "data/maps/RusturfTunnel/scripts.pory"
	return
# 96 "data/maps/RusturfTunnel/scripts.pory"

# 97 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 98 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 99 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 100 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 101 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 103 "data/maps/RusturfTunnel/scripts.pory"
	return
# 104 "data/maps/RusturfTunnel/scripts.pory"

# 105 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 107 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 108 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 109 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_WalkInPlaceFasterDown
# 110 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 111 "data/maps/RusturfTunnel/scripts.pory"
	return
# 112 "data/maps/RusturfTunnel/scripts.pory"

# 113 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 114 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 115 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 116 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 117 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 118 "data/maps/RusturfTunnel/scripts.pory"
	return
# 119 "data/maps/RusturfTunnel/scripts.pory"

# 120 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 121 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 122 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 123 "data/maps/RusturfTunnel/scripts.pory"
	return
# 124 "data/maps/RusturfTunnel/scripts.pory"

# 125 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 126 "data/maps/RusturfTunnel/scripts.pory"
	return
# 127 "data/maps/RusturfTunnel/scripts.pory"

# 128 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 129 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 130 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 131 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 132 "data/maps/RusturfTunnel/scripts.pory"
	return
# 133 "data/maps/RusturfTunnel/scripts.pory"

# 134 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 135 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit1
# 136 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 137 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 138 "data/maps/RusturfTunnel/scripts.pory"
	return
# 139 "data/maps/RusturfTunnel/scripts.pory"

# 140 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 141 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 142 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_Movement_WandaExit
# 143 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 144 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 145 "data/maps/RusturfTunnel/scripts.pory"
	return
# 146 "data/maps/RusturfTunnel/scripts.pory"

# 147 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 148 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 149 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 150 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 151 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 152 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 153 "data/maps/RusturfTunnel/scripts.pory"
	return
# 154 "data/maps/RusturfTunnel/scripts.pory"

# 155 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 158 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 159 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 160 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 167 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 168 "data/maps/RusturfTunnel/scripts.pory"

# 169 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 171 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 172 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 173 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 174 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 175 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 176 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 179 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 180 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 181 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 182 "data/maps/RusturfTunnel/scripts.pory"

# 183 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 184 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 186 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 187 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 188 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 189 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 190 "data/maps/RusturfTunnel/scripts.pory"

# 191 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 193 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 195 "data/maps/RusturfTunnel/scripts.pory"

# 196 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 202 "data/maps/RusturfTunnel/scripts.pory"

# 203 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 206 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 209 "data/maps/RusturfTunnel/scripts.pory"

# 210 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 211 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 212 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 213 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 214 "data/maps/RusturfTunnel/scripts.pory"

# 215 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 218 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 219 "data/maps/RusturfTunnel/scripts.pory"

# 220 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 223 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 224 "data/maps/RusturfTunnel/scripts.pory"

# 225 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 228 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 230 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 231 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 238 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 239 "data/maps/RusturfTunnel/scripts.pory"

# 240 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 242 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 243 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 244 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 245 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 246 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 248 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 250 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 251 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 252 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 253 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 254 "data/maps/RusturfTunnel/scripts.pory"

# 255 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 256 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 257 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 258 "data/maps/RusturfTunnel/scripts.pory"

# 259 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 260 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 261 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 262 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 263 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 264 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 265 "data/maps/RusturfTunnel/scripts.pory"

# 266 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 267 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 268 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 269 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 270 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 271 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 272 "data/maps/RusturfTunnel/scripts.pory"

# 273 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 274 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 275 "data/maps/RusturfTunnel/scripts.pory"
	end
# 276 "data/maps/RusturfTunnel/scripts.pory"

# 277 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 278 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 279 "data/maps/RusturfTunnel/scripts.pory"
	end
# 280 "data/maps/RusturfTunnel/scripts.pory"

# 281 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 282 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 283 "data/maps/RusturfTunnel/scripts.pory"
	end
# 284 "data/maps/RusturfTunnel/scripts.pory"

# 285 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 286 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 287 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 288 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 289 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 290 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 291 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 292 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 293 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 294 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 295 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 296 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 297 "data/maps/RusturfTunnel/scripts.pory"
	end
# 298 "data/maps/RusturfTunnel/scripts.pory"

# 299 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 300 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 301 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 302 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 303 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 304 "data/maps/RusturfTunnel/scripts.pory"

# 305 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 306 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 307 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 308 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 309 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 310 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 311 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 312 "data/maps/RusturfTunnel/scripts.pory"
	release
# 313 "data/maps/RusturfTunnel/scripts.pory"
	end
# 314 "data/maps/RusturfTunnel/scripts.pory"

# 315 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 316 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 317 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 318 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 319 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 320 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 321 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 322 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 323 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 324 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 325 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_Movement_GruntEscape
# 326 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 327 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 328 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 329 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 330 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 331 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 332 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 333 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 334 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 335 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 336 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 337 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 338 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 339 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 340 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 341 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 342 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 343 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 344 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 345 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 346 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_Movement_BrineyExit
# 347 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_Movement_PeekoExit
# 348 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 349 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 350 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 351 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 352 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 353 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 354 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 355 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 356 "data/maps/RusturfTunnel/scripts.pory"
	release
# 357 "data/maps/RusturfTunnel/scripts.pory"
	end
# 358 "data/maps/RusturfTunnel/scripts.pory"

# 359 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 360 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 361 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 362 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 363 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 365 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 366 "data/maps/RusturfTunnel/scripts.pory"

# 367 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 370 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 371 "data/maps/RusturfTunnel/scripts.pory"

# 372 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 382 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 383 "data/maps/RusturfTunnel/scripts.pory"

# 384 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 385 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 386 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 387 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 392 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 393 "data/maps/RusturfTunnel/scripts.pory"

# 394 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 397 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 399 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 400 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 401 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 402 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 403 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 404 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 405 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 406 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 407 "data/maps/RusturfTunnel/scripts.pory"

# 408 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 409 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 410 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 411 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 413 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 414 "data/maps/RusturfTunnel/scripts.pory"

# 415 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 416 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 418 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 419 "data/maps/RusturfTunnel/scripts.pory"

# 420 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 421 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 422 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 423 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 424 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 425 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 426 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 427 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 428 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 429 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 430 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 431 "data/maps/RusturfTunnel/scripts.pory"

# 432 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 433 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 434 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/RusturfTunnel/scripts.pory"
	end
# 436 "data/maps/RusturfTunnel/scripts.pory"

# 437 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 438 "data/maps/RusturfTunnel/scripts.pory"
	.string "Was? Du willst gegen uns antreten?\n"
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "Na, dann hol dir eine Tracht Prügel.$"
# 440 "data/maps/RusturfTunnel/scripts.pory"

# 441 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pecko: Pii pihyoh!$"
# 443 "data/maps/RusturfTunnel/scripts.pory"

# 444 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 445 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grrr, man sollte sie alle kielholen.\p"
# 446 "data/maps/RusturfTunnel/scripts.pory"
	.string "Das als Geisel genommene Pokémon hat\n"
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "sich als völlig wertlos erwiesen!\p"
# 448 "data/maps/RusturfTunnel/scripts.pory"
	.string "Und dafür habe ich nun einen Flucht-\n"
# 449 "data/maps/RusturfTunnel/scripts.pory"
	.string "weg in diesem Tunnel nach Nirgendwo\l"
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "gegraben!\p"
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! Du!\n"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "Forderst du mich etwa heraus?$"
# 453 "data/maps/RusturfTunnel/scripts.pory"

# 454 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "Aargh! Und so läuft eine vielver-\n"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "sprechende kriminelle Karriere in eine\l"
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "Sackgasse!$"
# 458 "data/maps/RusturfTunnel/scripts.pory"

# 459 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "Das ist einfach nicht fair…\p"
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "Der Boss hat doch gesagt, der Job sei\n"
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "ein wahres Kinderspiel.\p"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "Alles, was ich zu tun hatte, war, ein\n"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "Paket von Devon zu stehlen.\p"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tse! Wenn du es so dringend wieder-\n"
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "haben willst, dann nimm es halt!$"
# 467 "data/maps/RusturfTunnel/scripts.pory"

# 468 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pecko! Bin ich froh, dass du unversehrt\n"
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "wieder bei mir bist.$"
# 471 "data/maps/RusturfTunnel/scripts.pory"

# 472 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pecko verdankt dir ihr Leben!\p"
# 474 "data/maps/RusturfTunnel/scripts.pory"
	.string "Man nennt mich Mr. Brack.\n"
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "Und du bist…\p"
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 478 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, du bist also {PLAYER}{KUN}!\n"
# 479 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ich danke dir von ganzem Herzen!\p"
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wenn du irgendein Problem hast, zögere\n"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "nicht, mich um Hilfe zu bitten!\p"
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ich wohne in dem kleinen Haus am Meer\n"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "in der Nähe des Blütenburgwalds.\p"
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "Komm, Pecko, wir sollten uns auf den\n"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "Heimweg machen.\p"
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pecko: Pihyoh!$"
# 487 "data/maps/RusturfTunnel/scripts.pory"

# 488 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "Warum graben sie nicht weiter?\n"
# 491 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ist das Gestein zu hart?\p"
# 492 "data/maps/RusturfTunnel/scripts.pory"
	.string "Meine Geliebte wartet in Wiesenflur\n"
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "auf mich, gleich hinter diesen\l"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "Felsen…\p"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wenn Metarost City und Wiesenflur\n"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "durch diesen Tunnel verbunden wären,\l"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "könnte ich sie jeden Tag besuchen!\p"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "Aber so…\n"
# 499 "data/maps/RusturfTunnel/scripts.pory"
	.string "Was soll ich nur machen?$"
# 500 "data/maps/RusturfTunnel/scripts.pory"

# 501 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 502 "data/maps/RusturfTunnel/scripts.pory"
	.string "Um von Metarost City nach Wiesenflur\n"
# 503 "data/maps/RusturfTunnel/scripts.pory"
	.string "zu gelangen, muss man nach Faustau-\l"
# 504 "data/maps/RusturfTunnel/scripts.pory"
	.string "haven und dann über Graphitport City\l"
# 505 "data/maps/RusturfTunnel/scripts.pory"
	.string "und Malvenfroh City reisen…$"
# 506 "data/maps/RusturfTunnel/scripts.pory"

# 507 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 508 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! Du hast den Felsen, der den Weg\n"
# 509 "data/maps/RusturfTunnel/scripts.pory"
	.string "blockierte, einfach zertrümmert.\p"
# 510 "data/maps/RusturfTunnel/scripts.pory"
	.string "Darüber bin ich überglücklich und daher\n"
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "möchte ich dir diese VM geben.$"
# 512 "data/maps/RusturfTunnel/scripts.pory"

# 513 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 514 "data/maps/RusturfTunnel/scripts.pory"
	.string "Diese VM enthält Stärke.\p"
# 515 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wenn ein kräftiges Pokémon diese VM\n"
# 516 "data/maps/RusturfTunnel/scripts.pory"
	.string "lernt, ist es in der Lage, sogar die\l"
# 517 "data/maps/RusturfTunnel/scripts.pory"
	.string "schwersten Felsen zu bewegen.$"
# 518 "data/maps/RusturfTunnel/scripts.pory"

# 519 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 520 "data/maps/RusturfTunnel/scripts.pory"
	.string "Heike!\n"
# 521 "data/maps/RusturfTunnel/scripts.pory"
	.string "Nun kann ich dich jederzeit besuchen!\p"
# 522 "data/maps/RusturfTunnel/scripts.pory"
	.string "Heike: Das ist wunderbar.\p"
# 523 "data/maps/RusturfTunnel/scripts.pory"
	.string "Bitte, ruh dich ein bisschen in meinem\n"
# 524 "data/maps/RusturfTunnel/scripts.pory"
	.string "Haus aus.$"
# 525 "data/maps/RusturfTunnel/scripts.pory"

# 526 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 527 "data/maps/RusturfTunnel/scripts.pory"
	.string "Auf der anderen Seite dieses Felsens\n"
# 528 "data/maps/RusturfTunnel/scripts.pory"
	.string "wartet mein Freund.\p"
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "Er… Er gräbt den Tunnel nicht nur, um\n"
# 530 "data/maps/RusturfTunnel/scripts.pory"
	.string "mich zu sehen.\p"
# 531 "data/maps/RusturfTunnel/scripts.pory"
	.string "Er reißt sich die Hände auf zum Wohle\n"
# 532 "data/maps/RusturfTunnel/scripts.pory"
	.string "aller.$"
# 533 "data/maps/RusturfTunnel/scripts.pory"

# 534 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 535 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wie nennt man einen ungestümen Mann\n"
# 536 "data/maps/RusturfTunnel/scripts.pory"
	.string "hoch im Gebirge? Einen Bergfreund.\p"
# 537 "data/maps/RusturfTunnel/scripts.pory"
	.string "So, warum nennt man dann nicht auch ein\n"
# 538 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pokémon in den Bergen ein Berg-\l"
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pokémon?$"
# 540 "data/maps/RusturfTunnel/scripts.pory"

# 541 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 542 "data/maps/RusturfTunnel/scripts.pory"
	.string "Meine Pokémon…\n"
# 543 "data/maps/RusturfTunnel/scripts.pory"
	.string "Haben alle Energie verloren…$"
# 544 "data/maps/RusturfTunnel/scripts.pory"

# 545 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 546 "data/maps/RusturfTunnel/scripts.pory"
	.string "Sie haben das Projekt hier einge-\n"
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "stellt, um die Pokémon zu schützen,\l"
# 548 "data/maps/RusturfTunnel/scripts.pory"
	.string "nicht wahr? Eine rührende Geschichte.$"

RusturfTunnel_Text_PkmnSignCave::
# 11 "data/maps/RusturfTunnel/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich in dieser Höhle:$"
