# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"

# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"

# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 6
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"

# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"

# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"

# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"

# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"

# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"

# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"

# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"

# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"

# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"

# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"

# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"

# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"

# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"

# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"

# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"

# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"

# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"

# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"

# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"

# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"

# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"

# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"

# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"

# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"

# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x8004, 0
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"

# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"

# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"

# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"

# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"

# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"

# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"

# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"

# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartlistend
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"

# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Dies ist der Trainerberg. Hier triffst\n"
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "du Trainer, mit denen du viele Kämpfe\l"
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "genießen kannst.\p"
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Leider ist hier noch alles im Aufbau\n"
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "begriffen. Komm doch später wieder.$"
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"

# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Willkommen!\p"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Dies ist der Trainerberg. Hier triffst\n"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "du Trainer, mit denen du viele Kämpfe\l"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "genießen kannst.$"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"

# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Bist du zum ersten Mal hier?\p"
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Bevor du dich ins Getümmel stürzt,\n"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "speicher bitte dein Spiel!$"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"

# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Mal sehen…\n"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Es befinden sich Trainer hier…\p"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "bis Etage {STR_VAR_1}.$"
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"

# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Mal sehen…\n"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Die Trainer befinden sich…\p"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In jedem Raum scheint sich nun ein\n"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainer zu befinden.$"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"

# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Möchtest du die wartenden Trainer\n"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "herausfordern?$"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"

# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "O.K.! Ich stelle die Uhr! Gib\n"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "dein Bestes!\p"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Auf die Plätze…\p"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Fertig…\p"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Los!$"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"

# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Bitte besuche uns wieder!$"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"

# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Das war ziemlich gut!\p"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich glaube, du hast dich beim Kampf\n"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "richtig angestrengt.\p"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Bitte komme wieder und probiere es\n"
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "erneut!$"
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"

# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich hoffe, du gibst dein Bestes!$"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"

# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Tauschen die Trainer ihre Plätze, kann\n"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "es hektisch werden.\p"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Um eine Panik zu vermeiden, haben wir\n"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "die Rezeption hierher verlegt.\p"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wir bitten um dein Verständnis!$"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"

# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Vielen Dank für die Teilnahme!$"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"

# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hier im Trainerberg bieten wir dir an,\n"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Gegen die Uhr anzutreten.\p"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wie lange brauchst du von hier bis zum\n"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Besitzer, der sich oben auf dem Dach\l"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "befindet?\p"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Die Namen der Trainer, die es am\n"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "schnellsten schaffen, werden\l"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "öffentlich ausgehängt.\p"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Fordere deine Freunde heraus!\p"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Für die Kämpfe, die du auf dem\n"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Weg zum Dach bestreitest, bekommst du\l"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "keine E-Punkte und auch kein Geld.$"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"

# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, tut mir leid, aber\n"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "du hast nur ein Pokémon dabei.\p"
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Du brauchst mindestens zwei Pokémon\n"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "um hier anzutreten.$"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"

# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hmm…\p"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Da bist du ja endlich!\n"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hast es also geschafft!\p"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Warte! Sag nichts!\n"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich weiß, warum du gekommen bist!\p"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Du wolltest mich, den Besitzer des\n"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainerbergs, kennen lernen, weil…\p"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Du willst mit mir in einem Team\n"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "kämpfen! Jahuu!\p"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wie?\n"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Das ist nicht der Grund?\p"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Na, egal. Ich habe dich auf dem Weg\n"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hierher beobachtet. Du bist sehr gut!$"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"

# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ein fantastischer Trainer wie du\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "verdient ein fantastisches Geschenk!$"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"

# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, du hast keinen Platz mehr! Na, dann\n"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "komm doch einfach später mal vorbei.$"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"

# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hey, warte mal! Bist du wirklich so\n"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "fantastisch schnell hierher gekommen?\p"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ausgezeichnet! Dabei hättest du dich\n"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "doch nicht so beeilen müssen, nur um\p"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "mich zu treffen! Trotzdem! Ich habe\n"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "deinen Namen bereits verewigt.$"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"

# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Aber… Du hast dir ja\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "mächtig viel Zeit gelassen…$"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"

# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Mir würde es gefallen, wenn du das\n"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "nächste Mal mehr Tempo machst!\p"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Dann bin ich auch bereit, dein\n"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Teampartner zu werden!\p"
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Bis dann, mein Freund!$"
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"

# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich habe den Trainerberg\n"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "nur aus einem Grund erbaut!\p"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Um den perfekten Partner\n"
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "zu finden!$"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"

# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} Min. {STR_VAR_2},{STR_VAR_3} Sek.$"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"

# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wer weiß schon, welche Trainer und\n"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Pokémon auf uns warten?\p"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich weiß nur eines: Ich werde alle, die\n"
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "mir im Weg stehen, besiegen!$"
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"

# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich habe gehört, Trainer kommen\n"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "von überall her zum Trainerberg.\p"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich kann es nicht erwarten, ihnen\n"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Auge in Auge gegenüber zu stehen.\p"
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich werde jeden besiegen, der sich mir\n"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in den Weg stellt.$"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"

# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hast du die Liste mit den Zeiten da\n"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "drüben gesehen?\p"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Meine Freunde und ich wollen heraus-\n"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "finden, wer von uns der Schnellste ist.$"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"

# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Du weißt nicht zufällig, wann die hier\n"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "eröffnen?\p"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Ich warte hier, da ich die allererste\n"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Herausforderin sein will!$"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"

# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Möchtest du zur\n"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Rezeption zurückkehren?$"
