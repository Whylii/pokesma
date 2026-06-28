# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 3 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 4 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 5 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 6 "data/maps/MtChimney/scripts.pory"

# 7 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 8 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 9 "data/maps/MtChimney/scripts.pory"
	end
# 10 "data/maps/MtChimney/scripts.pory"

# 11 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 12 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 13 "data/maps/MtChimney/scripts.pory"
	end
# 14 "data/maps/MtChimney/scripts.pory"

# 15 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 16 "data/maps/MtChimney/scripts.pory"
	lock
# 17 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 18 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 19 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 20 "data/maps/MtChimney/scripts.pory"
	closemessage
# 21 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 22 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 23 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 24 "data/maps/MtChimney/scripts.pory"
	release
# 25 "data/maps/MtChimney/scripts.pory"
	end
# 26 "data/maps/MtChimney/scripts.pory"

# 27 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 28 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 29 "data/maps/MtChimney/scripts.pory"
	return
# 30 "data/maps/MtChimney/scripts.pory"

# 31 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 32 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 33 "data/maps/MtChimney/scripts.pory"
	return
# 34 "data/maps/MtChimney/scripts.pory"

# 35 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 36 "data/maps/MtChimney/scripts.pory"
	lockall
# 37 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 38 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 39 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 40 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 42 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 43 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 44 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 45 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 48 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 49 "data/maps/MtChimney/scripts.pory"
	closemessage
# 50 "data/maps/MtChimney/scripts.pory"
	delay 30
# 51 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 52 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 53 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 54 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 55 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 56 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 57 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 58 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 59 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 60 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 61 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 62 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 65 "data/maps/MtChimney/scripts.pory"
	closemessage
# 66 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 67 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 68 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 69 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 70 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 71 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 72 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 73 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 74 "data/maps/MtChimney/scripts.pory"
	releaseall
# 75 "data/maps/MtChimney/scripts.pory"
	end
# 76 "data/maps/MtChimney/scripts.pory"

# 77 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 78 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 79 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtChimney/scripts.pory"
	return
# 81 "data/maps/MtChimney/scripts.pory"

# 82 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 83 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 84 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 85 "data/maps/MtChimney/scripts.pory"
	return
# 86 "data/maps/MtChimney/scripts.pory"

# 87 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 88 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
# 89 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 90 "data/maps/MtChimney/scripts.pory"
	return
# 91 "data/maps/MtChimney/scripts.pory"

# 92 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 93 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 94 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtChimney/scripts.pory"
	return
# 96 "data/maps/MtChimney/scripts.pory"

# 97 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 98 "data/maps/MtChimney/scripts.pory"
	lock
# 99 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 100 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 101 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 102 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 103 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 104 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 105 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 106 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 107 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 108 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 109 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 111 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 112 "data/maps/MtChimney/scripts.pory"
	release
# 113 "data/maps/MtChimney/scripts.pory"
	end
# 114 "data/maps/MtChimney/scripts.pory"

# 115 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 116 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 117 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 118 "data/maps/MtChimney/scripts.pory"
	release
# 119 "data/maps/MtChimney/scripts.pory"
	end
# 120 "data/maps/MtChimney/scripts.pory"
.else
# 121 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 122 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 123 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 124 "data/maps/MtChimney/scripts.pory"
	release
# 125 "data/maps/MtChimney/scripts.pory"
	end
# 126 "data/maps/MtChimney/scripts.pory"

# 127 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 128 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 129 "data/maps/MtChimney/scripts.pory"
	release
# 130 "data/maps/MtChimney/scripts.pory"
	end
# 131 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 132 "data/maps/MtChimney/scripts.pory"

# 133 "data/maps/MtChimney/scripts.pory"

# 134 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 135 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 136 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 137 "data/maps/MtChimney/scripts.pory"
	return
# 138 "data/maps/MtChimney/scripts.pory"

# 139 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 140 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 141 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 142 "data/maps/MtChimney/scripts.pory"
	release
# 143 "data/maps/MtChimney/scripts.pory"
	end
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 146 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 147 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 148 "data/maps/MtChimney/scripts.pory"
	release
# 149 "data/maps/MtChimney/scripts.pory"
	end
