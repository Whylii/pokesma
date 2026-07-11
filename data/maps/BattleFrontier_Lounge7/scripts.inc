# 1 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@special ChooseMonForMoveTutor
# 6 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 7 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 8 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 9 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
# 13 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 14 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 16 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
# 19 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 21 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
# 22 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_Counter
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
# 41 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 42 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
# 46 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 47 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 52 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
# 55 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
# 57 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
# 58 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
# 59 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
# 60 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
# 61 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_Counter
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Softboiled::
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SeismicToss::
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DreamEater::
# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DREAM_EATER
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 84 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 85 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaPunch::
# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MegaKick::
# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 95 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 96 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 97 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 98 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_BodySlam::
# 99 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 103 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 104 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RockSlide::
# 105 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 106 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 110 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Counter::
# 111 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 112 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_COUNTER
# 113 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderWave::
# 117 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 118 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
# 119 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 120 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_SwordsDance::
# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 124 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
# 125 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 126 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	faceplayer
# 131 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 132 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
# 133 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 138 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
# 139 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
# 141 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 142 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 143 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
# 144 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 145 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 146 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 147 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 148 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 151 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 152 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
# 154 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_Snore
# 155 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
# 156 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_Swift
# 157 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
# 158 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_Endure
# 159 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
# 160 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
# 161 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
# 162 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
# 163 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 164 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 165 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 166 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 167 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
# 168 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 169 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 170 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 171 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 172 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 173 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 174 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 175 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
# 177 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_Snore
# 178 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
# 179 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_Swift
# 180 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
# 181 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_Endure
# 182 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
# 183 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
# 184 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
# 185 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
# 186 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 187 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
# 188 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 189 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 190 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_DefenseCurl::
# 191 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 16
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 193 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 194 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 195 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 196 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Snore::
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 198 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SNORE
# 199 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 200 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 201 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_MudSlap::
# 203 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 204 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_MUD_SLAP
# 205 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 206 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 208 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Swift::
# 209 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 210 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_SWIFT
# 211 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 213 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 214 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcyWind::
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 24
# 216 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 217 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 218 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 219 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Endure::
# 221 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 222 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDURE
# 223 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 224 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 225 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 226 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_PsychUp::
# 227 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 228 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
# 229 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 230 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 231 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 232 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_IcePunch::
# 233 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 234 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
# 235 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 236 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 237 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 238 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ThunderPunch::
# 239 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 240 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 242 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 244 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_FirePunch::
# 245 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8008, 48
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
# 247 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 250 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 251 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 252 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 254 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 255 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 256 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_CancelChooseMon::
# 258 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
# 259 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 260 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 262 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_0x8008 is the price
# 263 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_C is the scroll multichoice ID
# 264 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
# 265 "data/maps/BattleFrontier_Lounge7/scripts.pory"
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
# 266 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 267 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 268 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8008
# 269 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 270 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 271 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 272 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
# 273 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 274 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 276 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 277 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 278 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 279 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 282 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 283 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 284 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 285 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon
# 286 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 288 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
# 289 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	release
# 290 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 291 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 292 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_ChooseNewMove::
# 293 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
# 294 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
# 295 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 297 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Sailor::
# 298 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
# 299 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 300 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 301 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_EventScript_Gentleman::
# 302 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
# 303 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	end
# 304 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 305 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorIntro:
# 306 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Muahahahaha!\p"
# 307 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Du wirst es mir wahrscheinlich nicht\n"
# 308 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "glauben, aber ich war eine starke\l"
# 309 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Trainerin.\p"
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich war die stärkste Schönheit, die es\n"
# 311 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "weit und breit gab!\p"
# 312 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "… … … …\p"
# 313 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Und?\n"
# 314 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Glaubst du mir etwa nicht? Nein?\p"
# 315 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich bin nicht so wie die Angeberin hier\n"
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "neben mir. ICH habe wirklich Talent!\p"
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Das werde ich dir beweisen.\n"
# 318 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich kann deinen Pokémon Spezial-\l"
# 319 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Attacken beibringen,\p"
# 320 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "die auch noch niedlich sind. Aber das\n"
# 321 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "kostet eine Kleinigkeit. Dafür möchte\l"
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ich von dir Gewinnpunkte haben.$"
# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 324 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack:
# 325 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Muahahahaha!\p"
# 326 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Soll ich deinen Pokémon ein paar\n"
# 327 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "hübsche Spezial-Attacken beibringen?$"
# 328 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachWhichMove:
# 330 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schön, schön. Sehr gut. Welche\n"
# 331 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Attacke soll ich ihnen beibringen?$"
# 332 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 333 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints:
# 334 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Die Attacke {STR_VAR_1} soll es sein?\n"
# 335 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Die kostet dich {STR_VAR_2} Gewinnpunkte.$"
# 336 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 337 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_TeachMoveToWhichMon:
# 338 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schön, schön. Und welchem Pokémon\n"
# 339 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "soll ich sie beibringen?$"
# 340 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 341 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_HaventGotEnoughPoints:
# 342 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Was… Du hast ja gar\n"
# 343 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "nicht genug Gewinnpunkte!$"
# 344 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 345 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IllTakeBattlePoints:
# 346 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Siehst du nun, wie talentiert ich bin?\n"
# 347 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Und nun hätte ich gerne deine\l"
# 348 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Gewinnpunkte. Danke!$"
# 349 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 350 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_YouDontWantTo:
# 351 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Was denn? Was denn?\n"
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Du musst doch nicht gleich…\p"
# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Wenn du sehen willst, wie talentiert ich\n"
# 354 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "bin, dann komm wieder. Jederzeit!$"
# 355 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 356 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorIntro:
# 357 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Hihihihi!\p"
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Auch wenn es schwer zu glauben ist: Ich\n"
# 359 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "war einmal eine grandiose Trainerin!\p"
# 360 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich hatte den Ruf einer unschlagbaren\n"
# 361 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schwimmerin. Das ist wahr!\p"
# 362 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "… … … …\p"
# 363 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Wie bitte?\n"
# 364 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Du glaubst mir nicht!\p"
# 365 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich bin nicht so närrisch wie die da\n"
# 366 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "drüben. Ich habe wirklich Erfahrung!\p"
# 367 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Das kann ich dir gerne beweisen!\n"
# 368 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich kann deinen Pokémon starke und\l"
# 369 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "schöne Attacken beibringen.\p"
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Aber das kostet dich etwas. Bring ich\n"
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "deinen Pokémon etwas bei, bekomme\l"
# 372 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ich von dir Gewinnpunkte.$"
# 373 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 374 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RightTutorWelcomeBack:
# 375 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Hihihihi!\p"
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ich soll deinen Pokémon starke und\n"
# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "schöne Attacken beibringen?$"
# 378 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 379 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong:
# 380 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Diese Damen dahinten, die beschimpfen\n"
# 381 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "sich ständig. Du denkst bestimmt, die\l"
# 382 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "verstehen sich überhaupt nicht.\p"
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Aber in Wahrheit würde die eine keinen\n"
# 384 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schritt ohne die andere machen.$"
# 385 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 386 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful:
# 387 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Als ich noch ein junger Spund, ein\n"
# 388 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Teenager, war, waren diese Damen stark\l"
# 389 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "und wunderschön.\p"
# 390 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Wir Trainer haben sie vergöttert.\p"
# 391 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Und auch jetzt, im Alter, haben ihre\n"
# 392 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fähigkeiten nicht nachgelassen.\p"
# 393 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Im Gegenteil: Ihre Pokémon-Attacken\n"
# 394 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "sind einfach vollkommen.\p"
# 395 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Aber…\n"
# 396 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Trotzdem denke ich…\p"
# 397 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Die Zeit ist grausam…$"
# 398 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 399 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SoftboiledDesc::
# 400 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Max. KP des Anwen-\n"
# 401 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "ders w. zur Hälfte\n"
# 402 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "aufgefüllt.$"
# 403 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 404 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SeismicTossDesc::
# 405 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Richtet Schaden\n"
# 406 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "gemäß Level d.\n"
# 407 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Angreifers an.$"
# 408 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 409 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DreamEaterDesc::
# 410 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schlafendem Geg.\n"
# 411 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "wird halber Scha-\n"
# 412 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "den abgezogen.$"
# 413 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 414 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaPunchDesc::
# 415 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ein unglaublich\n"
# 416 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "kräftiger Hieb.$"
# 417 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 418 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MegaKickDesc::
# 419 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ein extrem\n"
# 420 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "heftiger Tritt.$"
# 421 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 422 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_BodySlamDesc::
# 423 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Körper-Ramme,\n"
# 424 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "kann Paralyse\n"
# 425 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "hervorrufen.$"
# 426 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 427 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_RockSlideDesc::
# 428 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schleudert\n"
# 429 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Felsen. Ver-\n"
# 430 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "schreckt Gegner.$"
# 431 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 432 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_CounterDesc::
# 433 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Kontert phys.\n"
# 434 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Treffer mit\n"
# 435 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "doppelter Kraft.$"
# 436 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 437 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderWaveDesc::
# 438 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ein schwacher\n"
# 439 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Stromstoß, der d.\n"
# 440 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Gegner paralys.$"
# 441 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 442 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwordsDanceDesc::
# 443 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Erhöht den\n"
# 444 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Angriffs-Wert\n"
# 445 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "drastisch.$"
# 446 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 447 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_DefenseCurlDesc::
# 448 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Verbirgt Schwäche\n"
# 449 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "durch Einrollen,\n"
# 450 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Vert.-Wert hoch.$"
# 451 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 452 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SnoreDesc::
# 453 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Laute Attacke.\n"
# 454 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Kann nur im Schlaf\n"
# 455 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "benutzt werden.$"
# 456 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 457 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_MudSlapDesc::
# 458 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Wirft Gegner\n"
# 459 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Matsch i. Gesicht.\n"
# 460 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Genauigkeit sinkt.$"
# 461 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 462 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_SwiftDesc::
# 463 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Verschießt stern-\n"
# 464 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "förmige Strahlen.\n"
# 465 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Treffergarantie!$"
# 466 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 467 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcyWindDesc::
# 468 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Eis-Attacke, die\n"
# 469 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "den Init.-Wert d.\n"
# 470 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Gegners senkt.$"
# 471 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 472 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_EndureDesc::
# 473 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Hält jed. Attacke\n"
# 474 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "1 Runde stand.\n"
# 475 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "1 KP bleibt stets.$"
# 476 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 477 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_PsychUpDesc::
# 478 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Kopiert Effekte d.\n"
# 479 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Gegners u. gibt\n"
# 480 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "sie dem Angreifer.$"
# 481 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 482 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_IcePunchDesc::
# 483 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ein Schlag, der\n"
# 484 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "den Gegner\n"
# 485 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "evtl. einfriert.$"
# 486 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 487 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_ThunderPunchDesc::
# 488 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schlag, der den\n"
# 489 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Gegner evtl.\n"
# 490 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "paralysiert.$"
# 491 "data/maps/BattleFrontier_Lounge7/scripts.pory"

# 492 "data/maps/BattleFrontier_Lounge7/scripts.pory"
BattleFrontier_Lounge7_Text_FirePunchDesc::
# 493 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Schlag, der dem\n"
# 494 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Gegner evtl. Ver-\n"
# 495 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "brennung zufügt.$"
