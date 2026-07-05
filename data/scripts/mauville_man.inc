MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldMan::
	special Script_GetCurrentMauvilleMan
	switch VAR_RESULT
	case MAUVILLE_MAN_BARD, MauvilleCity_PokemonCenter_1F_EventScript_Bard
	case MAUVILLE_MAN_HIPSTER, MauvilleCity_PokemonCenter_1F_EventScript_Hipster
	case MAUVILLE_MAN_TRADER, MauvilleCity_PokemonCenter_1F_EventScript_Trader
	case MAUVILLE_MAN_STORYTELLER, MauvilleCity_PokemonCenter_1F_EventScript_Storyteller
	case MAUVILLE_MAN_GIDDY, MauvilleCity_PokemonCenter_1F_EventScript_Giddy
	end

@ Bard
MauvilleCity_PokemonCenter_1F_EventScript_Bard::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_PlaySong
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong
	end

MauvilleCity_PokemonCenter_1F_EventScript_PlaySong::
	setvar VAR_0x8004, FALSE  @ Play his current song
	special PlayBardSong
	delay 60
	special HasBardSongBeenChanged
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	end

MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics::
	setvar VAR_0x8004, EASY_CHAT_TYPE_BARD_SONG
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, TRUE  @ Play the new song
	special PlayBardSong
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	special SaveBardSongLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2, MSGBOX_DEFAULT
	release
	end

@ Hipster
MauvilleCity_PokemonCenter_1F_EventScript_Hipster::
	lock
	faceplayer
	setflag FLAG_UNLOCKED_TRENDY_SAYINGS
	msgbox MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening, MSGBOX_DEFAULT
	special HasHipsterTaughtWord
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord::
	special HipsterTryTeachWord
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_TeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TeachWord::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord, MSGBOX_DEFAULT
	special SetHipsterTaughtWord
	release
	end

@ Trader
MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor:
	.string "Hi, ich bin der Händler.\n"
	.string "Deko mit mir tauschen?$"

MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues:
	.string "Oh...\n"
	.string "Du machst mich ganz traurig...$"

MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded:
	.string "Aber wir haben schon Deko getauscht,\n"
	.string "du und ich.$"

MauvilleCity_PokemonCenter_1F_Text_PickADecorItem:
	.string "Wenn du ein Dekostück von mir\n"
	.string "siehst, das du willst, sag Bescheid.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything:
	.string "Du willst nichts?\n"
	.string "Ich fühl mich unerwünscht...$"

MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt:
	.string "Dieses Dekostück gehörte einst\n"
	.string "{STR_VAR_1}.\p"
	.string "Möchtest du es?$"

MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor:
	.string "Äh... Moment mal. Du hast kein\n"
	.string "einziges Dekostück!$"

MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade:
	.string "Okay, such dir das Dekostück aus,\n"
	.string "das du mit mir tauschen willst.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade:
	.string "Du willst nicht mit mir tauschen?\n"
	.string "Ich fühl mich unerwünscht...$"

MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis:
	.string "Du hast schon alle {STR_VAR_2}, die du\n"
	.string "lagern kannst. Hier ist kein Platz mehr.$"

MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor:
	.string "Okay, also tauschen wir mein {STR_VAR_3}\n"
	.string "gegen dein {STR_VAR_2}?$"

MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse:
	.string "Das Dekostück wird gerade benutzt.\n"
	.string "Du kannst es nicht tauschen.$"

MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC:
	.string "Dann tauschen wir!\n"
	.string "Ich schick dir mein Dekostück an den PC.$"

MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne:
	.string "Hoppla! Sorry! Das ist ein wirklich\n"
	.string "seltenes Dekostück.\l"
	.string "Das kann ich nicht hergeben!\p"
	.string "Kann ich dir was anderes anbieten?$"

MauvilleCity_PokemonCenter_1F_EventScript_Trader::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade
	special GetTraderTradedFlag
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade::
	msgbox MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive::
	special TraderMenuGetDecoration
	goto_if_eq VAR_0x8004, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor
	goto_if_eq VAR_0x8004, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor
	special DoesPlayerHaveNoDecorations
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor::
	message MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor::
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive::
	msgbox MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade, MSGBOX_DEFAULT
	special TraderShowDecorationMenu
	goto_if_eq VAR_0x8006, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor
	goto_if_eq VAR_0x8006, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse
	special IsDecorationCategoryFull
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	special TraderDoDecorationTrade
	msgbox MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis, MSGBOX_DEFAULT
	release
	end

