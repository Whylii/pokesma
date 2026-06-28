# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_Delay48
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_1
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_2
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Mit diesem Meteoriten wird das Wesen\n"
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "am Schlotberg…$"
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Huh?\p"
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ich weiß zwar nicht, wer du bist. Aber\n"
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "wenn du dich Team Magma in den Weg\l"
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "stellst, erwarte keine Gnade!$"
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Bleibt sofort stehen, Team Magma!\p"
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ihr irrt euch gewaltig, wenn ihr meint,\n"
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ihr könntet mit der Welt machen, was ihr\l"
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "wollt!$"
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Sogar Team Aqua leistet uns\l"
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Gesellschaft!\p"
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Aber es ist viel zu anstrengend, sich\n"
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "mit allen auseinander zu setzen…\p"
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hey, das spielt auch keine Rolle!\p"
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Wir haben den Meteoriten und so\n"
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "machen wir uns auf zum Schlotberg!\p"
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Wir sehen uns, ihr Würstchen\n"
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "von Team Aqua!$"
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Adrian: Dich kenne ich doch!\n"
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Vom Museum in Graphitport.\p"
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, du bist {PLAYER}.\p"
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Damals dachte ich, du würdest zu\n"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Magma gehören.\p"
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hmpf…\n"
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Du bist ein merkwürdiges Kind.\p"
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Magma besteht aus Fanatikern.\p"
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Sie zerstören alles und behaupten,\n"
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "die Landmasse vergrößern zu wollen.\p"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Wir, Team Aqua, lieben das Meer über\n"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "alles. Team Magma ist unser Erzfeind!$"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Boss, wir sollten Team Magma\n"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "verfolgen…$"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Adrian: Ja, ja. Das müssen wir!\n"
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Wir müssen uns beeilen.\p"
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Nicht auszudenken, was Team Magma am\n"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Schlotberg anrichten will!$"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Adrian: {PLAYER}, du solltest\n"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Magma im Auge behalten.\p"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Leb wohl!$"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ich… Ich bin Kosmo…\n"
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ich bin Professor…\p"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Einige Typen von Team Magma haben\n"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "mich überredet, sie zu Meteor-\l"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "fälle zu führen…\p"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Sie haben mich hereingelegt.\n"
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Sie haben sogar den Meteoriten\l"
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "mitgenommen…\p"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Und dann tauchte Team Aqua auf. Die\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "sind auch nicht anders.\p"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Und ich?\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ich verstehe absolut nicht, was los ist.\p"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Magma…\p"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Was haben sie mit dem Meteoriten am\n"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Schlotberg vor?$"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Prpf. Kosmo: Dieses Team Magma…\p"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Was haben sie mit dem Meteoriten am\n"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Schlotberg vor?$"
