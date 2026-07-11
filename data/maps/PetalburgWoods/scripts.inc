# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 3 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 7 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 8 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 9 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 10 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 11 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 12 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 13 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 14 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 15 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 16 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 17 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 18 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 20 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 21 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 22 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 23 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 28 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 38 "data/maps/PetalburgWoods/scripts.pory"
	end
# 39 "data/maps/PetalburgWoods/scripts.pory"

# 40 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 41 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 42 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 49 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 67 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 68 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 71 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 72 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 74 "data/maps/PetalburgWoods/scripts.pory"
	end
# 75 "data/maps/PetalburgWoods/scripts.pory"

# 76 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 77 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 78 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 79 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 81 "data/maps/PetalburgWoods/scripts.pory"
	return
# 82 "data/maps/PetalburgWoods/scripts.pory"

# 83 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 84 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 87 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 89 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 93 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 94 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 95 "data/maps/PetalburgWoods/scripts.pory"
	end
# 96 "data/maps/PetalburgWoods/scripts.pory"

# 97 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 98 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 100 "data/maps/PetalburgWoods/scripts.pory"
	end
# 101 "data/maps/PetalburgWoods/scripts.pory"

# 102 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 105 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 106 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 108 "data/maps/PetalburgWoods/scripts.pory"
	return
# 109 "data/maps/PetalburgWoods/scripts.pory"

# 110 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 111 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 112 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 113 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 114 "data/maps/PetalburgWoods/scripts.pory"
	end
# 115 "data/maps/PetalburgWoods/scripts.pory"

# 116 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 117 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 118 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 119 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 120 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 122 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 123 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 125 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 126 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 131 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 133 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 134 "data/maps/PetalburgWoods/scripts.pory"

# 135 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 136 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 137 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 145 "data/maps/PetalburgWoods/scripts.pory"

# 146 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 147 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 148 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 151 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 152 "data/maps/PetalburgWoods/scripts.pory"

# 153 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 154 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 155 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 160 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 161 "data/maps/PetalburgWoods/scripts.pory"

# 162 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 172 "data/maps/PetalburgWoods/scripts.pory"

# 173 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 175 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 178 "data/maps/PetalburgWoods/scripts.pory"

# 179 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 186 "data/maps/PetalburgWoods/scripts.pory"

# 187 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 192 "data/maps/PetalburgWoods/scripts.pory"

# 193 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 195 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 200 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 201 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 202 "data/maps/PetalburgWoods/scripts.pory"

# 203 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 206 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 207 "data/maps/PetalburgWoods/scripts.pory"

# 208 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 211 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 212 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 213 "data/maps/PetalburgWoods/scripts.pory"

# 214 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 223 "data/maps/PetalburgWoods/scripts.pory"

# 224 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 228 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 229 "data/maps/PetalburgWoods/scripts.pory"

# 230 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 235 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 236 "data/maps/PetalburgWoods/scripts.pory"

# 237 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 239 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 240 "data/maps/PetalburgWoods/scripts.pory"

# 241 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 242 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 243 "data/maps/PetalburgWoods/scripts.pory"
	end
# 244 "data/maps/PetalburgWoods/scripts.pory"

# 245 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 246 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 247 "data/maps/PetalburgWoods/scripts.pory"
	end
# 248 "data/maps/PetalburgWoods/scripts.pory"

# 249 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 250 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 251 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 252 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 253 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 254 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 255 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 256 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 257 "data/maps/PetalburgWoods/scripts.pory"
	release
# 258 "data/maps/PetalburgWoods/scripts.pory"
	end
# 259 "data/maps/PetalburgWoods/scripts.pory"

# 260 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 261 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 262 "data/maps/PetalburgWoods/scripts.pory"
	release
# 263 "data/maps/PetalburgWoods/scripts.pory"
	end
# 264 "data/maps/PetalburgWoods/scripts.pory"

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 266 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 267 "data/maps/PetalburgWoods/scripts.pory"
	end
