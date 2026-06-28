# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ich bin Mr. Trumm, der Präsident der\n"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon Corporation.\p"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ich muss etwas mit dir besprechen!\p"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Du hast unseren Mitarbeitern nicht\n"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "nur einmal, sondern zweimal aus\l"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "der Klemme geholfen!\p"
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Du bist so außergewöhnlich, dass ich\n"
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "dich gerne um einen Gefallen\l"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "bitten möchte.\p"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ich weiß, dass du ein Paket zur Werft in\n"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Graphitport City bringen willst.\p"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Könntest du auf dem Weg nicht\n"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "auch in Faustauhaven Halt machen?\p"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Und Troy in Faustauhaven einen Brief\n"
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "von mir überbringen?$"
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Nun, du sollst wissen, dass\n"
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "ich ein einflussreicher Präsident bin.\p"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Und daher würde ich dich nie um einen\n"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Gefallen bitten, ohne eine\l"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Gegenleistung zu erbringen!\p"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Deshalb möchte ich dir dies hier geben.$"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} erhält den Pokénav.$"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Dieses Gerät…\p"
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Es ist ein Pokémon Nanivator - oder\n"
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "kurz ein Pokénav.\p"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ein unentbehrliches Hilfsmittel für\n"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "jeden Trainer auf Abenteuerreise.\p"
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Er enthält die Karte von Hoenn.\p"
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So kannst du ganz leicht herausfinden,\n"
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "wo die Orte Faustauhaven und\l"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Graphitport City liegen.\p"
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ich habe übrigens gehört, dass zwei\n"
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "fiese Kriminelle - Magma und Aqua\l"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "heißen sie, glaube ich - überall nur\l"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ärger bereiten.\p"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Vielleicht solltest du eine Pause\n"
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "einlegen, bevor du dich wieder auf den\l"
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Weg machst.$"
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Nun, {PLAYER}{KUN},\n"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "sei vorsichtig und pass auf dich auf!$"
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Ich verlasse mich auf dich!$"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Du hast meinen Brief\n"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "überbracht? Herzlichen Dank!\p"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dies ist ein Dankeschön von mir.\n"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Es wird dir als Trainer sicher helfen.$"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Trägt ein Pokémon den EP-\n"
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Teiler, so erhält es in jedem Kampf\l"
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Erfahrungspunkte.\p"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Auch wenn es gar nicht am Kampf\n"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "teilnimmt.\p"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ich würde sagen, der EP-Teiler ist sehr\n"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "nützlich, um schwache Pokémon aufzu-\l"
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "ziehen.$"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Trumm: Schon in meiner Jugend habe\n"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "ich mich voll auf die Arbeit\l"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "konzentriert.\p"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Deshalb weiß ich auch nicht unbedingt,\n"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "was gerade im Trend liegt.\p"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Wollen alle jungen Leute Trainer in der\n"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Pokémon Liga werden?$"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dies ist die zweite Etage der Devon\n"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Corporation.\p"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Hier befindet sich das Büro des\n"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Präsidenten.\p"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Nun ja, ich kann dir gar nicht sagen, wie\n"
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "dankbar ich dir für deine Taten bin.\p"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ähm… Äh, das Paket, das du uns\n"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "zurückgebracht hast…\p"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Darf ich dich bitten, es zur Werft\n"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "in Graphitport City zu bringen?\p"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Es wäre fürchterlich, wenn es den\n"
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dieben erneut in die Hände fallen würde.\p"
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Äh… Hehehe, also, äh, kann ich auch\n"
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "dieses Mal wieder mit dir rechnen?\p"
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Ach, da fällt mir ein… Würdest du mich\n"
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "einen Moment entschuldigen?$"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Unser Präsident würde gerne kurz mit\n"
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "dir sprechen.\p"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Komm bitte mit mir.$"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Bitte, hier entlang.$"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Wenn du die Werft in Graphitport City\n"
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "besuchst, solltest du mit Kapt. Brigg\l"
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "sprechen.$"
# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devons neue Produkte, der Wiederball\n"
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "und der Timerball, sind mittlerweile\l"
# 311 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "sehr populär unter den Trainern.$"
# 312 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 313 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 314 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Eine Kollektion seltener Steine und\n"
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mineralien - gesammelt vom\l"
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Präsidenten.$"