# 150 "data/maps/MtChimney/scripts.pory"

# 151 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 152 "data/maps/MtChimney/scripts.pory"
	walk_up
# 153 "data/maps/MtChimney/scripts.pory"
	walk_up
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_up
# 158 "data/maps/MtChimney/scripts.pory"
	walk_right
# 159 "data/maps/MtChimney/scripts.pory"
	step_end
# 160 "data/maps/MtChimney/scripts.pory"

# 161 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	step_end
# 171 "data/maps/MtChimney/scripts.pory"

# 172 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 173 "data/maps/MtChimney/scripts.pory"
	walk_up
# 174 "data/maps/MtChimney/scripts.pory"
	walk_up
# 175 "data/maps/MtChimney/scripts.pory"
	walk_up
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_up
# 178 "data/maps/MtChimney/scripts.pory"
	walk_right
# 179 "data/maps/MtChimney/scripts.pory"
	walk_right
# 180 "data/maps/MtChimney/scripts.pory"
	step_end
# 181 "data/maps/MtChimney/scripts.pory"

# 182 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 183 "data/maps/MtChimney/scripts.pory"
	walk_left
# 184 "data/maps/MtChimney/scripts.pory"
	walk_left
# 185 "data/maps/MtChimney/scripts.pory"
	walk_down
# 186 "data/maps/MtChimney/scripts.pory"
	walk_down
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	step_end
# 193 "data/maps/MtChimney/scripts.pory"

# 194 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 195 "data/maps/MtChimney/scripts.pory"
	walk_down
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 203 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_left
# 207 "data/maps/MtChimney/scripts.pory"
	walk_left
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_left
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	step_end
# 213 "data/maps/MtChimney/scripts.pory"

# 214 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_left
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	step_end
# 224 "data/maps/MtChimney/scripts.pory"

# 225 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 226 "data/maps/MtChimney/scripts.pory"
	walk_right
# 227 "data/maps/MtChimney/scripts.pory"
	walk_down
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_left
# 232 "data/maps/MtChimney/scripts.pory"
	walk_left
# 233 "data/maps/MtChimney/scripts.pory"
	walk_left
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	step_end
# 241 "data/maps/MtChimney/scripts.pory"

# 242 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 243 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 244 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_left
# 253 "data/maps/MtChimney/scripts.pory"
	walk_left
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_left
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_left
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	step_end
# 268 "data/maps/MtChimney/scripts.pory"

# 269 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 270 "data/maps/MtChimney/scripts.pory"
	delay_16
# 271 "data/maps/MtChimney/scripts.pory"
	delay_16
# 272 "data/maps/MtChimney/scripts.pory"
	delay_16
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_left
# 277 "data/maps/MtChimney/scripts.pory"
	walk_left
# 278 "data/maps/MtChimney/scripts.pory"
	walk_left
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	step_end
# 281 "data/maps/MtChimney/scripts.pory"

# 282 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 283 "data/maps/MtChimney/scripts.pory"
	delay_16
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_left
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	step_end
# 299 "data/maps/MtChimney/scripts.pory"

# 300 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 301 "data/maps/MtChimney/scripts.pory"
	delay_16
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
# 303 "data/maps/MtChimney/scripts.pory"
	walk_left
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_left
# 312 "data/maps/MtChimney/scripts.pory"
	walk_left
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	step_end
# 318 "data/maps/MtChimney/scripts.pory"

# 319 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 320 "data/maps/MtChimney/scripts.pory"
	delay_16
# 321 "data/maps/MtChimney/scripts.pory"
	walk_down
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_left
# 326 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 327 "data/maps/MtChimney/scripts.pory"
	step_end
# 328 "data/maps/MtChimney/scripts.pory"

# 329 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 330 "data/maps/MtChimney/scripts.pory"
	walk_down
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_left
# 335 "data/maps/MtChimney/scripts.pory"
	walk_left
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	step_end
# 344 "data/maps/MtChimney/scripts.pory"

# 345 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	step_end
# 348 "data/maps/MtChimney/scripts.pory"

# 349 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	step_end
# 358 "data/maps/MtChimney/scripts.pory"

# 359 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 360 "data/maps/MtChimney/scripts.pory"
	delay_16