# 268 "data/maps/PetalburgWoods/scripts.pory"

# 269 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 270 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 271 "data/maps/PetalburgWoods/scripts.pory"
	end
# 272 "data/maps/PetalburgWoods/scripts.pory"

# 273 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 274 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 275 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 276 "data/maps/PetalburgWoods/scripts.pory"
	end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 279 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 280 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 281 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 282 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 283 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 284 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 285 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 286 "data/maps/PetalburgWoods/scripts.pory"
	release
# 287 "data/maps/PetalburgWoods/scripts.pory"
	end
# 288 "data/maps/PetalburgWoods/scripts.pory"

# 289 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 290 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 291 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 293 "data/maps/PetalburgWoods/scripts.pory"
	release
# 294 "data/maps/PetalburgWoods/scripts.pory"
	end
# 295 "data/maps/PetalburgWoods/scripts.pory"

# 296 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 297 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 299 "data/maps/PetalburgWoods/scripts.pory"
	release
# 300 "data/maps/PetalburgWoods/scripts.pory"
	end
# 301 "data/maps/PetalburgWoods/scripts.pory"

# 302 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 303 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 304 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 305 "data/maps/PetalburgWoods/scripts.pory"
	release
# 306 "data/maps/PetalburgWoods/scripts.pory"
	end
# 307 "data/maps/PetalburgWoods/scripts.pory"

# 308 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 309 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 310 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 311 "data/maps/PetalburgWoods/scripts.pory"
	release
# 312 "data/maps/PetalburgWoods/scripts.pory"
	end
# 313 "data/maps/PetalburgWoods/scripts.pory"

# 314 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 315 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 316 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 320 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "Kein Einziges zu finden.$"
# 322 "data/maps/PetalburgWoods/scripts.pory"

# 323 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hallo, du hast nicht zufällig einige\n"
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon namens Knilz hier\p"
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "gesehen? Ich liebe diese Pokémon.$"
# 327 "data/maps/PetalburgWoods/scripts.pory"

# 328 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich wollte dich eigentlich aus dem\n"
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hinterhalt angreifen, aber du trödelst\l"
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "wohl auf ewig im Blütenburgwald\l"
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "herum, oder?\p"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "Das Warten machte mich ganz krank.\n"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "Also, hier bin ich.$"
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "He, du! Devon-Forscher!\p"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Gib sofort die Papiere her!$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du bist ein Pokémon-Trainer, oder?\n"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du musst mir bitte helfen!$"
# 344 "data/maps/PetalburgWoods/scripts.pory"

# 345 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "Huch. Was machst du da eigentlich?\n"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "Was?! Du schützt ihn?\p"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "Niemand, der sich Team Aqua in den Weg\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "stellt, kann auf Gnade hoffen. Niemand!\p"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los, kämpfe gegen mich!$"
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du hast mich geleimt! Du bist stark!$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… Du hast vielleicht Nerven, dich\n"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "mit Team Aqua anzulegen!\l"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los, kämpfen wir noch einmal!\p"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hm, das würde ich jetzt zu gerne sagen,\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "aber ich habe keine Pokémon mehr…\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Außerdem sind wir, Team Aqua, auf dem\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "Weg nach Metarost City.\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "Für heute lasse ich dich gehen.$"
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "Huuuh…\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "Das war aber mehr als knapp!\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "Dank dir konnte er mir diese\n"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "wichtigen Papiere nicht rauben.\p"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich weiß! Ich gebe dir diesen\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "Superball als Dankeschön!$"
# 372 "data/maps/PetalburgWoods/scripts.pory"

