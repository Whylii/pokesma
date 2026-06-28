# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"

# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"

# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition:
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"

# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad:
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"

# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"

# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"

# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"

# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"

# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"

# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"

# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"

# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"

# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"

# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"

# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"

# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"

# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"

# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"

# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"

# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"

# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"

# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"

# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"

# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"

# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"

# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"

# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"

# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"

# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"

# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"

# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"

# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"

# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"

# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"

# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"

# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"

# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"

# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"

# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"

# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"

# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"

# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"

# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"

# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"

# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"

# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"

# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"

# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"

# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"

# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"

# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice:
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Die Arenaleiter hier setzen Psycho-\n"
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon ein.\p"
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Setzt du Kampf- oder Gift-Pokémon ein,\n"
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "werden diese großen Schaden nehmen!\p"
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Und außerdem wirst du dich gegen eine\n"
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "außergewöhnliche Kombination von\l"
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Attacken behaupten müssen.\p"
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wenn du gewinnen willst, musst du ihnen\n"
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "beweisen, wie sehr du mit deinen\l"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon verbunden bist! Und nun los!$"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"

# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory:
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, du bist erstaunlich!\n"
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du bist ein großartiger Trainer!$"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"

# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro:
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Kämpfe hängen von der Stärke deines\n"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Geistes ab! Die mit schwachem Geist\l"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "werden niemals gewinnen.$"
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"

# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat:
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich habe verloren! Ich muss meinen\n"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Geist stärken!$"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"

# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle:
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Eine nichtssagende Niederlage.\n"
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Das war doch nur eine Warnung an dich.$"
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"

# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro:
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Zeig mir, ob du Talent hast.$"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"

# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat:
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du besitzt offensichtlich Talent.$"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"

# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle:
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wenn es überhaupt Wunderkinder gibt, \n"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "dann sind es unsere Arenaleiter.\p"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Aber du scheinst doch talentierter\n"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "als sie zu sein…$"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"

# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro:
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hihihihi… Achtung! Ich lasse meinen\n"
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokéball durch Telekinese schweben!\p"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wuhuuuuuuuhuiii!\n"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Äh, manchmal fehlt es mir etwas an\n"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Balance…$"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"

# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat:
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Meine Pokémon kämpften nicht\n"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "synchron!$"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"

# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle:
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ein Pokéball ist doch etwas zu schwer,\n"
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "um ihn schweben zu lassen!\l"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Aber ein Staubknäuel…\p"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wuhuuuuuuuhu!\n"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Das ist kein Trick!\n"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Da ist kein Luftstrom! Ehrlich!$"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"

# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro:
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Solltest du gegen mich verlieren,\n"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "darfst du dir das nicht so zu Herzen\l"
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "nehmen.\p"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du bist nicht zu schwach - ich bin nur\n"
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "zu stark für dich!$"
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"

# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat:
# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du bist nur zu stark für mich!$"
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"

# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle:
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich lasse mich von dieser Niederlage\n"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "nicht herunterziehen. Ich werde härter\l"
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "trainieren.\p"
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positives Denken - das ist meine\n"
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Stärke!$"
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"

# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro:
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich kann sie sehen…\n"
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich sehe deine Zukunft…\p"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wenn du mich besiegen kannst, sage ich\n"
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "dir deine Zukunft voraus.$"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"

# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat:
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich gebe auf!$"
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"

# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle:
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du wirst einen irrsinnigen Kampf gegen\n"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "unsere Arenaleiter führen…\p"
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Der Ausgang dieses Kampfes…\n"
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Meine Lippen sind versiegelt.$"
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"

# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro:
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Die Straßen, die du gewandert bist…\n"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Das, was du erfahren hast…\p"
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Leg mir alles, was du gelernt hast,\n"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "zu Füßen.$"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"

# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat:
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du wandelst auf dem Pfad der Größe!$"
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"

# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle:
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Eine glänzende Zukunft erwartet die,\n"
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "die fleißig sind.\p"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Die, die dem Müßiggang frönen, erwartet\n"
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "am Ende des Weges nur die Verzweiflung.\p"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Man erntet das, was man sät.$"
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"

# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro:
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Auch wenn ich dabei mein Leben aufs\n"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Spiel setze - ich werde den Kampf\l"
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "gewinnen!$"
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"

# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat:
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Was du da machst…\n"
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Das macht mir Angst…$"
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"

# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle:
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wie konntest du es wagen, mich zu\n"
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "besiegen…\p"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Es ist nicht meine Schuld, wenn dir bald\n"
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "etwas Schreckliches passiert…$"
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"

# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro:
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du lässt mir keine andere Wahl. Ich\n"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "werde dir zeigen, wie zäh Psycho-\l"
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon sind.$"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"

# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat:
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! Meine Güte!\n"
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Dein Kampfstil ist einfach fantastisch!$"
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"

# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle:
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich… lasse mich durch eine Niederlage\n"
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "nicht aus der Ruhe bringen.$"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"

# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro:
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich werde dir eine wunderbar\n"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "schreckliche und gruselige Zeit\l"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bereiten.$"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"

# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat:
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Nneeiinn!$"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"

# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle:
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Deine Dynamik ist mit Sicherheit\n"
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ansteckend! Geh schnell weg!$"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"

# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro:
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ich mag meine beste Zeit gesehen\n"
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "haben, aber ich lasse mich von dir nicht\l"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bevormunden.$"
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"

# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat:
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, deine jugendliche Energie strömt\n"
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "nur so aus dir heraus.$"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"

# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle:
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Gegen deine jugendliche Energie habe\n"
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "ich keine Chance.$"
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"

# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro:
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du wirst den Weg nicht zu Ende gehen!\n"
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Nicht, wenn ich mich dir in den Weg\l"
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "stellen kann.$"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"

# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat:
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wie kann man nur so stark sein wie du?\n"
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Lächerlich!$"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"

# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle:
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hmpf! Du magst ja stark sein, aber mit\n"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Psycho-Pokémon kommst du nicht\l"
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "zurecht!\p"
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Du hast einen recht brutalen Kampfstil.$"
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"

# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro:
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooaaar! Schmeck die Superkraft\n"
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "meines Pokémon!$"
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"

# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat:
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Das war’s dann wohl.$"
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"

# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle:
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Gut! Ich glaube, ich sollte eine un-\n"
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "schlagbare Pokémon-Kraft entwickeln.$"
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"

# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro:
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Hehehe… Bist du überrascht?\p"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Hihihi… Bist du überrascht?\p"
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Dass es hier zwei Arenaleiter gibt?\n"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Dass es hier zwei Arenaleiter\l"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "gibt?\p"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Wir sind Zwillinge!\n"
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Wir sind Zwillinge!\p"
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Wir brauchen nicht zu sprechen…\n"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Wir wissen, was…\p"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Der andere gerade denkt…\n"
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Gedankenübertragung!\p"
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Diese doppelte Stärke…\n"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Kannst du sie besiegen?$"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"

# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat:
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Was?!? Unsere Kombination…\n"
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Wurde auseinander gerissen!\p"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: So sieht’s aus. Du hast gewonnen.\n"
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Daher überreichen wir dir dies.$"
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"

# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge:
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} erhält den Mentalorden von\n"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja und Ben.$"
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"

# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Der Mentalorden erhöht den Sp.\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ang. und die Sp. Ver. von Pokémon.\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Und du kannst damit die VM\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Taucher außerhalb eines Kampfes\l"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "einsetzen.\p"
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Dies ist ebenfalls für dich.$"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"

# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind:
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: TM04 enthält…\n"
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Gedankengut!\p"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Dies erhöht den Sp. Ang. und…\n"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Erhöht die Sp. Ver.!\p"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Eine Attacke, die perfekt…\n"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Für Psycho-Pokémon ist!\p"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"

# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza:
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Arenaleiter Ben und Svenja wurden im\n"
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokénav-Verzeichnis eingetragen.$"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"

# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle:
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Es scheint, als sei das Band\n"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "zwischen dir und deinen Pokémon viel\l"
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "stärker als zwischen uns Zwillingen.\p"
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Und du wirst noch stärker\n"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "werden! Wir haben gegen dich gekämpft,\l"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "daher können wir das vorhersagen.$"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"

# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Hehehe… Bist du überrascht?\p"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Dass es hier 2 Arenaleiter\n"
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "gibt?\p"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Hups, du hast nur ein…\n"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Pokémon für den Kampf.\p"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: So können wir nicht kämpfen!\p"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Wenn du uns herausfordern\n"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "willst, dann musst du mehr Pokémon\l"
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "haben.$"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"

# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue:
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon Arena von Moosbach City$"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"

# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified:
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon Arena von Moosbach City\p"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja UND Bens anerkannte Trainer:\n"
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"

# 639 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch:
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Pokémon…\n"
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Pokémon…\p"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Die Zusammensetzung des Teams…\n"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Bestimmt den Kampfstil.\p"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Aber ich…\n"
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SVENNJA: Aber ich…\p"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Kämpfe nur zusammen mit Svenja!\n"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Kämpfe nur zusammen mit Ben!\p"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Diese Kombination…\n"
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Wirst du immer wieder sehen!$"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"

# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Du und deine Pokémon…\n"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Seid wie Geschwister!$"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"

# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch:
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Du magst uns besiegen, aber wir\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "werden nicht am Boden liegen bleiben!\p"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Denn wir beide werden immer\n"
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "füreinander da sein!$"
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"

# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Du bist zurückgekommen…\n"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Du bist zurückgekommen…\p"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Um erneut gegen uns anzutreten.\n"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Um erneut gegen uns\l"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "anzutreten.\p"
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Aber…\n"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Für diesen Kampf hast du…\p"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Nur ein einziges Pokémon dabei!\n"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Nur ein einziges Pokémon dabei!\p"
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ben: Du musst mindestens zwei…\n"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Svenja: Pokémon haben.$"