# 361 "data/maps/MtChimney/scripts.pory"
	delay_16
# 362 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 363 "data/maps/MtChimney/scripts.pory"
	delay_16
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	step_end
# 370 "data/maps/MtChimney/scripts.pory"

# 371 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	delay_16
# 374 "data/maps/MtChimney/scripts.pory"
	delay_16
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	delay_16
# 377 "data/maps/MtChimney/scripts.pory"
	delay_16
# 378 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 379 "data/maps/MtChimney/scripts.pory"
	delay_16
# 380 "data/maps/MtChimney/scripts.pory"
	walk_down
# 381 "data/maps/MtChimney/scripts.pory"
	walk_down
# 382 "data/maps/MtChimney/scripts.pory"
	step_end
# 383 "data/maps/MtChimney/scripts.pory"

# 384 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 385 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 386 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 387 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 388 "data/maps/MtChimney/scripts.pory"
	face_right
# 389 "data/maps/MtChimney/scripts.pory"
	step_end
# 390 "data/maps/MtChimney/scripts.pory"

# 391 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 392 "data/maps/MtChimney/scripts.pory"
	walk_left
# 393 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 394 "data/maps/MtChimney/scripts.pory"
	delay_16
# 395 "data/maps/MtChimney/scripts.pory"
	step_end
# 396 "data/maps/MtChimney/scripts.pory"

# 397 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 398 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 399 "data/maps/MtChimney/scripts.pory"
	end
# 400 "data/maps/MtChimney/scripts.pory"

# 401 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 402 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 403 "data/maps/MtChimney/scripts.pory"
	end
# 404 "data/maps/MtChimney/scripts.pory"

# 405 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 406 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 407 "data/maps/MtChimney/scripts.pory"
	end
# 408 "data/maps/MtChimney/scripts.pory"

# 409 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 410 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 411 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/MtChimney/scripts.pory"
	end
# 413 "data/maps/MtChimney/scripts.pory"

# 414 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 415 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 416 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 417 "data/maps/MtChimney/scripts.pory"
	end
# 418 "data/maps/MtChimney/scripts.pory"

# 419 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 420 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 421 "data/maps/MtChimney/scripts.pory"
	end
# 422 "data/maps/MtChimney/scripts.pory"

# 423 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 424 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 425 "data/maps/MtChimney/scripts.pory"
	end
# 426 "data/maps/MtChimney/scripts.pory"

# 427 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 428 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 429 "data/maps/MtChimney/scripts.pory"
	end
# 430 "data/maps/MtChimney/scripts.pory"

# 431 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 432 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 433 "data/maps/MtChimney/scripts.pory"
	end
# 434 "data/maps/MtChimney/scripts.pory"

# 435 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 436 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 437 "data/maps/MtChimney/scripts.pory"
	end
# 438 "data/maps/MtChimney/scripts.pory"

# 439 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 440 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 441 "data/maps/MtChimney/scripts.pory"
	end
# 442 "data/maps/MtChimney/scripts.pory"

# 443 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 444 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 445 "data/maps/MtChimney/scripts.pory"
	end
# 446 "data/maps/MtChimney/scripts.pory"

# 447 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 448 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 449 "data/maps/MtChimney/scripts.pory"
	end
# 450 "data/maps/MtChimney/scripts.pory"

# 451 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 452 "data/maps/MtChimney/scripts.pory"
	lockall
# 453 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 454 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 455 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 456 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 457 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 458 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 459 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 460 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 461 "data/maps/MtChimney/scripts.pory"
	releaseall
# 462 "data/maps/MtChimney/scripts.pory"
	end
# 463 "data/maps/MtChimney/scripts.pory"

# 464 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 465 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 466 "data/maps/MtChimney/scripts.pory"
	releaseall
# 467 "data/maps/MtChimney/scripts.pory"
	end
# 468 "data/maps/MtChimney/scripts.pory"

# 469 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 470 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 471 "data/maps/MtChimney/scripts.pory"
	releaseall
# 472 "data/maps/MtChimney/scripts.pory"
	end
# 473 "data/maps/MtChimney/scripts.pory"

