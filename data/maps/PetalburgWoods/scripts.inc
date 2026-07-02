PetalburgWoods_EventScript_PkmnSign::
# 2 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_PkmnSign_Text_0, MSGBOX_SIGN
# 4 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_POOCHYENA, 10, 3
# 5 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 0
# 6 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 7 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 8 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_WURMPLE, 10, 3
# 9 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_WURMPLE, 0
# 10 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 11 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 12 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_SHROOMISH, 10, 3
# 13 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_SHROOMISH, 0
# 14 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 15 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 16 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_SILCOON, 10, 3
# 17 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_SILCOON, 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 19 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 20 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_CASCOON, 10, 3
# 21 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_CASCOON, 0
# 22 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 23 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 24 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_TAILLOW, 10, 3
# 25 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_TAILLOW, 0
# 26 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 27 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 28 "data/maps/PetalburgWoods/scripts.pory"
	showmonpic SPECIES_SLAKOTH, 10, 3
# 29 "data/maps/PetalburgWoods/scripts.pory"
	playmoncry SPECIES_SLAKOTH, 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	delay 60
# 31 "data/maps/PetalburgWoods/scripts.pory"
	hidemonpic
# 32 "data/maps/PetalburgWoods/scripts.pory"
	release
	end


# 36 "data/maps/PetalburgWoods/scripts.pory"

# 37 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 38 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 39 "data/maps/PetalburgWoods/scripts.pory"

# 40 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 41 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 42 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 43 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 44 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 45 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 47 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 52 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 53 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 62 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 63 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 69 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 73 "data/maps/PetalburgWoods/scripts.pory"
	end
# 74 "data/maps/PetalburgWoods/scripts.pory"

# 75 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 76 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 77 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 78 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 79 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 84 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 85 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 86 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 90 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 95 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 96 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 98 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 100 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 102 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 103 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 105 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 106 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 107 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 109 "data/maps/PetalburgWoods/scripts.pory"
	end
# 110 "data/maps/PetalburgWoods/scripts.pory"

# 111 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 112 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 113 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 116 "data/maps/PetalburgWoods/scripts.pory"
	return
# 117 "data/maps/PetalburgWoods/scripts.pory"

# 118 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 119 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 120 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 121 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 122 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 123 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 124 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 125 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 126 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 127 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 128 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 129 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 130 "data/maps/PetalburgWoods/scripts.pory"
	end
# 131 "data/maps/PetalburgWoods/scripts.pory"

# 132 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 133 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 134 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 135 "data/maps/PetalburgWoods/scripts.pory"
	end
# 136 "data/maps/PetalburgWoods/scripts.pory"

# 137 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 138 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 139 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 140 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 141 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 142 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 143 "data/maps/PetalburgWoods/scripts.pory"
	return
# 144 "data/maps/PetalburgWoods/scripts.pory"

# 145 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 146 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 147 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 148 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 149 "data/maps/PetalburgWoods/scripts.pory"
	end
# 150 "data/maps/PetalburgWoods/scripts.pory"

# 151 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 152 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 153 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 154 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 155 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 156 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 157 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 158 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 159 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 160 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 161 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 162 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 163 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 164 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 165 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 166 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 168 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 169 "data/maps/PetalburgWoods/scripts.pory"

# 170 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 179 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 180 "data/maps/PetalburgWoods/scripts.pory"

# 181 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 182 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 183 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 186 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 187 "data/maps/PetalburgWoods/scripts.pory"

# 188 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 189 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 190 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 195 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 196 "data/maps/PetalburgWoods/scripts.pory"

# 197 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 199 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 200 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 206 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 207 "data/maps/PetalburgWoods/scripts.pory"

# 208 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 209 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 210 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 211 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 213 "data/maps/PetalburgWoods/scripts.pory"

# 214 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 221 "data/maps/PetalburgWoods/scripts.pory"

# 222 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 227 "data/maps/PetalburgWoods/scripts.pory"

