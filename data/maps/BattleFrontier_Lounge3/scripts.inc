# 1 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_5,  5
# 6 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_10, 10
# 7 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.set BET_AMOUNT_15, 15
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 9 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Gambler::
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_AlreadyMetGambler
# 13 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_le VAR_0x8004, 2, BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols
# 15 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
# 16 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 18 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
# 21 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerLookingMessage
# 22 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 26 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
# 27 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 28 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 29 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 31 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
# 36 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
# 37 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_Bet5
# 39 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_Bet10
# 40 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_Bet15
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_CancelBet
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_CancelBet
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet5::
# 46 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_5
# 47 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 48 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet10::
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_10
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 53 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Bet15::
# 56 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, BET_AMOUNT_15
# 57 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 60 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_TryPlaceBet::
# 61 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 62 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge3_EventScript_PlaceBet
# 63 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
# 64 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 65 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 66 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
# 67 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 69 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PlaceBet::
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
# 72 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 73 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special UpdateBattlePointsWindow
# 74 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	playse SE_SHOP
# 75 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FinishBet
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 79 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FinishBet::
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 84 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 87 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
# 88 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, 0
# 89 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 90 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 94 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 95 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount
# 96 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 97 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 98 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AddSilverSymbolCount::
# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
# 100 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_NotEnoughSilverSymbols::
# 103 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 105 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 107 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_ge VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_CheckBetResults
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
# 111 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 113 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CheckBetResults::
# 114 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET, BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted
# 115 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_eq VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON, BattleFrontier_Lounge3_EventScript_WonChallenge
# 116 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_LostChallenge
# 117 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_WonChallenge::
# 120 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_RewardBet5
# 122 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_RewardBet10
# 123 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call_if_eq VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_RewardBet15
# 124 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
# 125 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special GiveFrontierBattlePoints
# 126 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 129 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 130 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 131 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_LostChallenge::
# 132 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
# 134 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 135 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 137 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet5::
# 138 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_5 * 2)
# 139 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_5 * 2)
# 140 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 141 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 142 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet10::
# 143 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_10 * 2)
# 144 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_10 * 2)
# 145 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_RewardBet15::
# 148 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, (BET_AMOUNT_15 * 2)
# 149 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, (BET_AMOUNT_15 * 2)
# 150 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	return
# 151 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 152 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_ChallengeNotAttempted::
# 153 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 156 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 158 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 159 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_DeclineChallenge::
# 160 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 162 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 163 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 164 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_CancelBet::
# 165 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 166 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 169 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Man::
# 170 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
# 171 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_Woman::
# 174 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 175 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 176 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 178 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 180 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_PokefanF::
# 181 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 182 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 183 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 185 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 187 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FatMan::
# 188 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock
# 189 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	faceplayer
# 190 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
# 191 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_FaceOriginalDirection
# 192 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 194 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_EventScript_FaceOriginalDirection::
# 195 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	closemessage
# 196 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 197 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmovement 0
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	release
# 199 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	end
# 200 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 201 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
# 202 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Was willst du von uns?!\p"
# 203 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Siehst du nicht, dass wir beschäftigt\n"
# 204 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "sind? Hat das nicht Zeit bis später?$"
# 205 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 206 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
# 207 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh…\n"
# 208 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du siehst wie ein starker Trainer aus.\p"
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hehehe… Pass auf, ich\n"
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mach dir folgenden Vorschlag:\p"
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Wir haben hier eine Gruppe gebildet\n"
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "und wir nutzen bei unserem Spiel aus,\l"
# 213 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "was hier in der Kampfzone so\p"
# 214 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "passiert. Die Regeln sind ganz einfach.\p"
# 215 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Als Erstes suchen wir uns hier eine\n"
# 216 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampfstätte aus.\p"
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Dann bestimmen wir einen Trainer,\n"
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "der die Herausforderung dieser\l"
# 219 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Einrichtung annimmt und wetten um\p"
# 220 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "unsere Gewinnpunkte. Derjenige, der\n"
# 221 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "auf den besten Trainer gesetzt hat,\l"
# 222 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "gewinnt die Gewinnpunkte.\p"
# 223 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hört sich einfach an, nicht wahr?\n"
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Nun, kommen wir zum Punkt…$"
# 225 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 226 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
# 227 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 228 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Einzelkämpfe im Duellturm\n"
# 230 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 231 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 232 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 233 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 238 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Doppelkämpfe im Duellturm\n"
# 239 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 240 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 241 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 242 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 243 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 246 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 247 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Multikämpfe im Duellturm\n"
# 248 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 249 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 251 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 252 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 253 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
# 254 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 255 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung eines\p"
# 256 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Einzelkampf-Turniers des\n"
# 257 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampfstadions zu stellen.\p"
# 258 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 259 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 260 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 262 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
# 263 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 264 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung eines\p"
# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Doppelkampf-Turniers des\n"
# 266 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampfstadions zu stellen.\p"
# 267 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 268 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 269 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 270 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
# 272 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 273 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung des\p"
# 274 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Einzel-Wechselkampf-Turniers der\n"
# 275 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampffabrik zu stellen.\p"
# 276 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 277 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 278 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 279 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 280 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
# 281 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 282 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung des\p"
# 283 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Doppel-Wechselkampf-Turniers der\n"
# 284 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampffabrik zu stellen.\p"
# 285 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 286 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 287 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 288 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 289 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
# 290 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 291 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 292 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Einzelkampf-Hallen des Kampfpalastes\n"
# 293 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 294 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 295 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 296 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 297 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 298 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
# 299 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 300 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 301 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Doppelkampf-Hallen des Kampfpalastes\n"
# 302 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 303 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 304 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 305 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 306 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 307 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattleArena::
# 308 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 309 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 310 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "K.O.-Teamturniere des Kampfrings\n"
# 311 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 312 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 313 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 314 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 315 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 316 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePike::
# 317 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 318 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 319 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampfbahn der Kampfipitis\n"
# 320 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 321 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 322 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 323 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 324 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 325 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
# 326 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich suche einen Trainer, der bereit\n"
# 327 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ist, sich der Herausforderung der\p"
# 328 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kampfforschung der Kampfpyramide\n"
# 329 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zu stellen.\p"
# 330 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Aber bisher ist mir noch kein Trainer\n"
# 331 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ins Auge gefallen, dessen Qualitäten\l"
# 332 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "mich überzeugt hätten.$"
# 333 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 334 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
# 335 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich achte darauf, dass auch du einen\n"
# 336 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Vorteil daraus ziehen kannst. Also, wie\l"
# 337 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "sieht es aus? Kämpfst du für mich?$"
# 338 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 339 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
# 340 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Sehr schön! Perfekt!\n"
# 341 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Äh… Wie wäre es, wenn du mir einige\l"
# 342 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "deiner Gewinnpunkte als Einsatz gibst?\p"
# 343 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Vertrau mir! Es soll dein Schaden\n"
# 344 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "nicht sein!$"
# 345 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 346 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
# 347 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Sehr gut! Sehr gut!\n"
# 348 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Und wie hoch ist dein Einsatz?$"
# 349 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 350 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
# 351 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, nein, nein, nein!\n"
# 352 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du hast nicht genug Gewinnpunkte!\p"
# 353 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich wünschte, du würdest hier nicht\n"
# 354 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "den Affen machen und die Zeit anderer\l"
# 355 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Leute vergeuden!$"
# 356 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 357 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThanksOffYouGo::
# 358 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh! Vielen Dank!\n"
# 359 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Und los geht's!$"
# 360 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 361 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
# 362 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Stell dich in den\n"
# 363 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "EinzelkämpfeN des Duellturms!\p"
# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 365 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 366 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 367 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 368 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
# 369 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh in die Räume für die\n"
# 370 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Doppelkämpfe des Duellturms!\p"
# 371 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 372 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 373 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 374 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 375 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
# 376 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh in die Multikampf-\n"
# 377 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "räume des Duellturms!\p"
# 378 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 379 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 380 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 381 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 382 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
# 383 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zum Einzelkampf-\n"
# 384 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Turnier des Kampfstadions!\p"
# 385 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 386 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 387 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 388 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 389 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
# 390 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zum Doppelkampf-\n"
# 391 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Turnier des Kampfstadions!\p"
# 392 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 393 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 394 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 395 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 396 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
# 397 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zum Einzel-Wechsel-\n"
# 398 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "kampf-Turnier der Kampffabrik!\p"
# 399 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 400 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 401 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 402 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 403 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
# 404 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zum Doppel-Wechsel-\n"
# 405 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "kampf-Turnier der Kampffabrik!\p"
# 406 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 407 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 408 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 409 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 410 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
# 411 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zu den Einzelkampf-\n"
# 412 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hallen des Kampfpalastes!\p"
# 413 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 414 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 415 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 416 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 417 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
# 418 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zu den Doppelkampf-\n"
# 419 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hallen des Kampfpalastes!\p"
# 420 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 421 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 422 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 423 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 424 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattleArena::
# 425 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zum K.O.-Teamturnier\n"
# 426 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "des Kampfrings!\p"
# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 428 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 429 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 430 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 431 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePike::
# 432 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zur Kampfbahn\n"
# 433 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "der Kampfipitis!\p"
# 434 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 435 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 436 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 437 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 438 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_GetToBattlePyramid::
# 439 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Beeil dich! Geh zur Kampfforschung\n"
# 440 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "der Kampfpyramide!\p"
# 441 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Du musst einfach gewinnen!\n"
# 442 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Verpatz es nicht!\l"
# 443 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unser beider Zukunft hängt von dir ab!$"
# 444 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 445 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
# 446 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, du bist es…\n"
# 447 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Netter Versuch…\p"
# 448 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich enttäusch dich nur ungern, aber\n"
# 449 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ich kann dir deine Gewinnpunkte nicht\l"
# 450 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "zurückgeben…\p"
# 451 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich denke, wir sollten dies als Ansporn\n"
# 452 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "nehmen, uns in Zukunft mehr\l"
# 453 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "anzustrengen.$"
# 454 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 455 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
# 456 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, ja!\n"
# 457 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Da kommt der Champ!\p"
# 458 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich wusste, du würdest es schaffen!\n"
# 459 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich wusste es!\l"
# 460 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Wir beide sind Gewinnertypen!\p"
# 461 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Hier sind deine Gewinnpunkte - und\n"
# 462 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "ein kleiner Gewinn für mich!$"
# 463 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 464 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
# 465 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{PLAYER} erhält {STR_VAR_1} Gewinnpunkt(e).$"
# 466 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 467 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
# 468 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Wenn es dich wieder nach einer Heraus-\n"
# 469 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "forderung dürstet, denk an mich!$"
# 470 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 471 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_NotInterested::
# 472 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kein Interesse? Ich hätte nicht\n"
# 473 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "gedacht, dass du so ein Angsthase bist.$"
# 474 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 475 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_Oh::
# 476 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh…$"
# 477 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 478 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_BackedWrongTrainer::
# 479 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ich habe schon wieder den falschen\n"
# 480 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Trainer unterstützt!\p"
# 481 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Vielleicht sollte ich es mal mit Kämpfen\n"
# 482 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "versuchen, so wie jeder andere auch?$"
# 483 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 484 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
# 485 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Dieser Trainer…\p"
# 486 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Er ist gut, aber er verliert in Kämpfen\n"
# 487 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "schnell die Fassung und verliert dann\l"
# 488 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "im Kampfstadion…$"
# 489 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 490 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
# 491 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Kicher! Ich erkenne\n"
# 492 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "einen Sieger, wenn ich ihn sehe!$"
# 493 "data/maps/BattleFrontier_Lounge3/scripts.pory"

# 494 "data/maps/BattleFrontier_Lounge3/scripts.pory"
BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
# 495 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Diese Trainer…\n"
# 496 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Was machen die da? Sie sollten\l"
# 497 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "sich lieber Herausforderungen stellen!$"