# 373 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hat dieser Schuft von Team Aqua nicht\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "gesagt, dass sie irgendetwas in\l"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "Metarost City erledigen wollen?$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh oh! Das ist ein Notfall!\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich darf keine Zeit verlieren!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du bist mit Bällen vollgeladen.\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich kann dir den Superball nicht geben.$"
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich habe eine Menge Pokémon gefangen!\p"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los, los, los!\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mein Käfer-Pokémon-Team!$"
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich habe all diese Pokémon, aber ich\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "konnte doch nicht gewinnen…$"
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich habe eine Menge Pokémon gefangen.\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Nun habe ich keine Pokébälle mehr.$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn du ein Käfer-Pokémon mit zur\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "Schule bringst, bist du sofort beliebt.$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn ich verliere, bin ich\n"
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "trotzdem beliebt.$"
# 406 "data/maps/PetalburgWoods/scripts.pory"

# 407 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hast du ein großes Käfer-Pokémon,\n"
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "werden die Leute dich respektieren.$"
# 410 "data/maps/PetalburgWoods/scripts.pory"

# 411 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich möchte wieder kämpfen, wenn meine\n"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "Käfer-Pokémon stärker geworden sind.\p"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich trage dich in meinen Pokénav ein.$"
# 415 "data/maps/PetalburgWoods/scripts.pory"

# 416 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich möchte wieder kämpfen, wenn meine\n"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "Käfer-Pokémon stärker geworden sind.\p"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich trage dich in meinen Pokénav ein.$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "Meine Käfer-Pokémon sind gewachsen.\n"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich werde wieder beliebt sein.$"
# 424 "data/maps/PetalburgWoods/scripts.pory"

# 425 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich bin beliebt, auch wenn ich\n"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "immer verliere.$"
# 428 "data/maps/PetalburgWoods/scripts.pory"

# 429 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du wirst beliebt, wenn du starke\n"
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon besitzt, oder?\l"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "Daher trainiere ich bis zum Umfallen.$"
# 433 "data/maps/PetalburgWoods/scripts.pory"

# 434 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hey, du!\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "Geht es deinen Pokémon gut?\p"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn deine Pokémon schwach sind und\n"
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "du Kämpfe vermeiden willst, solltest du\l"
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "dich von hohem Gras fernhalten.$"
# 440 "data/maps/PetalburgWoods/scripts.pory"

# 441 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "Manchmal liegen auf dem Boden Dinge,\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "die einem auf Anhieb gar nicht\l"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "auffallen.\p"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "Daher schaue ich mich bei jedem Schritt\n"
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "sorgfältig um.$"
# 447 "data/maps/PetalburgWoods/scripts.pory"

# 448 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, hübsch! Das ist der Orden\n"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "der Arena in Metarost City!\p"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du siehst wie ein Trainer aus. Dann\n"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "musst du dieses Item ausprobieren.$"
# 453 "data/maps/PetalburgWoods/scripts.pory"

# 454 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Das ist Wundersaat.\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn ein Pokémon sie trägt, werden\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "die Pflanzen-Attacken stärker.\p"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "Neben der Wundersaat gibt es bestimmt\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "noch andere nützliche Items, die von\l"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon getragen werden können.$"
# 461 "data/maps/PetalburgWoods/scripts.pory"

# 462 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tipps für Trainer\p"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "Jedes Pokémon, das am Kampf teilnimmt,\n"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "erhält Erfahrungspunkte, auch wenn es\l"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "nur ganz kurz dabei ist.\p"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "Setze eines deiner schwachen Pokémon\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "daher an die Spitze der Liste.\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sobald der Kampf beginnt, wechselst du\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "es aus. Es wird EP bekommen und\l"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "bleibt trotzdem immer unbeschadet.$"
# 472 "data/maps/PetalburgWoods/scripts.pory"

# 473 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tipps für Trainer\p"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "Neben den Kraftpunkten (KP) besitzt\n"
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "ein Pokémon auch Angriffspunkte (AP),\l"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "die für die Attacken im Kampf gebraucht\l"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "werden.\p"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn ein Pokémon keine AP mehr besitzt,\n"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "muss es in ein Pokémon-Center gebracht\l"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "werden.$"