# 228 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 230 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 231 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 232 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 233 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 235 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 236 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 237 "data/maps/PetalburgWoods/scripts.pory"

# 238 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 241 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 242 "data/maps/PetalburgWoods/scripts.pory"

# 243 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 244 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 245 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 247 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 248 "data/maps/PetalburgWoods/scripts.pory"

# 249 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 250 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 251 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 252 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 253 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 254 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 255 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 256 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 257 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 258 "data/maps/PetalburgWoods/scripts.pory"

# 259 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 261 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 262 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 263 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 264 "data/maps/PetalburgWoods/scripts.pory"

# 265 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 266 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 267 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 268 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 269 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 270 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 271 "data/maps/PetalburgWoods/scripts.pory"

# 272 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 273 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 274 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 275 "data/maps/PetalburgWoods/scripts.pory"

# 276 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 277 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 278 "data/maps/PetalburgWoods/scripts.pory"
	end
# 279 "data/maps/PetalburgWoods/scripts.pory"

# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 281 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 282 "data/maps/PetalburgWoods/scripts.pory"
	end
# 283 "data/maps/PetalburgWoods/scripts.pory"

# 284 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 285 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 286 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 287 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 288 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 289 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 290 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 291 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 292 "data/maps/PetalburgWoods/scripts.pory"
	release
# 293 "data/maps/PetalburgWoods/scripts.pory"
	end
# 294 "data/maps/PetalburgWoods/scripts.pory"

# 295 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 296 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 297 "data/maps/PetalburgWoods/scripts.pory"
	release
# 298 "data/maps/PetalburgWoods/scripts.pory"
	end
# 299 "data/maps/PetalburgWoods/scripts.pory"

# 300 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 301 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 302 "data/maps/PetalburgWoods/scripts.pory"
	end
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 306 "data/maps/PetalburgWoods/scripts.pory"
	end
# 307 "data/maps/PetalburgWoods/scripts.pory"

# 308 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 309 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 310 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 311 "data/maps/PetalburgWoods/scripts.pory"
	end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 315 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 316 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 317 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 318 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 319 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 320 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 321 "data/maps/PetalburgWoods/scripts.pory"
	release
# 322 "data/maps/PetalburgWoods/scripts.pory"
	end
# 323 "data/maps/PetalburgWoods/scripts.pory"

# 324 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 325 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 326 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 327 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 328 "data/maps/PetalburgWoods/scripts.pory"
	release
# 329 "data/maps/PetalburgWoods/scripts.pory"
	end
# 330 "data/maps/PetalburgWoods/scripts.pory"

# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 332 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 333 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 334 "data/maps/PetalburgWoods/scripts.pory"
	release
# 335 "data/maps/PetalburgWoods/scripts.pory"
	end
# 336 "data/maps/PetalburgWoods/scripts.pory"

# 337 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 338 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 339 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 340 "data/maps/PetalburgWoods/scripts.pory"
	release
# 341 "data/maps/PetalburgWoods/scripts.pory"
	end
# 342 "data/maps/PetalburgWoods/scripts.pory"

# 343 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 344 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 345 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 346 "data/maps/PetalburgWoods/scripts.pory"
	release
# 347 "data/maps/PetalburgWoods/scripts.pory"
	end
# 348 "data/maps/PetalburgWoods/scripts.pory"

# 349 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 350 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 351 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 352 "data/maps/PetalburgWoods/scripts.pory"
	end
# 353 "data/maps/PetalburgWoods/scripts.pory"

# 354 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Kein Einziges zu finden.$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hallo, du hast nicht zufällig einige\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon namens Knilz hier\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "gesehen? Ich liebe diese Pokémon.$"
# 362 "data/maps/PetalburgWoods/scripts.pory"

# 363 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich wollte dich eigentlich aus dem\n"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hinterhalt angreifen, aber du trödelst\l"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "wohl auf ewig im Blütenburgwald\l"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "herum, oder?\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "Das Warten machte mich ganz krank.\n"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "Also, hier bin ich.$"
# 370 "data/maps/PetalburgWoods/scripts.pory"

