# 1 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 2 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ All the LOCALID constants used in this file are essentially redundant.
# 3 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ They're all used to have the NPC the player talked to turn back so they're facing
# 4 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ their original direction (because they're watching/participating in the contests).
# 5 "data/maps/LilycoveCity_ContestHall/scripts.pory"
@ They could all be substituted for VAR_LAST_TALKED.
# 6 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_MapScripts::
# 7 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.byte 0
# 8 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 9 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy1::
# 10 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 13 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Boy2::
# 14 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 17 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Girl::
# 18 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
# 19 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 20 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 21 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_Sailor::
# 22 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
# 23 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 25 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestMC::
# 26 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_MC, Common_Movement_FaceOriginalDirection
# 31 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 32 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestJudge::
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 37 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 38 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
# 39 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_JUDGE, Common_Movement_FaceOriginalDirection
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 42 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 43 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 44 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 45 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant1::
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 50 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 51 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 53 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 55 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant2::
# 56 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 61 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 62 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 65 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant3::
# 66 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 67 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 68 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 72 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 73 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 74 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 75 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestant4::
# 76 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 77 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 78 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 80 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 84 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 85 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
# 86 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
# 87 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 88 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 89 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
# 90 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 91 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 92 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 94 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 96 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 97 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 98 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 102 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
# 103 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 104 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 105 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 108 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 109 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
# 110 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
# 113 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 114 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_SMART_AUDIENCE_4, Common_Movement_FaceOriginalDirection
# 115 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 116 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestMC::
# 120 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 121 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 122 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 124 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_MC, Common_Movement_FaceOriginalDirection
# 125 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 126 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 127 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 132 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
# 133 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 134 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_JUDGE, Common_Movement_FaceOriginalDirection
# 135 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 136 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 137 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 138 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 139 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant1::
# 140 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 144 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 145 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 146 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 147 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 148 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 149 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant2::
# 150 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 151 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 152 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 156 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 157 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 158 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 159 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant3::
# 160 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 162 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
# 163 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 164 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 168 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 169 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestant4::
# 170 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 171 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 174 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 175 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 176 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 179 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
# 180 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 181 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 182 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 187 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 188 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 189 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
# 190 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 191 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 192 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
# 193 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 194 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 195 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 196 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
# 200 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 201 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 202 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 204 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_BEAUTY_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 205 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 206 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 207 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 209 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestMC::
# 210 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 211 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 212 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 214 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_MC, Common_Movement_FaceOriginalDirection
# 215 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 216 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 218 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 219 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestJudge::
# 220 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 221 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 222 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
# 223 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 224 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_JUDGE, Common_Movement_FaceOriginalDirection
# 225 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 226 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 228 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 229 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant1::
# 230 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 231 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 232 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
# 233 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 234 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_1, Common_Movement_FaceOriginalDirection
# 235 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 236 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 237 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 239 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant2::
# 240 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 241 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 242 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
# 243 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 244 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_2, Common_Movement_FaceOriginalDirection
# 245 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 246 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 247 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 248 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 249 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant3::
# 250 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 251 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 252 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 254 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_3, Common_Movement_FaceOriginalDirection
# 255 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 256 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 257 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 258 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 259 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestant4::
# 260 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 262 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
# 263 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 264 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_CONTESTANT_4, Common_Movement_FaceOriginalDirection
# 265 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 266 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 267 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 268 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 269 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
# 270 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lockall
# 271 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
# 272 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 273 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
# 274 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 275 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 276 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 277 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	delay 25
# 278 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
# 279 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	releaseall
# 280 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 281 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 282 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
# 283 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 284 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 285 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
# 286 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 287 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_2, Common_Movement_FaceOriginalDirection
# 288 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 289 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 290 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 291 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 292 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
# 293 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock
# 294 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	faceplayer
# 295 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
# 296 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_3, Common_Movement_FaceOriginalDirection
# 298 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 299 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	release
# 300 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 301 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 302 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_BeautyStageSign::
# 303 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
# 304 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 305 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 306 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_CuteStageSign::
# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
# 308 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 309 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 310 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_EventScript_SmartStageSign::
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
# 312 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	end
# 313 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 314 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_TodayWonSmartnessContest:
# 315 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Dieses Pokémon hat den vorherigen\n"
# 316 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Schönheitswettbewerb gewonnen.\p"
# 317 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Weißt du was? Heute werde ich den\n"
# 318 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Klugheits-Wettbewerb gewinnen!\p"
# 319 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Meine Fähigkeiten erstaunen sogar\n"
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "mich…$"
# 321 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 322 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredBunchOfContests:
# 323 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich habe einige Wettbewerbe mitge-\n"
# 324 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "macht, weil ich wissen wollte, wie\l"
# 325 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "das so läuft.\p"
# 326 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wenn du an einem Coolness-Wettbewerb\n"
# 327 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "teilnimmst, zählen coole Attacken.\p"
# 328 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Anmutige oder kluge Attacken sind\n"
# 329 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "dagegen nicht so angesagt.$"
# 330 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 331 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks:
# 332 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Der junge Mann, der vor kurzem hier ge-\n"
# 333 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "wonnen hat, hatte viele verschiedene\l"
# 334 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{POKEBLOCK} bei sich.\p"
# 335 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ob man gewinnt, wenn man genug dieser\n"
# 336 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Items dabei hat?$"
# 337 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 338 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous:
# 339 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wow, dieser Ort ist einfach riesig!\p"
# 340 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Diese Spannung in der Luft… Das ist\n"
# 341 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "kein Vergleich zu einer Wettbewerbs-\l"
# 342 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "halle in der tiefsten Provinz.$"
# 343 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 344 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal:
# 345 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Okay, kluge Pokémon und Trainer.\n"
# 346 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Seid ihr bereit?!?\p"
# 347 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Gebt euer Bestes!\n"
# 348 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Es geht um den Ausdruck!$"
# 349 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 350 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest:
# 351 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Jury: Gefällt euch dieser\n"
# 352 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wettbewerb?\p"
# 353 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Komm mit drei Freunden wieder her,\n"
# 354 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "dann könnt ihr alle gemeinsam am\l"
# 355 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wettbewerb teilnehmen.$"
# 356 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 357 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EnteredWrongContest:
# 358 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Eieieiei…\n"
# 359 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich habe am falschen Wettbewerb teil-\l"
# 360 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "genommen. Hach…\p"
# 361 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich habe dieses starke Pokémon in\n"
# 362 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "einen Klugheits-Wettbewerb\l"
# 363 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "geschickt.\p"
# 364 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Los, beeindrucke mit einem\n"
# 365 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "klugen Zertrümmerer.$"
# 366 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 367 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_RaisedMonToBeSmart:
# 368 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich habe viele Jahre und all meine\n"
# 369 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Weisheit gebraucht, um dieses Pokémon\l"
# 370 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "klug zu machen.\p"
# 371 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Damit mache ich es den jungen Spunden\n"
# 372 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "nicht leicht, mein Pokémon zu über-\l"
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "trumpfen.\p"
# 374 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Mein holdes Weib, siehst du das?$"
# 375 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 376 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext:
# 377 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Das ist es!\p"
# 378 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wenn mein Pokémon eine kluge Attacke\n"
# 379 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "vorführt, wird das Publikum ausflippen\l"
# 380 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "vor Begeisterung!$"
# 381 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 382 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife:
# 383 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, du liebe Güte, nein!\p"
# 384 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Der Blutsauger meines Zubat ist\n"
# 385 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "wirklich anmutig, daher setze ich ihn\l"
# 386 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "immer wieder ein!\p"
# 387 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Aber diese gemeinen Leute wissen das\n"
# 388 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "überhaupt nicht zu schätzen!$"
# 389 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 390 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa:
# 391 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Kiaaayh! Du bist wunderbar, Opa!$"
# 392 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 393 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves:
# 394 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Selbst wenn die Trainer die gleichen\n"
# 395 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Pokémon einsetzen, so führen sie doch\l"
# 396 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "unterschiedliche Attacken vor.\p"
# 397 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Das ist so wie bei den Kämpfen: Jeder\n"
# 398 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "hat seinen eigenen Stil.$"
# 399 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 400 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers:
# 401 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich denke, die Pokémon machen einen\n"
# 402 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "klügeren Eindruck als ihre Trainer.$"
# 403 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 404 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_StillLoveSmartnessContests:
# 405 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Jetzt, wo alles vorbei ist, liebe ich\n"
# 406 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Klugheits-Wettbewerbe noch immer.\p"
# 407 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Diese intellektuelle, grüne Farbe…\n"
# 408 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Das ist so… so… so cooool!$"
# 409 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 410 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest:
# 411 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Nimmst du auch am Schönheits-\n"
# 412 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wettbewerb teil? Viel Glück!$"
# 413 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 414 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty:
# 415 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Jury: Ah, jedes Pokémon ist ein\n"
# 416 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Beispiel makelloser Schönheit!\p"
# 417 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Huch, fast hätte ich vergessen, sie zu\n"
# 418 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "bewerten…$"
# 419 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 420 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty:
# 421 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ein Pokémon von dieser Schönheit…\n"
# 422 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Es gibt keines wie dieses.\p"
# 423 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Jedem werden die Augen übergehen, wenn\n"
# 424 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "er diese Schönheit betrachtet.$"
# 425 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 426 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_OverdidGrooming:
# 427 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Aaaaargh!\p"
# 428 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich habe mein Pokémon für diesen Wett-\n"
# 429 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "bewerb sorgfältig gebürstet und\l"
# 430 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "gestriegelt.\p"
# 431 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Dabei habe ich wohl übertrieben…\n"
# 432 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Das Fell meines Pokémon ist nun ganz\l"
# 433 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "voller Fusseln…\p"
# 434 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Was soll ich jetzt nur tun?$"
# 435 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 436 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam:
# 437 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Der Aurorastrahl ist eine so blendende\n"
# 438 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Erscheinung, dass der Jury sie nicht\l"
# 439 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "sehen wird.\p"
# 440 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Äh, einen Moment mal…\n"
# 441 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Dann ist sie ja völlig sinnlos…$"
# 442 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 443 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe:
# 444 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Dieses hübsche Pokémon sieht genauso\n"
# 445 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "aus wie ich, als ich jünger war.\p"
# 446 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Als ich das zu meinem Mann sagte, hat er\n"
# 447 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "den Kaffee, den er trank, ausgespuckt.\p"
# 448 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Was ist daran so lustig?$"
# 449 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 450 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy:
# 451 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Natürlich, als Frau wäre ich überglück-\n"
# 452 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "lich, wenn ich den Schönheits-\l"
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "wettbewerb gewinnen würde.$"
# 454 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 455 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon:
# 456 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ahahahahaha!\p"
# 457 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wirf mal einen Blick auf all diese\n"
# 458 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "schönen Pokémon!\l"
# 459 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich liebe diesen Liebreiz!$"
# 460 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 461 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone:
# 462 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Du kannst nicht immer nur aufgrund von\n"
# 463 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Schönheit gewinnen.\p"
# 464 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Du musst dein Pokémon striegeln, damit\n"
# 465 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "es so schön und glänzend ist wie meines.$"
# 466 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 467 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_InTheMiddleOfContest:
# 468 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "MC: Oh oh! Hallo!\n"
# 469 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wir sind mitten in einem Wettbewerb!\p"
# 470 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Lass dich bitte zuerst am Schalter\n"
# 471 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "registrieren und komm dann wieder, ja?$"
# 472 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 473 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals:
# 474 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Jury: Oh, was für reizende und\n"
# 475 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "anmutige Ausdrücke!\p"
# 476 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, meine Güte! Was für ein perfekter\n"
# 477 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Nassmacher-Ausdruck!$"
# 478 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 479 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyAzurillWasDistracted:
# 480 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, nein… Mein Azurill wurde von\n"
# 481 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "einem anderen Pokémon abgelenkt.$"
# 482 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 483 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_NeverWonBattleButContest:
# 484 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Mein Pokémon hat noch nie einen Kampf\n"
# 485 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "gewonnen. Aber geh mit ihm in einen\l"
# 486 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wettbewerb und pass auf, was passiert.$"
# 487 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 488 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_PetalDanceIsMarvel:
# 489 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Der Blättertanz meines Pokémon ist der\n"
# 490 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Inbegriff von Eleganz.\p"
# 491 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich lasse es nicht zu, dass irgend-\n"
# 492 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "jemand es dabei stört.$"
# 493 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 494 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter:
# 495 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "All diese Pokémon sind anmutig.\p"
# 496 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Aber, wenn mein Pokémon einen\n"
# 497 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "anmutigen Ausdruck vorführt…\p"
# 498 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich bin sicher, dass es dann anmutiger\n"
# 499 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "als all die anderen Pokémon sein wird.$"
# 500 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 501 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_MyChildIsInContest:
# 502 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Mein Kind nimmt an diesem Wettbewerb\n"
# 503 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "teil.$"
# 504 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 505 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ComeOnDear:
# 506 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Los, mein Schatz! Zeig es ihnen!\n"
# 507 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Dein Pokémon ist das Beste!$"
# 508 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 509 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest:
# 510 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich finde, die Frau dort drüben ist\n"
# 511 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "das anmutigste Geschöpf von allen.\p"
# 512 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wie bitte? Sie bewerten die Pokémon\n"
# 513 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "nach ihrer Anmut?!?$"
# 514 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 515 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn:
# 516 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oooh, all diese anmutigen Pokémon!\n"
# 517 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich möchte auch gerne eines haben!\p"
# 518 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ich werde mir jetzt eines fangen.$"
# 519 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 520 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_BeautyContestStage:
# 521 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Bühne des Schönheitswettbewerbs\n"
# 522 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Sei geblendet von schönen Pokémon!$"
# 523 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 524 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_CuteContestStage:
# 525 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Bühne des Anmutwettbewerbs\n"
# 526 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Sei gefesselt von anmutigen Pokémon!$"
# 527 "data/maps/LilycoveCity_ContestHall/scripts.pory"

# 528 "data/maps/LilycoveCity_ContestHall/scripts.pory"
LilycoveCity_ContestHall_Text_SmartContestStage:
# 529 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Bühne des Klugheitswettbewerbs\n"
# 530 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Sei beeindruckt von klugen Pokémon!$"
