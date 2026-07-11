# 1 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 2 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_MapScripts::
# 3 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Scott::
# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_GivenBerry
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_GivenShield
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints
# 11 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
# 12 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 13 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 14 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
# 15 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
# 16 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
# 17 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
# 18 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 19 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
# 22 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 25 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 27 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
# 28 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 29 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 30 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 31 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 32 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 33 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 35 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_LANSAT_BERRY
# 37 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 38 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
# 39 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 40 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 43 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
# 44 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 46 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 47 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 48 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 50 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
# 51 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	giveitem ITEM_STARF_BERRY
# 53 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
# 54 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 59 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
# 60 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 62 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBerry::
# 65 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 67 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_RandomComment::
# 70 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	random 3
# 71 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment
# 72 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment
# 73 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 75 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_FrontierBrainComment::
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 80 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 82 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ArtisanCaveComment::
# 83 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 89 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 92 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 94 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 50, BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
# 95 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 96 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 97 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 98 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
# 99 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 101 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_SILVER_SHIELD
# 103 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 107 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
# 108 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 112 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenShield::
# 113 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
# 114 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 115 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 117 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
# 118 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 119 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 120 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 121 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 122 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_RESULT, 100, BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
# 126 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
# 129 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	givedecoration DECOR_GOLD_SHIELD
# 131 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
# 132 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOLD_SHIELD
# 133 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 134 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
# 135 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GivenBattlePoints::
# 138 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 140 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	closemessage
# 145 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	delay 30
# 146 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth
# 147 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest
# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 153 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_eq VAR_SCOTT_STATE, 13, BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints
# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 9, BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_ge VAR_SCOTT_STATE, 6, BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint
# 158 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 160 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give4BattlePoints::
# 161 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 4
# 162 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 4
# 163 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give3BattlePoints::
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 3
# 168 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 3
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 170 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 172 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give2BattlePoints::
# 173 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 2
# 174 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 2
# 175 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 178 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_Give1BattlePoint::
# 179 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 1
# 180 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 1
# 181 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints
# 182 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 184 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_GiveBattlePoints::
# 185 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	special GiveFrontierBattlePoints
# 186 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 187 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
# 189 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 190 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release
# 191 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 193 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayNorth::
# 194 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterUp
# 195 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 196 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 197 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 198 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwaySouth::
# 199 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterDown
# 200 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 201 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 202 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 203 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayEast::
# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 205 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 206 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 207 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 208 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_EventScript_ScottFaceAwayWest::
# 209 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 210 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 211 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	return
# 212 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 213 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier:
# 214 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Oh, hallo! Herzlich willkommen!\n"
# 215 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Hehehe… Bitte entschuldige die Enge.\p"
# 216 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Nun, {PLAYER}{KUN}, ich darf dich herzlich\n"
# 217 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "hier in der Kampfzone begrüßen.\p"
# 218 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Hier sind meine Träume wahr geworden.\n"
# 219 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Jahre um Jahre anstrengender Arbeit,\l"
# 220 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "aber mein Traum ist Realität geworden!$"
# 221 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 222 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal:
# 223 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Rückblickend betrachtet war es eine\n"
# 224 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "lange Reise…\p"
# 225 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich habe meine Heimat verlassen und\n"
# 226 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "mich auf die Suche nach starken\l"
# 227 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Trainern gemacht.\p"
# 228 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Niemand kann sich vorstellen, wie viel\n"
# 229 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Zeit und wie viel Anstrengungen es mich\l"
# 230 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "gekostet hat, dies hier zu realisieren.$"
# 231 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing:
# 233 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Aber lassen wir die Vergangenheit\n"
# 234 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "ruhen.\p"
# 235 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Alles, was ich mir wünsche ist, dass du\n"
# 236 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "die Kämpfe hier aus vollem Herzen\l"
# 237 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "genießt.\p"
# 238 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Ich möchte dir dies als\n"
# 239 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Andenken geben. Es soll dich daran er-\l"
# 240 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "innern, wie sich unsere Wege kreuzten.$"
# 241 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 242 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints:
# 243 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER} erhält {STR_VAR_1} Gewinnpunkt(e).$"
# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 245 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExplainBattlePoints:
# 246 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Du kannst die Anzahl deiner\n"
# 247 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Gewinnpunkte auf deinem Kampfzonen-\l"
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "pass ablesen.\p"
# 249 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Je erfolgreicher du hier in der Kampf-\n"
# 250 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "zone bist, desto mehr Gewinnpunkte\l"
# 251 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "erhältst du.\p"
# 252 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Verwende sie ganz wie du magst. Tausche\n"
# 253 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "sie zum Beispiel gegen Items ein.$"
# 254 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 255 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingGreatThings:
# 256 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich erwarte Großes von dir!$"
# 257 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 258 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers:
# 259 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Jeder Trainer ist ein\n"
# 260 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Individuum. Sie leben alle ihr Leben.\p"
# 261 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Aber in Kämpfen ist es völlig egal,\n"
# 262 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "wer oder was sie sind.\p"
# 263 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Sie sind alle gleich!\p"
# 264 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich liebe die Reinheit der Kämpfe, in\n"
# 265 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "denen jeder gleich ist.\p"
# 266 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Deshalb bin ich immer auf der Suche\n"
# 267 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "nach Trainern, die ihre Sache ernst\l"
# 268 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "nehmen, und lade sie hierher ein.$"
# 269 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 270 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain:
# 271 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Hast du schon die Kampf-\n"
# 272 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "koryphäen getroffen?\p"
# 273 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oder hast du Symbole von ihnen\n"
# 274 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "bekommen?\p"
# 275 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Die Kampfkoryphäen sind handverlesen.\n"
# 276 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich habe die stärksten Trainer selbst\l"
# 277 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "ausgesucht.\p"
# 278 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Aber ich bin sicher, deine Stärke wird\n"
# 279 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "sie zum Zittern bringen!$"
# 280 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 281 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier:
# 282 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Du trainierst doch nicht nur für\n"
# 283 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Kämpfe, oder?\p"
# 284 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich meine mich zu erinnern, dass du auch\n"
# 285 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "an deinem Pokédex arbeitest?\p"
# 286 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Soll ich dir was verraten?\p"
# 287 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Auch hier in der Kampfzone wirst\n"
# 288 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "du auf wilde Pokémon treffen…\l"
# 289 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "irgendwo… Ha ha ha ha!$"
# 290 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 291 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols:
# 292 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Gefällt es dir hier in der\n"
# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Kampfzone?\p"
# 294 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Warte mal!\n"
# 295 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oh…\p"
# 296 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Dein Kampfzonenpass!\n"
# 297 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Du hast ja alle silbernen Symbole\l"
# 298 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "zusammen!\p"
# 299 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Das ist mehr als beeindruckend!\n"
# 300 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Du bist stark, genau, wie ich es\l"
# 301 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "erwartet hatte!\p"
# 302 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Normalerweise mache ich so etwas nicht,\n"
# 303 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "aber dies hier ist eine besondere\l"
# 304 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Situation.\p"
# 305 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich möchte dir dies hier schenken!\n"
# 306 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich bin sicher, du weißt es gut zu\l"
# 307 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "nutzen.$"
# 308 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 309 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols:
# 310 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Ich hoffe, es gefällt dir hier in\n"
# 311 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "der Kampfzone?\p"
# 312 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Warte mal…\n"
# 313 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich traue meinen Augen nicht!\p"
# 314 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Dein Kampfzonenpass!\n"
# 315 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Du hast ja alle goldenen Symbole\l"
# 316 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "zusammen!\p"
# 317 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Das ist mehr als hervorragend!\n"
# 318 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Du bist einfach unglaublich - ich hatte\l"
# 319 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "nichts anderes erwartet!\p"
# 320 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "… … … …\p"
# 321 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER}, du musst dies von mir\n"
# 322 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "annehmen!\p"
# 323 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich weiß, du wirst den Wert dieses\n"
# 324 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Geschenks erkennen!$"
# 325 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 326 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere:
# 327 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich kann von mir behaupten, einen guten\n"
# 328 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Trainer auf Anhieb erkennen zu können.\p"
# 329 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich bin froh, dass ich dein Potenzial\n"
# 330 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "erkannt habe und dich hierher gebeten\l"
# 331 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "habe!$"
# 332 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 333 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_BerryPocketStuffed:
# 334 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Deine Beerentasche scheint voll\n"
# 335 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "zu sein.$"
# 336 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 337 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow:
# 338 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Ich habe schon von dir gehört!\n"
# 339 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Wie du den Duellturm bezwungen hast!\l"
# 340 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Du hast 50 Trainer in Folge besiegt!\p"
# 341 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Das ist fantastisch!\n"
# 342 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich möchte dir dies gerne schenken.$"
# 343 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 344 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow:
# 345 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Scott: Ich habe schon von dir gehört!\n"
# 346 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Wie du den Duellturm bezwungen hast!\l"
# 347 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Du hast 100 Trainer in Folge besiegt!\p"
# 348 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Das ist einfach spektakulär!\n"
# 349 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich muss dir dies einfach schenken!$"
# 350 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 351 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings:
# 352 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Ich erwarte von dir ab jetzt noch\n"
# 353 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "größere Taten!$"
# 354 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"

# 355 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
BattleFrontier_ScottsHouse_Text_ComeBackForThisLater:
# 356 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oh, schade! Komm doch einfach wieder,\n"
# 357 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "wenn du Platz geschaffen hast.$"