# 371 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "He, du! Devon-Forscher!\p"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "Gib sofort die Papiere her!$"
# 374 "data/maps/PetalburgWoods/scripts.pory"

# 375 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du bist ein Pokémon-Trainer, oder?\n"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du musst mir bitte helfen!$"
# 379 "data/maps/PetalburgWoods/scripts.pory"

# 380 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "Huch. Was machst du da eigentlich?\n"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "Was?! Du schützt ihn?\p"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "Niemand, der sich Team Aqua in den Weg\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "stellt, kann auf Gnade hoffen. Niemand!\p"
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los, kämpfe gegen mich!$"
# 386 "data/maps/PetalburgWoods/scripts.pory"

# 387 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du hast mich geleimt! Du bist stark!$"
# 389 "data/maps/PetalburgWoods/scripts.pory"

# 390 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… Du hast vielleicht Nerven, dich\n"
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "mit Team Aqua anzulegen!\l"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los, kämpfen wir noch einmal!\p"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hm, das würde ich jetzt zu gerne sagen,\n"
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "aber ich habe keine Pokémon mehr…\p"
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "Außerdem sind wir, Team Aqua, auf dem\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Weg nach Metarost City.\p"
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "Für heute lasse ich dich gehen.$"
# 399 "data/maps/PetalburgWoods/scripts.pory"

# 400 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "Huuuh…\n"
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "Das war aber mehr als knapp!\p"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "Dank dir konnte er mir diese\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "wichtigen Papiere nicht rauben.\p"
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich weiß! Ich gebe dir diesen\n"
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "Superball als Dankeschön!$"
# 407 "data/maps/PetalburgWoods/scripts.pory"

# 408 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 409 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hat dieser Schuft von Team Aqua nicht\n"
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "gesagt, dass sie irgendetwas in\l"
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "Metarost City erledigen wollen?$"
# 412 "data/maps/PetalburgWoods/scripts.pory"

# 413 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh oh! Das ist ein Notfall!\n"
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich darf keine Zeit verlieren!$"
# 416 "data/maps/PetalburgWoods/scripts.pory"

# 417 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du bist mit Bällen vollgeladen.\n"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich kann dir den Superball nicht geben.$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich habe eine Menge Pokémon gefangen!\p"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "Los, los, los!\n"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "Mein Käfer-Pokémon-Team!$"
# 425 "data/maps/PetalburgWoods/scripts.pory"

# 426 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich habe all diese Pokémon, aber ich\n"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "konnte doch nicht gewinnen…$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich habe eine Menge Pokémon gefangen.\n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "Nun habe ich keine Pokébälle mehr.$"
# 433 "data/maps/PetalburgWoods/scripts.pory"

# 434 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn du ein Käfer-Pokémon mit zur\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "Schule bringst, bist du sofort beliebt.$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn ich verliere, bin ich\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "trotzdem beliebt.$"
# 441 "data/maps/PetalburgWoods/scripts.pory"

# 442 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hast du ein großes Käfer-Pokémon,\n"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "werden die Leute dich respektieren.$"
# 445 "data/maps/PetalburgWoods/scripts.pory"

# 446 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich möchte wieder kämpfen, wenn meine\n"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "Käfer-Pokémon stärker geworden sind.\p"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich trage dich in meinen Pokénav ein.$"
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich möchte wieder kämpfen, wenn meine\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "Käfer-Pokémon stärker geworden sind.\p"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich trage dich in meinen Pokénav ein.$"
# 455 "data/maps/PetalburgWoods/scripts.pory"

# 456 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "Meine Käfer-Pokémon sind gewachsen.\n"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich werde wieder beliebt sein.$"
# 459 "data/maps/PetalburgWoods/scripts.pory"

# 460 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Ich bin beliebt, auch wenn ich\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "immer verliere.$"
# 463 "data/maps/PetalburgWoods/scripts.pory"

