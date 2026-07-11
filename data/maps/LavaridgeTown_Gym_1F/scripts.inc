# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts::
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition:
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery::
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole::
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle::
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle::
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald::
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace::
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff::
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli::
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Die Arenaleiterin von Bad Lava-\n"
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "stadt, Flavia, setzt Feuer-Pokémon\l"
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ein.\p"
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ihre Leidenschaft für Pokémon brennt\n"
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "heißer und stärker als ein Vulkan.\p"
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Komm ihr nicht zu nahe - du verbrennst\n"
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "dich! Lösche die Glut mit Wasser und\l"
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "dann besiege sie!$"
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hui! Das war ein glühend heißer Kampf!$"
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro:
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Auauauauau!\n"
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hach, ist das heiß!$"
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat:
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Der Schweiß lief mir in die Augen…$"
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle:
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ein Bad im heißen Sand regt den\n"
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Kreislauf an.\p"
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Auch Gelenkschmerzen lassen sich damit\n"
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "kurieren.$"
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro:
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich versuche, Stress abzubauen.\n"
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Komm her. Ich will mich abreagieren.$"
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat:
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich hoffe, Flavia wird dich rösten!$"
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle:
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Huuuuh…\p"
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Bleibt man zu lange im heißen Sand,\n"
# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "macht einen das ganz schön fertig.$"
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro:
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Du musst ganz schön müde sein.\n"
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Willst du dich nicht hier im heißen\l"
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Sand ausruhen?\p"
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Aber du solltest wissen, dass\n"
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Willenskraft ganz wichtig für einen\l"
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Trainer ist.$"
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Spiele mit Feuer und du verbrennst dich.$"
# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dein Können ist gut… Aber unsere\n"
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Leiterin Flavia ist stark.\p"
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Wenn du nicht aufpasst, verbrennst\n"
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "du dich ernsthaft.$"
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro:
# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Kann dein Pokémon 200 Grad aushalten?$"
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat:
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Die Hitze war nicht stark genug…$"
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Die Temperatur von Magma beträgt\n"
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "über 200 Grad.\p"
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Deine Pokémon haben mich besiegt, sie\n"
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "sollten auch in Magma überleben können.$"
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro:
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ähm…\n"
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, ich kämpfe mit dir.$"
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat:
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, du bist zu stark.$"
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich will einmal so eine starke\n"
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Trainerin werden wie Flavia.$"
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro:
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Komm schon! Los geht's!\n"
# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Bevor ich abkühle.$"
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat:
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Es ist so heiß und doch ist mein Herz\n"
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "von Eis umgeben…$"
# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle:
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dein Kampfstil ist feurig, ich denke, du\n"
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hast eine gute Chance gegen unsere\l"
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Arenaleiterin.$"
# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro:
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Siehst du, wie wild die Flammen züngeln?\n"
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Sie bejubeln meinen Sieg!$"
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat:
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Irgendwas ist da schief gelaufen.$"
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ach, was soll's?! Mir doch egal. Dafür\n"
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "kann ich barfuß über glühende Kohlen\l"
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "laufen. … Versuch das bloß nicht!$"
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro:
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "So sehr ich die Berge auch liebe, meine\n"
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Leidenschaft gehört den Vulkanen.$"
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat:
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich habe verloren. Ich hatte nicht\n"
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "einmal den Kampf unter Kontrolle.$"
# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle:
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich bleibe hier, weil ich Flavias Kraft\n"
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bewundere.\p"
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe…$"
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro:
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Willkommen… Halt, warte!\p"
# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hallo, du Winzling von Trainer, wie\n"
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "schön, dich hier zu sehen!\p"
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich bin verantwortlich für, äh…\n"
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Nein, warte.\p"
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich bin Flavia und ich bin die Arena-\n"
# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Leiterin hier!\p"
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Äh… Du solltest mich nicht\n"
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "unterschätzen, nur weil ich noch nicht\l"
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "so lange Leiterin bin!\p"
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich habe das Talent meines Großvaters\n"
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "geerbt und daher… äh… kann ich dir die\l"
# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "heißen Attacken zeigen, die wir hier\l"
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "entwickelt haben!$"
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Äh…\n"
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich glaube, ich habe es übertrieben…\p"
# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich… Ich bin ja auch noch nicht lange\n"
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Arenaleiterin!\p"
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich habe zu sehr versucht, jemand zu\n"
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "sein, der ich gar nicht bin.\p"
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich muss die Dinge auf meine eigene Art\n"
# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "angehen. Sonst verwirre ich nur meine\l"
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon.\p"
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Danke, dass du mich das gelehrt hast!\n"
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Du hast dir das hier wohl verdient!$"
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} erhält den Hitzeorden\n"
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "von Flavia.$"
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Mit dem Hitzeorden gehorchen dir alle\n"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon bis Level 50, auch die, die du\l"
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "durch Tausch erhalten hast.\p"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Und du kannst ab sofort Stärke auch\n"
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "außerhalb eines Kampfes einsetzen.\p"
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dies ist das Zeichen meiner\n"
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Anerkennung. Nimm es ruhig an!$"
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat:
# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Die TM50 enthält Hitzekoller.\p"
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Diese Attacke richtet beim Gegner\n"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "großen Schaden an.\p"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Aber gleichzeitig wird der Sp. Ang.\n"
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "des Pokémon, das die Attacke\p"
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "anwendet, herabgesetzt. Für längere\n"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Kämpfe ist sie daher nicht geeignet.$"
# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Arenaleiterin Flavia wurde\n"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "im Pokénav eingetragen.$"
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Deine Stärke erinnert mich an\n"
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "jemanden…\p"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Jetzt weiß ich's! Du kämpfst wie Norman,\n"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "der Arenaleiter von Blütenburg City.$"
# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue:
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon Arena von Bad Lavastadt$"
# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified:
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon Arena von Bad Lavastadt\p"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flavias anerkannte Trainer:\n"
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flavia: Eine Niederlage wird mein\n"
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Feuer nicht löschen.\p"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich liebe Pokémon.\n"
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich liebe Kämpfe.\l"
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Und… Ich liebe diese Arena!\p"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lass uns einen ultraheißen Kampf\n"
# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "austragen! Die Funken sollen fliegen.$"
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Wow!\n"
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Da stand einer kurz vor dem Ausbruch!$"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flavia: Ich habe den Kampf zwar\n"
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "verloren, bin aber dennoch zufrieden.\p"
# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich habe nicht oft die Gelegenheit,\n"
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "einen so heißen Kampf zu genießen.\p"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Das müssen wir unbedingt wiederholen!\n"
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Komm bald wieder!$"
# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flavia: Eine Niederlage wird mein\n"
# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Feuer nicht löschen.\p"
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich liebe Pokémon.\n"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Ich liebe Kämpfe.\l"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Und… Ich liebe diese Arena!\p"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lass uns einen ultraheißen Kampf\n"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "austragen! Die Funken sollen fliegen.\p"
# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Moment! Warte mal! Du hast ja nur ein\n"
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Pokémon, das kämpfen kann, dabei!\p"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Bring das nächste Mal mindestens\n"
# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "zwei Pokémon mit, sonst wird das nichts.$"
