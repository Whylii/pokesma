# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Auf der Tafel sind die Statusverände-\n"
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "rungen von Pokémon aufgelistet.$"
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Welches Thema möchtest du lesen?$"
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wenn ein Pokémon vergiftet wurde, wird\n"
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "es ständig KP verlieren.\p"
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Die Auswirkungen des Giftes halten\n"
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "auch nach dem Kampf an.\p"
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Die KP eines vergifteten Pokémon\n"
# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "werden auch unterwegs weiter sinken.\p"
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Mit einem Gegengift kann das Pokémon\n"
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "geheilt werden.$"
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wurde ein Pokémon paralysiert, sinkt\n"
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "seine Initiative.\p"
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Es kann passieren, dass es während des\n"
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Kampfes bewegungsunfähig wird.\p"
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Die Paralyse hält auch nach dem Kampf\n"
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "an. Heile das Pokémon mit Para-Heiler.$"
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wenn ein Pokémon einschläft, kann es\n"
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "nicht mehr angreifen.\p"
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Das Pokémon wird vielleicht von selber\n"
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "wieder wach, aber wenn der Kampf endet\l"
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "und es noch schläft, schläft es weiter.\p"
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wecke es mit Aufwecker auf.$"
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Eine Verbrennung senkt die Kraft des\n"
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Angriffs. Die KP nehmen ständig ab.\p"
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Eine Verbrennung hält auch nach dem\n"
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Kampf an. Setze Feuerheiler ein!$"
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wurde ein Pokémon eingefroren, so ist\n"
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "es völlig hilflos.\p"
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Auch nach dem Kampf hält der Zustand\n"
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "an. Setze dann Eisheiler ein.$"
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Schüler, die nicht aufpassen, bekommen\n"
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meine Flinkklaue zu spüren.\p"
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wie du dieses Item einsetzt, zeigt,\n"
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "ob du ein guter Schüler bist oder nicht.$"
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ein Pokémon, das die Flinkklaue trägt,\n"
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steigert seine Schnelligkeit und greift\l"
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "eventuell schneller an als sein Gegner.\p"
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Es gibt noch viele andere Items, die von\n"
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "einem Pokémon getragen werden können.\p"
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Du kannst also noch viel lernen.$"
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich tausche gerade mit meinem Freund\n"
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon.$"
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich wollte schon immer ein Samurzel\n"
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "haben - und endlich habe ich eines!$"
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon können Items tragen, aber\n"
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sie wissen nicht, was sie mit von\l"
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Menschen gemachten Items wie Trank\l"
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "oder Gegengift machen sollen.$"
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Weißt du, wie man mit einigen Pokémon-\n"
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Attacken ein Pokémon verwirren kann?\p"
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ein verwirrtes Pokémon wird manchmal\n"
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sich selber verletzen, ohne es zu\l"
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "wollen.\p"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Aber sobald es aus dem Kampf genommen\n"
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "wird, ist es wieder normal.$"
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ein Pokémon, das eine Beere trägt, wird\n"
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sich selber heilen…\p"
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Es gibt viele Items, die ein Pokémon\n"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "tragen kann…\p"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Junge, Junge, ist das alles schwer\n"
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "zu merken…$"
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Das ist das Heft eines Schülers…\p"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon werden mit Pokébällen\n"
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "gefangen.\p"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Bis zu sechs Pokémon können den\n"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Trainer begleiten.\p"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ein Trainer ist jemand, der Pokémon\n"
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "fängt, sie aufzieht, und mit ihnen\l"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "kämpft.\p"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Die Aufgabe eines Trainers ist es, die\n"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "starken Trainer, die ihn in den Arenen\l"
# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "erwarten, zu besiegen.$"
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hallo? Haben wir uns nicht schon einmal\n"
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "gesehen? Ich glaube, das war in\l"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Blütenburg City?\p"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich will mich mal vorstellen.\n"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Mein Name ist Scott.\p"
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich reise durch die Lande, auf der\n"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Suche nach herausragenden Trainern.\p"
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Genauer gesagt bin ich auf der\n"
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Suche nach Experten des Pokémon-\l"
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Kampfes.\p"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Was machst du in dieser Trainerschule?\n"
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Bist du auch ein Trainer?\p"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Als Erstes solltest du einem Pokémon\n"
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "die Attacke Zerschneider beibringen.\p"
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Und wenn ich mich recht erinnere,\n"
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "besitzt einer in diesem Ort\l"
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Zerschneider.$"
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Hmm…\p"
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich frage mich, welches Talent-Niveau\n"
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "die Schüler hier haben. Das ist völlig\l"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unbekannt.$"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Hmm…\p"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Das ist der Steinorden, oder?\n"
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wirklich beeindruckend, muss ich schon\l"
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sagen.\p"
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich würde dich liebend gerne mal in\n"
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "einem Kampf beobachten.\p"
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Man kann einen Trainer, der einen\n"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Orden der Liga besitzt, immer schwer\l"
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "einschätzen.$"
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hallo? Haben wir uns nicht schon einmal\n"
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "gesehen? Ich glaube, das war in\l"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Blütenburg City?\p"
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich will mich mal vorstellen.\n"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Mein Name ist Scott.\p"
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich reise durch die Lande, auf der\n"
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Suche nach herausragenden Trainern.\p"
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Besser gesagt, ich suche nach Experten\n"
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "des Pokémon-Kampfes.\p"
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Was ist das?\n"
# 353 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Das ist der Steinorden, oder?\p"
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wirklich beeindruckend, muss ich schon\n"
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sagen.\p"
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ich würde dich liebend gerne mal in\n"
# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "einem Kampf beobachten.\p"
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Man kann einen Trainer, der einen\n"
# 359 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oorden der Liga besitzt, immer schwer\l"
# 360 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "einschätzen.$"
