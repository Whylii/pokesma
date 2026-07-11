# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts::
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel::
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_AskSwitchBikes
# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_SkipGreeting
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting::
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_YesFar
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_NotFar
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike::
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar::
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar::
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike::
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike::
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes::
# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MauvilleCity_BikeShop_EventScript_SwitchBikes
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_BikeShop_EventScript_KeepBike
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike::
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach::
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro::
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant::
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide::
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn::
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes::
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook::
# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies::
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops::
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps::
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook::
# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting:
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Nun, was haben wir denn hier?\n"
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Einen höchst energetischen Kunden!\p"
# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich? Du kannst Radla zu mir sagen.\n"
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich bin der Besitzer des Fahrrad-Shops.$"
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway:
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Deine Turbotreter…\n"
# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Die sehen ja wirklich schmuddelig aus…\p"
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Kommst du von weit her?$"
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike:
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Stimmt das wirklich?\p"
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Dann kannst du, glaube ich, keines\n"
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "meiner Fahrräder gebrauchen.$"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne:
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Hm, hm… … … … …\n"
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "… … … … … … … …\p"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Du kommst den ganzen Weg von\n"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Wurzelheim her?\p"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Meine Güte!\n"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Das ist unwahrscheinlich weit weg!\p"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Wenn du eines meiner Räder\n"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "hättest, könntest du leicht überall hin\l"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "und den Wind in den Haaren spüren!\p"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich sag dir was!\n"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich werde dir ein RAD geben!\p"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, eine Sekunde!\p"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich sollte dir sagen, dass es zwei\n"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "verschiedene Räder gibt!\p"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Das Eilrad und das Kunstrad!\p"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eilräder für Leute, die den Wind in\n"
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "den Haaren spüren wollen!\p"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Kunsträder für Leute, die die\n"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Techniken des Radfahrens\l"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "beherrschen wollen!\p"
# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Da ich ein richtig weiches Herz habe,\n"
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "darfst du dir eines aussuchen!\p"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Welches möchtest du haben?$"
# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike:
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} wählt das Eilrad.$"
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike:
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} wählt das Kunstrad.$"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes:
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Wenn du die Räder tauschen\n"
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "möchtest, komm einfach wieder vorbei!$"
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes:
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Oh. Du möchtest die Räder\n"
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "tauschen?$"
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes:
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Kein Problem!\n"
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich tausche die Räder für dich aus!$"
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro:
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} bekommt für das Eilrad ein\n"
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Kunstrad.$"
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach:
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} bekommt für das Kunstrad ein\n"
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eilrad.$"
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt:
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Radla: Wunderbar!\n"
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich freue mich, dass es dir gefällt!$"
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC:
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? Was ist mit dem Rad geschehen,\n"
# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "das ich dir gegeben habe?\p"
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ach so, du hast es in deinem PC\n"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gelagert.\p"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Nun, hol es heraus, und ich werde es mit\n"
# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Freuden gegen ein anderes tauschen!\p"
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Möge der Wind dir stets im Rücken sein\n"
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "bei deinem Abenteuer!$"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack:
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ich lerne etwas über Räder,\n"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "während ich hier arbeite.\p"
# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Wenn du eine Anleitung brauchst, wie\n"
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "man Rad fährt - da vorne findest du\l"
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "einige Handbücher.$"
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage:
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ein Handbuch zum Eilrad.\p"
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Welche Seite möchtest du lesen?$"
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike:
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Mit Hilfe des + Steuerkreuzes lässt\n"
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "sich das Rad lenken.\p"
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Es wird immer schneller, wenn es\n"
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "einmal fährt.\p"
# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Lass das Steuerkreuz los, um das\n"
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rad anzuhalten.\p"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eine andere Seite lesen?$"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike:
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ein Eilrad ist sehr schnell und kann\n"
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "nicht schnell gestoppt werden.\p"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Das Kurvenfahren ist sehr schwierig.\p"
# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Lasse das + Steuerkreuz kurz los und\n"
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "bremse, bevor du an eine Kurve kommst.\p"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eine andere Seite lesen?$"
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes:
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "In der ganzen Hoenn-Region gibt es\n"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "sandige Gefälle.\p"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Der lose Sand erlaubt es nicht, diese\n"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Gefälle normal zu erklettern.\p"
# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Aber mit einem Eilrad können auch\n"
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "diese Gefälle gemeistert werden.\p"
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eine andere Seite lesen?$"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage:
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ein Handbuch zum Kunstrad.\p"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Welche Seite möchtest du lesen?$"
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies:
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Drücke während des Fahrens den\n"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "B-Knopf, um das Vorderrad anzuheben.\p"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Ist das Vorderrad angehoben, können\n"
# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "mithilfe des Steuerkreuzes Sprünge\l"
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "ausgeführt werden.\p"
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Diese Technik nennt sich Wheelie.\p"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eine andere Seite lesen?$"
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops:
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Wird der B-Knopf gedrückt, kann auf der\n"
# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Stelle gehüpft werden.\p"
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Diese Technik nennt sich Hoppeln.\p"
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Dabei kann gleichzeitig gefahren\n"
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "werden.\p"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eine andere Seite lesen?$"
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps:
# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Drücke gleichzeitig den B-Knopf und\n"
# 321 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "das Steuerkreuz, um zu springen.\p"
# 322 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Drücke das + Steuerkreuz seitlich, um\n"
# 323 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "einen seitlichen Sprung auszuführen.\p"
# 324 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Drücke es nach hinten, um die Richtung\n"
# 325 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zu ändern.\p"
# 326 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Eine andere Seite lesen?$"
