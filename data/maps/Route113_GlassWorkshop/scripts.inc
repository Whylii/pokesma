# 1 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_MapScripts::
# 3 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_OnTransition
# 4 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.byte 0
# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set BLUE_FLUTE_PRICE,   250
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set YELLOW_FLUTE_PRICE, 500
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set RED_FLUTE_PRICE,    500
# 9 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set WHITE_FLUTE_PRICE,  1000
# 10 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set BLACK_FLUTE_PRICE,  1000
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set PRETTY_CHAIR_PRICE, 6000
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set PRETTY_DESK_PRICE,  8000
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.set LOWEST_ASH_PRICE,   BLUE_FLUTE_PRICE
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_OnTransition:
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call_if_eq VAR_GLASS_WORKSHOP_STATE, 1, Route113_GlassWorkshop_EventScript_ReenterWorkshopAfterSootSack
# 18 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ReenterWorkshopAfterSootSack::
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	return
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GlassWorker::
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_ge VAR_GLASS_WORKSHOP_STATE, 10, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_GLASS_WORKSHOP_STATE, 2, Route113_GlassWorkshop_EventScript_CheckCollectedAsh
# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_GLASS_WORKSHOP_STATE, 1, Route113_GlassWorkshop_EventScript_ExplainSootSack
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_GoCollectAshWithThis, MSGBOX_DEFAULT
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem ITEM_SOOT_SACK
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 1
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 38 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ExplainSootSack::
# 39 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
# 40 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 41 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CheckCollectedAsh::
# 44 "data/maps/Route113_GlassWorkshop/scripts.pory"
	checkitem ITEM_SOOT_SACK
# 45 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route113_GlassWorkshop_EventScript_SootSackNotInBag
# 46 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_LetsSeeCollectedAshes, MSGBOX_DEFAULT
# 47 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, LOWEST_ASH_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAsh
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
# 51 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 52 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 53 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_SootSackNotInBag::
# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_HaventGotYourSootSack, MSGBOX_DEFAULT
# 55 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseGlassItem::
# 59 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 60 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GLASS_WORKSHOP_VENDOR
# 61 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special ShowScrollableMultichoice
# 62 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_RESULT
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 0, Route113_GlassWorkshop_EventScript_BlueFlute
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 1, Route113_GlassWorkshop_EventScript_YellowFlute
# 65 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 2, Route113_GlassWorkshop_EventScript_RedFlute
# 66 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 3, Route113_GlassWorkshop_EventScript_WhiteFlute
# 67 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 4, Route113_GlassWorkshop_EventScript_BlackFlute
# 68 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 5, Route113_GlassWorkshop_EventScript_PrettyChair
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 6, Route113_GlassWorkshop_EventScript_PrettyDesk
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 7, Route113_GlassWorkshop_EventScript_CancelGlassItemSelect
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case MULTI_B_PRESSED, Route113_GlassWorkshop_EventScript_CancelGlassItemSelect
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlueFlute::
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
# 76 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 77 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, BLUE_FLUTE_PRICE
# 78 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 79 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 81 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 10
# 82 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE
# 83 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 84 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 86 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_YellowFlute::
# 87 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
# 88 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 89 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, YELLOW_FLUTE_PRICE
# 90 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 91 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 92 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 93 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 11
# 94 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE
# 95 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 96 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 97 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 98 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_RedFlute::
# 99 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_FLUTE
# 100 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 101 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, RED_FLUTE_PRICE
# 102 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 103 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 12
# 106 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE
# 107 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 110 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_WhiteFlute::
# 111 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
# 112 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 113 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, WHITE_FLUTE_PRICE
# 114 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 13
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE
# 119 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 120 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 121 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 122 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_BlackFlute::
# 123 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
# 124 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 125 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, BLACK_FLUTE_PRICE
# 126 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 127 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 128 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 129 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 14
# 130 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE
# 131 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 132 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 133 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 134 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyChair::
# 135 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 136 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
# 137 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8008
# 138 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, PRETTY_CHAIR_PRICE
# 139 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 140 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 141 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 142 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 15
# 143 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE
# 144 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 145 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 146 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 147 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_PrettyDesk::
# 148 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 149 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_DESK
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8008
# 151 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, PRETTY_DESK_PRICE
# 152 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_lt VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE, Route113_GlassWorkshop_EventScript_NotEnoughAshForItem
# 153 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 154 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_ChooseDifferentItem
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 16
# 156 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE
# 157 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_MakeGlassItem
# 158 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 159 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 160 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_CancelGlassItemSelect::
# 161 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything, MSGBOX_DEFAULT
# 162 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 163 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 164 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 165 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NotEnoughAsh::
# 166 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, LOWEST_ASH_PRICE
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 168 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x800A
# 169 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NotEnoughAshNeedX, MSGBOX_DEFAULT
# 170 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 171 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 172 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 173 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NotEnoughAshForItem::
# 174 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 175 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x800A
# 176 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem
# 177 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 178 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
# 179 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 180 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 181 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_ChooseDifferentItem::
# 182 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichWouldYouLike
# 183 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 184 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
# 185 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 186 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 187 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_MakeGlassItem::
# 188 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IllMakeItemForYou, MSGBOX_DEFAULT
# 189 "data/maps/Route113_GlassWorkshop/scripts.pory"
	closemessage
