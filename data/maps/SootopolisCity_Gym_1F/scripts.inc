# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts::
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition:
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume:
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad:
# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame:
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan::
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_SCALD
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_SCALD
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide::
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue::
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Arenaleiter Juan in Xeneroville\n"
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ist der Meister der Wasser-Pokémon.\p"
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Und auf dem Weg zu ihm wirst du auf\n"
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "gefrorenem Boden ins Rutschen kommen.\p"
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Tut mir Leid, aber mehr kann ich dir dazu\n"
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "auch nicht sagen.\p"
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Den Rest des Weges musst du alleine\n"
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "meistern.$"
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hui! Du hast Juan besiegt, von dem\n"
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "man sagt, er sei der beste Trainer in\l"
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "der Hoenn-Region.\p"
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Okay! Schau auf deinem\n"
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Trainerpass nach.\p"
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wenn du alle Orden erhalten hast,\n"
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "kannst du die Pokémon Liga\l"
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "herausfordern!$"
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro:
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Lass mich dich was fragen.\n"
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wusstest du das schon? Ach, ich\l"
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "sollte nicht so schüchtern sein.\p"
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ich habe Wassili alles beigebracht,\n"
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "was man über Pokémon wissen muss.\p"
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Und dann habe ich mein Amt als\n"
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Arenaleiter aufgegeben.\p"
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ich habe die Arena an Wassili\n"
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "übergeben.\p"
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Doch es gab einen zwingenden Grund für\n"
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "mich zurückzukehren.\p"
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Genug geredet.\n"
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Lass uns kämpfen.\p"
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Du sollst Zeuge unserer\n"
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Kunstfertigkeit werden.\p"
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Eine Illusion aus Wasser, geformt von\n"
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "meinen Pokémon und mir.$"
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat:
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahahaha, ausgezeichnet!\n"
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sehr schön! Du hast gewonnen!\p"
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ich weiß, dein brillantes Talent wird\n"
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "jeden Gegner bezwingen.\p"
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Aber im Vergleich zu mir oder auch\n"
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wassili fehlt es dir an Eleganz.\p"
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Vielleicht sollte ich dir ein paar meiner\n"
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Kleidungsstücke leihen?\p"
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\n"
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …\p"
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hahahaha, ich hab nur Spaß gemacht!\p"
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Statt meiner Kleidung überreiche ich\n"
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "dir den Schauerorden.$"
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} erhält den Schauerorden\n"
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "von Juan.$"
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Dieser Orden sorgt dafür, dass dir alle\n"
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "deine Pokémon gehorchen.\p"
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Der Orden befähigt dich außerdem dazu,\n"
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "mit der VM Kaskade Wasserfälle in jede\l"
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Richtung zu passieren.\p"
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Und damit du unseren Kampf stets in\n"
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Erinnerung behältst, gebe ich dir dies…$"
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Diese TM enthält Aquawelle.\p"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Damit kann das gegnerische Pokémon\n"
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "mit Ultraschallwellen verwirrt werden.\p"
# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan:
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Arenaleiter Juan  wurde im Pokénav-\n"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Verzeichnis eingetragen.$"
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle:
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Trainer, die alle Orden der Arenen in\n"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hoenn erhalten haben, sollten sich…\p"
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "auf den Weg zur ultimativen Heraus-\n"
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "forderung machen. Der Pokémon Liga!\p"
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Reise zu den östlichsten Gebieten von\n"
# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Hoenn, zur Insel Prachtpolis City.\l"
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Dort findest du die Pokémon Liga.$"
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "In Hoenn gibt es nur noch einen Orden\n"
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "zu verdienen.\p"
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Wenn du die Pokémon Liga herausfordern\n"
# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "willst, musst du zuerst den Orden der\l"
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Arena in Baumhausen City bekommen.$"
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue:
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pokémon Arena von Xeneroville$"
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified:
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Pokémon Arena von Xeneroville\p"
# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juans anerkannte Trainer:\n"
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch:
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Ah, diese Arena strahlt wieder die\n"
# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "alte Heiterkeit aus…\p"
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Aber unser junger Wirbelwind ist\n"
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "zurückgekehrt, um uns erneut\l"
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "zu testen.\p"
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sicher doch, sicher doch.\p"
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Es ist mir eine Freude, mit dir immer und\n"
# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "immer wieder über das Wasser zu gleiten.$"
# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, du hast gewonnen!\n"
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Du hast mich wieder besiegt.$"
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch:
# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Wenn ich dich frage, ob du mein\n"
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Schüler werden willst, wirst du bestimmt\l"
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ablehnen.\p"
# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ich würde dir stattdessen gerne meinen\n"
# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Mantel schenken.\p"
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Aber auch den würdest du bestimmt\n"
# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "ablehnen.\p"
# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Und das, mein Freund, ist ein Zeichen\n"
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "von hohen Idealen.$"
# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Ah, diese Arena strahlt wieder die\n"
# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "alte Heiterkeit aus…\p"
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Aber unser junger Wirbelwind ist\n"
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "zurückgekehrt, um uns erneut\l"
# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "zu testen.\p"
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sicher doch, sicher doch.\p"
# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Es ist mir eine Freude, mit dir immer und\n"
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "immer wieder über das Wasser zu gleiten.\p"
# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Aber, nein, nein, nein, nein.\n"
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Du hast ja nur ein einziges Pokémon.\p"
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ich wünsche, dass du mit mindestens\n"
# 323 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "zwei Pokémon wiederkommst und dann\l"
# 324 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "gegen mich antrittst.$"
