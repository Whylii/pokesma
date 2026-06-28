# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 3 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 4 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 5 "data/maps/MtPyre_Summit/scripts.pory"

# 6 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 7 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 8 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 9 "data/maps/MtPyre_Summit/scripts.pory"

# 10 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_MAXIE, 23, 6
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_ARCHIE, 22, 6
# 13 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 14 "data/maps/MtPyre_Summit/scripts.pory"

# 15 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 20 "data/maps/MtPyre_Summit/scripts.pory"

# 21 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 26 "data/maps/MtPyre_Summit/scripts.pory"

# 27 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 32 "data/maps/MtPyre_Summit/scripts.pory"

# 33 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 66 "data/maps/MtPyre_Summit/scripts.pory"

# 67 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 71 "data/maps/MtPyre_Summit/scripts.pory"

# 72 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 73 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 75 "data/maps/MtPyre_Summit/scripts.pory"

# 76 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 80 "data/maps/MtPyre_Summit/scripts.pory"

# 81 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 87 "data/maps/MtPyre_Summit/scripts.pory"

# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 92 "data/maps/MtPyre_Summit/scripts.pory"

# 93 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 99 "data/maps/MtPyre_Summit/scripts.pory"

# 100 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 105 "data/maps/MtPyre_Summit/scripts.pory"

# 106 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 109 "data/maps/MtPyre_Summit/scripts.pory"

# 110 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 115 "data/maps/MtPyre_Summit/scripts.pory"

# 116 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 120 "data/maps/MtPyre_Summit/scripts.pory"

# 121 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 125 "data/maps/MtPyre_Summit/scripts.pory"

# 126 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 142 "data/maps/MtPyre_Summit/scripts.pory"

# 143 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 146 "data/maps/MtPyre_Summit/scripts.pory"

# 147 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 150 "data/maps/MtPyre_Summit/scripts.pory"

# 151 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 154 "data/maps/MtPyre_Summit/scripts.pory"

# 155 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 164 "data/maps/MtPyre_Summit/scripts.pory"

# 165 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 170 "data/maps/MtPyre_Summit/scripts.pory"

# 171 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 175 "data/maps/MtPyre_Summit/scripts.pory"

# 176 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 180 "data/maps/MtPyre_Summit/scripts.pory"

# 181 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 186 "data/maps/MtPyre_Summit/scripts.pory"

# 187 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 192 "data/maps/MtPyre_Summit/scripts.pory"

# 193 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 198 "data/maps/MtPyre_Summit/scripts.pory"

# 199 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 229 "data/maps/MtPyre_Summit/scripts.pory"

# 230 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 236 "data/maps/MtPyre_Summit/scripts.pory"

# 237 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 243 "data/maps/MtPyre_Summit/scripts.pory"

# 244 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 250 "data/maps/MtPyre_Summit/scripts.pory"

# 251 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 257 "data/maps/MtPyre_Summit/scripts.pory"

# 258 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 264 "data/maps/MtPyre_Summit/scripts.pory"

# 265 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 271 "data/maps/MtPyre_Summit/scripts.pory"

# 272 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 279 "data/maps/MtPyre_Summit/scripts.pory"

# 280 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 287 "data/maps/MtPyre_Summit/scripts.pory"

# 288 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 295 "data/maps/MtPyre_Summit/scripts.pory"

# 296 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 301 "data/maps/MtPyre_Summit/scripts.pory"

# 302 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 307 "data/maps/MtPyre_Summit/scripts.pory"

# 308 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 316 "data/maps/MtPyre_Summit/scripts.pory"

# 317 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 325 "data/maps/MtPyre_Summit/scripts.pory"

# 326 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 334 "data/maps/MtPyre_Summit/scripts.pory"

# 335 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 343 "data/maps/MtPyre_Summit/scripts.pory"

# 344 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 351 "data/maps/MtPyre_Summit/scripts.pory"

# 352 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 358 "data/maps/MtPyre_Summit/scripts.pory"

# 359 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 365 "data/maps/MtPyre_Summit/scripts.pory"

# 366 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 372 "data/maps/MtPyre_Summit/scripts.pory"

# 373 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 377 "data/maps/MtPyre_Summit/scripts.pory"

# 378 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 382 "data/maps/MtPyre_Summit/scripts.pory"

# 383 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 390 "data/maps/MtPyre_Summit/scripts.pory"

# 391 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 397 "data/maps/MtPyre_Summit/scripts.pory"

# 398 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 404 "data/maps/MtPyre_Summit/scripts.pory"

# 405 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 409 "data/maps/MtPyre_Summit/scripts.pory"

