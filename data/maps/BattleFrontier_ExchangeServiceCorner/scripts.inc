# 1 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 2 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_MapScripts::
# 3 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 5 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
.macro setitemandprice item:req, price:req
# 6 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8009, \item
# 7 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8008, \price
# 8 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
.endm
# 9 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 10 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
# 12 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowBattlePointsWindow
# 13 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 14 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 15 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
# 16 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 21 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
# 22 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 23 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 28 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkdecorspace VAR_0x8009
# 39 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 42 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	adddecoration VAR_0x8009
# 43 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 44 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 45 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
# 46 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 47 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 48 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
# 51 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 54 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 56 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkitemspace VAR_0x8009
# 58 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
# 59 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 60 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 61 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	additem VAR_0x8009
# 62 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 63 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 64 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
# 65 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 66 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 67 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 69 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
# 70 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 72 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 83 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
# 84 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
# 85 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 86 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 87 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 88 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
# 90 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
# 93 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
# 94 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
# 95 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
# 96 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
# 97 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
# 99 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 103 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1::
# 104 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8009
# 105 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 106 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 107 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 108 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
# 111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_KISS_POSTER, 16
# 112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_KISS_CUSHION, 32
# 116 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 117 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 118 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
# 119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_SMOOCHUM_DOLL, 32
# 120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_TOGEPI_DOLL, 48
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 125 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 126 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
# 127 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_MEOWTH_DOLL, 48
# 128 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 129 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CLEFAIRY_DOLL, 48
# 132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 134 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
# 135 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_DITTO_DOLL, 48
# 136 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 137 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 138 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
# 139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CYNDAQUIL_DOLL, 80
# 140 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 141 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 142 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CHIKORITA_DOLL, 80
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 146 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_TOTODILE_DOLL, 80
# 148 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1
# 149 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 150 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
# 151 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 152 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 153 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 154 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 155 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 156 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 157 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 158 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
# 159 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
# 160 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 161 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 162 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 163 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
# 165 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
# 166 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
# 167 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
# 168 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
# 169 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 170 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 171 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2::
# 174 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_0x8009
# 175 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 176 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
# 181 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_LAPRAS_DOLL, 128
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 184 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
# 185 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_SNORLAX_DOLL, 128
# 186 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 187 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 188 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
# 189 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_VENUSAUR_DOLL, 256
# 190 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 191 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CHARIZARD_DOLL, 256
# 194 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 195 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 196 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_BLASTOISE_DOLL, 256
# 198 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2
# 199 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 200 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
# 201 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 202 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 203 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 204 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 205 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 206 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 207 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 208 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
# 209 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
# 210 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 211 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 212 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 213 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 214 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Protein
# 215 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_Calcium
# 216 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_Iron
# 217 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_Zinc
# 218 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Carbos
# 219 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_HPUp
# 220 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 221 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 222 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 223 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 224 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin::
# 225 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8009
# 226 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 227 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 228 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 229 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 231 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Protein::
# 232 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_PROTEIN, 1
# 233 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 234 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 235 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Calcium::
# 236 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CALCIUM, 1
# 237 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 238 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 239 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Iron::
# 240 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_IRON, 1
# 241 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 242 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 243 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Zinc::
# 244 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_ZINC, 1
# 245 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 246 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 247 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Carbos::
# 248 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CARBOS, 1
# 249 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 250 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 251 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HPUp::
# 252 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_HP_UP, 1
# 253 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin
# 254 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 255 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 256 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
# 257 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 258 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 259 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
# 260 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 261 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 263 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 264 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
# 265 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
# 266 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 268 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 269 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 270 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
# 271 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
# 272 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw
# 273 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
# 274 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder
# 275 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
# 276 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock
# 277 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand
# 278 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens
# 279 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 280 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 281 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 283 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem::
# 284 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8009
# 285 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 286 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 287 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 288 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 289 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 290 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
# 291 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_LEFTOVERS, 48
# 292 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 293 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 294 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
# 295 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_WHITE_HERB, 48
# 296 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 297 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 298 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw::
# 299 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_QUICK_CLAW, 48
# 300 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 301 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 302 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
# 303 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_MENTAL_HERB, 48
# 304 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 305 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 306 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder::
# 307 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_BRIGHT_POWDER, 64
# 308 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 309 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 310 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
# 311 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CHOICE_BAND, 64
# 312 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 313 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 314 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock::
# 315 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_KINGS_ROCK, 64
# 316 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 317 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 318 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand::
# 319 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_FOCUS_BAND, 64
# 320 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 321 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens::
# 323 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_SCOPE_LENS, 64
# 324 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem
# 325 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 326 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Man::
# 327 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
# 328 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 329 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 330 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
# 331 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
# 332 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 334 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
# 335 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 336 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
# 337 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 338 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 339 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 340 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
# 341 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
# 342 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 344 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
# 345 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
# 346 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 347 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 348 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
# 349 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hallo, dies ist die Tauschecke.\p"
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Wir tauschen deine Gewinnpunkte gegen\n"
# 351 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "großartige Preise ein.\p"
# 352 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Bitte such dir einen Preis von dieser\n"
# 353 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Liste aus.$"
# 354 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 355 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
@ Unused
# 356 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize:
# 357 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Bitte wähle einen Preis\n"
# 358 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "von dieser Liste.$"
# 359 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase:
# 361 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Du möchtest das {STR_VAR_1}\n"
# 362 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "haben?$"
# 363 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 364 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
# 365 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Danke!\n"
# 366 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Wir senden das auf deinen PC.$"
# 367 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 368 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
# 369 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Bitte, hier ist dein Preis.$"
# 370 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 371 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
# 372 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Es tut mir sehr Leid… Aber\n"
# 373 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "du hast nicht genug Gewinnpunkte…$"
# 374 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 375 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PCIsFull:
# 376 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Es tut mir sehr Leid…\n"
# 377 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Aber dein PC ist voll…$"
# 378 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 379 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
# 380 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Es tut mir sehr Leid…\n"
# 381 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Aber du hast keinen Platz dafür…$"
# 382 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 383 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
# 384 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Vielen Dank.\p"
# 385 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Bitte komm wieder, wenn du \n"
# 386 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "dich entschieden hast.$"
# 387 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 388 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
# 389 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Oh, die sind so hübsch.\n"
# 390 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Die hätte ich auch gerne!\l"
# 391 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Niedliche Kissen!\l"
# 392 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Große, fluffige Puppen!\l"
# 393 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Kleine, fluffige Puppen!\l"
# 394 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Ich würde sie am liebsten alle nehmen!$"
# 395 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 396 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
# 397 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Überlass das deiner Mami!\p"
# 398 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Möchtest du irgendetwas haben, werde\n"
# 399 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "ich alles tun, damit du es bekommst.$"
# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 401 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
# 402 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hätte ich nur eines dieser Items hier,\n"
# 403 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "würden meine Pokémon viel stärker!\p"
# 404 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Mit Sicherheit! Darauf kannst du\n"
# 405 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "wetten! Das steht fest!$"
# 406 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 407 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
# 408 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hey?\n"
# 409 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Was glotzt du denn so doof?\p"
# 410 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Ich mag es nicht, wie du meine\n"
# 411 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Plüschpuppe anstarrst!\p"
# 412 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Wenn du auch so eine haben willst,\n"
# 413 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "besorg dir eine! Nicht wahr, Kussilla?$"
# 414 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 415 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
# 416 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Weißt du was?\n"
# 417 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Wenn du deine Ergebnisse hier in den\p"
# 418 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Kampf-Einrichtungen stetig\n"
# 419 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "verbesserst, geben sie dir mehr\l"
# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Gewinnpunkte.$"
# 421 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 422 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
# 423 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Ein großes Poster von Kussilla.$"
# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 425 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
# 426 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Kussilla-Kissen.\n"
# 427 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Für eine Matte oder den Tisch.$"
# 428 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
# 430 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Kussilla-Puppe.\n"
# 431 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Für eine Matte oder den Tisch.$"
# 432 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 433 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Togepi-Puppe. Leg sie auf eine Matte\n"
# 435 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "oder einen Tisch.$"
# 436 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 437 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
# 438 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Mauzi-Puppe. Leg sie auf eine Matte\n"
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "oder einen Tisch.$"
# 440 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 441 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
# 442 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Piepi-Puppe. Leg sie auf eine Matte\n"
# 443 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "oder einen Tisch.$"
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 445 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
# 446 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Ditto-Puppe. Leg sie auf eine Matte\n"
# 447 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "oder einen Tisch.$"
# 448 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 449 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
# 450 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Feurigel-Puppe.\n"
# 451 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Für eine Matte oder den Tisch.$"
# 452 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 453 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
# 454 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Endivie-Puppe. Leg sie auf eine Matte\n"
# 455 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "oder einen Tisch.$"
# 456 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 457 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
# 458 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Karnimani-Puppe.\n"
# 459 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Für eine Matte oder den Tisch.$"
# 460 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 461 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
# 462 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Große Puppe. Leg sie auf eine Matte\n"
# 463 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "oder den Tisch.$"
# 464 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 465 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
# 466 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hebt den Angr.-Wert eines Pokémon.$"
# 467 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 468 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
# 469 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hebt den Sp. Angr.-Wert eines Pokémon.$"
# 470 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 471 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
# 472 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hebt den Vert.-Wert eines Pokémon.$"
# 473 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 474 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
# 475 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hebt den Sp. Vert.-Wert eines Pokémon.$"
# 476 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 477 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
# 478 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hebt den Init.-Wert eines Pokémon.$"
# 479 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 480 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
# 481 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hebt die KP eines Pokémon.$"
# 482 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 483 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
# 484 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) füllt im Kampf langsam\n"
# 485 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "KP wieder auf.$"
# 486 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 487 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
# 488 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) hebt jede\n"
# 489 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Statusveränderung auf.$"
# 490 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 491 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
# 492 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) hebt die\n"
# 493 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Erstschlagquote.$"
# 494 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 495 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
# 496 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) erlöst Pokémon von der\n"
# 497 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Anziehung.$"
# 498 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 499 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
# 500 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) senkt die Genauigkeit\n"
# 501 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "des Gegners.$"
# 502 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 503 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
# 504 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Stärkt eine Attacke. Aber nur diese\n"
# 505 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "ist einsetzbar.$"
# 506 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 507 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
# 508 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) kann Gegner\n"
# 509 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "zurückweichen lassen.$"
# 510 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 511 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
# 512 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) kann manchmal K.O.\n"
# 513 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "verhindern.$"
# 514 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 515 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
# 516 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Item (Tragen) erhöht die\n"
# 517 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Volltrefferquote.$"
