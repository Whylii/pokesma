# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 3 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 4 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity/scripts.pory"

# 6 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 7 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 8 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 9 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 10 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 11 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/MossdeepCity/scripts.pory"
	end
# 13 "data/maps/MossdeepCity/scripts.pory"

# 14 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 15 "data/maps/MossdeepCity/scripts.pory"
	lock
# 16 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 17 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 18 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 19 "data/maps/MossdeepCity/scripts.pory"
	release
# 20 "data/maps/MossdeepCity/scripts.pory"
	end
# 21 "data/maps/MossdeepCity/scripts.pory"

# 22 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 23 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 24 "data/maps/MossdeepCity/scripts.pory"
	release
# 25 "data/maps/MossdeepCity/scripts.pory"
	end
# 26 "data/maps/MossdeepCity/scripts.pory"

# 27 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 28 "data/maps/MossdeepCity/scripts.pory"
	lock
# 29 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 30 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 31 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity/scripts.pory"
	release
# 33 "data/maps/MossdeepCity/scripts.pory"
	end
# 34 "data/maps/MossdeepCity/scripts.pory"

# 35 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 36 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 37 "data/maps/MossdeepCity/scripts.pory"
	release
# 38 "data/maps/MossdeepCity/scripts.pory"
	end
# 39 "data/maps/MossdeepCity/scripts.pory"

# 40 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 41 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 42 "data/maps/MossdeepCity/scripts.pory"
	end
# 43 "data/maps/MossdeepCity/scripts.pory"

# 44 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 45 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 46 "data/maps/MossdeepCity/scripts.pory"
	end
# 47 "data/maps/MossdeepCity/scripts.pory"

# 48 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 49 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 50 "data/maps/MossdeepCity/scripts.pory"
	end
# 51 "data/maps/MossdeepCity/scripts.pory"

# 52 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 53 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 54 "data/maps/MossdeepCity/scripts.pory"
	end
# 55 "data/maps/MossdeepCity/scripts.pory"

# 56 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 57 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 58 "data/maps/MossdeepCity/scripts.pory"
	end
# 59 "data/maps/MossdeepCity/scripts.pory"

# 60 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 61 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 62 "data/maps/MossdeepCity/scripts.pory"
	end
# 63 "data/maps/MossdeepCity/scripts.pory"

# 64 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 65 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 66 "data/maps/MossdeepCity/scripts.pory"
	end
# 67 "data/maps/MossdeepCity/scripts.pory"

# 68 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 69 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 70 "data/maps/MossdeepCity/scripts.pory"
	end
# 71 "data/maps/MossdeepCity/scripts.pory"

# 72 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 73 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 74 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 75 "data/maps/MossdeepCity/scripts.pory"
	end
# 76 "data/maps/MossdeepCity/scripts.pory"

# 77 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 78 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 79 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
# 80 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 82 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 83 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 84 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 85 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
# 87 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 88 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_MAXIE
# 93 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_1
# 94 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_2
# 95 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_3
# 96 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_GRUNT_4
# 97 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 98 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 99 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 100 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 101 "data/maps/MossdeepCity/scripts.pory"
	end
# 102 "data/maps/MossdeepCity/scripts.pory"

# 103 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieGestureToSpaceCenter:
# 104 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 105 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 106 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 107 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 108 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 109 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 110 "data/maps/MossdeepCity/scripts.pory"
	face_left
# 111 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 112 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 113 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 114 "data/maps/MossdeepCity/scripts.pory"

# 115 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 116 "data/maps/MossdeepCity/scripts.pory"
	face_right
# 117 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 118 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 119 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 120 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 121 "data/maps/MossdeepCity/scripts.pory"

# 122 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_MaxieEnterSpaceCenter:
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 124 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 125 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 126 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 127 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 128 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 129 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 136 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 137 "data/maps/MossdeepCity/scripts.pory"

# 138 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 139 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 140 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 143 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 144 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 145 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 146 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 147 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 157 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 158 "data/maps/MossdeepCity/scripts.pory"

# 159 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 160 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 161 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 164 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 165 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 166 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 167 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 168 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 177 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 178 "data/maps/MossdeepCity/scripts.pory"