# 410 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 414 "data/maps/MtPyre_Summit/scripts.pory"

# 415 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 419 "data/maps/MtPyre_Summit/scripts.pory"

# 420 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 424 "data/maps/MtPyre_Summit/scripts.pory"

# 425 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nein! Die Idioten von Team Magma waren\n"
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	.string "vor uns hier!\p"
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wir müssen sie einholen!$"
# 429 "data/maps/MtPyre_Summit/scripts.pory"

# 430 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich dachte, du würdest zu Team Magma\n"
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	.string "gehören und wärest nochmal\l"
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	.string "zurückgekommen.$"
# 434 "data/maps/MtPyre_Summit/scripts.pory"

# 435 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ja, du bist ganz schön stark…\n"
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aber wir sind viele…$"
# 438 "data/maps/MtPyre_Summit/scripts.pory"

# 439 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pech für dich!\p"
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wärest du eher hier gewesen, hättest du\n"
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	.string "nur gegen das weinerliche Team Magma\l"
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	.string "antreten müssen.\p"
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aber jetzt muss du gegen unsere Stärke\n"
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	.string "antreten.$"
# 447 "data/maps/MtPyre_Summit/scripts.pory"

# 448 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Argh… Ich hätte dich erst gegen Team\n"
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Magma kämpfen lassen sollen…$"
# 451 "data/maps/MtPyre_Summit/scripts.pory"

# 452 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Du weißt doch gar nichts! Misch dich\n"
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "besser nicht in unsere Sachen ein!$"
# 455 "data/maps/MtPyre_Summit/scripts.pory"

# 456 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hey…\n"
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich kenne dich doch vom Schlotberg!\p"
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Du gehörst keinem Team an. Warum bist\n"
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "du hier?$"
# 461 "data/maps/MtPyre_Summit/scripts.pory"

# 462 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wenn du dich schon in fremde Ange-\n"
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legenheiten einmischen musst, dann\l"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mach das bei Team Magma!$"
# 466 "data/maps/MtPyre_Summit/scripts.pory"

# 467 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ach, das spielt keine Rolle.\n"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wir haben Zeit herausgeschlagen!\p"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Der Boss müsste mittlerweile haben, was\n"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "er besorgen wollte!$"
# 472 "data/maps/MtPyre_Summit/scripts.pory"

# 473 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ach, ich weiß!\n"
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Du wolltest Mitglied bei Team Magma\l"
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	.string "werden, aber die wollten dich nicht!\p"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Denk nur nicht, dass du Mitglied bei\n"
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua werden kannst!$"
# 479 "data/maps/MtPyre_Summit/scripts.pory"

# 480 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wenn du Team Aqua unbedingt\n"
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	.string "beitreten willst, können wir darüber\l"
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	.string "reden…$"
# 484 "data/maps/MtPyre_Summit/scripts.pory"

# 485 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wir Mitglieder und unser Boss sind\n"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "das perfekte Team.$"
# 488 "data/maps/MtPyre_Summit/scripts.pory"

# 489 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Adrian: Marc von Team Magma mag uns\n"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "vielleicht einen Schritt voraus sein,\l"
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "aber wir haben das, was wir wollten.\p"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Rote Kugel vom Pyroberg…\n"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich, Adrian, halte sie endlich in meinen\l"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Händen!\p"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hehehe… Nun werden sich unsere\n"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ultimativen Träume erfüllen!\p"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Los geht’s!$"
# 500 "data/maps/MtPyre_Summit/scripts.pory"

# 501 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, nein…\n"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Das darf nicht sein…\p"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nicht nur die Blaue, sondern auch die\n"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Rote Kugel wurde gestohlen…\p"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die beiden Kugeln dürfen niemals\n"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "voneinander getrennt werden.\l"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sie gehören zusammen.\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Was wollen diese Männer nur mit den\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "beiden Kugeln?\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … …\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "…\l"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … …\l"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "…\p"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich meine, Team Magma wäre als Erstes\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "hier gewesen und hat die Blaue Kugel\l"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mitgenommen.\p"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aber sie hatten es sehr eilig und haben\n"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "dies hier zurückgelassen.\p"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich habe keine Ahnung, was das ist.\p"
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Du kannst es gerne haben.\n"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Vielleicht kannst du damit was\l"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "anfangen?$"
# 524 "data/maps/MtPyre_Summit/scripts.pory"

# 525 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Blaue und die Rote Kugel wurden von\n"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "diesen gemeinen Männern fortgenommen…\p"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sie dürfen niemals getrennt werden…\n"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich habe Angst, dass etwas\l"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Schreckliches passieren wird…$"
# 531 "data/maps/MtPyre_Summit/scripts.pory"

