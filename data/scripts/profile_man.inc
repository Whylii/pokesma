ProfileMan_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_SYS_CHAT_USED, ProfileMan_EventScript_GivenProfileBefore
	msgbox ProfileMan_Text_CollectTrainerProfiles, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_AskToSeeProfile::
	msgbox ProfileMan_Text_MayISeeYourProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateProfile
	case 1, ProfileMan_EventScript_DeclineShowProfile
	case 2, ProfileMan_EventScript_Info
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineShowProfile
	end

ProfileMan_EventScript_Info::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_CreateProfile::
	msgbox ProfileMan_Text_LetsSeeItThen, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_CancelShowProfile::
	msgbox ProfileMan_Text_NotIntoItRightNow, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_ShowProfile::
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox ProfileMan_Text_FantasticProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_DeclineShowProfile::
	msgbox ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_GivenProfileBefore::
	msgbox ProfileMan_Text_YouHaveWonderfulSmile, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_AskToSeeNewProfile::
	msgbox ProfileMan_Text_MayISeeYourNewProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateNewProfile
	case 1, ProfileMan_EventScript_DeclineNewProfile
	case 2, ProfileMan_EventScript_InfoNewProfile
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineNewProfile
	end

ProfileMan_EventScript_InfoNewProfile::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_CreateNewProfile::
	msgbox ProfileMan_Text_EvenBetterThanLastProfile, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_DeclineNewProfile::
	msgbox ProfileMan_Text_LikeProfileWayItIs, MSGBOX_DEFAULT
	release
	end

@ Unused
ProfileMan_EventScript_Ret::
	return

ProfileMan_Text_CollectTrainerProfiles:
	.string "Hallo, Trainer!\n"
	.string "Du hast ein wunderbares Lächeln.\p"
	.string "Ich sammle als Hobby die Profile\n"
	.string "von Pokémon-Trainern.$"

ProfileMan_Text_MayISeeYourProfile:
	.string "Also, wie ist es?\n"
	.string "Darf ich dein Profil sehen?$"

ProfileMan_Text_EasyChatExplanation:
	.string "Dein Profil erstellst du aus vier\n"
	.string "Wörtern oder Sätzen.\p"
	.string "Hier zeige ich dir ein Beispiel\n"
	.string "für ein Profil aus vier Texten.\p"
	.string "Du kannst die vier Teile beliebig\n"
	.string "austauschen, um dein Profil zu gestalten.\p"
	.string "Es gibt viele Textteile zur Auswahl.\p"
	.string "Sie sind in Gruppen wie Pokémon,\n"
	.string "Lebensstile und Hobbys unterteilt.\p"
	.string "Wähle zuerst die Gruppe, um eine\n"
	.string "Liste der Auswahlmöglichkeiten zu sehen.\p"
	.string "Wähle dann den gewünschten Eintrag.\p"
	.string "Wiederhole das für die restlichen\n"
	.string "Textteile, und schon hast du dein Profil.$"

ProfileMan_Text_LetsSeeItThen:
	.string "Ja! Danke!\n"
	.string "Dann lass mal sehen.$"

ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile:
	.string "Oh, nein, wirklich?\p"
	.string "Ich stelle mir vor, jemand wie du\n"
	.string "hätte ein wunderbares Profil…$"

ProfileMan_Text_NotIntoItRightNow:
	.string "Oh? Du hast jetzt keine Lust?\p"
	.string "Na, jederzeit gern!$"

ProfileMan_Text_YouHaveWonderfulSmile:
	.string "Hallo, Trainer!\n"
	.string "Du hast ein wunderbares Lächeln.$"

ProfileMan_Text_MayISeeYourNewProfile:
	.string "Darf ich dein neues Profil sehen?$"

ProfileMan_Text_EvenBetterThanLastProfile:
	.string "Ja! Danke!\p"
	.string "Ich hoffe, es ist noch besser als\n"
	.string "das Profil, das du mir vorher gezeigt hast.$"

ProfileMan_Text_LikeProfileWayItIs:
	.string "Oh, du magst dein Profil so, wie es ist.\p"
	.string "Das kann ich verstehen – es ist so\n"
	.string "bereits wunderbar.$"

ProfileMan_Text_FantasticProfile:
	.string "F-fantastisch!\p"
	.string "Dein Profil ist wundervoll!\n"
	.string "Es sagt wirklich aus, wer du bist.\p"
	.string "Jeder, der das hört, wird von\n"
	.string "dir begeistert sein!\p"
	.string "Danke!$"

@ Unused
ProfileMan_Text_YouKnowSecretSaying:
	.string "Oh?\n"
	.string "Du kennst den geheimen Spruch!\p"
	.string "Das bedeutet, du bist jetzt Mitglied\n"
	.string "im Mysteriöses-Ereignis-Club!$"
