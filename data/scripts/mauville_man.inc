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
	.string "Hi, ich bin der Händler.\nDeko mit mir tauschen?$"

MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues:
	.string "Oh…\nDu machst mich ganz traurig…$"

MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded:
	.string "Aber wir haben schon Deko getauscht,\ndu und ich.$"

MauvilleCity_PokemonCenter_1F_Text_PickADecorItem:
	.string "Wenn du ein Dekostück von mir\nsiehst, das du willst, sag Bescheid.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything:
	.string "Du willst nichts?\nIch fühl mich unerwünscht…$"

MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt:
	.string "Dieses Dekostück gehörte einst\n{STR_VAR_1}.\pMöchtest du es?$"

MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor:
	.string "Äh… Moment mal. Du hast kein\neinziges Dekostück!$"

MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade:
	.string "Okay, such dir das Dekostück aus,\ndas du mit mir tauschen willst.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade:
	.string "Du willst nicht mit mir tauschen?\nIch fühl mich unerwünscht…$"

MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis:
	.string "Du hast schon alle {STR_VAR_2}, die du\nlagern kannst. Hier ist kein Platz mehr.$"

MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor:
	.string "Okay, also tauschen wir mein {STR_VAR_3}\ngegen dein {STR_VAR_2}?$"

MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse:
	.string "Das Dekostück wird gerade benutzt.\nDu kannst es nicht tauschen.$"

MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC:
	.string "Dann tauschen wir!\nIch schick dir mein Dekostück an den PC.$"

MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne:
	.string "Hoppla! Sorry! Das ist ein wirklich\nseltenes Dekostück.\lDas kann ich nicht hergeben!\pKann ich dir was anderes anbieten?$"

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
	.string "Ich bin der Sagenerzähler.\nIch erzähle Geschichten über\llegendäre Trainer.\pWillst du sie hören?$"

MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues:
	.string "Oh…\nDu machst mich ganz traurig…$"

MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell:
	.string "Ich kenne diese Sagen.\nWelche soll ich erzählen?$"

MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales:
	.string "Aber ich kenne keine legendären Trainer.\nDaher kenne ich keine Sagen.\pWo findet man einen Trainer, der einer\nlegendären Geschichte würdig ist?$"

MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes:
	.string "Was?!\nDu… Du…\p{STR_VAR_2}\n{STR_VAR_1} Mal?!\pDas ist wahrhaft prächtig!\nDa wird eine neue Legende geboren!$"

MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends:
	.string "Da frag ich mich, ob es andere Trainer\nmit noch beeindruckenderen Legenden\lgibt, die darauf warten entdeckt zu werden?$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales:
	.string "Bist du ein Trainer?\pDann sag, hast du Geschichten, die\nauch nur annähernd legendär sind?$"

@ Unused
MauvilleCity_PokemonCenter_1F_Text_HearAnotherLegendaryTale:
	.string "Übrigens… Möchtest du eine weitere\nlegendäre Geschichte hören?$"

MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend:
	.string "Hmm…\nIch bin nicht zufrieden…\pIch wünschte, du brächtest mir\nNeuigkeiten von legendärem Rang.$"

MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested:
	.string "Ich wünschte, mehr Leute wären an\nmeinen Geschichten über legendäre\lTrainer interessiert.$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameTitle::
	.string "Der Speicher-lustige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameAction::
	.string "Das Spiel gespeichert$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer speicherte\n{STR_VAR_1} Mal!\pEinen vorsichtigeren Trainer als\n{STR_VAR_3} findet man nicht!$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedTitle::
	.string "Der Trendsetter-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedAction::
	.string "Trends gestartet$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer startete\n{STR_VAR_1} Trends!\p{STR_VAR_3} gibt den Ton an in der\nganzen HOENN-Region!$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedTitle::
	.string "Der Beeren-pflanzende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedAction::
	.string "Beeren gepflanzt$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer pflanzte {STR_VAR_1} Mal\nBeeren!\p{STR_VAR_3} ist ein legendärer\nBeeren-Liebhaber!$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesTitle::
	.string "Der Fahrrad-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesAction::
	.string "Fahrräder getauscht$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer tauschte\n{STR_VAR_1} Mal das Fahrrad!\p{STR_VAR_3} liebt Fahrräder wohl\nüber alles!$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsTitle::
	.string "Der interviewte Trainer$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsAction::
	.string "Wurde interviewt$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer wurde {STR_VAR_1} Mal\ninterviewt!\p{STR_VAR_3} erregt wohl viel Aufmerksamkeit!$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesTitle::
	.string "Der kampfeslustige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesAction::
	.string "Mal gekämpft$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer kämpfte {STR_VAR_1} Mal!\p{STR_VAR_3} kann wohl nie einem Kampf\naus dem Weg gehen!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtTitle::
	.string "Der Pokémon-fangende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtAction::
	.string "Pokémon gefangen$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory::
	.string "Dies ist die Geschichte eines Trainers\nnamens {STR_VAR_3}.\pDieser Trainer fing\n{STR_VAR_1} Pokémon!\p{STR_VAR_3} ist ein legendärer\nPokémon-Fänger!$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtTitle::
	.string "Der Angler-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction::
	.string "Pokémon mit der Angel gefangen$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer angelte {STR_VAR_1} Pokémon!\p{STR_VAR_3} ist ein legendärer\nAngel-Experte!$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedTitle::
	.string "Der Eier-wärmende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction::
	.string "Eier ausgebrütet$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer hat {STR_VAR_1} Pokémon\nausgebrütet!\p{STR_VAR_3} ist ein legendärer\nEierwärmer!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedTitle::
	.string "Der Entwickler-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedAction::
	.string "Pokémon entwickelt$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer hat {STR_VAR_1} Pokémon\nentwickelt!\p{STR_VAR_3} ist der ultimative\nPokémon-Entwickler!$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterTitle::
	.string "Der Pokémon-Center-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction::
	.string "Pokémon-Center benutzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer hat {STR_VAR_1} Pokémon\nheilen lassen!\pEs gibt keinen größeren Pokémon-Center-\nFan als {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeTitle::
	.string "Der Häuschen-Trainer$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction::
	.string "Pokémon zu Hause ausgeruht$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer hat {STR_VAR_1} Pokémon\n daheim heilen lassen!\pEs gibt keinen größeren Heimat-\nFan als {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesTitle::
	.string "Der Safari-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesAction::
	.string "Safari-Zone besucht$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer ging {STR_VAR_1} Mal in\ndie Safari-Zone!\p{STR_VAR_3} kommt wohl in der Safari-Zone\nso richtig auf seine Kosten!$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutTitle::
	.string "Der Zerschneide-wütige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutAction::
	.string "Zerschneider eingesetzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer setzte {STR_VAR_1} Mal\nZerschneider ein!\p{STR_VAR_3} liebt wohl Zerschneider!$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashTitle::
	.string "Der Stein-zerstörende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction::
	.string "Steine zertrümmert$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer zertrümmerte\n{STR_VAR_1} Mal Steine!\p{STR_VAR_3} kann wohl keinen Stein\nunzerstört lassen!$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesTitle::
	.string "Der Attacken-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesAction::
	.string "Geheim-Basis umgestellt$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer stellte die Geheim-Basis\n{STR_VAR_1} Mal um!\p{STR_VAR_3} liebt es wohl, oft\numzuziehen!$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashTitle::
	.string "Der Platscher-lustige Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashAction::
	.string "Platscher eingesetzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer setzte {STR_VAR_1} Mal\nPlatscher ein!\p{STR_VAR_3} liebt wohl Platscher!$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleTitle::
	.string "Der beharrliche Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleAction::
	.string "Verzweiflung eingesetzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer setzte {STR_VAR_1} Mal\nVerzweiflung ein!\p{STR_VAR_3} gibt niemals auf!$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsTitle::
	.string "Der Slot-Champion$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsAction::
	.string "Jackpot am Slot gewonnen$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer gewann {STR_VAR_1} Mal\nden Jackpot am Slot!\p{STR_VAR_3} hatte einfach Glück\nam Slot!$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsTitle::
	.string "Der Roulette-Champion$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsAction::
	.string "Roulette-Siege in Folge:$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer gewann {STR_VAR_1} Mal\nin Folge beim Roulette.\p{STR_VAR_3} hatte Glück beim Kugelwurf\nim Roulette!$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesTitle::
	.string "Der Kampf-Turm-Herausforderer$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesAction::
	.string "Kampf-Turm-Herausforderung angenommen$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer forderte {STR_VAR_1} Mal\nden Kampf-Turm heraus!\p{STR_VAR_3} strebt nach Exzellenz\nim Kampf-Turm!$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksTitle::
	.string "Der Mixer-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksAction::
	.string "{POKEBLOCK} gemixt$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer mixte {STR_VAR_1} Mal\n{POKEBLOCK}!\p{STR_VAR_3} ist der absolute Meister\nim Beeren-Mixer!$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsTitle::
	.string "Der Wettbewerb-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsAction::
	.string "An Wettbewerben teilgenommen$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer nahm\n{STR_VAR_1}-mal an Wettbewerben teil!\p{STR_VAR_3} liebt es wohl, anderen\nseine Pokémon zu zeigen!$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsTitle::
	.string "Der Wettbewerb-Meister$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsAction::
	.string "Wettbewerbe gewonnen$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer gewann {STR_VAR_1} Mal\neinen Wettbewerb!\p{STR_VAR_3} ist ein unglaublicher\nWettbewerbs-Meister!$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedTitle::
	.string "Der glückliche Käufer$"