# 464 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du wirst beliebt, wenn du starke\n"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon besitzt, oder?\l"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "Daher trainiere ich bis zum Umfallen.$"
# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hey, du!\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "Geht es deinen Pokémon gut?\p"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn deine Pokémon schwach sind und\n"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "du Kämpfe vermeiden willst, solltest du\l"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "dich von hohem Gras fernhalten.$"
# 475 "data/maps/PetalburgWoods/scripts.pory"

# 476 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "Manchmal liegen auf dem Boden Dinge,\n"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "die einem auf Anhieb gar nicht\l"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "auffallen.\p"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "Daher schaue ich mich bei jedem Schritt\n"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "sorgfältig um.$"
# 482 "data/maps/PetalburgWoods/scripts.pory"

# 483 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 484 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, hübsch! Das ist der Orden\n"
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "der Arena in Metarost City!\p"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "Du siehst wie ein Trainer aus. Dann\n"
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "musst du dieses Item ausprobieren.$"
# 488 "data/maps/PetalburgWoods/scripts.pory"

# 489 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 490 "data/maps/PetalburgWoods/scripts.pory"
	.string "Das ist Wundersaat.\n"
# 491 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn ein Pokémon sie trägt, werden\l"
# 492 "data/maps/PetalburgWoods/scripts.pory"
	.string "die Pflanzen-Attacken stärker.\p"
# 493 "data/maps/PetalburgWoods/scripts.pory"
	.string "Neben der Wundersaat gibt es bestimmt\n"
# 494 "data/maps/PetalburgWoods/scripts.pory"
	.string "noch andere nützliche Items, die von\l"
# 495 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon getragen werden können.$"
# 496 "data/maps/PetalburgWoods/scripts.pory"

# 497 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 498 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tipps für Trainer\p"
# 499 "data/maps/PetalburgWoods/scripts.pory"
	.string "Jedes Pokémon, das am Kampf teilnimmt,\n"
# 500 "data/maps/PetalburgWoods/scripts.pory"
	.string "erhält Erfahrungspunkte, auch wenn es\l"
# 501 "data/maps/PetalburgWoods/scripts.pory"
	.string "nur ganz kurz dabei ist.\p"
# 502 "data/maps/PetalburgWoods/scripts.pory"
	.string "Setze eines deiner schwachen Pokémon\n"
# 503 "data/maps/PetalburgWoods/scripts.pory"
	.string "daher an die Spitze der Liste.\p"
# 504 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sobald der Kampf beginnt, wechselst du\n"
# 505 "data/maps/PetalburgWoods/scripts.pory"
	.string "es aus. Es wird EP bekommen und\l"
# 506 "data/maps/PetalburgWoods/scripts.pory"
	.string "bleibt trotzdem immer unbeschadet.$"
# 507 "data/maps/PetalburgWoods/scripts.pory"

# 508 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 509 "data/maps/PetalburgWoods/scripts.pory"
	.string "Tipps für Trainer\p"
# 510 "data/maps/PetalburgWoods/scripts.pory"
	.string "Neben den Kraftpunkten (KP) besitzt\n"
# 511 "data/maps/PetalburgWoods/scripts.pory"
	.string "ein Pokémon auch Angriffspunkte (AP),\l"
# 512 "data/maps/PetalburgWoods/scripts.pory"
	.string "die für die Attacken im Kampf gebraucht\l"
# 513 "data/maps/PetalburgWoods/scripts.pory"
	.string "werden.\p"
# 514 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wenn ein Pokémon keine AP mehr besitzt,\n"
# 515 "data/maps/PetalburgWoods/scripts.pory"
	.string "muss es in ein Pokémon-Center gebracht\l"
# 516 "data/maps/PetalburgWoods/scripts.pory"
	.string "werden.$"

PetalburgWoods_EventScript_PkmnSign_Text_0:
# 2 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die in diesem Wald leben.$"