# 474 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 475 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteFittedOnMachine, MSGBOX_DEFAULT
# 476 "data/maps/MtChimney/scripts.pory"
	releaseall
# 477 "data/maps/MtChimney/scripts.pory"
	end
# 478 "data/maps/MtChimney/scripts.pory"

# 479 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 480 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 481 "data/maps/MtChimney/scripts.pory"
	end
# 482 "data/maps/MtChimney/scripts.pory"

# 483 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 484 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 485 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 486 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 487 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 488 "data/maps/MtChimney/scripts.pory"
	release
# 489 "data/maps/MtChimney/scripts.pory"
	end
# 490 "data/maps/MtChimney/scripts.pory"

# 491 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 492 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 493 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 494 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 495 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 496 "data/maps/MtChimney/scripts.pory"
	release
# 497 "data/maps/MtChimney/scripts.pory"
	end
# 498 "data/maps/MtChimney/scripts.pory"

# 499 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 500 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 501 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 502 "data/maps/MtChimney/scripts.pory"
	end
# 503 "data/maps/MtChimney/scripts.pory"

# 504 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 505 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 506 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 507 "data/maps/MtChimney/scripts.pory"
	end
# 508 "data/maps/MtChimney/scripts.pory"

# 509 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 510 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 511 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 512 "data/maps/MtChimney/scripts.pory"
	end
# 513 "data/maps/MtChimney/scripts.pory"

# 514 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 515 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 516 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 517 "data/maps/MtChimney/scripts.pory"
	end
# 518 "data/maps/MtChimney/scripts.pory"

# 519 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 520 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 521 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 522 "data/maps/MtChimney/scripts.pory"
	end
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 525 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 526 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 527 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 528 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 529 "data/maps/MtChimney/scripts.pory"
	release
# 530 "data/maps/MtChimney/scripts.pory"
	end
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 533 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 534 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 535 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 536 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 537 "data/maps/MtChimney/scripts.pory"
	release
# 538 "data/maps/MtChimney/scripts.pory"
	end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 541 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 542 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 543 "data/maps/MtChimney/scripts.pory"
	end
# 544 "data/maps/MtChimney/scripts.pory"

# 545 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 546 "data/maps/MtChimney/scripts.pory"
	.string "Die Kraft, die in dem Meteoriten\n"
# 547 "data/maps/MtChimney/scripts.pory"
	.string "steckt…\p"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "Wenn man die mit dieser Maschine\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "verstärkt, würde die Aktivität des\l"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "Schlotbergs enorm verstärkt…\p"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "Die Energie wird tief im Krater\n"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "ansteigen und…\l"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 554 "data/maps/MtChimney/scripts.pory"

# 555 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 556 "data/maps/MtChimney/scripts.pory"
	.string "Marc: Hm?\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "Wer bist du denn?!?\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "Adrian hat sich über ein Kind beklagt,\n"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "das sich in die Angelegenheiten von\l"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "Team Aqua einmischt.\p"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "Dieses Kind musst du sein.\p"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Hmpf! Und du glaubst, du kannst dich\n"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "auch in unsere, Team Magmas\l"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "Angelegenheiten einmischen?\p"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Hör gut zu. Schon lange Zeit nutzen\n"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "die Lebewesen das Land, um zu\l"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "wachsen und zu gedeihen.\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "Daher ist das Land wichtiger als alles\n"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "andere! Es ist die Wiege allen Lebens.\p"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "Daher widmet sich Team Magma der Auf-\n"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "gabe, die Landmassen zu vergrößern.\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "So entsteht mehr Raum für Menschen\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "und Pokémon.\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "Für unsere Pläne brauchen wir das, was\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "im Inneren dieses Berges schläft…\p"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "Nun, mehr brauchst du nicht zu wissen.\p"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "Ich kann einem sturen Kind wie dir nicht\n"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "erlauben, sich uns in den Weg zu stellen.\p"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "Ich werde dir zeigen, was\n"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "passiert, wenn du uns aufhalten willst!$"
# 583 "data/maps/MtChimney/scripts.pory"

# 584 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 585 "data/maps/MtChimney/scripts.pory"
	.string "Wie bitte?!?\p"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "Ich, Marc, wurde ganz hinterhältig\n"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "besiegt?!?$"