MauvilleCity_PokemonCenter_1F_Text_TimesMal eingekauftAction::
	.string "Mal eingekauft$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer kaufte {STR_VAR_1} Mal in\nLäden ein!\p{STR_VAR_3} muss zum Shoppen geboren sein.$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderTitle::
	.string "Der Item-findende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderAction::
	.string "Itemradar benutzt$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer nutzte {STR_VAR_1} Mal\neinen Itemradar!\p{STR_VAR_3} durchstöbert wohl gerne\nden Boden nach Items!$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedTitle::
	.string "Der regennasse Trainer$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedAction::
	.string "Wurde nass geregnet$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer wurde {STR_VAR_1} Mal\nregennass!\p{STR_VAR_3} zieht wohl mit seinem\nCharisma sogar Regen an!$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexTitle::
	.string "Der eifrige Pokédex-Leser$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexAction::
	.string "Einen Pokédex geprüft$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer befragte seinen Pokédex\n{STR_VAR_1}-mal!\p{STR_VAR_3} liebt es wohl,\nPokémon im Pokédex zu registrieren!$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsTitle::
	.string "Der Band-Sammler$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsAction::
	.string "Bänder erhalten$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer erhielt {STR_VAR_1} Mal\nBänder!\p{STR_VAR_3} sammelt wohl für sein Leben\ngerne Bänder!$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedTitle::
	.string "Der Klippen-springende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction::
	.string "Klippen runtergesprungen$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer sprang {STR_VAR_1} Mal\nKlippen runter!\p{STR_VAR_3} kann keiner Klippe\nwiderstehen!$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle::
	.string "Der legendäre TV-Zuschauer$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction::
	.string "Fern gesehen$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer sah {STR_VAR_1} Mal\nfern!\p{STR_VAR_3} liebt wohl Fernsehen!$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockTitle::
	.string "Der zeitbewusste Trainer$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction::
	.string "Uhrzeit geprüft$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer prüfte {STR_VAR_1} Mal\ndie Uhrzeit!\p{STR_VAR_3} muss ein pünktlicher Trainer\nsein, der auf die Zeit achtet.$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryTitle::
	.string "Der Pokémon-Lotto-Zauberer$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction::
	.string "Pokémon-Lotto gewonnen$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer hat die Lotterie\n{STR_VAR_1}-mal gewonnen!\p{STR_VAR_3} hat wohl viele Freunde zum\nPOKéMON zu tauschen!$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareTitle::
	.string "Der Pension-nutzende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction::
	.string "Pokémon in der Pension gelassen$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer ließ seine POKéMON\n{STR_VAR_1}-mal in der Pension!\p{STR_VAR_3} liebt es wohl\nseinen POKéMON was Gutes zu tun!$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarTitle::
	.string "Der Seilbahn-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction::
	.string "Mit der Seilbahn gefahren$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer fuhr {STR_VAR_1} Mal\nmit der Seilbahn!\p{STR_VAR_3} ist wohl viel unterwegs!$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsTitle::
	.string "Der heiße Quellen-liebende Trainer$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsAction::
	.string "Mal in heißen Quellen gebadet$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsStory::
	.string "Dies ist die Sage von einem Trainer\nnamens {STR_VAR_3}.\pDieser Trainer badete {STR_VAR_1} Mal in\nheißen Quellen!\p{STR_VAR_3} muss eine Haut wie ein\nBaby haben!$"


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
	.string "Ich bin AUFGEREGT!\nIch hab eine glanzvolle Story für dich!\pMöchtest du sie hören?$"

MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues:
	.string "Oh…\nDu machst mich ganz traurig…$"

MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking:
	.string "Außerdem dachte ich über…$"

MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain:
	.string "Das war's, glaub ich…\pWir sollten uns wieder unterhalten!\nTschüss!$"

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
	.string "Hi, ich bin der BARDE.\nMöchtest du mein Lied hören?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1:
	.string "Oh…\nDu machst mich ganz traurig…$"

MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers:
	.string "Oh, was für ein rührendes Lied…\nIch wünschte, ich könnt es anderen\nvorspielen…$"

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics:
	.string "So?\nWie findest du mein Lied?\pAber ich bin mit dem Text\nnicht ganz zufrieden.\pWie wärs, wenn du neue\nSongtexte für mich schreibst?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2:
	.string "Oh…\nDu machst mich ganz traurig…$"

MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou:
	.string "Vielen lieben Dank!\nLass es mich für dich singen.$"

MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo:
	.string "War das so, wie du dein Lied\nhaben wolltest?$"

MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile:
	.string "Okay! Dann ist es beschlossen.\nIch werd dieses Lied eine Weile singen.$"

MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening:
	.string "Hey, yo! Man nennt mich den Hipster.\nIch bring dir bei, was schick ist.$"

MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou:
	.string "Hey, ich hab dir schon alles\nSchicke beigebracht.\pIch würde die frohe Kunde gerne\nunter andere Leute bringen.$"

MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach:
	.string "Hey, du kennst doch schon alles\nSchicke und Moderne.\pIch hab dir nichts Neues zu sagen!$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord:
	.string "Hey, hast du von „{STR_VAR_1}” gehört?\pWas das bedeutet? Tja…\nFrag deinen Papa oder deine Mama, ja?$"
