# 1 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_MapScripts::
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
# 5 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition:
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma::
# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SAILOR, 1, 9
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_WOMAN, 0, 8
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_OLD_MAN, 1, 6
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SCIENTIST_1, 3, 4
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1, MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown
# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3, MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft::
# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 12, 2
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown::
# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 13, 3
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See comment on MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight::
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 14, 2
# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad:
# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote::
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet::
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber::
# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma::
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, 0, MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge VAR_RESULT, 1, MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma::
# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma::
# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma
# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma::
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone::
# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma::
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterRight
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal::
# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma::
# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal::
# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma::
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F, MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated
# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT
# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_FACING
# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#ifdef BUGFIX
# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#else
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#endif
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated::
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused by mistake. The movement is handled anyway after the switch (see above)
# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This also means VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE can never be 3
# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest:
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See above
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast:
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This was meant to only handle the player facing North, but by mistake(?) it also handles the player facing East
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs:
# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent:
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Die Rakete wird in Kürze starten.$"
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber:
# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Die Rakete ist sicher gestartet!\n"
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Das war der erfolgreiche Start Nr. {STR_VAR_1}!$"
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent:
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Hier sieht alles etwas marode aus,\n"
# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "aber…\p"
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Die Rakete wird in Kürze starten!$"
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber:
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Hier sieht alles etwas marode aus,\n"
# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "trotzdem…\p"
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Die Rakete ist sicher gestartet!\n"
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Das war der erfolgreiche Start Nr. {STR_VAR_1}!$"
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection:
# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Jeder Raketenstart verlangt\n"
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "sorgfältige Vorbereitungen. Die Fehler-\l"
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "quote darf nicht einmal 1 % betragen.\p"
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Selbst wenn 99 % perfekt sind, kann 1 %\n"
# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "schon für ein Misslingen sorgen.\p"
# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Trotzdem versuchen wir es immer wieder.\n"
# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Warum? Weil es ein ewiger Traum ist.$"
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter:
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Die Gauner von Magma haben unser\n"
# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Raumfahrtzentrum im Visier.\p"
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Aber wir können es niemandem erlauben,\n"
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "den Raktenstart zu gefährden!$"
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt:
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ich schlenderte am Strand entlang, da\n"
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "habe ich dieses hier gefunden.\p"
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ich kann damit nichts anfangen, daher\n"
# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "kannst du es haben.$"
# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers:
# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Die Hoenn-Region ist bekannt für die\n"
# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Häufigkeit der Meteoriteneinschläge.$"
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis:
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Team Magma darf den Raketentreibstoff\n"
# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "nicht in die Finger bekommen!\p"
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Übrigens: Möchtest du diesen Stein\n"
# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "haben? Den habe ich am Strand\l"
# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gefunden.$"
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma:
# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wenn Team Magma in der Nähe ist, sind\n"
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Spaziergänge am Strand bestimmt\l"
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gefährlich.$"
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace:
# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Einige Menschen nehmen an, dass die\n"
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Pokémon aus dem Weltall kommen. Ob das\l"
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "stimmt?$"
# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma:
# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Team Aqua sollte sich um Team Magma\n"
# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "kümmern!\p"
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Aber wenn sie das machen, dann haben\n"
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "wir hinterher ein Problem mit Team Aqua.$"
# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind:
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ein gigantischer Brocken Metall durch-\n"
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "bricht den Himmel und fliegt ins All…\p"
# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Das übersteigt jede Vorstellungskraft.$"
# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream:
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ein gigantischer Brocken Metall durch-\n"
# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "bricht den Himmel und fliegt ins All…\p"
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Aber Team Magma will meinen Traum\n"
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "vernichten!\p"
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ich versteh das nicht.$"
# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel:
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Troy: Hast du die Bekanntmachung schon\n"
# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gelesen, {PLAYER}{KUN}?\p"
# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Team Magma will sich den Raketentreib-\n"
# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "stoff unter den Nagel reißen.\p"
# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ich weiß zwar nicht, wofür sie ihn\n"
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "brauchen, aber das können wir ihnen\l"
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "nicht erlauben.\p"
# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ich werde das Ganze hier noch eine\n"
# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Weile beobachten.\p"
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Warum schaust du dich nicht in der\n"
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Zwischenzeit ein wenig im Ort um?$"
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 370 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro:
# 371 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wie angekündigt wollen wir den\n"
# 372 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Raketentreibstoff haben!$"
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 374 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat:
# 375 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Kein Treibstoff mehr…$"
# 376 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle:
# 378 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Heb bloß nicht ab, nur weil du mich\n"
# 379 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "besiegt hast!$"
# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 381 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro:
# 382 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wir warnen dich offen und ehrlich!\n"
# 383 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wir sind nicht hinterhältig!$"
# 384 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 385 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat:
# 386 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
# 387 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wir sollten doch heimtückischer sein…$"
# 388 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle:
# 390 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, ich habe dazugelernt. Nächstes\n"
# 391 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Mal werden wir uns nicht vorher\l"
# 392 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "ankündigen.$"
# 393 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro:
# 395 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wir sind hinter dem Raketentreibstoff\n"
# 396 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "her, welcher im Raumfahrtzentrum\l"
# 397 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gelagert wird.$"
# 398 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 399 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat:
# 400 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Bitte, kannst du mir etwas Treibstoff\n"
# 401 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "geben? Das kleinste Tröpfchen würde\l"
# 402 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "schon reichen.$"
# 403 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 404 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle:
# 405 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Was wir mit dem Raketentreibstoff\n"
# 406 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "vorhaben?\p"
# 407 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Woher soll ich das wissen?!\n"
# 408 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Geh die Treppe hoch und frag unseren\l"
# 409 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Boss.$"
# 410 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 411 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro:
# 412 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Unser Boss hat mich angewiesen,\n"
# 413 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "absolut niemanden durchzulassen!$"
# 414 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 415 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat:
# 416 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ack! Ack! Aaaargh!$"
# 417 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 418 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle:
# 419 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Bitte, sag unserem Boss, dass ich\n"
# 420 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "meinen Posten niemals verlassen habe!\p"
# 421 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ich habe ihn bis zum bitteren Ende\n"
# 422 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gehalten…$"
# 423 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 424 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice:
# 425 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Das ist…\n"
# 426 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Eine Ankündigung eines Diebstahls?!\p"
# 427 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“An die Belegschaft des\n"
# 428 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Raumfahrtzentrums\p"
# 429 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wie geht es euch? Wir hoffen, gut.\n"
# 430 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Schon bald werden wir euch einen Besuch\p"
# 431 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "abstatten, um euren Raketentreibstoff\n"
# 432 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "zu stehlen.\p"
# 433 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Bitte versucht nicht, uns aufzuhalten.\n"
# 434 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Wir nehmen den Treibstoff auf jeden\l"
# 435 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Fall mit! Egal, was ihr unternehmt.\p"
# 436 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Auf dass die Landmassen wachsen!\p"
# 437 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "                                      Team Magma”$"