# 588 "data/maps/MtChimney/scripts.pory"

# 589 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 590 "data/maps/MtChimney/scripts.pory"
	.string "Marc: Genug.\n"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "Ich ziehe mich für den Moment zurück.\p"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "Aber das ist nicht das letzte Mal, dass\n"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "du Team Magma zu Gesicht bekommen\l"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "hast.\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "Auch ohne Meteorit… Wenn wir erst die\n"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "Kugel haben… Hehehe…$"
# 598 "data/maps/MtChimney/scripts.pory"

# 599 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 600 "data/maps/MtChimney/scripts.pory"
	.string "Hahahahaha!\p"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "Da bist du also den weiten Weg hier\n"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "hoch gelatscht.\p"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "Tja, du kommst leider zu spät. Ich habe\n"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "den Meteoriten aus den Meteorfällen\l"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "bereits bei meinem Boss abgeliefert!$"
# 606 "data/maps/MtChimney/scripts.pory"

# 607 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 608 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "Auch wenn ich verloren habe… Sobald\n"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "unser Boss das Wesen zum Leben erweckt…$"
# 611 "data/maps/MtChimney/scripts.pory"

# 612 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 613 "data/maps/MtChimney/scripts.pory"
	.string "Boss, beeil dich!\n"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Benutze die Energie des Meteoriten!\p"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 616 "data/maps/MtChimney/scripts.pory"

# 617 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Wir von Team Magma setzen alles daran,\n"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "zum Wohle aller zu handeln.\p"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "Und wenn das Wesen mehr Land schafft,\n"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "gibt es auch mehr Platz zum Leben.\p"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "Und jeder wäre glücklich!$"
# 623 "data/maps/MtChimney/scripts.pory"

# 624 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 625 "data/maps/MtChimney/scripts.pory"
	.string "Bitte?\n"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Was sagst du? Ich habe verloren?$"
# 627 "data/maps/MtChimney/scripts.pory"

# 628 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 629 "data/maps/MtChimney/scripts.pory"
	.string "Unser Boss sagt: “Jeder wird glücklich\n"
# 630 "data/maps/MtChimney/scripts.pory"
	.string "sein.”\p"
# 631 "data/maps/MtChimney/scripts.pory"
	.string "Aber warum will uns dann jeder\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "aufhalten?$"
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 635 "data/maps/MtChimney/scripts.pory"
	.string "Wenn es mehr Land gibt, wäre ich in der\n"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "Lage, mir ein eigenes großes Haus zu\l"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "bauen!\p"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "Das würde ich dann auf der erstarrten\n"
# 639 "data/maps/MtChimney/scripts.pory"
	.string "Lava bauen!$"
# 640 "data/maps/MtChimney/scripts.pory"

# 641 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 642 "data/maps/MtChimney/scripts.pory"
	.string "Mein Traum von einem großen Haus…$"
# 643 "data/maps/MtChimney/scripts.pory"

# 644 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 645 "data/maps/MtChimney/scripts.pory"
	.string "Ein Kind wie du sollte sich im Meer\n"
# 646 "data/maps/MtChimney/scripts.pory"
	.string "vergnügen.$"
# 647 "data/maps/MtChimney/scripts.pory"

# 648 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 649 "data/maps/MtChimney/scripts.pory"
	.string "Dieses lästige Team Aqua… Sie ver-\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "suchen alles, unsere Pläne zu vereiteln.$"
# 651 "data/maps/MtChimney/scripts.pory"

# 652 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 653 "data/maps/MtChimney/scripts.pory"
	.string "Meteoriten stecken voller Energie.$"
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 656 "data/maps/MtChimney/scripts.pory"
	.string "Du gehst uns besser aus dem Weg!\p"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "Wir werden das Wesen zum Leben erwecken.\n"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "Zum Wohle aller.$"
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 661 "data/maps/MtChimney/scripts.pory"
	.string "Wir sind Team Magma!\p"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "Sie sind Team Aqua!\p"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "Ich finde es total bescheuert, dass sie\n"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "einen Namen haben, der unserem ähnelt.$"
# 665 "data/maps/MtChimney/scripts.pory"

