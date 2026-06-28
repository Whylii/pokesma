# 1 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_MapScripts::
# 3 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_PokemonTrainerFanClub_OnFrame
# 4 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonTrainerFanClub_OnTransition
# 5 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 7 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	@ See field_specials.c for a breakdown of the Fan Club and its variables
# 8 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 9 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnFrame:
# 10 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 11 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 12 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 13 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 14 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 15 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LASS, Common_Movement_WalkInPlaceFasterDown
# 16 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 17 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer
# 19 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_MAN, LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 20 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 21 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 22 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 23 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer
# 25 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 26 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 27 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 28 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer
# 29 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 30 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 2
# 31 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 32 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 34 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 35 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 36 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 37 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 38 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 39 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 40 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 41 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 42 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 43 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 44 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer:
# 45 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 46 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 47 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 48 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 49 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 50 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 51 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 52 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 53 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer:
# 54 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 55 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 56 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 57 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 58 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer:
# 59 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 60 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 61 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 62 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 63 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 64 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 65 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 66 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_OnTransition:
# 67 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer
# 68 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting
# 69 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 2, LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 70 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 72 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 73 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryLoseFansFromPlayTime
# 74 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 75 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 76 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 77 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 78 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 79 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 80 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 81 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 82 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 83 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 84 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 85 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 86 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 87 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 88 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 89 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 90 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 91 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 92 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 93 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 94 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 95 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 96 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 97 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 98 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 99 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 101 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideOrShowInterviewer::
# 102 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, ShouldHideFanClubInterviewer
# 103 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer
# 104 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 105 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	clearflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 106 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 107 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 108 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_HideInterviewer::
# 109 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER
# 110 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 111 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 112 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Set up the fan club TV show, if the player has at least 5 fans in the club
# 113 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Rather than counting up, 1 is subtracted from the total for each member not a fan of the players
# 114 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow::
# 115 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, NUM_TRAINER_FAN_CLUB_MEMBERS
# 116 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 117 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 118 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 119 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 120 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 121 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 122 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 123 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 124 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 125 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 126 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 127 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 128 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 129 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 130 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 131 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 132 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 133 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 134 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 135 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 136 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 137 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 138 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 139 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan
# 140 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_ge VAR_0x8005, 5, LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow
# 141 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 142 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 143 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CountNotPlayersFan::
# 144 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	subvar VAR_0x8005, 1
# 145 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 146 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 147 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_TrySetUpTVShow::
# 148 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special TryPutTrainerFanClubOnAir
# 149 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 150 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 151 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 152 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LASS, 7, 5
# 153 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 154 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 155 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 156 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_POKEFAN_M, 3, 4
# 157 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 158 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 159 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 160 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 7, 2
# 161 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 162 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 163 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 164 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_NINJA_BOY, 5, 5
# 165 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 166 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 167 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 168 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BOY, 5, 2
# 169 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 170 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 171 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 172 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_MAN, 8, 4
# 173 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 174 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 175 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 176 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 3, 3
# 177 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 178 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 179 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 180 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_EXPERT_F, 8, 3
# 181 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	return
# 182 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 183 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SetFanMemberPositionsForFirstFanMeeting::
# 184 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_CheckSetUpTVShow
# 185 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 186 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 187 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 188 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 189 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call LilycoveCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 190 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 191 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 192 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Man::
# 193 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 194 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 195 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 196 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 197 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion
# 198 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 199 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan
# 200 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 201 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan
# 202 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 204 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 205 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 206 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayersFan::
# 207 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 208 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan
# 209 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin, MSGBOX_DEFAULT
# 210 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 211 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 212 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 213 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyFan::
# 214 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest, MSGBOX_DEFAULT
# 215 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 216 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 217 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 218 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManOnlyNonFan::
# 219 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 221 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 222 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 223 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ManPlayerNotChampion::
# 224 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer, MSGBOX_DEFAULT
# 225 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 226 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 227 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 228 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Lass::
# 229 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 230 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 231 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 232 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 233 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion
# 234 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 235 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan
# 236 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 237 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan
# 238 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly, MSGBOX_DEFAULT
# 239 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 240 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 241 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 242 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayersFan::
# 243 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 244 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan
# 245 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou, MSGBOX_DEFAULT
# 246 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 247 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 248 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 249 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyFan::
# 250 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan, MSGBOX_DEFAULT
# 251 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 252 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 253 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 254 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassOnlyNonFan::
# 255 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly, MSGBOX_DEFAULT
# 256 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 257 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 258 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 259 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LassPlayerNotChampion::
# 260 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 262 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 263 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 264 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanM::
# 265 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 266 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 267 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 268 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 269 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion
# 270 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 271 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan
# 272 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 273 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan
# 274 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman, MSGBOX_DEFAULT
# 275 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 276 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 277 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 278 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayersFan::
# 279 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 280 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan
# 281 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 283 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 284 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 285 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyFan::
# 286 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling, MSGBOX_DEFAULT
# 287 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 288 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 289 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 290 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMOnlyNonFan::
# 291 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent, MSGBOX_DEFAULT
# 292 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 293 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 294 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 295 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_PokefanMPlayerNotChampion::
# 296 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers, MSGBOX_DEFAULT
# 297 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 298 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 299 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 300 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 301 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 302 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 303 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 304 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 305 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_LILYCOVE_FAN_CLUB_STATE, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 306 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 307 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 308 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 309 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 310 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool, MSGBOX_DEFAULT
# 311 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 312 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 313 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 314 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 315 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 316 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 317 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer, MSGBOX_DEFAULT
# 318 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 319 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 320 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 321 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 322 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou, MSGBOX_DEFAULT
# 323 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 324 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 325 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 326 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 327 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe, MSGBOX_DEFAULT
# 328 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 329 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 330 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 331 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 332 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat, MSGBOX_DEFAULT
# 333 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 334 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 335 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 336 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoy::
# 337 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 338 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 339 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 340 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 341 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 342 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan
# 343 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 344 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan
# 345 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool, MSGBOX_DEFAULT
# 346 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 347 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 348 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 349 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyPlayersFan::
# 350 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 351 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan
# 352 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou, MSGBOX_DEFAULT
# 353 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 354 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 355 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 356 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyFan::
# 357 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou, MSGBOX_DEFAULT
# 358 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 359 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 360 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 361 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_NinjaBoyOnlyNonFan::
# 362 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan, MSGBOX_DEFAULT
# 363 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 364 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 365 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 366 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Boy::
# 367 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 368 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 369 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 370 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 371 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 372 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan
# 373 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 374 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan
# 375 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne, MSGBOX_DEFAULT
# 376 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 377 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 378 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 379 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyPlayersFan::
# 380 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 381 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan
# 382 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 384 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 385 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 386 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyFan::
# 387 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner, MSGBOX_DEFAULT
# 388 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 389 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 390 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 391 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_BoyOnlyNonFan::
# 392 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer, MSGBOX_DEFAULT
# 393 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 394 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 395 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 396 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Woman::
# 397 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 398 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 399 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 400 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 401 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 402 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 403 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 404 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 405 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout, MSGBOX_DEFAULT
# 406 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 407 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 408 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 409 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 410 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 411 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 412 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind, MSGBOX_DEFAULT
# 413 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 414 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 415 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 416 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 417 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation, MSGBOX_DEFAULT
# 418 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 419 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 420 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 421 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 422 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger, MSGBOX_DEFAULT
# 423 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 424 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 425 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 426 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertF::
# 427 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 428 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 429 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 430 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 431 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, IsFanClubMemberFanOfPlayer
# 432 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan
# 433 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 434 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan
# 435 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential, MSGBOX_DEFAULT
# 436 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 437 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 438 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 439 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFPlayersFan::
# 440 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, GetNumFansOfPlayerInTrainerFanClub
# 441 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan
# 442 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive, MSGBOX_DEFAULT
# 443 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 444 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 445 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 446 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyFan::
# 447 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth, MSGBOX_DEFAULT
# 448 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 449 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 450 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 451 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ExpertFOnlyNonFan::
# 452 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength, MSGBOX_DEFAULT
# 453 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 454 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 455 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 456 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interviewer::
# 457 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 458 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 459 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_set FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed
# 460 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_FAN_CLUB_STRENGTH_SHARED, LilycoveCity_PokemonTrainerFanClub_EventScript_Interview
# 461 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 462 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 463 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ The interviewer doesnt count as an individual fan club member
# 464 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Instead they always ask about whoever the Lass would be interested in, if not the player
# 465 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_Interview::
# 466 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8005, TVSHOW_FAN_CLUB_SPECIAL
# 467 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special InterviewBefore
# 468 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2
# 469 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8006
# 470 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 471 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 472 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer, MSGBOX_DEFAULT
# 473 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 474 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 475 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 476 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 477 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 478 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 479 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 480 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 481 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 482 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion::
# 483 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThatsWhatYouThink, MSGBOX_DEFAULT
# 484 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 485 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 486 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 487 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion::
# 488 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 489 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 490 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer, MSGBOX_YESNO
# 491 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 492 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion
# 493 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 494 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 495 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AskForOpinion::
# 496 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 497 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 498 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_WhatsYourOpinionOfTrainer2, MSGBOX_DEFAULT
# 499 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_FAN_QUESTION
# 500 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 501 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	call Common_ShowEasyChatScreen
# 502 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 503 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 504 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, LilycoveCity_PokemonTrainerFanClub_EventScript_SubmitOpinion
# 505 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 0, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelGiveOpinion
# 506 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 507 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 508 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer::
# 509 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 510 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 511 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	message LilycoveCity_PokemonTrainerFanClub_Text_HowStrongRateTrainer
# 512 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	waitmessage
# 513 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_POKEMON_FAN_CLUB_RATER
# 514 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special ShowScrollableMultichoice
# 515 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 516 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	switch VAR_RESULT
# 517 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case 11, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 518 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer
# 519 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 520 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 521 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8006, VAR_0x800A
# 522 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 523 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special PutFanClubSpecialOnTheAir
# 524 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview
# 525 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 526 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 527 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CancelRateTrainer::
# 528 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 529 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 530 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_HaveYouForgottenTrainer2, MSGBOX_YESNO
# 531 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer
# 532 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_PokemonTrainerFanClub_EventScript_RateTrainer
# 533 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 534 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 535 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_ForgetTrainer::
# 536 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 537 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 538 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_YouShouldMeetTrainer, MSGBOX_DEFAULT
# 539 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 540 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 541 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 542 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_CompleteInterview::
# 543 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 544 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 545 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_Text_ThankYouIllShareThisInfo, MSGBOX_DEFAULT
# 546 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_FAN_CLUB_STRENGTH_SHARED
# 547 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 548 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 549 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 550 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed::
# 551 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 552 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	special BufferFanClubTrainerName
# 553 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	msgbox LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial, MSGBOX_DEFAULT
# 554 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	release
# 555 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 556 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 557 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
@ Shouldnt be reached
# 558 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_EventScript_AlreadyInterviewed2::
# 559 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	end
# 560 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 561 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer:
# 562 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, wow!\n"
# 563 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Das ist {PLAYER}!$"
# 564 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 565 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan:
# 566 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich habe die Neuigkeit schon gehört.\n"
# 567 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bist wirklich stark, nicht wahr?\p"
# 568 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wir diskutieren immer darüber, wer hier\n"
# 569 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "der stärkste Trainer ist.\p"
# 570 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Als ich von dir gehört habe, beschloss\n"
# 571 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ich, dein Fan zu werden!\p"
# 572 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich hoffe, du wirst auch weiterhin\n"
# 573 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "gegen starke Trainer antreten.\p"
# 574 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "So kommen wir auch weiterhin in den\n"
# 575 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Genuss deiner megaheißen Kämpfe.\p"
# 576 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Dann sehen auch die anderen hier, wie\n"
# 577 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "stark du wirklich bist!\p"
# 578 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Denk dran: Ich jubele dir zu,\n"
# 579 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!$"
# 580 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 581 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin:
# 582 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Yo, {PLAYER}!\n"
# 583 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Dich wollen wir als Sieger sehen!$"
# 584 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 585 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest:
# 586 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Die anderen wissen gar nicht, dass du\n"
# 587 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "besser bist als alle anderen!\p"
# 588 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Das stimmt doch, oder {PLAYER}?\n"
# 589 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Zeig ihnen, was du drauf hast!$"
# 590 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 591 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary:
# 592 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich sage es ja nicht gerne, aber der\n"
# 593 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Trainer, über den alle sprechen, ist\l"
# 594 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}, keine Frage!\p"
# 595 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Die Stärke dieses Trainers…\n"
# 596 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ganz außergewöhnlich.$"
# 597 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 598 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen:
# 599 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Mist… Ich sage jedem, dass {STR_VAR_1}\n"
# 600 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "am besten von allen ist.\p"
# 601 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber niemand hört mir zu…$"
# 602 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 603 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer:
# 604 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich habe etwas über einen neuen,\n"
# 605 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "starken Trainer gehört.\p"
# 606 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Dieser Trainer wird bestimmt auch die\n"
# 607 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Arenaleiter besiegen.\p"
# 608 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Weißt du irgendwas über diesen neuen\n"
# 609 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Trainer?$"
# 610 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 611 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou:
# 612 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh!\n"
# 613 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\p"
# 614 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Los!\n"
# 615 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich drücke dir die Daumen!$"
# 616 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 617 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan:
# 618 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Seufz…\n"
# 619 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Kamillo…\p"
# 620 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, nein! Warte mal!\n"
# 621 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Das stimmt gar nicht! Nein, nein!\p"
# 622 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich bin dein größter Fan!\p"
# 623 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Also mach mich stolz!\n"
# 624 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Los!$"
# 625 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 626 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly:
# 627 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich kann mir nicht helfen, aber ich\n"
# 628 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "finde nur Kamillo klasse…$"
# 629 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 630 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly:
# 631 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Niemand erkennt den Charme von\n"
# 632 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Kamillo…\p"
# 633 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Mir doch egal!\p"
# 634 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Auch wenn keiner ihm zujubelt, ICH\n"
# 635 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "unterstütze Kamillo!$"
# 636 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 637 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly:
# 638 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Egal, was die anderen sagen, der ARENA-\n"
# 639 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Leiter von Faustauhaven, Kamillo,\l"
# 640 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ist mein Favorit!$"
# 641 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 642 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather:
# 643 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du hast deinen Vater in jeder Hinsicht\n"
# 644 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "übertroffen!\p"
# 645 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Das sag ich dir. Und da gibt es\n"
# 646 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "überhaupt keinen Zweifel dran!$"
# 647 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 648 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling:
# 649 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Selbst in scheinbar aussichtslosen\n"
# 650 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Situationen gibt dein Vater nicht auf.\p"
# 651 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich weiß, dass das stimmt!\p"
# 652 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Und du verhältst dich genauso.\n"
# 653 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Also, kämpfe fleißig weiter.$"
# 654 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 655 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman:
# 656 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Norman hat im Kampf mehr Kraft, \n"
# 657 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Charisma und Darbietungstalent\l"
# 658 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "gezeigt als du.\p"
# 659 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Auch wenn die Leute sagen, dass du\n"
# 660 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "stark bist…\p"
# 661 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du hast noch einen weiten Weg vor dir,\n"
# 662 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "wenn du so werden willst wie dein Vater.$"
# 663 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 664 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent:
# 665 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bekommst langsam auch die Aura von\n"
# 666 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Autorität, die Norman umgibt.\p"
# 667 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber es gibt einen gewaltigen\n"
# 668 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Unterschied zwischen dir und Norman.\p"
# 669 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber ich kann dir nicht sagen, was das\n"
# 670 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ist. Du musst es selbst herausfinden.$"
# 671 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 672 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers:
# 673 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Jeder hier ist ein großer Fan von\n"
# 674 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Pokémon-Kämpfen.\p"
# 675 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wir diskutieren gerade, welcher\n"
# 676 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Trainer der stärkste ist.\p"
# 677 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wenn du berühmt wirst, werden wir\n"
# 678 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "vielleicht deine Fans!$"
# 679 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 680 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer:
# 681 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Kreisch! Das ist {PLAYER}!\n"
# 682 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wirklich und wahrhaftig!!!\p"
# 683 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Bitte, schüttle mir die Hand! Biiitte!!!$"
# 684 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 685 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou:
# 686 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich juble dir ständig zu, {PLAYER}!\n"
# 687 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Immer! Iiimmer!\p"
# 688 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich möchte dich niemals als Verlierer\n"
# 689 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "sehen, {PLAYER}.\p"
# 690 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich weiß, dass du sehr, sehr, sehr stark\n"
# 691 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "bist, {PLAYER}!$"
# 692 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 693 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool:
# 694 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} ist wirklich megacool…\p"
# 695 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Jeder denkt das, stimmt’s? Stimmt’s?!$"
# 696 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 697 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe:
# 698 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} ist cooool, meinst du nicht\n"
# 699 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "auch?\p"
# 700 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Selbst ein Würstchen wie ich jubelt\n"
# 701 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "seinem favorisierten Trainer zu.$"
# 702 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 703 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat:
# 704 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Mein Lieblings-Trainer muss…\p"
# 705 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "cool…\p"
# 706 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "stark…\p"
# 707 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "und total nett sein…\p"
# 708 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich wollte, es gäbe so einen Trainer…$"
# 709 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 710 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou:
# 711 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Hui! Das ist {PLAYER}!\n"
# 712 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wahnsinn!\p"
# 713 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wenn ich groß bin, möchte ich auch so\n"
# 714 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "stark sein wie du, {PLAYER}!$"
# 715 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 716 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou:
# 717 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Auch wenn ich dein einziger Fan bin…\p"
# 718 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich werde dir immer zujubeln, du bist\n"
# 719 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "mein Favorit, {PLAYER}!\p"
# 720 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Denn ich glaube an dich, {PLAYER}!$"
# 721 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 722 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool:
# 723 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} ist so unverschämt cool…\n"
# 724 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich möchte meinem Held die Hand\l"
# 725 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "schütteln.$"
# 726 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 727 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan:
# 728 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Auch wenn ich der einzige Fan bin…\p"
# 729 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich werde niemals aufhören,\n"
# 730 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ein Fan von {STR_VAR_1} zu sein!\p"
# 731 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Denn ich habe gehört, dass {STR_VAR_1}\n"
# 732 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "niemals verliert!$"
# 733 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 734 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll:
# 735 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{PLAYER}!\n"
# 736 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bist wirklich unglaublich!\p"
# 737 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Schon als ich dich das erste Mal\n"
# 738 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "gesehen habe, habe ich deine\l"
# 739 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Einzigartigkeit bemerkt.\p"
# 740 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Scheinbar täuschen mich meine Augen\n"
# 741 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "nie.$"
# 742 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 743 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner:
# 744 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wen kümmern schon die anderen?\n"
# 745 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich bin auf deiner Seite!\p"
# 746 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Keine Sorge. Geh da raus und kämpfe\n"
# 747 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "wie immer.$"
# 748 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 749 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne:
# 750 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bist ein anständiger Trainer.\n"
# 751 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Das ist meine Meinung.\p"
# 752 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber ich denke, {STR_VAR_1} ist im\n"
# 753 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Moment die Nummer eins.\p"
# 754 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Das ist jedenfalls meine Auffassung.\n"
# 755 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber lass dir darüber keine grauen\l"
# 756 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Haare wachsen.$"
# 757 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 758 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer:
# 759 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wow, du bist wirklich sehr stark.\n"
# 760 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Vielleicht sogar stärker als\l"
# 761 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 762 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber {STR_VAR_1} braucht mich.\p"
# 763 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wenn ich {STR_VAR_1} nicht zujuble, wer\n"
# 764 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "wird es dann tun?$"
# 765 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 766 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind:
# 767 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du hast mich überzeugt.\n"
# 768 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bist stark, nicht wahr?\p"
# 769 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Würdest du mir bitte erzählen, wie\n"
# 770 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "du so stark geworden bist?$"
# 771 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 772 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation:
# 773 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Je schwieriger die Lage, desto\n"
# 774 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "ästhetischer wird dein Kampf.\p"
# 775 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich kann deinen nächsten Kampf gar\n"
# 776 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "nicht erwarten!$"
# 777 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 778 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout:
# 779 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Unter den wirklich heißen Trainern\n"
# 780 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "hebt sich {STR_VAR_1} besonders hervor.\p"
# 781 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Diese Stärke. Das ist nicht normal.\p"
# 782 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du kämpfst auch sehr gut, aber du\n"
# 783 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "gehörst nicht in die gleiche Klasse\l"
# 784 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "wie {STR_VAR_1}.$"
# 785 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 786 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger:
# 787 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bist sehr populär…\p"
# 788 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du bist stark und du sorgst gut für\n"
# 789 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "deine Pokémon.\p"
# 790 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber, weißt du, ich glaube an\n"
# 791 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 792 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "{STR_VAR_1} ist definitiv stärker!\n"
# 793 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich bin mir da sicher!$"
# 794 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 795 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive:
# 796 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du…\p"
# 797 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Beeindruckend!$"
# 798 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 799 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth:
# 800 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Dein wahrer Wert… Es ist gut, wenn\n"
# 801 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "nur ich ihn erkenne.\p"
# 802 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich glaube nicht, dass die anderen die\n"
# 803 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "versteckten Kräfte verstehen würden.$"
# 804 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 805 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential:
# 806 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ja, deine Augen spiegeln deine Stärke\n"
# 807 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "wider.\p"
# 808 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber!\p"
# 809 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Du hast dein eigenes Potenzial noch\n"
# 810 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "nicht erkannt.$"
# 811 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"

# 812 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength:
# 813 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Es stimmt, du agierst wirklich sehr\n"
# 814 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "kraftvoll.\p"
# 815 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Aber!\n"
# 816 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Ich sage dir was!\p"
# 817 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Diese Kraft kann noch nicht als wahre\n"
# 818 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Stärke betrachtet werden!\p"
# 819 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Wahre Stärke ist…\n"
# 820 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "… …\p"
# 821 "data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.pory"
	.string "Äh, eigentlich weiß ich das auch nicht…$"
