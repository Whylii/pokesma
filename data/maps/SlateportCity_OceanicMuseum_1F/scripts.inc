# 1 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_MapScripts::
# 3 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
# 6 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
# 7 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 8 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 9 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
# 10 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 11 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 12 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 14 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 15 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 16 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
# 17 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lockall
# 18 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
# 21 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 23 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
# 24 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	showmoneybox 0, 0
# 25 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
# 26 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
# 27 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 28 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 29 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 30 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 32 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 33 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 34 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
# 35 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	checkmoney 50
# 36 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
# 37 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_SHOP
# 38 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removemoney 50
# 39 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	updatemoneybox
# 40 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 42 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 43 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 44 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 45 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 46 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
# 47 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
# 48 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 50 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 51 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
# 52 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 53 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 54 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 55 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 56 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
# 57 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
# 59 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	hidemoneybox
# 60 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	releaseall
# 61 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 62 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 63 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
# 64 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_down
# 65 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 66 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 67 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
# 68 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
# 69 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 70 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 71 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
# 72 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
# 73 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 74 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 75 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
# 76 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
# 77 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 78 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 79 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
# 80 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
# 81 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 82 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 83 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
# 84 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
# 85 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 86 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 87 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
# 88 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
# 89 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 90 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 91 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
# 92 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
# 93 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 94 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 95 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
# 96 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
# 97 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 98 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 99 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
# 100 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
# 101 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 102 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 103 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
# 104 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
# 105 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 106 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 107 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
# 108 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
# 109 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 110 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 111 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
# 112 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
# 113 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 114 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 115 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
# 116 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
# 117 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 118 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 119 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
# 120 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
# 121 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 122 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 123 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
# 124 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
# 125 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 126 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 127 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
# 128 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
# 129 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 130 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 131 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
# 132 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
# 133 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 134 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 135 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
# 136 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
# 137 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 138 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 139 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
# 140 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
# 141 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 142 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 143 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
# 144 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	lock
# 145 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	faceplayer
# 146 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay 8
# 147 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_PIN
# 148 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
# 149 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 150 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, Common_Movement_Delay48
# 151 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
# 153 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	giveitem ITEM_TM_THIEF
# 154 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
# 155 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_THIEF
# 156 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
# 157 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	closemessage
# 158 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
# 159 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
# 160 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 161 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
# 162 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 163 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
# 165 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
# 166 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
# 167 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 168 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 169 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 170 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 171 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
# 172 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 173 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 174 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 175 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 176 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 177 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
# 178 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
# 179 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
# 180 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	waitmovement 0
# 181 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
# 182 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 183 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 184 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
# 185 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 186 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	playse SE_EXIT
# 187 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_FAMILIAR_GRUNT
# 188 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 189 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 190 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 191 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
# 192 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	release
# 194 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	end
# 195 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 196 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
# 197 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 198 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 199 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_4
# 200 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 201 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 202 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 203 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
# 204 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_16
# 205 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_in_place_faster_down
# 206 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 207 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 208 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
# 209 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	face_down
# 210 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 211 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 212 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 213 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 214 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 215 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 216 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 217 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
# 218 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_right
# 219 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 220 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 221 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 222 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	walk_fast_down
# 223 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	delay_8
# 224 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	step_end
# 225 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 226 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
# 227 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Willkommen im Ozeanmueum.\p"
# 228 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Der Eintritt kostet ¥50.\n"
# 229 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Hast du Interesse?$"
# 230 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 231 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
# 232 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Viel Vergnügen!$"
# 233 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 234 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
# 235 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh. Tut mir Leid, aber du hast\n"
# 236 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "anscheinend nicht genug Geld bei dir.$"
# 237 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 238 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
# 239 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oh. Du gehörst zu der Gruppe, die gerade\n"
# 240 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "hineingegangen ist?\p"
# 241 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Sie sind alle schon drin. Beeil dich,\n"
# 242 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "sonst verlierst du die Gruppe.$"
# 243 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
# 245 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wir, Team Aqua, bestehen zum Besten\n"
# 246 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "für alle!$"
# 247 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
# 249 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Uns wurde befohlen, uns hier zu\n"
# 250 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "versammeln. Das taten wir, aber...\p"
# 251 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Unser Boss, der Galgenvogel, ist nicht\n"
# 252 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "hier.$"
# 253 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
# 255 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wenn ich diese ganzen Sachen an mich\n"
# 256 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "reißen würde, wäre ich dann reich?$"
# 257 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 258 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
# 259 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Was ich hier lerne, kann ich für meine\n"
# 260 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "ruchlosen Taten gut gebrauchen…$"
# 261 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 262 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
# 263 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wenn dieser Idiot die Sache in\n"
# 264 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Metarost City nicht vermasselt hätte,\l"
# 265 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "wären wir jetzt nicht hier.$"
# 266 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 267 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
# 268 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ich hatte keine ¥50, daher habe ich\n"
# 269 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ewigkeiten gebraucht, an der Rezeption\l"
# 270 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "vorbeizukommen.$"
# 271 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
# 273 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ich möchte etwas über das Meer lernen\n"
# 274 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "und dieses Wissen in Kämpfen einsetzen.$"
# 275 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 276 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
# 277 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Mir wird ganz schwindelig und rühr-\n"
# 278 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "selig, wenn ich das Meer erblicke!\p"
# 279 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Für mich ist Kapt. Brigg das absolute\n"
# 280 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Vorbild!$"
# 281 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 282 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
# 283 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Das Meer ist erbarmungslos rau und\n"
# 284 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "unendlich tief…\p"
# 285 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "In ihm müssen viele Pokémon leben, die\n"
# 286 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "wir bisher noch nicht kennen.$"
# 287 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 288 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
# 289 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ich möchte ein Pokémon aus dem Meer\n"
# 290 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "haben.\p"
# 291 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wenn man das umarmt, ist es bestimmt\n"
# 292 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "schön kalt und wunderbar glitschig.$"
# 293 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 294 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
# 295 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Aiyeeh!\n"
# 296 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Was machst du hier?\p"
# 297 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ich? Ich bin von Team Aqua. Du hast\n"
# 298 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "mich in den Boden gestampft. Erinnerst\l"
# 299 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "du dich? Im Metaflurtunnel?\p"
# 300 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Hier, das ist für dich!\n"
# 301 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Vergeben und vergessen!$"
# 302 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 303 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
# 304 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Mit dieser TM kannst du mehr anfangen,\n"
# 305 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "als ich es kann.\p"
# 306 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ich hoffe, du läufst mir nie mehr über\n"
# 307 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "den Weg! Muahahaha!$"
# 308 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 309 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
# 310 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Oooch, komm schon!\n"
# 311 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Nimm es und lass mich gehen!$"
# 312 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 313 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
# 314 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Eine blaue Flüssigkeit bewegt sich\n"
# 315 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "spiralförmig in einem Glasgefäß.\p"
# 316 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Dies ist ein Experiment, das einen\n"
# 317 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "künstlichen Whirlpool mit Hilfe von\l"
# 318 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wind erzeugt.$"
# 319 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 320 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
# 321 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ein roter Ball hüpft in dem Glasgefäß\n"
# 322 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "auf und ab.\p"
# 323 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Dies ist ein Experiment, das eine\n"
# 324 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "künstliche Kaskade mit Hilfe des\l"
# 325 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Ballauftriebs erzeugt.$"
# 326 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 327 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
# 328 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Dies ist eine Probe vom Meeresboden.\p"
# 329 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Über viele Jahre haben sich die Spuren\n"
# 330 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "allen Lebens als Sedimente auf dem\l"
# 331 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Grund des Meeres abgelagert.\p"
# 332 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Analysen dieser Proben geben einen\n"
# 333 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Einblick in längst vergangenes Leben.$"
# 334 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 335 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
# 336 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Dies ist eine Probe vom Sand der Küste.\p"
# 337 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Die Gesteinsschichten der Berge\n"
# 338 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "wurden im Laufe der Jahre durch Wasser\l"
# 339 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "abgetragen und am Boden abgelagert.\p"
# 340 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Nun sind sie nur noch kleine Körnchen,\n"
# 341 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "die den Sand an der Küste bilden.$"
# 342 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 343 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
# 344 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Meereskunde Fakt 1\n"
# 345 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Warum ist das Wasser im Meer blau?\p"
# 346 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Licht setzt sich aus vielen\n"
# 347 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Farben zusammen.\p"
# 348 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Scheint das Licht durch Wasser, so\n"
# 349 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "gehen einige Farben verloren.\p"
# 350 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Der Blauanteil des Lichts bleibt aber\n"
# 351 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "erhalten, das Wasser erscheint blau.$"
# 352 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 353 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
# 354 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Meereskunde Fakt 2\n"
# 355 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Warum ist das Meer salzig?\p"
# 356 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Meerwasser enthält gelöste Salzionen\n"
# 357 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "in Form von Natrium und Chlorid.\p"
# 358 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Diese Ionen wurden durch den Regen\n"
# 359 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "aus Gesteinsschichten herausgespült.\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Die Konzentration des aufgelösten\n"
# 361 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Salzes macht das Meer salzig.$"
# 362 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 363 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
# 364 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Meereskunde Fakt 3\n"
# 365 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Was ist größer? Das Meer oder das Land?\p"
# 366 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Die Erde ist zu 70 % von Wasser\n"
# 367 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "bedeckt, der Rest ist Land.\p"
# 368 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Das Meer ist also mehr als doppelt\n"
# 369 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "so groß wie das Land.$"
# 370 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 371 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
# 372 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Das ist ein Fossil mit vielen Furchen.\p"
# 373 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Das Erdreich des Meeresbodens wird\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "durch die Gezeiten abgetragen.\p"
# 375 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Die Bewegungen des Wassers zeichnen\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Rillen und Wellen in den Meeresboden.\p"
# 377 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Wenn der Meeresboden versteinert, wird\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "ein Bodenrelief sichtbar.$"
# 379 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"

# 380 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
# 381 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Eine seltsame Vorrichtung rotiert\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "unter einer Glaskuppel.\p"
# 383 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "Vielleicht misst sie die Tiefe von\n"
# 384 "data/maps/SlateportCity_OceanicMuseum_1F/scripts.pory"
	.string "irgendetwas…$"