# 666 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 667 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Taucht sie ins Feuer!$"
# 669 "data/maps/MtChimney/scripts.pory"

# 670 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 671 "data/maps/MtChimney/scripts.pory"
	.string "Wir werden weiter für mehr Land sorgen!$"
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 674 "data/maps/MtChimney/scripts.pory"
	.string "Hahoh!$"
# 675 "data/maps/MtChimney/scripts.pory"

# 676 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 677 "data/maps/MtChimney/scripts.pory"
	.string "Adrian: Grrr, {PLAYER}!\n"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "Ich hätte es wissen müssen. War doch\l"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "klar, dass du hier auftauchst.\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "Schau dir ruhig an, was die Fanatiker\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "von Team Magma vorhaben!\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "Sie wollen die Kraft des gestohlenen\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "Meteoriten in den Vulkan geben!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "Und das wird den Vulkan zum Ausbruch\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "bringen!$"
# 686 "data/maps/MtChimney/scripts.pory"

# 687 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 688 "data/maps/MtChimney/scripts.pory"
	.string "Adrian: Grrr…\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "Ich möchte Marc aufhalten, aber ich\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "kann es nicht!\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "Nicht, wenn ich mich drei Gegnern\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "gleichzeitig stellen muss.$"
# 693 "data/maps/MtChimney/scripts.pory"

# 694 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 695 "data/maps/MtChimney/scripts.pory"
	.string "Adrian: {PLAYER}!\n"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Danke!\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "Mit deiner Hilfe haben wir den\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "zerstörerischen Plan von Team Magma\l"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "durchkreuzt!\p"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "Aber… Du…\n"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "Auf welcher Seite stehst du?\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "Ach, das ist egal.\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "Wir werden weiter unsere Augen\n"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "aufhalten und Team Magma beobachten.\p"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, wir sehen uns bestimmt wieder!$"
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 708 "data/maps/MtChimney/scripts.pory"
	.string "Mist… Team Magma ist uns zahlenmäßig\n"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "überlegen! Wir können es nicht mit ihnen\l"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "aufnehmen!$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "Wenn sie die Landmassen vergrößern,\n"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "gibt es weniger Lebensraum für\l"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Wasser-Pokémon!$"
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 718 "data/maps/MtChimney/scripts.pory"
	.string "Wir sind Team Aqua!\p"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "Sie sind Team Magma!\p"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Ich koche über vor Wut, weil sie so\n"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "einen verwirrenden Namen verwenden.$"
# 722 "data/maps/MtChimney/scripts.pory"

# 723 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 725 "data/maps/MtChimney/scripts.pory"

# 726 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 727 "data/maps/MtChimney/scripts.pory"
	.string "Lavakekse sind die Spezialität am\n"
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Schlotberg.\p"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "Nimm einen. Er kostet nur ¥200.$"
# 730 "data/maps/MtChimney/scripts.pory"

# 731 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 732 "data/maps/MtChimney/scripts.pory"
	.string "Vielen Dank, Herzchen!$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "Oh je. Du kannst nichts kaufen, wenn\n"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "du nicht genug Geld bei dir hast.$"
# 737 "data/maps/MtChimney/scripts.pory"

# 738 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 739 "data/maps/MtChimney/scripts.pory"
	.string "Oh, ist gut.$"
# 740 "data/maps/MtChimney/scripts.pory"

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteFittedOnMachine:
# 742 "data/maps/MtChimney/scripts.pory"
	.string "Ein Meteorit steckt in dieser\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "mysteriösen Vorrichtung…\p"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "Die Maschine scheint den Meteoriten\n"
# 745 "data/maps/MtChimney/scripts.pory"
	.string "mit Energie zu versorgen.$"
# 746 "data/maps/MtChimney/scripts.pory"

# 747 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 748 "data/maps/MtChimney/scripts.pory"
	.string "Ein Meteorit steckt in dieser\n"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "mysteriösen Vorrichtung…\p"
# 750 "data/maps/MtChimney/scripts.pory"
	.string "Willst du den Meteoriten nehmen?$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} entfernt den Meteoriten aus\n"
# 754 "data/maps/MtChimney/scripts.pory"
	.string "der mysteriösen Vorrichtung.$"