# 179 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 180 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 181 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 185 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 186 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 187 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 188 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 196 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 197 "data/maps/MossdeepCity/scripts.pory"

# 198 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 199 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 200 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 204 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 205 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 206 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 207 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 214 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 215 "data/maps/MossdeepCity/scripts.pory"

# 216 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 217 "data/maps/MossdeepCity/scripts.pory"
	lock
# 218 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 219 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 220 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 221 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/MossdeepCity/scripts.pory"
	release
# 223 "data/maps/MossdeepCity/scripts.pory"
	end
# 224 "data/maps/MossdeepCity/scripts.pory"

# 225 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 226 "data/maps/MossdeepCity/scripts.pory"
	lock
# 227 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 228 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 229 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 230 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 231 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 232 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 233 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 234 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 235 "data/maps/MossdeepCity/scripts.pory"
	release
# 236 "data/maps/MossdeepCity/scripts.pory"
	end
# 237 "data/maps/MossdeepCity/scripts.pory"

# 238 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 239 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
# 240 "data/maps/MossdeepCity/scripts.pory"
	release
# 241 "data/maps/MossdeepCity/scripts.pory"
	end
# 242 "data/maps/MossdeepCity/scripts.pory"

# 243 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 244 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 245 "data/maps/MossdeepCity/scripts.pory"
	release
# 246 "data/maps/MossdeepCity/scripts.pory"
	end
# 247 "data/maps/MossdeepCity/scripts.pory"

# 248 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 249 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 250 "data/maps/MossdeepCity/scripts.pory"
	end
# 251 "data/maps/MossdeepCity/scripts.pory"

# 252 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 253 "data/maps/MossdeepCity/scripts.pory"
	lock
# 254 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 255 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 256 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 257 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 258 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 259 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 260 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_MOSSDEEP_SCOTT
# 261 "data/maps/MossdeepCity/scripts.pory"
	release
# 262 "data/maps/MossdeepCity/scripts.pory"
	end
# 263 "data/maps/MossdeepCity/scripts.pory"

# 264 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 265 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 266 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 267 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/MossdeepCity/scripts.pory"
	return
# 269 "data/maps/MossdeepCity/scripts.pory"

# 270 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 271 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 272 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
# 273 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/MossdeepCity/scripts.pory"
	return
# 275 "data/maps/MossdeepCity/scripts.pory"

# 276 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 277 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 278 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 279 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 280 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 281 "data/maps/MossdeepCity/scripts.pory"

# 282 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 283 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 284 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 285 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 286 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 289 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 290 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 292 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 293 "data/maps/MossdeepCity/scripts.pory"

# 294 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 301 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 302 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 306 "data/maps/MossdeepCity/scripts.pory"

# 307 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 308 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich habe das von Troy bekommen, weiß\n"
# 309 "data/maps/MossdeepCity/scripts.pory"
	.string "aber nicht, was ich damit machen soll.\p"
# 310 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich glaube, es heißt King-Stein.\n"
# 311 "data/maps/MossdeepCity/scripts.pory"
	.string "Möchtest du das haben?$"
# 312 "data/maps/MossdeepCity/scripts.pory"

# 313 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 314 "data/maps/MossdeepCity/scripts.pory"
	.string "Warum willst du das haben?\n"
# 315 "data/maps/MossdeepCity/scripts.pory"
	.string "Du bist komisch.\p"
# 316 "data/maps/MossdeepCity/scripts.pory"
	.string "Du kannst es behalten, aber erzähle\n"
# 317 "data/maps/MossdeepCity/scripts.pory"
	.string "es nicht Troy.$"
# 318 "data/maps/MossdeepCity/scripts.pory"

# 319 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_StevensHouseOverThere:
# 320 "data/maps/MossdeepCity/scripts.pory"
	.string "Troys Haus befindet sich gleich\n"
# 321 "data/maps/MossdeepCity/scripts.pory"
	.string "dort drüben.$"
# 322 "data/maps/MossdeepCity/scripts.pory"

