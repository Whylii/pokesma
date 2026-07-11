# 1 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 2 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_MapScripts::
# 3 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_SEEDOT
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 12 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 13 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareSeedotSize
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_INCORRECT_SPECIES, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_SMALLER, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_LARGER, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 19 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 20 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 21 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
# 22 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
# 23 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 25 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
# 27 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 30 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 31 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
# 32 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
# 33 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 42 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 43 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 49 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 50 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 51 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock
# 52 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	faceplayer
# 53 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_LOTAD
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
# 58 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 59 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_INCORRECT_SPECIES, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
# 60 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_SMALLER, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
# 61 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, COMPARE_SIZE_LARGER, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
# 66 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
# 67 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 68 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 70 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
# 71 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
# 72 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 73 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 74 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 75 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
# 76 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
# 77 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 78 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 79 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 80 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
# 81 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
# 82 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	giveitem ITEM_ELIXIR
# 83 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
# 84 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
# 85 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 87 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 88 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
# 89 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
# 90 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	release
# 91 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 92 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 93 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 94 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 95 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 96 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 98 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 99 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 100 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 102 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 103 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 104 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
# 105 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	end
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 107 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
# 108 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Kennst du das Pokémon Samurzel?\n"
# 109 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "In Xeneroville wird es kaum gesehen.\p"
# 110 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Aber ich liebe große Samurzel.\n"
# 111 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Je größer, desto besser.\p"
# 112 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Aber mein jüngerer Bruder sagt, dass\n"
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Loturzel größer ist.\p"
# 114 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Verrückt! Samurzel muss einfach\n"
# 115 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "größer sein!\p"
# 116 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wie? Du hast ein Samurzel dabei?\n"
# 117 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "B-b-bitte zeig es mir!$"
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 119 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
# 120 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2} cm!\n"
# 121 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Meine Güte, ist das aber groß!\p"
# 122 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Das wird sogar größer als das Loturzel\n"
# 123 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "sein, das mein Bruder gesehen hat!\p"
# 124 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Danke, dass du es mir gezeigt hast.\n"
# 125 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hier, ein kleines Dankeschön!$"
# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 127 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 128 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
# 129 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} erhielt einen Trank.$"
# 130 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 131 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
# 132 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Huch.\n"
# 133 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Dein Beutel ist ja randvoll.$"
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 135 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
# 136 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2} cm, nicht wahr?\p"
# 137 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hmm… Ich habe schon größere\n"
# 138 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Samurzel als dieses gesehen.$"
# 139 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 140 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
# 141 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Na, das ist doch schon ganz ordentlich…\n"
# 142 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Aber das ist kein Samurzel!$"
# 143 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 144 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
# 145 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Du hast gar kein großes Samurzel?\n"
# 146 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Och, wie schade…\p"
# 147 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wenn du ein großes Samurzel hast,\n"
# 148 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "dann komm bitte wieder und zeig es mir.$"
# 149 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 150 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
# 151 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Das größte Samurzel aller Zeiten!\n"
# 152 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Der {STR_VAR_3} cm-Gigant von {STR_VAR_2}!\p"
# 153 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Ein Samurzel, so groß, wie ein\n"
# 154 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Loturzel gerne sein würde!$"
# 155 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 156 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
# 157 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Kennst du das Pokémon Loturzel?\n"
# 158 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Das ist bisher selten in Xeneroville\l"
# 159 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "aufgetaucht.\p"
# 160 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Ich liebe große Loturzel.\p"
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Mein großer Bruder sagt, dass\n"
# 162 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Samurzel größer ist.\p"
# 163 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Aber das stimmt gar nicht! Jeder weiß\n"
# 164 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "doch, dass Loturzel viel größer\l"
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "ist.\p"
# 166 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wie? Oh, du hast ein Loturzel?\n"
# 167 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Bitte, bitte zeig es mir!$"
# 168 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 169 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2} cm!\n"
# 171 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wow, das ist aber groß!\p"
# 172 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Das ist bestimmt größer als das\n"
# 173 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Samurzel, das mein Bruder gesehen\l"
# 174 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "hat.\p"
# 175 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Danke, dass ich es anschauen durfte.\n"
# 176 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hier, ein kleines Dankeschön!$"
# 177 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 178 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
@ Unused
# 179 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
# 180 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} erhielt einen Trank.$"
# 181 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 182 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
# 183 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Huups, dein Beutel ist voll.$"
# 184 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 185 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
# 186 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2} cm?\p"
# 187 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Ach… Da habe ich aber schon ein\n"
# 188 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "größeres Loturzel gesehen.$"
# 189 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 190 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
# 191 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Nun, das ist ganz stattlich.\n"
# 192 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Aber es ist kein Loturzel!$"
# 193 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 194 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
# 195 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hast du kein großes Loturzel?\n"
# 196 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Och, wie enttäuschend…\p"
# 197 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Wenn du ein großes Loturzel hast,\n"
# 198 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "dann komm bitte wieder her.$"
# 199 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"

# 200 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
# 201 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Das größte Loturzel aller Zeiten!\n"
# 202 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Der {STR_VAR_3} cm-Koloss von {STR_VAR_2}!\p"
# 203 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Ein Loturzel, so groß, wie ein\n"
# 204 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Samurzel gerne sein würde.$"
