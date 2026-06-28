# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts::
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad:
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"

# 16 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers::
# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"

# 20 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers::
# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"

# 49 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed::
# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"

# 55 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed::
# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"

# 61 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed::
# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"

# 67 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed::
# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"

# 73 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle::
# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"

# 77 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson::
# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated::
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"

# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave2::
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"

# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave::
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM_SHOCK_WAVE
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"

# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville::
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"

# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch::
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"

# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1::
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"

# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2::
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"

# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3::
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"

# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4::
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"

# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch::
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"

# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing::
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"

# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState::
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"

# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState::
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"

# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk::
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"

# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn::
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"

# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben::
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"

# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian::
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"

# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo::
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"

# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide::
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"

# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory::
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"

# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue::
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"

# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue::
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"

# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified::
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 254 "data/maps/MauvilleCity_Gym/scripts.pory"

# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue::
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"

# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice:
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, wie sieht es aus, auf dem Weg zum\n"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter, der Arenaleiter von\n"
# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Malvenfroh City, setzt\l"
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Elektro-Pokémon ein.\p"
# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wenn du ihn mit Wasser-Pokémon\n"
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "angreifst, macht er sie fertig! Britzel!\p"
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Und die Türen lassen sich nur mit\n"
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Schaltern öffnen! Wahnsinn!\p"
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Nun, dann mal los!$"
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"

# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory:
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Aah, du bist elektrifizierend!\n"
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Du hast die Tür aufgezwungen!$"
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"

# 276 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro:
# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Die Spannung meiner Seele, sie setzt\n"
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "alle deine Träume unter Strom! Ja-haha!$"
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"

# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat:
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Da wurde der Stromkreis geschlossen\n"
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "und bis zum Kurzschluss belastet!$"
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"

# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle:
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon und Rock… Alles, was ins Herz\n"
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "trifft, oh yeah!$"
# 287 "data/maps/MauvilleCity_Gym/scripts.pory"

# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro:
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich habe unter Walter trainiert!\n"
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So einfach verliere ich nicht.$"
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"

# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat:
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Stecker raus und aus…$"
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"

# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle:
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter, unser Arenaleiter, ist schon\n"
# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "sehr, sehr lange hier ansässig.\p"
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Er kämpfte schon, da war dein Vater\n"
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "noch nicht geboren.$"
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"

# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro:
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Diese Arena stellt dir eine Knobel-\n"
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "aufgabe. Ist das nicht lustig?$"
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"

# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat:
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Verlieren ist gar nicht lustig…$"
# 307 "data/maps/MauvilleCity_Gym/scripts.pory"

# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle:
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter sagt, er liebt es, Fallen mit\n"
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Schaltern zu installieren.$"
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"

# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro:
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mein Charme und die Attacken meiner\n"
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon werden dich schocken!$"
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"

# 316 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat:
# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich bin geschockt von deiner Stärke!$"
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"

# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle:
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich habe gehört, dass Malvenfroh City\n"
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "von Walter gegründet wurde.\p"
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Er war Trainer, lange bevor wir geboren\n"
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "wurden. Er muss ein umfangreiches\l"
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wissen besitzen.$"
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"

# 326 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro:
# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich liebe glitzernde und funkelnde\n"
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dinge!$"
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"

# 330 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat:
# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich bin geblendet…$"
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"

# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle:
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Arenaleiter Walter aus Malvenfroh\n"
# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "hat eine glänzende Stirn. Das finde ich\l"
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "klasse!$"
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"

# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonIntro:
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich habe es aufgegeben, die Stadt\n"
# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "umpolen zu wollen.\p"
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Stattdessen verwende ich meine Energie\n"
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "lieber auf das Installieren von Fallen\l"
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in meiner Arena.\p"
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh? Was machst du denn hier?\p"
# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Was ist das? Du hast es geschafft, alle\n"
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "meine Schalter zu finden?\p"
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Uahahahaha!\n"
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Das ist wirklich amüsant!\p"
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dann ist es nun an mir - dem\n"
# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Arenaleiter von Malvenfroh City\l"
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "- dich unter Spannung zu setzen!$"
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"

# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat:
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Uahahahaha!\n"
# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Schön, ich habe verloren!\p"
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Du hast es geschafft, meinen Strom-\n"
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "kreis zu unterbrechen! Nimm diesen\l"
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Orden!$"
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"

# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge:
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} hat den Dynamo-Orden von\n"
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter erhalten.$"
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"

# 365 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mit dem Dynamo-Orden können Pokémon\n"
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Zertrümmerer auch außerhalb eines\l"
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Kampfes einsetzen.\p"
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Und außerdem werden deine Pokémon ein\n"
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "kleines bisschen schneller.\p"
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dies hier solltest du auch nehmen!$"
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"

# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave:
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Dies ist TM34 - Schockwelle.\p"
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Eine verlässliche Attacke, die niemals\n"
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daneben geht! Verlass dich drauf!\p"
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 379 "data/maps/MauvilleCity_Gym/scripts.pory"

# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson:
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Arenaleiter Walter wurde im Pokénav-\n"
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Verzeichnis eingetragen.$"
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"

# 384 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle:
# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Optimismus erfüllt mich, wenn ich einen\n"
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "so viel versprechenden Trainer wie\l"
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dich sehe!$"
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"

# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ahahahaha!\n"
# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mach weiter so, streng dich an, Kind!$"
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"

# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue:
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon Arena von Malvenfroh City$"
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"

# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified:
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon Arena von Malvenfroh City\p"
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walters anerkannte Trainer:\n"
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"

# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch:
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter: Ah ha! Endlich bist du hier.\n"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich weiß, was du willst! Du willst\l"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gegen meine Pokémon antreten.\p"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahahahaha!\p"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich werde deine Funken zum Fliegen\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bringen! Und sag hinterher nicht, ich\l"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "hätte dich nicht gewarnt!!!$"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"

# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat:
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Uff…\n"
# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Meine Batterie ist leer…$"
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"

# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch:
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter: Wir müssen unsere Batterien\n"
# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "neu aufladen.\p"
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Und wenn wir das gemacht haben, dann\n"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "werden wir deine Herausforderung gerne\l"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "annehmen.\p"
# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Du kommst doch bestimmt mal wieder\n"
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "hier vorbei, nicht wahr?$"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"

# 423 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Walter: Ah ha! Endlich bist du hier.\n"
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Ich weiß, was du willst! Du willst\l"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gegen meine Pokémon antreten.\p"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hahahahaha!\p"
# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey! Einen Moment mal.\n"
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Du hast ja nur ein Pokémon dabei!\p"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Komm bitte wieder, wenn du zwei oder\n"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "mehr Pokémon hast, ja?$"