# 190 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 191 "data/maps/Route113_GlassWorkshop/scripts.pory"
	playse SE_SELECT
# 192 "data/maps/Route113_GlassWorkshop/scripts.pory"
	delay 30
# 193 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 194 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 195 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route113_GlassWorkshop_EventScript_GiveGlassFlute
# 196 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route113_GlassWorkshop_EventScript_GiveGlassDecor
# 197 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 198 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 199 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 200 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 201 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassFlute::
# 202 "data/maps/Route113_GlassWorkshop/scripts.pory"
	giveitem VAR_0x8008
# 203 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route113_GlassWorkshop_EventScript_NoRoomForFlute
# 204 "data/maps/Route113_GlassWorkshop/scripts.pory"
	return
# 205 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 206 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveGlassDecor::
# 207 "data/maps/Route113_GlassWorkshop/scripts.pory"
	givedecoration VAR_0x8008
# 208 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route113_GlassWorkshop_EventScript_NoRoomForDecor
# 209 "data/maps/Route113_GlassWorkshop/scripts.pory"
	return
# 210 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 211 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NoRoomForFlute::
# 212 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_BagIsFull
# 213 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInBag, MSGBOX_DEFAULT
# 214 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 215 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 216 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 217 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NoRoomForDecor::
# 218 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 219 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInPC, MSGBOX_DEFAULT
# 220 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 221 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 222 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 223 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom::
# 224 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GLASS_WORKSHOP_STATE
# 225 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 10, Route113_GlassWorkshop_EventScript_GiveBlueFlute
# 226 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 11, Route113_GlassWorkshop_EventScript_GiveYellowFlute
# 227 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 12, Route113_GlassWorkshop_EventScript_GiveRedFlute
# 228 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 13, Route113_GlassWorkshop_EventScript_GiveWhiteFlute
# 229 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 14, Route113_GlassWorkshop_EventScript_GiveBlackFlute
# 230 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 15, Route113_GlassWorkshop_EventScript_GivePrettyChair
# 231 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 16, Route113_GlassWorkshop_EventScript_GivePrettyDesk
# 232 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 233 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 234 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveBlueFlute::
# 235 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 236 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
# 237 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 238 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 239 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 240 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 241 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveYellowFlute::
# 242 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 243 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
# 244 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 245 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 246 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 247 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 248 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveRedFlute::
# 249 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 250 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_RED_FLUTE
# 251 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 252 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 253 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 254 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 255 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveWhiteFlute::
# 256 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 257 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
# 258 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 259 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 260 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 261 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 262 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GiveBlackFlute::
# 263 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 0
# 264 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
# 265 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8008
# 266 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 267 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 268 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 269 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GivePrettyChair::
# 270 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 271 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
# 272 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_CHAIR
# 273 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 274 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 275 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 276 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_GivePrettyDesk::
# 277 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8009, 1
# 278 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, DECOR_PRETTY_DESK
# 279 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_DESK
# 280 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_TryGiveItemAgain
# 281 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 282 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 283 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TryGiveItemAgain::
# 284 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 285 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route113_GlassWorkshop_EventScript_GiveGlassFlute
# 286 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route113_GlassWorkshop_EventScript_GiveGlassDecor
# 287 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 288 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 289 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 290 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 291 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NinjaBoy::
# 292 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_FunToBlowGlassFlute, MSGBOX_NPC
# 293 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 294 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 295 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_GoCollectAshWithThis:
# 296 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Diese Region ist mit Vulkanasche\n"
# 297 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "bedeckt! Schnauf, keuch…\p"
# 298 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ich habe ein besonderes Talent.\n"
# 299 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch…\p"
# 300 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ich mache aus der Asche Glas und stelle\n"
# 301 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "daraus Items her. Schnauf, keuch…\p"
# 302 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hiermit kannst du Asche sammeln.\n"
# 303 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch…$"
# 304 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 305 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_ExplainSootSack:
# 306 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Nimm diese Aschetasche und lauf durch\n"
# 307 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "die Asche. Schnauf, keuch…\p"
# 308 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Damit füllst du die Aschetasche mit\n"
# 309 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Asche. Schnauf, keuch…\p"
# 310 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Und wenn du meinst, du hast genug ge-\n"
# 311 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "sammelt, komm zu mir. Schnauf, keuch…$"
# 312 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 313 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_LetsSeeCollectedAshes:
# 314 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hast du Asche gesammelt? Schnauf,\n"
# 315 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "keuch. Zeig mal her. Schnauf, keuch…$"
# 316 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 317 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NotEnoughAshNeedX:
# 318 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hmmm… Das reicht aber nicht.\n"
# 319 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch. Daraus kann ich\l"
# 320 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "kein Glas machen. Schnauf, keuch…\p"
# 321 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Mal sehen… Du musst noch {STR_VAR_1} Schritt(e)\n"
# 322 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "gehen, damit ich eine blaue Flöte her-\l"
# 323 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "stellen kann. Schnauf, keuch…$"
# 324 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 325 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike:
# 326 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh! Du hast aber viel Asche gesammelt.\n"
# 327 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch…\p"
# 328 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ich mache dir ein Item aus Glas daraus.\n"
# 329 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Welches möchtest du? Schnauf, keuch…$"
# 330 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 331 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IsThatTheItemForYou:
# 332 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "{STR_VAR_1} also? Schnauf, keuch…\n"
# 333 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Das möchtest du haben? Schnauf, keuch.$"
# 334 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 335 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_WhichWouldYouLike:
# 336 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Was möchtest du haben? Schnauf, keuch.$"
# 337 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 338 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IllMakeItemForYou:
# 339 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Also einmal {STR_VAR_1}? Schnauf…\p"
# 340 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "O.K. Wird erledigt. Schnauf, keuch. Einen\n"
# 341 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Moment Geduld bitte. Schnauf, keuch…$"
# 342 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 343 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem:
# 344 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "{STR_VAR_1}? Schnauf, keuch…\p"
# 345 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Du hast nicht genug Asche für dieses\n"
# 346 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Item mitgebracht. Schnauf, keuch…\p"
# 347 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Mal sehen… Du musst noch {STR_VAR_2}\n"
# 348 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schritt(e) gehen, damit ich dieses Item\l"
# 349 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "herstellen kann. Schnauf, keuch.\p"
# 350 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Was möchtest du stattdessen haben?\n"
# 351 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch…$"
# 352 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 353 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything:
# 354 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Du hast all die Asche gesammelt und\n"
# 355 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "willst nichts haben? Schnauf, keuch…$"
# 356 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 357 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IveFinishedGlassItem:
# 358 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "So, hier ist ein(e) {STR_VAR_1} für\n"
# 359 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "dich. Hier, für dich. Schnauf, keuch…$"
# 360 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 361 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NoRoomInBag:
# 362 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh. In deinem Beutel ist kein Platz\n"
# 363 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "dafür. Schnauf, keuch…\p"
# 364 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ich verwahre es für dich. Hol es dir\n"
# 365 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "einfach später ab. Schnauf, keuch…$"
# 366 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 367 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_NoRoomInPC:
# 368 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh. Du hast keinen Platz auf deinem PC.\n"
# 369 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch…\p"
# 370 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ich verwahre es für dich. Hol es dir\n"
# 371 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "einfach später ab. Schnauf, keuch…$"
# 372 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 373 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_HaventGotYourSootSack:
# 374 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh. Du hast die Aschetasche nicht\n"
# 375 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "dabei? Schnauf, keuch…\p"
# 376 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Du musst sie aber dabei haben, um Asche\n"
# 377 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "sammeln zu können! Schnauf, keuch…$"
# 378 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 379 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_FunToBlowGlassFlute:
# 380 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Es macht Spaß, das Glas zu einer Flöte\n"
# 381 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "zu blasen, wenn der Boss redet.\p"
# 382 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Schnauf, keuch! Pust, pust!$"