@ Storyteller
MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale:
	.string "Ich bin der Sagenerzähler.\n"
	.string "Ich erzähle Geschichten über\l"
	.string "legendäre Trainer.\p"
	.string "Willst du sie hören?$"

MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues:
	.string "Oh...\n"
	.string "Du machst mich ganz traurig...$"

MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell:
	.string "Ich kenne diese Sagen.\n"
	.string "Welche soll ich erzählen?$"

MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales:
	.string "Aber ich kenne keine legendären Trainer.\n"
	.string "Daher kenne ich keine Sagen.\p"
	.string "Wo findet man einen Trainer, der einer\n"
	.string "legendären Geschichte würdig ist?$"

MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes:
	.string "Was?!\n"
	.string "Du... Du...\p"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1} Mal?!\p"
	.string "Das ist wahrhaft prächtig!\n"
	.string "Da wird eine neue Legende geboren!$"

MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends:
	.string "Da frag ich mich, ob es andere Trainer\n"
	.string "mit noch beeindruckenderen Legenden\l"
	.string "gibt, die darauf warten entdeckt zu werden?$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales:
	.string "Bist du ein Trainer?\p"
	.string "Dann sag, hast du Geschichten, die\n"
	.string "auch nur annähernd legendär sind?$"

@ Unused
MauvilleCity_PokemonCenter_1F_Text_HearAnotherLegendaryTale:
	.string "Übrigens... Möchtest du eine weitere\n"
	.string "legendäre Geschichte hören?$"

MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend:
	.string "Hmm...\n"
	.string "Ich bin nicht zufrieden...\p"
	.string "Ich wünschte, du brächtest mir\n"
	.string "Neuigkeiten von legendärem Rang.$"

MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested:
	.string "Ich wünschte, mehr Leute wären an\n"
	.string "meinen Geschichten über legendäre\l"
	.string "Trainer interessiert.$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameTitle::
	.string "Der Speicher-lustige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameAction::
	.string "Das Spiel gespeichert$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer speicherte\n"
	.string "{STR_VAR_1} Mal!\p"
	.string "Einen vorsichtigeren Trainer als\n"
	.string "{STR_VAR_3} findet man nicht!$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedTitle::
	.string "Der Trendsetter-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedAction::
	.string "Trends gestartet$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer startete\n"
	.string "{STR_VAR_1} Trends!\p"
	.string "{STR_VAR_3} gibt den Ton an in der\n"
	.string "ganzen HOENN-Region!$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedTitle::
	.string "Der Beeren-pflanzende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedAction::
	.string "Beeren gepflanzt$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer pflanzte {STR_VAR_1} Mal\n"
	.string "Beeren!\p"
	.string "{STR_VAR_3} ist ein legendärer\n"
	.string "Beeren-Liebhaber!$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesTitle::
	.string "Der Fahrrad-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesAction::
	.string "Fahrräder getauscht$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer tauschte\n"
	.string "{STR_VAR_1} Mal das Fahrrad!\p"
	.string "{STR_VAR_3} liebt Fahrräder wohl\n"
	.string "über alles!$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsTitle::
	.string "Der interviewte Trainer$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsAction::
	.string "Wurde interviewt$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer wurde {STR_VAR_1} Mal\n"
	.string "interviewt!\p"
	.string "{STR_VAR_3} erregt wohl viel Aufmerksamkeit!$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesTitle::
	.string "Der kampfeslustige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesAction::
	.string "Mal gekämpft$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer kämpfte {STR_VAR_1} Mal!\p"
	.string "{STR_VAR_3} kann wohl nie einem Kampf\n"
	.string "aus dem Weg gehen!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtTitle::
	.string "Der Pokémon-fangende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtAction::
	.string "Pokémon gefangen$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory::
	.string "Dies ist die Geschichte eines Trainers\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer fing\n"
	.string "{STR_VAR_1} Pokémon!\p"
	.string "{STR_VAR_3} ist ein legendärer\n"
	.string "Pokémon-Fänger!$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtTitle::
	.string "Der Angler-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction::
	.string "Pokémon mit der Angel gefangen$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer angelte {STR_VAR_1} Pokémon!\p"
	.string "{STR_VAR_3} ist ein legendärer\n"
	.string "Angel-Experte!$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedTitle::
	.string "Der Eier-wärmende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction::
	.string "Eier ausgebrütet$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1} Pokémon\n"
	.string "ausgebrütet!\p"
	.string "{STR_VAR_3} ist ein legendärer\n"
	.string "Eierwärmer!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedTitle::
	.string "Der Entwickler-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedAction::
	.string "Pokémon entwickelt$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1} Pokémon\n"
	.string "entwickelt!\p"
	.string "{STR_VAR_3} ist der ultimative\n"
	.string "Pokémon-Entwickler!$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterTitle::
	.string "Der Pokémon-Center-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction::
	.string "Pokémon-Center benutzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1} Pokémon\n"
	.string "heilen lassen!\p"
	.string "Es gibt keinen größeren Pokémon-Center-\n"
	.string "Fan als {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeTitle::
	.string "Der Häuschen-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction::
	.string "Pokémon zu Hause ausgeruht$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat {STR_VAR_1} Pokémon\n"
	.string " daheim heilen lassen!\p"
	.string "Es gibt keinen größeren Heimat-\n"
	.string "Fan als {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesTitle::
	.string "Der Safari-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesAction::
	.string "Safari-Zone besucht$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer ging {STR_VAR_1} Mal in\n"
	.string "die Safari-Zone!\p"
	.string "{STR_VAR_3} kommt wohl in der Safari-Zone\n"
	.string "so richtig auf seine Kosten!$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutTitle::
	.string "Der Zerschneide-wütige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutAction::
	.string "Zerschneider eingesetzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer setzte {STR_VAR_1} Mal\n"
	.string "Zerschneider ein!\p"
	.string "{STR_VAR_3} liebt wohl Zerschneider!$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashTitle::
	.string "Der Stein-zerstörende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction::
	.string "Steine zertrümmert$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer zertrümmerte\n"
	.string "{STR_VAR_1} Mal Steine!\p"
	.string "{STR_VAR_3} kann wohl keinen Stein\n"
	.string "unzerstört lassen!$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesTitle::
	.string "Der Attacken-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesAction::
	.string "Geheim-Basis umgestellt$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer stellte die Geheim-Basis\n"
	.string "{STR_VAR_1} Mal um!\p"
	.string "{STR_VAR_3} liebt es wohl, oft\n"
	.string "umzuziehen!$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashTitle::
	.string "Der Platscher-lustige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashAction::
	.string "Platscher eingesetzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer setzte {STR_VAR_1} Mal\n"
	.string "Platscher ein!\p"
	.string "{STR_VAR_3} liebt wohl Platscher!$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleTitle::
	.string "Der beharrliche Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleAction::
	.string "Verzweiflung eingesetzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer setzte {STR_VAR_1} Mal\n"
	.string "Verzweiflung ein!\p"
	.string "{STR_VAR_3} gibt niemals auf!$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsTitle::
	.string "Der Slot-Champion$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsAction::
	.string "Jackpot am Slot gewonnen$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer gewann {STR_VAR_1} Mal\n"
	.string "den Jackpot am Slot!\p"
	.string "{STR_VAR_3} hatte einfach Glück\n"
	.string "am Slot!$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsTitle::
	.string "Der Roulette-Champion$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsAction::
	.string "Roulette-Siege in Folge:$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer gewann {STR_VAR_1} Mal\n"
	.string "in Folge beim Roulette.\p"
	.string "{STR_VAR_3} hatte Glück beim Kugelwurf\n"
	.string "im Roulette!$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesTitle::
	.string "Der Kampf-Turm-Herausforderer$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesAction::
	.string "Kampf-Turm-Herausforderung angenommen$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer forderte {STR_VAR_1} Mal\n"
	.string "den Kampf-Turm heraus!\p"
	.string "{STR_VAR_3} strebt nach Exzellenz\n"
	.string "im Kampf-Turm!$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksTitle::
	.string "Der Mixer-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksAction::
	.string "{POKEBLOCK} gemixt$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer mixte {STR_VAR_1} Mal\n"
	.string "{POKEBLOCK}!\p"
	.string "{STR_VAR_3} ist der absolute Meister\n"
	.string "im Beeren-Mixer!$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsTitle::
	.string "Der Wettbewerb-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsAction::
	.string "An Wettbewerben teilgenommen$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer nahm\n"
	.string "{STR_VAR_1}-mal an Wettbewerben teil!\p"
	.string "{STR_VAR_3} liebt es wohl, anderen\n"
	.string "seine Pokémon zu zeigen!$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsTitle::
	.string "Der Wettbewerb-Meister$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsAction::
	.string "Wettbewerbe gewonnen$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer gewann {STR_VAR_1} Mal\n"
	.string "einen Wettbewerb!\p"
	.string "{STR_VAR_3} ist ein unglaublicher\n"
	.string "Wettbewerbs-Meister!$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedTitle::
	.string "Der glückliche KäuferMal eingekauft$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedAction::
	.string "Shopped$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer kaufte {STR_VAR_1} Mal in\n"
	.string "Läden ein!\p"
	.string "{STR_VAR_3} muss zum Shoppen geboren sein.$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderTitle::
	.string "Der Item-findende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderAction::
	.string "Itemradar benutzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer nutzte {STR_VAR_1} Mal\n"
	.string "einen Itemradar!\p"
	.string "{STR_VAR_3} durchstöbert wohl gerne\n"
	.string "den Boden nach Items!$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedTitle::
	.string "Der regennasse Trainer$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedAction::
	.string "Wurde nass geregnet$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer wurde {STR_VAR_1} Mal\n"
	.string "regennass!\p"
	.string "{STR_VAR_3} zieht wohl mit seinem\n"
	.string "Charisma sogar Regen an!$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexTitle::
	.string "Der eifrige Pokédex-Leser$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexAction::
	.string "Einen Pokédex geprüft$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer befragte seinen Pokédex\n"
	.string "{STR_VAR_1}-mal!\p"
	.string "{STR_VAR_3} liebt es wohl,\n"
	.string "Pokémon im Pokédex zu registrieren!$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsTitle::
	.string "Der Band-Sammler$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsAction::
	.string "Bänder erhalten$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer erhielt {STR_VAR_1} Mal\n"
	.string "Bänder!\p"
	.string "{STR_VAR_3} sammelt wohl für sein Leben\n"
	.string "gerne Bänder!$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedTitle::
	.string "Der Klippen-springende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction::
	.string "Klippen runtergesprungen$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer sprang {STR_VAR_1} Mal\n"
	.string "Klippen runter!\p"
	.string "{STR_VAR_3} kann keiner Klippe\n"
	.string "widerstehen!$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle::
	.string "Der legendäre TV-Zuschauer$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction::
	.string "Fern gesehen$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer sah {STR_VAR_1} Mal\n"
	.string "fern!\p"
	.string "{STR_VAR_3} liebt wohl Fernsehen!$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockTitle::
	.string "Der zeitbewusste Trainer$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction::
	.string "Uhrzeit geprüft$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer prüfte {STR_VAR_1} Mal\n"
	.string "die Uhrzeit!\p"
	.string "{STR_VAR_3} muss ein pünktlicher Trainer\n"
	.string "sein, der auf die Zeit achtet.$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryTitle::
	.string "Der Pokémon-Lotto-Zauberer$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction::
	.string "Pokémon-Lotto gewonnen$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer hat die Lotterie\n"
	.string "{STR_VAR_1}-mal gewonnen!\p"
	.string "{STR_VAR_3} hat wohl viele Freunde zum\n"
	.string "POKéMON zu tauschen!$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareTitle::
	.string "Der Pension-nutzende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction::
	.string "Pokémon in der Pension gelassen$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer ließ seine POKéMON\n"
	.string "{STR_VAR_1}-mal in der Pension!\p"
	.string "{STR_VAR_3} liebt es wohl\n"
	.string "seinen POKéMON was Gutes zu tun!$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarTitle::
	.string "Der Seilbahn-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction::
	.string "Mit der Seilbahn gefahren$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer fuhr {STR_VAR_1} Mal\n"
	.string "mit der Seilbahn!\p"
	.string "{STR_VAR_3} ist wohl viel unterwegs!$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsTitle::
	.string "Der heiße Quellen-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsAction::
	.string "Mal in heißen Quellen gebadet$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsStory::
	.string "Dies ist die Sage von einem Trainer\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser Trainer badete {STR_VAR_1} Mal in\n"
	.string "heißen Quellen!\p"
	.string "{STR_VAR_3} muss eine Haut wie ein\n"
	.string "Baby haben!$"


