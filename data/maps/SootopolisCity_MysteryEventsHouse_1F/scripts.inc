# 1 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_MapScripts::
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_1F_OnTransition
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_1F_OnFrame
# 5 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.byte 0
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 7 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnTransition:
# 8 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	frontier_checkvisittrainer
# 9 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, SootopolisCity_MysteryEventsHouse_1F_EventScript_SetTrainerVisitingLayout
# 10 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_ne VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0, SootopolisCity_MysteryEventsHouse_1F_EventScript_MoveOldManToDoor
# 11 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 13 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_SetTrainerVisitingLayout::
# 14 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MYSTERY_EVENTS_OLD_MAN, 3, 2
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MYSTERY_EVENTS_OLD_MAN, MOVEMENT_TYPE_FACE_DOWN
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F_STAIRS_UNBLOCKED
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 20 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_MoveOldManToDoor::
# 21 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MYSTERY_EVENTS_OLD_MAN, 2, 2
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MYSTERY_EVENTS_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 25 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_OnFrame:
# 26 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 29 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.2byte 0
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 31 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle::
# 32 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	lockall
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerExitStairs
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_MYSTERY_EVENTS_OLD_MAN, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManWalkBehindPlayer
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	copyobjectxytoperm LOCALID_MYSTERY_EVENTS_OLD_MAN
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleWonComment
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2, SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleLostComment
# 42 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3, SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleTiedComment
# 43 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
# 45 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	releaseall
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 48 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleWonComment::
# 49 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative, MSGBOX_DEFAULT
# 50 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 51 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 52 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleLostComment::
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 55 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 56 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_BattleTiedComment::
# 57 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff, MSGBOX_DEFAULT
# 58 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 59 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 60 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerExitStairs:
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_down
# 62 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 63 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 64 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_OldManWalkBehindPlayer:
# 65 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_in_place_faster_down
# 67 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 69 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan::
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	lock
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	faceplayer
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	frontier_checkvisittrainer
# 73 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_InvalidVisitingTrainer
# 74 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting
# 75 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles, MSGBOX_DEFAULT
# 76 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 77 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 78 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 79 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_InvalidVisitingTrainer::
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles, MSGBOX_DEFAULT
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 83 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 84 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting::
# 85 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special SavePlayerParty
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special BufferEReaderTrainerName
# 87 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call SootopolisCity_MysteryEventsHouse_1F_EventScript_ChooseParty
# 90 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 91 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 93 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 94 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call Common_EventScript_SaveGame
# 95 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
# 96 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special SavePlayerParty
# 97 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 98 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch, MSGBOX_DEFAULT
# 99 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	closemessage
# 100 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementNorth
# 101 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementEast
# 102 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementWest
# 103 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, 3, 1
# 104 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitstate
# 105 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 106 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 107 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 108 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle::
# 109 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 110 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle, MSGBOX_DEFAULT
# 111 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	release
# 112 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	end
# 113 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 114 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_ChooseParty::
# 115 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3, MSGBOX_DEFAULT
# 116 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 117 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special ChooseHalfPartyForBattle
# 118 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 119 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 120 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementNorth::
# 121 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideLeft
# 122 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementNorth
# 123 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 124 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 125 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 126 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementEast::
# 127 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideRight
# 128 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementEast
# 129 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 131 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 132 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_EnterBasementWest::
# 133 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideLeft
# 134 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementWest
# 135 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	return
# 137 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 138 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementNorth:
# 139 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 140 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 141 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 142 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 143 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 144 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementEast:
# 145 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 146 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 147 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 148 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 149 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 150 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_PlayerEnterBasementWest:
# 151 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_left
# 153 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 154 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 155 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 156 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideLeft:
# 157 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_left
# 158 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 159 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 160 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 161 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Movement_OldManMoveAsideRight:
# 162 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 163 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 164 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_end
# 165 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 166 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles:
# 167 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Als ich noch jung war, bin ich als\n"
# 168 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Pokémon-Trainer durch die Welt\l"
# 169 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "gereist.\p"
# 170 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Nun, da ich ein alter Knabe geworden\n"
# 171 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "bin, beobachte ich mit Freuden die\l"
# 172 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "jungen Trainer bei ihren Kämpfen.$"
# 173 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 174 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_DoorAppearsToBeLocked:
# 175 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "The door appears to be locked.$"
# 176 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 177 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer:
# 178 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ein Trainer namens {STR_VAR_1} ist bei\n"
# 179 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "mir zu Besuch.\p"
# 180 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Möchtest du einmal gegen {STR_VAR_1}\n"
# 181 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "antreten?$"
# 182 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 183 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle:
# 184 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Du möchtest nicht kämpfen? Es ent-\n"
# 185 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "täuscht mich, dass ich dich nicht\l"
# 186 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "kämpfen sehen kann.$"
# 187 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 188 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3:
# 189 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Oh, sehr gut!\p"
# 190 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Aber mein Haus ist nicht sehr stabil.\p"
# 191 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Könntet ihr einen 3-gegen-3-Kampf\n"
# 192 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "ausfechten?$"
# 193 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 194 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle:
# 195 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Bevor ihr gegeneinander antretet,\n"
# 196 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "solltet ihr eure Spiele speichern!$"
# 197 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 198 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch:
# 199 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ich hoffe, einen guten Kampf zu sehen!$"
# 200 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 201 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
@ Unused
# 202 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Tie:
# 203 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"
# 204 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 205 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw:
# 206 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Der Kampf endet unentschieden.$"
# 207 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 208 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff:
# 209 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Der Kampf endet unentschieden.$"
# 210 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 211 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
@ Unused
# 212 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Won:
# 213 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"
# 214 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 215 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative:
# 216 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Das war absolute Spitzenklasse!\p"
# 217 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ich habe mich wieder erkannt - mich in\n"
# 218 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "meinen jungen Jahren!$"
# 219 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 220 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
@ Unused
# 221 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Lost:
# 222 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"
# 223 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"

# 224 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou:
# 225 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ach, wie bedauerlich für dich!\p"
# 226 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Aber es war ein guter Kampf.\n"
# 227 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ich hoffe, das nächste Mal gewinnst du.$"