# 532 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ach, du meine Güte…\p"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Du sagst, Groudon und Kyogre seien\n"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "beide aufgewacht?\p"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Man sagt, die Blaue und die Rote Kugel\n"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "bezwingen die Wut dieser beiden\l"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon…\p"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Und man sagt auch, dass der wahre\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Besitzer der Kugeln immer noch lebt.\p"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aber niemand weiß, zu wem die Kugeln\n"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "gehören.\p"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Es könnte ein Mensch, aber auch ein\n"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon sein. Niemand weiß es.$"
# 545 "data/maps/MtPyre_Summit/scripts.pory"

# 546 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die beiden Männer, die die Kugeln\n"
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "genommen hatten, haben sie freiwillig\l"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "wieder zurückgebracht.\p"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Diese Männer…\n"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Vielleicht sind sie doch keine\l"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "schlechten Kerle…$"
# 553 "data/maps/MtPyre_Summit/scripts.pory"

# 554 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Gestaltung des Landes, des Meeres\n"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "und des Himmels…\p"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Man sagt, dass sich hier die Persönlich-\n"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "keiten uralter Pokémon widerspiegeln…\p"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So, wie Menschen und Pokémon leben,\n"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "lebt auch die Welt…\p"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Das haben wir von den uralten Pokémon\n"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "gelernt…$"
# 563 "data/maps/MtPyre_Summit/scripts.pory"

# 564 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Am Pyroberg legen wir die Geister der\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon, die von uns gegangen sind, zur\l"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ruhe…\p"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Von hier aus hat man einen Ausblick\n"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "über die ganze Region von Hoenn…\p"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die körperlosen Geister der Pokémon\n"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "finden hier ihre Ruhe…\p"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Es ist Fügung, dass du jetzt hier bist…\p"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Möchtest du meine Geschichte hören?\n"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Eine lange, sehr alte Geschichte der\l"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hoenn-Region?$"
# 576 "data/maps/MtPyre_Summit/scripts.pory"

# 577 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Es geschah vor langer, langer Zeit…\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Welt erbebte unter der\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Auseinandersetzung der Pokémon des\l"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Landes mit den Pokémon des Meeres…\p"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Pokémon des Landes erschufen\n"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Berge und Kontinente…\p"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Pokémon des Meeres erschufen hohe\n"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wellen und tiefe Meeresbecken…\p"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Das Duell wütete ohne absehbares Ende.\p"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Welt wurde von erbarmungslosen\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Stürmen und unglaublichen Infernos\l"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "heimgesucht.\p"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Blaue und die Rote Kugel setzten\n"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "schließlich diesem Kampf ein Ende.\p"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Licht strahlte von den beiden Kugeln\n"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "und beruhigte die Kontrahenten.\p"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die beruhigten Pokémon verbargen sich\n"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "in den Tiefen des Meeres und der Erde,\l"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "und eines Tages verschwanden sie.$"
# 597 "data/maps/MtPyre_Summit/scripts.pory"

# 598 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Ich verstehe…\n"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nun, das ist auch in Ordnung…$"
# 601 "data/maps/MtPyre_Summit/scripts.pory"

# 602 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Marc: {PLAYER}…\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 606 "data/maps/MtPyre_Summit/scripts.pory"

# 607 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Meine Aufgabe ist es, die Legenden von\n"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hoenn an die nachfolgenden\l"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Generationen weiterzugeben.\p"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Krise von Xeneroville war die\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wiederholung der Legende…\p"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hast du Zeit, dir die neue Legende von\n"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hoenn anzuhören?$"
# 615 "data/maps/MtPyre_Summit/scripts.pory"

# 616 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Es geschah vor langer, langer Zeit…\p"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Welt erbebte unter der\n"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Auseinandersetzung des Pokémon des\l"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Landes mit dem Pokémon des Meeres…\p"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Das Pokémon des Landes erschuf\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Berge und Kontinente…\p"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Das Pokémon des Meeres erschuf hohe\n"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wellen und tiefe Meeresbecken…\p"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Das Duell wütete ohne absehbares Ende.\p"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Die Welt wurde von erbarmungslosen\n"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Stürmen und unglaublichen Infernos\l"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "heimgesucht.\p"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Da stieg ein Pokémon in einem Sturm aus\n"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "den Wolken herab.\p"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Dieses Pokémon, welches in einem\n"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "lebendigen Grün glänzte, beruhigte die\l"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "beiden Pokémon.\p"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Und als es seine Aufgabe erfüllt hatte,\n"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "stieg das Pokémon wieder in das Blau\l"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "des Himmels hinauf…$"