MauvilleCity_PokemonCenter_1F_EventScript_Storyteller::
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales
	message MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell
	waitmessage
	special StorytellerStoryListMenu
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection
	setvar VAR_0x8008, 1
	special Script_StorytellerDisplayStory
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, StorytellerUpdateStat
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales
	goto MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale

MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection::
	goto MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	end

MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd
	goto MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales

MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales, MSGBOX_DEFAULT
MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
	goto_if_eq VAR_RESULT, 1, MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale
	msgbox MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller::
	msgbox MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

@ Unused
MauvilleCity_PokemonCenter_1F_EventScript_WaitingForRecordMix::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd::
	release
	end

@ Giddy
MauvilleCity_PokemonCenter_1F_Text_HearMyStory:
	.string "Ich bin AUFGEREGT!\n"
	.string "Ich hab eine glanzvolle Story für dich!\p"
	.string "Möchtest du sie hören?$"

MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues:
	.string "Oh...\n"
	.string "Du machst mich ganz traurig...$"

MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking:
	.string "Außerdem dachte ich über...$"

MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain:
	.string "Das war's, glaub ich...\p"
	.string "Wir sollten uns wieder unterhalten!\n"
	.string "Tschüss!$"

MauvilleCity_PokemonCenter_1F_EventScript_Giddy::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_HearMyStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	end

