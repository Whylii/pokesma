# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 21 "data/maps/DewfordTown_Gym/scripts.pory"

# 22 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 25 "data/maps/DewfordTown_Gym/scripts.pory"

# 26 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 42 "data/maps/DewfordTown_Gym/scripts.pory"

# 43 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 46 "data/maps/DewfordTown_Gym/scripts.pory"

# 47 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 50 "data/maps/DewfordTown_Gym/scripts.pory"

# 51 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 67 "data/maps/DewfordTown_Gym/scripts.pory"

# 68 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 70 "data/maps/DewfordTown_Gym/scripts.pory"

# 71 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 77 "data/maps/DewfordTown_Gym/scripts.pory"

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 83 "data/maps/DewfordTown_Gym/scripts.pory"

# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 95 "data/maps/DewfordTown_Gym/scripts.pory"

# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 113 "data/maps/DewfordTown_Gym/scripts.pory"

# 114 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 135 "data/maps/DewfordTown_Gym/scripts.pory"

# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 144 "data/maps/DewfordTown_Gym/scripts.pory"

# 145 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 170 "data/maps/DewfordTown_Gym/scripts.pory"

# 171 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 174 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 177 "data/maps/DewfordTown_Gym/scripts.pory"

# 178 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 185 "data/maps/DewfordTown_Gym/scripts.pory"

# 186 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 190 "data/maps/DewfordTown_Gym/scripts.pory"

# 191 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 195 "data/maps/DewfordTown_Gym/scripts.pory"

# 196 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 200 "data/maps/DewfordTown_Gym/scripts.pory"

# 201 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 205 "data/maps/DewfordTown_Gym/scripts.pory"

# 206 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 210 "data/maps/DewfordTown_Gym/scripts.pory"

# 211 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 215 "data/maps/DewfordTown_Gym/scripts.pory"

# 216 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 225 "data/maps/DewfordTown_Gym/scripts.pory"

# 226 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 229 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 230 "data/maps/DewfordTown_Gym/scripts.pory"

# 231 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 235 "data/maps/DewfordTown_Gym/scripts.pory"

# 236 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 240 "data/maps/DewfordTown_Gym/scripts.pory"

# 241 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 245 "data/maps/DewfordTown_Gym/scripts.pory"

# 246 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 250 "data/maps/DewfordTown_Gym/scripts.pory"

# 251 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 258 "data/maps/DewfordTown_Gym/scripts.pory"

# 259 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 263 "data/maps/DewfordTown_Gym/scripts.pory"

# 264 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 269 "data/maps/DewfordTown_Gym/scripts.pory"

# 270 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 273 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 275 "data/maps/DewfordTown_Gym/scripts.pory"

# 276 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 280 "data/maps/DewfordTown_Gym/scripts.pory"

# 281 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 285 "data/maps/DewfordTown_Gym/scripts.pory"

# 286 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 289 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Faustauhavens Arenaleiter Kamillo\n"
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "besitzt Kampf-Pokémon.\p"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wenn du dort Normal-Pokémon antreten\n"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "lässt, sind Probleme vorprogrammiert!\p"
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Kampf-Pokémon schlagen die Normalen\n"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon einfach nieder. Pass gut auf!\p"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Und das Schlimme ist: Die Arena ist\n"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "dunkel wie die Tiefsee!\p"
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Aber mit jedem Trainer, den du auf dem\n"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Weg zum Arenaleiter besiegst, wird sie\l"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "heller!\p"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Also, dann leg mal los!$"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"

# 302 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Huuh!\n"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Das ist mir hier aber schon zu hell!\p"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Deine Zukunft wird strahlend hell sein!$"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Die Macht bestimmt alles!\n"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Komm schon!$"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"

# 311 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Nicht genug Macht…$"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Gegen dein Talent ist meine Macht\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "machtlos. Deine Technik ist super!$"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"

# 318 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Man muss doch Kamillo nicht mit so\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "etwas Nichtigem belästigen!\p"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich mache dich fertig!$"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"

# 323 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Aber… Wie…?\n"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wie konnte ich nur so schnell verlieren?$"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"

# 327 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich werde diese Niederlage nicht ab-\n"
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "haken. Sie wird mich beim Training\l"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "motivieren!\p"
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Eines Tages werde ich auch ein\n"
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Arenaleiter sein!\p"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Nein! Ich werde der Champ der\n"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon Liga!$"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"

# 336 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 337 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Du forderst mich heraus? Dann wundere\n"
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "dich nicht, wenn du weinst wie ein Baby!$"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"

# 340 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaahaaaaaa!\n"
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich habe verloooren!$"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"

# 344 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 345 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich kämpfe im Dunkeln, das macht mich\n"
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "mutiger und trainiert mein Herz.\p"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Weil es hier so dunkel ist, habe ich noch\n"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "nie das Gesicht von Kamillo gesehen.$"
# 349 "data/maps/DewfordTown_Gym/scripts.pory"

