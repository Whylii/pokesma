# 1 "data/maps/LilycoveCity_House3/scripts.pory"

# 2 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_MapScripts::
# 3 "data/maps/LilycoveCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
# 4 "data/maps/LilycoveCity_House3/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity_House3/scripts.pory"

# 6 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_OnTransition:
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
	random 4
# 8 "data/maps/LilycoveCity_House3/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 9 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 10 "data/maps/LilycoveCity_House3/scripts.pory"

# 11 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF::
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 14 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House3_EventScript_DeclinePokeblockLearn
# 16 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 22 "data/maps/LilycoveCity_House3/scripts.pory"

# 23 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
# 24 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 26 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_House3/scripts.pory"

# 31 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_Man::
# 32 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 33 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 34 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 35 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 39 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 40 "data/maps/LilycoveCity_House3/scripts.pory"

# 41 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1::
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 43 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 44 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 45 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 46 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_House3/scripts.pory"

# 51 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2::
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 56 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 57 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 58 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 59 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_House3/scripts.pory"

# 61 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3::
# 62 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 67 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 68 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 70 "data/maps/LilycoveCity_House3/scripts.pory"

# 71 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4::
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 74 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_TEMP_1
# 75 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 76 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 77 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 78 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 79 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 80 "data/maps/LilycoveCity_House3/scripts.pory"

# 81 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingMultiBattle::
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 84 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 85 "data/maps/LilycoveCity_House3/scripts.pory"

# 86 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereMixingRecords::
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 89 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 90 "data/maps/LilycoveCity_House3/scripts.pory"

# 91 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereBlendingBerries::
# 92 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 94 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_House3/scripts.pory"

# 96 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingContest::
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 99 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 100 "data/maps/LilycoveCity_House3/scripts.pory"

# 101 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks:
# 102 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Ach, du liebes bisschen! Reist du ganz\n"
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "alleine? Aber du bist so jung! Gut!\p"
# 104 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Ich bin sicher, meine Kinder könnten\n"
# 105 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "das eine oder andere von dir lernen!\p"
# 106 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Ich? Ich bin die Expertin der {POKEBLOCK}.\p"
# 107 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wenn ich es mir recht überlege, dann\n"
# 108 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "könnte ich ein paar {POKEBLOCK} zaubern.\p"
# 109 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Möchtest du das von mir, der Expertin\n"
# 110 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "der {POKEBLOCK}, lernen?$"
# 111 "data/maps/LilycoveCity_House3/scripts.pory"

# 112 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_OhAreYouSure:
# 113 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh? Ganz sicher?\p"
# 114 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Du solltest nicht immer versuchen, alles\n"
# 115 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "alleine zu meistern, mein Kind.$"
# 116 "data/maps/LilycoveCity_House3/scripts.pory"

# 117 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_ExplainPokeblocks:
# 118 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, schön! Du bist clever! Das\n"
# 119 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "wird eine lange Erklärung. Hör gut zu.\p"
# 120 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Bist du bereit?\p"
# 121 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wenn du einen {POKEBLOCK} betrachtest,\n"
# 122 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "siehst du, dass er danach bewertet\l"
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "wird, wie würzig er ist.\p"
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Je niedriger dieser Wert ist, desto\n"
# 125 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "besser ist das. Vergiss das nicht!\p"
# 126 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Ein guter {POKEBLOCK} hat einen niedrigen\n"
# 127 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Würzwert und einen hohen Level.\p"
# 128 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Ein Pokémon kann mehr gute {POKEBLOCK}\n"
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "essen als durchschnittliche.\p"
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Und das ist wichtig.\p"
# 131 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wenn du weiche {POKEBLOCK} herstellen\n"
# 132 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "willst, benutze verschiedene Beeren.\p"
# 133 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Sei nicht geizig - die Art der Beeren\n"
# 134 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "beeinflusst die Weichheit der {POKEBLOCK}.\p"
# 135 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Und noch etwas:\p"
# 136 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Je mehr Leute Beeren mixen,\n"
# 137 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "desto weicher werden die {POKEBLOCK}.\p"
# 138 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Daher solltest du andere Leute an-\n"
# 139 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "sprechen und mit ihnen zusammen\l"
# 140 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "{POKEBLOCK} herstellen.\p"
# 141 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Das ist alles, was du wissen musst, um\n"
# 142 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "gute {POKEBLOCK} herstellen zu können.\p"
# 143 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wenn jeder Pokémon hätte, die er liebt,\n"
# 144 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "weiche {POKEBLOCK} und eine liebevolle\p"
# 145 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Familie, sähe es auf der Welt viel\n"
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "besser aus.\p"
# 147 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Lass dich nicht unterkriegen, Schatz!$"
# 148 "data/maps/LilycoveCity_House3/scripts.pory"

# 149 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_HappyToHaveQuadruplets:
# 150 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Als meine Frau Vierlinge zur Welt\n"
# 151 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "brachte, war ich zuerst geschockt.\p"
# 152 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Aber wenn ich sie jetzt zusammen\n"
# 153 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "spielen sehe, bin ich richtig glücklich.$"
# 154 "data/maps/LilycoveCity_House3/scripts.pory"

# 155 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToWinMultiBattles:
# 156 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wir üben Multikämpfe, aber ich\n"
# 157 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "weiß, dass ich gewinnen werde.$"
# 158 "data/maps/LilycoveCity_House3/scripts.pory"

# 159 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LikeMixingAtRecordCorner:
# 160 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wir lieben es, Sachen beim Statistik-\n"
# 161 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "tausch durcheinander zu würfeln.\p"
# 162 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Aber, was kann man durcheinander\n"
# 163 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "würfeln?$"
# 164 "data/maps/LilycoveCity_House3/scripts.pory"

# 165 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender:
# 166 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Wir wollen super {POKEBLOCK}\n"
# 167 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "im Beerenmixer machen!$"
# 168 "data/maps/LilycoveCity_House3/scripts.pory"

# 169 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToEnterContest:
# 170 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Ich möchte damit angeben, wie stark\n"
# 171 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "mein Pokémon ist, daher werden wir\l"
# 172 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "an einem Wettbewerb teilnehmen.$"
