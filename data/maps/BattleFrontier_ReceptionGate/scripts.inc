# 1 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts::
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_OnFrame
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_OnTransition
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnTransition:
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_OnFrame:
# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.2byte 0
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FirstTimeEntering::
# 16 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 17 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 18 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 21 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
# 22 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 23 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_WalkInPlaceFasterUp
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_Movement_GreeterFaceScott
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_Movement_PlayerFaceScott
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottEnter
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 60 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_Movement_ScottExit
# 61 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 62 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 65 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 66 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerApproachCounter:
# 67 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 71 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 72 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 73 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_PlayerFaceScott:
# 74 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 78 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 79 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 80 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 81 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
@ Unused
# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottEnter:
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_ScottExit:
# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 99 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 100 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 102 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 103 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 104 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 105 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_GreeterFaceScott:
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 109 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 110 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 111 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 112 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_right
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_FacilityGuideFaceScott:
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_in_place_faster_left
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_end
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Greeter::
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 125 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 126 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 129 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 131 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 136 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 137 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 138 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_BattleTower
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_BattleDome
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePalace
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_BattleArena
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_BattleFactory
# 149 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_BattlePike
# 150 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_BattlePyramid
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_RankingHall
# 152 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ExchangeCorner
# 153 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 154 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 156 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 157 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleTower::
# 158 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 161 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 162 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleDome::
# 163 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 166 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 167 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePalace::
# 168 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
# 169 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 170 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 171 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 172 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleArena::
# 173 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
# 174 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 176 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 177 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattleFactory::
# 178 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 181 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 182 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePike::
# 183 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 187 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePyramid::
# 188 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
# 189 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 191 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 192 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RankingHall::
# 193 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 196 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 197 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExchangeCorner::
# 198 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
# 199 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 202 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFacilityGuide::
# 203 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 204 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 205 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 206 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 207 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 208 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 209 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 210 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 211 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 212 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 213 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 215 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 216 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 217 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 218 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_LevelMode
# 220 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_Level50
# 221 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_OpenLevel
# 222 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_MonEntry
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_HoldItems
# 224 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 225 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide
# 226 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 228 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_LevelMode::
# 229 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 231 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 233 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Level50::
# 234 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 236 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 238 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_OpenLevel::
# 239 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
# 240 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 241 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 242 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 243 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_MonEntry::
# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
# 245 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 246 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 248 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_HoldItems::
# 249 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
# 251 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 253 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitRulesGuide::
# 254 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 255 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 256 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 257 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 258 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 259 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock
# 260 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	faceplayer
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 262 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 263 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 264 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 265 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 266 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 267 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 268 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 269 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 270 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_Symbols
# 271 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_RecordBattle
# 272 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_BattlePoints
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 274 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide
# 275 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 277 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_Symbols::
# 278 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
# 279 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 280 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 281 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_RecordBattle::
# 283 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
# 284 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 285 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 286 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 287 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_BattlePoints::
# 288 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 291 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 292 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ExitFrontierPassGuide::
# 293 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 294 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	release
# 295 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 297 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay:
# 298 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Bist du zum ersten Mal hier?\n"
# 299 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Komm bitte hier entlang.$"
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 301 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier:
# 302 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Der ultimative Ort für ultimative\n"
# 303 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kämpfe! Willkommen in der\l"
# 304 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfzone!$"
# 305 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 306 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IssueFrontierPass:
# 307 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Jeder, der zum ersten Mal hier ist,\n"
# 308 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "bekommt einen Kampfzonenpass von uns.\p"
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Damit kannst du alle Einrichtungen der\n"
# 310 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfzone besuchen.\p"
# 311 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier, bitte schön!$"
# 312 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 313 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass:
# 314 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} erhält den Kampfzonenpass.$"
# 315 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass:
# 317 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} steckt den Trainerpass\n"
# 318 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "zum Kampfzonenpass.$"
# 319 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier:
# 321 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Wir hoffen, dir gefällt, was die Kampf-\n"
# 322 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "zone zu bieten hat.$"
# 323 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 324 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame:
# 325 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "???: Oh, wenn das nicht {PLAYER}{KUN} ist!\n"
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Du bist also doch gekommen! Schön!$"
# 327 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 328 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay:
# 329 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Tutor: Oh! Herr Scott!\n"
# 330 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Einen schönen guten Tag, der Herr!$"
# 331 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 332 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere:
# 333 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Scott: Es ist großartig, dich hier\n"
# 334 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "zu sehen!\p"
# 335 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Ich hoffe, du hast ein bisschen Zeit\n"
# 336 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "mitgebracht, um dir hier alles\l"
# 337 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "anzusehen?!\p"
# 338 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Und natürlich hoffe ich auch, dass\n"
# 339 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "du die Reinheit unserer Kämpfe hier\l"
# 340 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "genießen wirst!\p"
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Ich wohne hier auf dem Gelände,\n"
# 342 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "also komm mich doch mal besuchen!$"
# 343 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 344 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFacilities:
# 345 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Ich begleite dich durch die\n"
# 346 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Einrichtungen der Kampfzone.$"
# 347 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 348 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich2:
# 349 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Was möchtest du gerne wissen?$"
# 350 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 351 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleTowerInfo:
# 352 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Der riesige Turm ist das Symbol der\n"
# 353 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfzone.\p"
# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Es gibt vier verschiedene Arten von\n"
# 355 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfräumen - für Einzel-, Doppel-,\l"
# 356 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Multi- und Link-Multikämpfe.$"
# 357 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 358 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleDomeInfo:
# 359 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Das Kampfstadion hat die Form eines\n"
# 360 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "gewaltigen Eis.\p"
# 361 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier werden so genannte Kampfturniere\n"
# 362 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "abgehalten.\p"
# 363 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Diese können in Einzel- oder Doppel-\n"
# 364 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "kämpfen ausgefochten werden.$"
# 365 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 366 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePalaceInfo:
# 367 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Der Kampfpalast ist das rote Gebäude,\n"
# 368 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ganz rechts in der Kampfzone.\p"
# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier gibt es zwei Kampfhallen: Eine\n"
# 370 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "für Einzel- und eine für Doppelkämpfe.$"
# 371 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 372 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleArenaInfo:
# 373 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Das einem Dojo nachempfundene Gebäude\n"
# 374 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "ist der Kampfring, er ist in der\l"
# 375 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Mitte rechts zu finden.\p"
# 376 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier findet das K.O.-Teamturnier statt.$"
# 377 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 378 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattleFactoryInfo:
# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Uns am nächsten ist das große Gebäude\n"
# 380 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "der Kampffabrik.\p"
# 381 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier findet der so genannte Wechsel-\n"
# 382 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "kampf statt.\p"
# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Auch hier kannst du in Einzel- oder\n"
# 384 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Doppelkämpfen antreten.$"
# 385 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 386 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePikeInfo:
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Das Gebäude, das wie ein Pokémon\n"
# 388 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "aussieht, ist die Kampfipitis - in der\l"
# 389 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Mitte links.\p"
# 390 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier findet man die Kampfbahnen.$"
# 391 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 392 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePyramidInfo:
# 393 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Die Kampfpyramide ist eine riesen-\n"
# 394 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "große Pyramide.\p"
# 395 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier finden die so genannten Kampf-\n"
# 396 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "forschungen statt.$"
# 397 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 398 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RankingHallInfo:
# 399 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Die Ergebnishalle befindet sich in der\n"
# 400 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Nähe des Duellturms.\p"
# 401 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier kannst du dir die Rekorde\n"
# 402 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "der Trainer anschauen, die sich den\l"
# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Herausforderungen der Kampfzone\l"
# 404 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "gestellt haben.$"
# 405 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 406 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo:
# 407 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Die Tauschecke befindet\n"
# 408 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "sich in der Nähe des Duellturms.\p"
# 409 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Hier kannst du Gewinnpunkte, die du in\n"
# 410 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "der Kampfzone erhalten hast,\l"
# 411 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "gegen tolle Preise eintauschen.$"
# 412 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 413 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToRules:
# 414 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Ich erkläre dir die Basisregeln, die für\n"
# 415 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "alle Herausforderungen der Kampfzone\l"
# 416 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "gelten.$"
# 417 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 418 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhat:
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Was möchtest du gerne wissen?$"
# 420 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 421 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LevelModeInfo:
# 422 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Alle Herausforderungen der Kampfzone\n"
# 423 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "haben zwei Kategorien:\l"
# 424 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Level 50 und Offene Kämpfe.$"
# 425 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 426 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_Level50Info:
# 427 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Die Level 50-Herausforderungen sind\n"
# 428 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "offen für Pokémon bis einschließlich\l"
# 429 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Level 50.\p"
# 430 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Beachte aber, dass kein Trainer, gegen\n"
# 431 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "den du antrittst, Pokémon besitzt, die\l"
# 432 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "unter Level 50 sind!\p"
# 433 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Diese Kategorie ist die Eingangsstufe\n"
# 434 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "für die Kämpfe in der Kampfzone.\p"
# 435 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Wir hoffen, dass du dich am Anfang\n"
# 436 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "für diese Stufe entscheiden wirst.$"
# 437 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 438 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_OpenLevelInfo:
# 439 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "In den Offenen Kämpfen gibt es kein\n"
# 440 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Limit für die Level der Pokémon.\p"
# 441 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Der Level deiner Gegner wird dem\n"
# 442 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Level deiner Pokémon angepasst.\p"
# 443 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Trotzdem wird kein Trainer, gegen den\n"
# 444 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "du antrittst, ein Pokémon haben, das\l"
# 445 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "unter Level 60 ist.$"
# 446 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 447 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_MonEntryInfo:
# 448 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Praktisch gesehen, kann jede Art von\n"
# 449 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Pokémon an jeder Herausforderung\l"
# 450 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "teilnehmen.\p"
# 451 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Eier und bestimmte Arten von Pokémon\n"
# 452 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "sind dennoch nicht zugelassen.\p"
# 453 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Die Anzahl der Pokémon, die du mit in den\n"
# 454 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampf nehmen kannst, variiert von\l"
# 455 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Einrichtung zu Einrichtung.\p"
# 456 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "In allen Einrichtungen gilt aber: Zwei\n"
# 457 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "oder mehr Pokémon der gleichen Art dürfen\l"
# 458 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "nicht in einen Kampf gebracht werden.$"
# 459 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 460 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_HoldItemsInfo:
# 461 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Nimmst du eine Herausforderung der\n"
# 462 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfzone an, musst du\p"
# 463 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "darauf achten, dass deine Pokémon\n"
# 464 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "unterschiedliche Items halten.$"
# 465 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 466 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass:
# 467 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Ich erkläre dir den Kampfzonenpass.$"
# 468 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 469 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_LearnAboutWhich1:
# 470 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Was möchtest du wissen?$"
# 471 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 472 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_SymbolsInfo:
# 473 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Es gibt sieben Einrichtungen hier in der\n"
# 474 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfzone.\p"
# 475 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Trainer, die sich durch hervorragendes\n"
# 476 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Talent auszeichnen, können als\l"
# 477 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Anerkennung Symbole erlangen.\p"
# 478 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Um diese Medaillen zu erhalten, müssen\n"
# 479 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "mehrere Trainer in Folge besiegt\l"
# 480 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "werden und manchmal auch bestimmte\p"
# 481 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Herausforderungen mehrmals bestritten\n"
# 482 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "werden. Es ist sicherlich nicht einfach,\l"
# 483 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "hier zu gewinnen. Daher: Viel Glück!$"
# 484 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 485 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_RecordedBattleInfo:
# 486 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Du hast die Möglichkeit, einen Kampf in\n"
# 487 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "deinen Kampfzonenpass aufnehmen zu\l"
# 488 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "lassen.\p"
# 489 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Vielleicht möchtest du einen Kampf, den\n"
# 490 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "du gegen oder mit Freunden geführt\l"
# 491 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "hast, dort eintragen lassen.\p"
# 492 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Oder du lässt Kämpfe in der Kampfzone\n"
# 493 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "eintragen. Kämpfe der\l"
# 494 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfipitis und der Kampfpyramide\l"
# 495 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "werden nicht eingetragen.\p"
# 496 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Am Ende eines Kampfes kannst du dich\n"
# 497 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "entscheiden, ob du ihn eintragen lassen\l"
# 498 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "möchtest oder nicht.$"
# 499 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"

# 500 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Text_BattlePointsInfo:
# 501 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Trainer, die herausragend in der\n"
# 502 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Kampfzone gekämpft haben,\l"
# 503 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "erhalten so genannte Gewinnpunkte.\p"
# 504 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Diese kannst du nach Belieben in der\n"
# 505 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Tauschecke gegen Preise eintauschen.$"