# 323 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 324 "data/maps/MossdeepCity/scripts.pory"
	.string "Ach, du denkst das auch! Was soll man\n"
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "auch mit komischen Steinen anfangen?$"
# 326 "data/maps/MossdeepCity/scripts.pory"

# 327 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "In der Nähe von Moosbach City\n"
# 329 "data/maps/MossdeepCity/scripts.pory"
	.string "kann man wilde Wailmer sehen.\p"
# 330 "data/maps/MossdeepCity/scripts.pory"
	.string "Das nennt man, äh…\n"
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "Nennt man… äh… ähm…\p"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "Wai…, Wai…, Wai…\p"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "Wailmer Watching!$"
# 334 "data/maps/MossdeepCity/scripts.pory"

# 335 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 336 "data/maps/MossdeepCity/scripts.pory"
	.string "Am Raumfahrtzentrum auf der Insel\n"
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "werden große Raketen gestartet.\p"
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "Dort ist vor kurzem ein Brief ange-\n"
# 339 "data/maps/MossdeepCity/scripts.pory"
	.string "kommen, der für Aufregung sorgte.$"
# 340 "data/maps/MossdeepCity/scripts.pory"

# 341 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "Am Raumfahrtzentrum auf der Insel\n"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "werden große Raketen gestartet.$"
# 344 "data/maps/MossdeepCity/scripts.pory"

# 345 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich habe von einem Freund, einem\n"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "Matrosen, gehört, dass Team Aqua sich\p"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "in Seegrasulb City aufgehalten\n"
# 349 "data/maps/MossdeepCity/scripts.pory"
	.string "haben soll.\p"
# 350 "data/maps/MossdeepCity/scripts.pory"
	.string "Aber dann ist jemand gekommen und hat\n"
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "sie aufgemischt.\p"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "Und in Moosbach City ist Team\n"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "Magma.\p"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "Wenn du wissen willst, was sie vorhaben,\n"
# 355 "data/maps/MossdeepCity/scripts.pory"
	.string "dann geh zum Raumfahrtzentrum.$"
# 356 "data/maps/MossdeepCity/scripts.pory"

# 357 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich bin ein Matrose, daher ist das Meer\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "sehr wichtig für mich.\p"
# 360 "data/maps/MossdeepCity/scripts.pory"
	.string "Aber weißt du, was? Wenn ich nach einer\n"
# 361 "data/maps/MossdeepCity/scripts.pory"
	.string "langen Seefahrt wieder festen Boden\p"
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "unter den Füßen habe, bin ich jedes Mal\n"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "erleichtert.$"
# 364 "data/maps/MossdeepCity/scripts.pory"

# 365 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "Wäre das nicht schön?\p"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "Wenn die ganze Welt so mit Blumen und\n"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "Pflanzen bewachsen wäre wie diese\l"
# 369 "data/maps/MossdeepCity/scripts.pory"
	.string "Insel?$"
# 370 "data/maps/MossdeepCity/scripts.pory"

# 371 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "Alle Lebewesen brauchen das Meer, um\n"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "leben zu können, auch wenn sie an Land\l"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "leben.\p"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "Am Ende ihrer Reise wird aus den\n"
# 376 "data/maps/MossdeepCity/scripts.pory"
	.string "Lebewesen Erde und sie kehren zurück\l"
# 377 "data/maps/MossdeepCity/scripts.pory"
	.string "zum Land.\p"
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "Und das Meer steht immer in Verbindung\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "zum Land.\p"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "Genau wie dieses Ufer hier.$"
# 381 "data/maps/MossdeepCity/scripts.pory"

# 382 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "Eine Reise auf einem Schiff ist toll.\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "Aber das Meer auf einem Pokémon zu\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "überqueren, das Surfer einsetzt…\p"
# 386 "data/maps/MossdeepCity/scripts.pory"
	.string "Das ist wirklich eine aufregende Sache.\n"
# 387 "data/maps/MossdeepCity/scripts.pory"
	.string "Meinst du nicht auch, Kindchen?$"
# 388 "data/maps/MossdeepCity/scripts.pory"