# 350 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Huhuhu…\n"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Was stolperst du im Dunklen herum?$"
# 353 "data/maps/DewfordTown_Gym/scripts.pory"

# 354 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ach, du… Ich habe kein\n"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Interesse, dich kennen zu lernen.$"
# 357 "data/maps/DewfordTown_Gym/scripts.pory"

# 358 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Du verdienst eine Niederlage, damit du\n"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wieder von vorne anfangen musst.$"
# 361 "data/maps/DewfordTown_Gym/scripts.pory"

# 362 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich zeige dir, wie viel Köpfchen ein\n"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Seemann hat!$"
# 365 "data/maps/DewfordTown_Gym/scripts.pory"

# 366 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wie konnte das nur passieren? Es ist\n"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "nicht meine Art, einfach zu verlieren.$"
# 369 "data/maps/DewfordTown_Gym/scripts.pory"

# 370 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ahoi! Du bist es wert, unserem\n"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Arenaleiter vorgestellt zu werden.$"
# 373 "data/maps/DewfordTown_Gym/scripts.pory"

# 374 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wenn du hier vorbei willst, musst du\n"
# 376 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "erst an mir vorbei!$"
# 377 "data/maps/DewfordTown_Gym/scripts.pory"

# 378 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 379 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrr!\n"
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich wurde einfach überwältigt!$"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"

# 382 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Du hast gewonnen!\n"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hol dir den Orden!$"
# 385 "data/maps/DewfordTown_Gym/scripts.pory"

# 386 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 387 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich bin Kamillo!\n"
# 388 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Der Arenaleiter von Faustauhaven!\p"
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich habe die wilden Strudel dieser\n"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Gegend gemeistert und bin in dieser\l"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "pechschwarzen Höhle stark geworden.\p"
# 392 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Du willst mich wirklich herausfordern?\n"
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dann zeig mir, woraus du gemacht bist!$"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Huihuihui! Du hast eine größere Welle\n"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "produziert, als ich dir zugetraut hätte.\p"
# 398 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Du hast mich absaufen lassen!\p"
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, du hast mich erwischt!\n"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Nimm den Orden dieser Arena!$"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"

# 402 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 403 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} erhält den Knöchelorden von\n"
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Kamillo.$"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"

# 406 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dank des Knöchelordens werden dir alle\n"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon bis Level 30 gehorchen, auch\l"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "die, die du durch Tausch erhalten hast.\p"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Und du kannst die VM Blitz auch\n"
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "außerhalb eines Kampfes anwenden.\p"
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Und wenn du magst, kannst du auch diese\n"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Technische Maschine anwenden.$"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"

# 415 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Die TM08 enthält Protzer.\p"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Diese Attacke hebt den Status des\n"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Angriffs und der Verteidigung.\p"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 420 "data/maps/DewfordTown_Gym/scripts.pory"

# 421 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Arenaleiter Kamillo wurde\n"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "im Pokénav eingetragen.$"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"

# 425 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich sehe in dir ein Talent, das eines\n"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Tages zu einer riesigen Welle wird und\l"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "einen Sturm des Erstaunens bei anderen\l"
# 429 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Trainern entfachen wird!$"
# 430 "data/maps/DewfordTown_Gym/scripts.pory"

# 431 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 432 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon Arena von Faustauhaven$"
# 433 "data/maps/DewfordTown_Gym/scripts.pory"

# 434 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon Arena von Faustauhaven\p"
# 436 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "KamilloS anerkannte Trainer:\n"
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 438 "data/maps/DewfordTown_Gym/scripts.pory"

# 439 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Kamillo: Eine Welle kann sich zurück-\n"
# 441 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "ziehen, wird aber immer wieder an\l"
# 442 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Land zurückkommen.\p"
# 443 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ein riesiges Talent wie du…\n"
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich wusste, du würdest wiederkommen.\p"
# 445 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Zeig mir, wie gut du geworden bist.$"
# 446 "data/maps/DewfordTown_Gym/scripts.pory"

# 447 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 448 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Und wieder wurde ich fortgespült.$"
# 450 "data/maps/DewfordTown_Gym/scripts.pory"

# 451 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 452 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Kamillo: Kämpfe sind wild und tief wie\n"
# 453 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "die See. Du siehst kein Land.\l"
# 454 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wie das Meer um Hoenn.$"
# 455 "data/maps/DewfordTown_Gym/scripts.pory"

# 456 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 457 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Kamillo: Eine Welle kann sich zurück-\n"
# 458 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "ziehen, wird aber immer wieder an\l"
# 459 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Land zurückkommen.\p"
# 460 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ein riesiges Talent wie du…\n"
# 461 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ich wusste, du würdest wiederkommen.\p"
# 462 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, du hast ja nur ein Pokémon, das\n"
# 463 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "kämpfen kann.\p"
# 464 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Tut mir Leid, aber ich trete nur gegen\n"
# 465 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "dich an, wenn du mindestens zwei\l"
# 466 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Pokémon hast.$"
