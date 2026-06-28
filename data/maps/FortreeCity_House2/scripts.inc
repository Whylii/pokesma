# 1 "data/maps/FortreeCity_House2/scripts.pory"

# 2 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_MapScripts::
# 3 "data/maps/FortreeCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House2/scripts.pory"

# 5 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_HiddenPowerGiver::
# 6 "data/maps/FortreeCity_House2/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_ExplainHiddenPower
# 9 "data/maps/FortreeCity_House2/scripts.pory"
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 11 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 12 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 14 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 16 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/FortreeCity_House2/scripts.pory"
	case 1, FortreeCity_House2_EventScript_WrongGuess
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/FortreeCity_House2/scripts.pory"
	case 0, FortreeCity_House2_EventScript_WrongGuess
# 22 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
# 23 "data/maps/FortreeCity_House2/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 25 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 26 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 28 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 29 "data/maps/FortreeCity_House2/scripts.pory"

# 30 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_Greeting::
# 31 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 32 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	return
# 34 "data/maps/FortreeCity_House2/scripts.pory"

# 35 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_ExplainHiddenPower::
# 36 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 37 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 38 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 39 "data/maps/FortreeCity_House2/scripts.pory"

# 40 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_EventScript_WrongGuess::
# 41 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 42 "data/maps/FortreeCity_House2/scripts.pory"
	release
# 43 "data/maps/FortreeCity_House2/scripts.pory"
	end
# 44 "data/maps/FortreeCity_House2/scripts.pory"

# 45 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_HiddenPowersArousedByNature:
# 46 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Menschen… Pokémon…\p"
# 47 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Ihre versteckten Kräfte werden durch\n"
# 48 "data/maps/FortreeCity_House2/scripts.pory"
	.string "das Leben in der Natur geweckt.$"
# 49 "data/maps/FortreeCity_House2/scripts.pory"

# 50 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CoinInWhichHand:
# 51 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Lass diese alte Frau mal sehen, ob deine\n"
# 52 "data/maps/FortreeCity_House2/scripts.pory"
	.string "versteckten Kräfte erwacht sind…\p"
# 53 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Ich halte eine Münze in meiner Hand.\p"
# 54 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Nun? In welcher Hand halte ich sie?\n"
# 55 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In der linken oder rechten Hand?$"
# 56 "data/maps/FortreeCity_House2/scripts.pory"

# 57 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand:
# 58 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Das stimmt!\p"
# 59 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Versuchen wir es noch einmal.\p"
# 60 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In welcher Hand halte ich die Münze?\n"
# 61 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Rechts oder links?$"
# 62 "data/maps/FortreeCity_House2/scripts.pory"

# 63 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
# 64 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Schon wieder richtig!\p"
# 65 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Probieren wir es noch einmal.\p"
# 66 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In welcher Hand ist die Münze nun?\n"
# 67 "data/maps/FortreeCity_House2/scripts.pory"
	.string "In der linken oder der rechten Hand?$"
# 68 "data/maps/FortreeCity_House2/scripts.pory"

# 69 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YourHiddenPowerHasAwoken:
# 70 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Hervorragend!\n"
# 71 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Deine versteckten Kräfte sind erwacht!\p"
# 72 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Hier, das ist für dich. Wecke damit die\n"
# 73 "data/maps/FortreeCity_House2/scripts.pory"
	.string "versteckten Kräfte deiner Pokémon.$"
# 74 "data/maps/FortreeCity_House2/scripts.pory"

# 75 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_ExplainHiddenPower:
# 76 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Kraftreserve ist eine Attacke, die je\n"
# 77 "data/maps/FortreeCity_House2/scripts.pory"
	.string "nach Pokémon anders aussieht.$"
# 78 "data/maps/FortreeCity_House2/scripts.pory"

# 79 "data/maps/FortreeCity_House2/scripts.pory"
FortreeCity_House2_Text_YouGuessedWrong:
# 80 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Och, zu schade!\n"
# 81 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Du hast falsch geraten.$"