# 389 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 390 "data/maps/MossdeepCity/scripts.pory"
	.string "Dieser Felsen hat eine ganz besondere\n"
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "Bedeutung für das Raumfahrtzentrum.\p"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "Sie haben ihn hier hingesetzt als\n"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "Glücksbringer für den sicheren Flug der\l"
# 394 "data/maps/MossdeepCity/scripts.pory"
	.string "Raketen.\p"
# 395 "data/maps/MossdeepCity/scripts.pory"
	.string "Wenn du dir etwas wünschst, was machst\n"
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "du dann? Sternschnuppen beobachten?\p"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich benutze ein Wunschkärtchen.\n"
# 398 "data/maps/MossdeepCity/scripts.pory"
	.string "Genau das mache ich.$"
# 399 "data/maps/MossdeepCity/scripts.pory"

# 400 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "Ein weißer Felsen.$"
# 402 "data/maps/MossdeepCity/scripts.pory"

# 403 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "Pokémon Arena von Moosbach City \n"
# 405 "data/maps/MossdeepCity/scripts.pory"
	.string "Leiter: Svenja & Ben\p"
# 406 "data/maps/MossdeepCity/scripts.pory"
	.string "Die mystische Kombination!$"
# 407 "data/maps/MossdeepCity/scripts.pory"

# 408 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "Moosbach City\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "Unser Motto: Schätze Pokémon!$"
# 411 "data/maps/MossdeepCity/scripts.pory"

# 412 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "Moosbach City Raumfahrtzentrum\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "Der letzte Ort vor dem All.$"
# 415 "data/maps/MossdeepCity/scripts.pory"

# 416 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 417 "data/maps/MossdeepCity/scripts.pory"
	.string "Scott: Geht es dir gut, {PLAYER}{KUN}?\n"
# 418 "data/maps/MossdeepCity/scripts.pory"
	.string "Mir geht es fantastisch!\p"
# 419 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich habe mir sagen lassen, dass die\n"
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "Arenaleiter von Moosbach sehr stark\l"
# 421 "data/maps/MossdeepCity/scripts.pory"
	.string "sein sollen.\p"
# 422 "data/maps/MossdeepCity/scripts.pory"
	.string "Davon musste ich mich einfach selbst\n"
# 423 "data/maps/MossdeepCity/scripts.pory"
	.string "überzeugen.\p"
# 424 "data/maps/MossdeepCity/scripts.pory"
	.string "Aber in dieser Stadt geht irgendetwas\n"
# 425 "data/maps/MossdeepCity/scripts.pory"
	.string "Merkwürdiges vor.\p"
# 426 "data/maps/MossdeepCity/scripts.pory"
	.string "Die Leute reden über einen Brief mit\n"
# 427 "data/maps/MossdeepCity/scripts.pory"
	.string "einer Warnung und dem\l"
# 428 "data/maps/MossdeepCity/scripts.pory"
	.string "Raumfahrtzentrum…\p"
# 429 "data/maps/MossdeepCity/scripts.pory"
	.string "Aber ich glaube nicht, dass mich das\n"
# 430 "data/maps/MossdeepCity/scripts.pory"
	.string "etwas angeht.$"
# 431 "data/maps/MossdeepCity/scripts.pory"

# 432 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 433 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… Ein großartiges Gefühl, wenn\n"
# 434 "data/maps/MossdeepCity/scripts.pory"
	.string "die Wellen über meine Füße spülen…\p"
# 435 "data/maps/MossdeepCity/scripts.pory"
	.string "Apropos Wellen. Kennst du die Stadt\n"
# 436 "data/maps/MossdeepCity/scripts.pory"
	.string "Xeneroville?\p"
# 437 "data/maps/MossdeepCity/scripts.pory"
	.string "Ich glaube, die Arena dort hat einen\n"
# 438 "data/maps/MossdeepCity/scripts.pory"
	.string "neuen Leiter.\p"
# 439 "data/maps/MossdeepCity/scripts.pory"
	.string "Das soll der frühere Mentor von\n"
# 440 "data/maps/MossdeepCity/scripts.pory"
	.string "Wassili sein.$"
