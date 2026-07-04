.equ GAVE_PROFILE,  VAR_TEMP_1

MysteryEventClub_EventScript_Woman::
	lock
	faceplayer
	goto_if_eq GAVE_PROFILE, TRUE, EventScript_AlreadyGaveProfile
	goto_if_set FLAG_SYS_SET_TRAINER_CARD_PROFILE, EventScript_GivenProfileBefore
	msgbox Text_IdLoveToHearYourProfile
	goto EventScript_AskForProfile
	end

EventScript_AlreadyGaveProfile:
	msgbox Text_TellMoreNextTime
	release
	end

EventScript_AskForProfile:
	message Text_TellMeWhatsYourProfile
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveProfile
	case 1, EventScript_DeclineGiveProfile
	case 2, EventScript_ProfileInfo
	case MULTI_B_PRESSED, EventScript_DeclineGiveProfile
	end

EventScript_ProfileInfo:
	msgbox Text_ExplainProfile
	goto EventScript_AskForProfile
	end

EventScript_AcceptGiveProfile:
	msgbox Text_WhatsYourProfile
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_CancelGiveProfile:
	msgbox Text_DecidedNotTo
	release
	end

EventScript_GaveProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox Text_ProfileSaysSomethingAboutYou
	release
	end

EventScript_DeclineGiveProfile:
	msgbox Text_DontBeLikeThat
	release
	end

EventScript_GivenProfileBefore:
	msgbox Text_HiWeMeetAgain
	goto EventScript_AskForNewProfile
	end

EventScript_AskForNewProfile:
	message Text_ChangeYourProfile
	waitmessage
	multichoice 18, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveNewProfile
	case 1, EventScript_DeclineGiveNewProfile
	case 2, EventScript_ProfileInfo2
	@case MULTI_B_PRESSED, EventScript_DeclineGiveNewProfile
	end

EventScript_ProfileInfo2:
	msgbox Text_ExplainProfile
	goto EventScript_AskForNewProfile
	end

EventScript_AcceptGiveNewProfile:
	msgbox Text_WhatAreYouLikeNow
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_DeclineGiveNewProfile:
	msgbox Text_LikeProfileWayItIs
	release
	end

EventScript_GaveSpecialProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox Text_HeardThatBefore
	release
	end

EventScript_GiveProfile:
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_0x8004, 0, EventScript_GaveSpecialProfile
	goto_if_eq VAR_RESULT, FALSE, EventScript_CancelGiveProfile
	goto_if_eq VAR_RESULT, TRUE, EventScript_GaveProfile
	end

Text_IdLoveToHearYourProfile:
	.string "Hi, freut mich!\p"
	.string "…Das ist aber nicht nett.\n"
	.string "Wie wär's mit einem Hallo?\p"
	.string "Na komm, erzähl mir von dir.\p"
	.string "Ich würde gern dein Profil hören!$"

Text_TellMeWhatsYourProfile:
	.string "Erzähl mir was Gutes über\n"
	.string "dich. Wie lautet dein Profil?$"

Text_ExplainProfile:
	.string "Ein Profil besteht aus vier\n"
	.string "Wörtern oder Sätzen.\p"
	.string "Es gibt viele Wörter zur Auswahl\n"
	.string "für dein Profil.\p"
	.string "Die Wörter sind in praktische\n"
	.string "Gruppen eingeteilt.\p"
	.string "Wähle zuerst eine Gruppe, dann\n"
	.string "ein Wort oder einen Satz.\p"
	.string "…Es ist einfacher, als es klingt.\n"
	.string "Probier es doch mal aus?$"

Text_WhatsYourProfile:
	.string "Wie lautet dein Profil?$"

Text_DontBeLikeThat:
	.string "Oh… Sei nicht so.\n"
	.string "Du kannst mir dein Profil verraten.$"

Text_DecidedNotTo:
	.string "Oh, hast du dich dagegen entschieden?\n"
	.string "Du bist aber wankelmütig.$"

Text_HiWeMeetAgain:
	.string "Hi!\n"
	.string "Wir sehen uns wieder!$"

Text_ChangeYourProfile:
	.string "Möchtest du dein Profil\n"
	.string "ändern?$"

Text_WhatAreYouLikeNow:
	.string "Wie bist du jetzt?\n"
	.string "Das würde ich gern wissen.$"

Text_LikeProfileWayItIs:
	.string "Okay, du magst dein Profil so,\n"
	.string "wie es ist.\p"
	.string "Finde ich auch.$"

Text_ProfileSaysSomethingAboutYou:
	.string "Hmhm…\p"
	.string "Dein Profil sagt wirklich etwas\n"
	.string "darüber aus, wer du bist.\p"
	.string "Jetzt, wo ich dich besser kenne,\n"
	.string "sind wir noch bessere Freunde!$"

Text_HeardThatBefore:
	.string "Oh, das hab ich schon mal gehört…\p"
	.string "Mein Cousin, der weit weg wohnt,\n"
	.string "hat das früher immer gesagt.$"

Text_TellMoreNextTime:
	.string "Erzähl mir nächstes Mal mehr\n"
	.string "von dir!$"
