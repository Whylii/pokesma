# 1 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 39 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dies ist das Kampfstadion!\n"
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dein Weg zum unschlagbaren Superstar!$"
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dies ist die Kampffabrik!\n"
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hier gibt es die härtesten Pokémon!$"
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dies ist die Kampfipitis!\n"
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Welche der drei Bahnen betrittst du?$"
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dies ist der Duellturm.\p"
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Trainer tragen mit ihren besten\n"
# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pokémon Ausscheidungskämpfe aus.$"
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hi! Möchtest du mit der Fähre fahren?\n"
# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Zeigst du mir bitte dein Ticket?$"
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} hat kein Ticket…\p"
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Das tut mir schrecklich Leid.\p"
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nur mit einem Ticket kannst du mit der\n"
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Fähre fahren.$"
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} zückt das Ticket.\p"
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfekt! Damit kannst du an Bord!\p"
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Und wo soll die Reise hingehen?$"
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nach Graphitport City?$"
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nach Seegrasulb City?$"
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bitte komm später noch einmal wieder!$"
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bitte komm an Bord. Wir legen bald ab.$"
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Und wo soll die Reise hingehen?$"
# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich bin der Beste aus unserem\n"
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Freundeskreis. Aber hier…\l"
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hier bin ich echt aufgeschmissen!$"
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich möchte gerne in den Duellturm,\n"
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "aber ich finde den einfach nicht, obwohl\l"
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "ich eine Karte der Kampfzone\p"
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "habe.\n"
# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hier ist alles so groß…$"
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich wollte mich einer Herausforderung\n"
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "stellen, sobald ich hier angekommen bin.\p"
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aber auf dem Weg hierhin bin ich\n"
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "seekrank geworden… hurps…$"
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Weißt du, hier kann nicht einfach jeder\n"
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "hinkommen.\p"
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nur die Trainer, die durch ihr Talent\n"
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "und ihre Stärke aufgefallen sind,\l"
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "werden eingeladen.\p"
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Deshalb haben viele Trainer noch nie\n"
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "etwas über die Kampfzone gehört.$"
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, Brüderchen…\p"
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Bist du sicher, wir können Heraus-\n"
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "forderungen annehmen, obwohl wir\l"
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "keine Pokémon besitzen?$"
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ääh…\n"
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich bin sicher, dass das geht!\p"
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Denke ich…\p"
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Erinnerst du dich an diesen großen\n"
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "unheimlichen Kerl, der sagte “Ich leihe\l"
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "euch Pokémon!”?$"
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dies ist die Kampffabrik. Hier\n"
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "kannst du dir starke Pokémon leihen.\p"
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich frage mich nur, wer diese Pokémon\n"
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "aufzieht?$"
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich habe Angst, zur Kampfipitis zu\n"
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "gehen. Ich fürchte mich vor Vipitis…\p"
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ab-aber ich bin von so weit gekommen,\n"
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "ich muss einfach weitergehen!\l"
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… Zitter bibber…$"
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Komm, wir spielen Schere Stein Papier!\n"
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Eins, zwei, drei!\p"
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Juhuu! Ich habe gewonnen!\n"
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich werde die Kampfipitis-Heraus-\l"
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "forderung annehmen!$"
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh je…\n"
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich habe verloren.\p"
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Heute ist anscheinend nicht mein\n"
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Glückstag. Ich warte mit der Eroberung\l"
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "der Kampfipitis bis morgen.$"
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich glaube, ich bin das einzige Wesen\n"
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "hier, das lieber angelt als kämpft.\l"
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Warum auch immer…\p"
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wie? Hier kann man gar nichts fangen?!?\n"
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Was für eine Enttäuschung…$"
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Heute werde ich unter allen Umständen\n"
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "so lange kämpfen, bis ich ein Symbol\l"
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "bekomme!$"
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wie? Du willst dich den Heraus-\n"
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "forderungen des Kampfstadions\l"
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "stellen?\p"
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dann wünsche ich dir viel Glück!\n"
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Wir siegen uns den Weg nach oben und\l"
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "treffen uns an der Spitze wieder.$"
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Opa, hier drüben!\n"
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Das Kampfstadion ist hier!\l"
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Los, Opa, zeig’s ihnen!$"
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "So, dies ist also das Kampfstadion?!?\n"
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Kein Gentleman wird mich besiegen!\p"
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aber wo ist denn nur der Eingang?$"
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Vor nicht allzu langer Zeit gab es hier\n"
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "nichts. Nur Ödnis.\p"
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Und nun schau sich einer diesen Ort an!\n"
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Unglaublich! Ich werde meine Mutter mal\l"
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "hierher bringen, damit sie das sieht.$"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Endlich habe ich die Kampfzone\n"
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "erreicht.\p"
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mit meinem Aussehen und meinem Talent\n"
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "sorge ich bestimmt für Aufsehen.$"
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… Kau… … Schmatz…\p"
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hier sind offensichtlich nur starke\n"
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Typen anwesend.\p"
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… Schmatz… … Kau…$"
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… Mampf… … Mampf…\p"
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Vor einiger Zeit habe ich dieses ältere\n"
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Mädchen an der Kampfipitis getroffen.\p"
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ihre Augen hatten einen bösartigen\n"
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ausdruck, sie machte einem richtig\l"
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Angst.\p"
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… Mampf… … Mampf…\p"
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sie wurde richtig giftig: “KÖNNTEST DU\n"
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "WOHL ENDLICH AUFHÖREN ZU ESSEN?!?”\p"
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Dann hat sie sich lustig über mich\n"
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "gemacht.\p"
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Das war wirklich haarsträubend\n"
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "unheimlich. Ehrlich!\p"
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… Mampf… … Mampf…$"
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Was? Hör dir doch mal selber zu!\n"
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Das ist doch wirklich nichts!\p"
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Das letzte Mal als ICH ihm zugejubelt\n"
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "habe, haben sich unsere Augen\p"
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "getroffen. Es hat richtig gefunkt\n"
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "zwischen uns!$"
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "WIE BITTE?!\n"
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hah! Ha ha ha!\p"
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Der Stadionstar hat doch nur in deine\n"
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Richtung geschaut, weil ICH ihm\l"
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "zugejubelt habe!$"
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, bitte, vertragt euch!\n"
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hört auf zu streiten!\p"
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ihr solltet lieber einem Arenaleiter\n"
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "zujubeln!\p"
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Der Stadionstar ist mein großes Idol!\n"
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ihr seid zu jung, um sein Talent zu\l"
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "verstehen!$"
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Diese Leute da, die sich gerade in den\n"
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Haaren liegen…\p"
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Es ist schwer zu glauben, aber das\n"
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "waren mal Trainer. Gute Trainer sogar!\p"
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Sie waren stark und auch berühmt.\p"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Aber ein bestimmter Trainer hat sie bei\n"
# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "einem Turnier mit Pauken und Trompeten\l"
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "besiegt.\p"
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Trotz ihrer Niederlage haben sie sich\n"
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "regelrecht in ihn verliebt.\p"
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Nun leben sie ihr Leben als Fans und\n"
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "jubeln diesem Trainer jeden Tag im\l"
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Kampfstadion zu.$"
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich habe gehört, dass jemand gehört\n"
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "hat, ein Pokémon mit einem ungewöhnlich\l"
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "langen Schweif sei hier in der\p"
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Kampfzone aufgetaucht. Das ist\n"
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "bestimmt anbetungswürdig…\p"
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Die Herausforderungen können warten.\n"
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ich will dieses hübsche Geschöpf\l"
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "finden!$"