# 755 "data/maps/MtChimney/scripts.pory"

# 756 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 757 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} lässt den Meteoriten stecken.$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "Diese mysteriöse Vorrichtung…\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "Sie reagiert in keiner Weise.$"
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 764 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} Steilpass\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "Bad Lavastadt geradeaus$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "Ich war bei den heißen Quellen und habe\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "meine müden Knochen erfrischt.\l"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Jetzt fühle ich mich richtig stark!$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Oh, du meine Güte!\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Wer bist du denn?!$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Nun, ich habe verloren. Ich darf mich\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "nun nicht mehr Experte nennen, oder?$"
# 779 "data/maps/MtChimney/scripts.pory"

# 780 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Dankeschön, mein Kind. Das hat Spaß\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "gemacht. So, als ob ich gegen mein\l"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Enkelkind gekämpft hätte.\p"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "Komm doch bitte mal wieder vorbei.$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "Wenn du in deinem Herzen Platz für\n"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "deine Pokémon hast, dann kannst du\l"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "auch große Dinge erreichen.$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "Oh, du meine Güte!\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Wer bist du denn!$"
# 794 "data/maps/MtChimney/scripts.pory"

# 795 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 796 "data/maps/MtChimney/scripts.pory"
	.string "Vielleicht schlägt dein Herz im Gleich-\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "klang mit den Pokémon.$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "Ich habe Feuer in mir, Baby.\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "Ich halt’s nicht aus! Ich muss kämpfen!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Oh, was für ein kochend heißer Kampf!$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "Die Hitze vom Schlotberg bringt mein\n"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "Feuer in Gang.$"
# 809 "data/maps/MtChimney/scripts.pory"

# 810 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 811 "data/maps/MtChimney/scripts.pory"
	.string "Endlich bin ich am Schlotberg ange-\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "kommen. Jetzt will ich kämpfen!!!$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Wie du kämpfst…\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Als würde der Schlotberg ausbrechen!$"
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Wie ich schon sagte, endlich bin ich am\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Schlotberg. Wäre doch blödsinnig, wenn\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "ich nur zum Sightseeing hier wäre…\p"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "Ich will ein bisschen kämpfen und KEKSe\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "als Andenken kaufen.$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Seit ich in den heißen Quellen gebadet\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "habe, fühle ich mich großartig!\l"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "Ich bin sicher, ich werde gewinnen!$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "Huaah!\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "Außerhalb des Wassers ist es saukalt.$"
# 833 "data/maps/MtChimney/scripts.pory"

# 834 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 835 "data/maps/MtChimney/scripts.pory"
	.string "Ich werde mich wieder in die Heiße\n"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "Quelle setzen. Kommst du mit?\p"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "Kleiner Scherz am Rande… Hehehe.$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "Dies ist ein schöner Berg! Hier gibt es\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "viele heiße Leute, die einem\l"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "Gesellschaft leisten.$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "Oh, du bist auch ein richtiger\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "Heißsporn.$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Ich glaube, ich tauche mal in den heißen\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "Quellen von Bad Lavastadt ab.$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "Ich mag Hitzköpfe wie dich.\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "Ich trage dich in meinen POKéNAV ein.$"
# 855 "data/maps/MtChimney/scripts.pory"

# 856 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 857 "data/maps/MtChimney/scripts.pory"
	.string "Ich freue mich, denn hier gibt es viele\n"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "hitzköpfige Menschen.\l"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "Ich verliere mit Sicherheit nicht.$"
# 860 "data/maps/MtChimney/scripts.pory"

# 861 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 862 "data/maps/MtChimney/scripts.pory"
	.string "Mist, du hast dich kein bisschen\n"
# 863 "data/maps/MtChimney/scripts.pory"
	.string "abgekühlt. Immer noch ein Heißsporn.$"
# 864 "data/maps/MtChimney/scripts.pory"

# 865 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 866 "data/maps/MtChimney/scripts.pory"
	.string "Hier ist es wirklich sehr heiß. Und ich\n"
# 867 "data/maps/MtChimney/scripts.pory"
	.string "bin absolut zu warm angezogen für\l"
# 868 "data/maps/MtChimney/scripts.pory"
	.string "diese Gegend.$"
