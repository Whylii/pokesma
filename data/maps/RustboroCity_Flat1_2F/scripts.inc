# 1 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 9 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 13 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 41 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 50 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 52 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
# 61 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 63 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
# 64 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 69 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 71 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 72 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
# 80 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, jeden Tag wird es schwerer…\p"
# 81 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Was so schwer ist?\n"
# 82 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Das fragst du noch?\p"
# 83 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Herauszufinden, was ich jeden Tag\n"
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "kochen soll, natürlich!\p"
# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Es ist nicht einfach, jeden Tag eine\n"
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mahlzeit auf den Tisch zu bringen.$"
# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
# 89 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, hallo!\n"
# 90 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Willkommen im Hause Schläfer.\p"
# 91 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ich würde dir gerne eine Frage stellen.\n"
# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hast du jemals auf ein Kind\l"
# 93 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "aufgepasst?\p"
# 94 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Weißt du, ich bin noch ein junger Vater\n"
# 95 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "und ein Kind zu haben, ist eine völlig\l"
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "neue Erfahrung für mich.\p"
# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ich habe ein Problem: Meine Tochter\n"
# 98 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Tapetra lacht so selten.\p"
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Vielleicht lacht sie ja für mich, wenn\n"
# 100 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "ich ihr etwas Lustiges erzähle…\p"
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Fällt dir nicht etwas Lustiges ein, das\n"
# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "ich ihr sagen könnte?$"
# 103 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 104 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
# 105 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ich habe neulich {STR_VAR_1}\n"
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "zu ihr gesagt, damit sie lacht…\p"
# 107 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Fällt dir kein besseres Wort oder ein\n"
# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "besserer Ausdruck ein?$"
# 109 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 110 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, das ist einfach wundervoll!\n"
# 112 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Komm, lass mal hören.$"
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 114 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhIsThatRight:
# 115 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Wirklich?\p"
# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Nun, wenn dir irgendetwas Gutes\n"
# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "einfällt, dann lass es mich wissen.$"
# 118 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 119 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
# 120 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Verstehe.\n"
# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Komm, wir versuchen es einfach.$"
# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 123 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhShesLaughing:
# 124 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 125 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, ja! Schau! Sie lacht!\n"
# 127 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ich bin so glücklich!$"
# 128 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry:
# 130 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Verstehe.\n"
# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Komm, wir versuchen es einfach.$"
# 132 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 133 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 135 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 136 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmmm… Sie lächelt noch nicht\n"
# 137 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "einmal… Vielleicht ist Tapetra\l"
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "ja einfach nur ein sehr ernstes Kind…$"
# 139 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 140 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
# 141 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Och, du kennst keine guten Sprüche?\n"
# 142 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Dann muss ich mir wohl selbst was\l"
# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "einfallen lassen.\p"
# 144 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmm…\n"
# 145 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Wie wäre es mit {STR_VAR_1}?\l"
# 146 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Mal sehen, ob das wirkt.$"
# 147 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 148 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 150 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 151 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmmm… Sie lächelt noch nicht\n"
# 152 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "einmal… Vielleicht ist Tapetra\l"
# 153 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "ja einfach nur ein sehr ernstes Kind…$"
# 154 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 155 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
# 156 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Och, du kennst keine guten Sprüche?\n"
# 157 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Dann muss ich mir wohl selbst was\l"
# 158 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "einfallen lassen.\p"
# 159 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Aber wenn dir noch etwas Gutes\n"
# 160 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "einfällt, dann musst du es mich\l"
# 161 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "unbedingt wissen lassen!$"
# 162 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 163 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
# 164 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Vielen Dank!\p"
# 165 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Dank dir hat meine Tapetra\n"
# 166 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "für mich gelacht!\p"
# 167 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ich mag vielleicht nicht so aussehen,\n"
# 168 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "aber ich bin einer der Topforscher der\l"
# 169 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Devon Corporation.\p"
# 170 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ich würde dir gerne etwas zum Dank\n"
# 171 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "schenken.\p"
# 172 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Da fällt mir was ein! Ich werde dir für\n"
# 173 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "die Boxen in deinem Pokémon-\p"
# 174 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Lagerungs-System ein neues\n"
# 175 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hintergrund-Muster schenken!\p"
# 176 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Wenn du dich dort im Menü befindest,\n"
# 177 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "dann wähle einfach Freunde.\p"
# 178 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Damit kannst du auf die neuen Muster\n"
# 179 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "zugreifen.$"
# 180 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 181 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
# 182 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Das ist eine Pokémon Plüsch-Puppe.$"