@ Giddy will continue to tell stories regardless of whether yes or no is selected below.
@ Each story there is a 10% chance it will be his last. Otherwise he will stop at 10 stories.
MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale::
	special GenerateGiddyLine
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy::
	msgbox MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong:
	.string "Hi, ich bin der BARDE.\n"
	.string "Möchtest du mein Lied hören?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1:
	.string "Oh...\n"
	.string "Du machst mich ganz traurig...$"

MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers:
	.string "Oh, was für ein rührendes Lied...\n"
	.string "Ich wünschte, ich könnt es anderen\n"
	.string "vorspielen...$"

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics:
	.string "So?\n"
	.string "Wie findest du mein Lied?\p"
	.string "Aber ich bin mit dem Text\n"
	.string "nicht ganz zufrieden.\p"
	.string "Wie wärs, wenn du neue\n"
	.string "Songtexte für mich schreibst?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2:
	.string "Oh...\n"
	.string "Du machst mich ganz traurig...$"

MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou:
	.string "Vielen lieben Dank!\n"
	.string "Lass es mich für dich singen.$"

MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo:
	.string "War das so, wie du dein Lied\n"
	.string "haben wolltest?$"

MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile:
	.string "Okay! Dann ist es beschlossen.\n"
	.string "Ich werd dieses Lied eine Weile singen.$"

MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening:
	.string "Hey, yo! Man nennt mich den Hipster.\n"
	.string "Ich bring dir bei, was schick ist.$"

MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou:
	.string "Hey, ich hab dir schon alles\n"
	.string "Schicke beigebracht.\p"
	.string "Ich würde die frohe Kunde gerne\n"
	.string "unter andere Leute bringen.$"

MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach:
	.string "Hey, du kennst doch schon alles\n"
	.string "Schicke und Moderne.\p"
	.string "Ich hab dir nichts Neues zu sagen!$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord:
	.string "Hey, hast du von '{STR_VAR_1}' gehört?\p"
	.string "Was das bedeutet? Tja...\n"
	.string "Frag deinen Papa oder deine Mama, ja?$"
