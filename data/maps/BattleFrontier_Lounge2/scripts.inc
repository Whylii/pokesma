# 1 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ This NPC gives hints about a random facility or battle mode.
# 6 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ For battle modes he gives generic advice
# 7 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ For facilities, depending on how far the player has progressed he will say either
# 8 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The name of the Frontier Brain there
# 9 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The type and description of the 3 pokemon they use in their silver battle
# 10 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@    The type and description of the 3 pokemon they use in their gold battle
# 11 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FrontierManiac::
# 12 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
# 15 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
# 16 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 18 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 20 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_AlreadyMetManiac::
# 21 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_GiveAdvice::
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_BufferSingle
# 27 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_BufferDouble
# 28 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_BufferMulti
# 29 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BufferMultiLink
# 30 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_BufferBattleDome
# 31 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_BufferBattleFactory
# 32 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_BufferBattlePalace
# 33 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_BufferBattleArena
# 34 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_BufferBattlePike
# 35 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_eq VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
# 36 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ <= FRONTIER_MANIAC_TOWER_LINK is any Battle Tower mode
# 37 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_le VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_BattleTowerNews
# 38 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ >= FRONTIER_MANIAC_DOME is any facility other than Battle Tower
# 39 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	call_if_ge VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_FacilityNews
# 40 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	special ShowFrontierManiacMessage
# 41 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitmessage
# 42 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitbuttonpress
# 43 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 44 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 46 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BattleTowerNews::
# 47 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 49 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 50 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_FacilityNews::
# 51 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 53 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 54 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferSingle::
# 55 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
# 56 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 57 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 58 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferDouble::
# 59 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
# 60 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 61 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 62 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMulti::
# 63 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
# 64 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 65 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 66 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferMultiLink::
# 67 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
# 68 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 70 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleDome::
# 71 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
# 72 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 73 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 74 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleFactory::
# 75 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
# 76 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 77 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 78 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePalace::
# 79 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
# 80 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 81 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 82 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattleArena::
# 83 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
# 84 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 85 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 86 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePike::
# 87 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
# 88 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 89 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 90 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_BufferBattlePyramid::
# 91 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
# 92 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	return
# 93 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 94 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac1::
# 95 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 96 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 98 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 99 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 100 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac2::
# 101 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 102 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 104 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 106 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_Maniac3::
# 107 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 108 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 112 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_EventScript_TriathleteF::
# 113 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
# 114 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 116 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FrontierManiacIntro::
# 117 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Halli hallo! Wenn du Neuigkeiten über\n"
# 118 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "die Kampfzone erfahren willst,\l"
# 119 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "bin ich die Nummer eins für dich!\p"
# 120 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich bin der Kampfzonen-Maniac.\p"
# 121 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Nur zur Sicherheit: Du bist doch ein\n"
# 122 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Trainer, oder?\p"
# 123 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich werde dir die neuesten Neuigkeiten\n"
# 124 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "über die Kampfzone erzählen!$"
# 125 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 126 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
# 127 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Halli hallo! Du willst bestimmt die\n"
# 128 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "neuesten Neuigkeiten aus mir\l"
# 129 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "herauspressen! Hab ich Recht?$"
# 130 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 131 "data/maps/BattleFrontier_Lounge2/scripts.pory"
@ Unused
# 132 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
# 133 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Well? Well? Well?\p"
# 134 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "I'm sure my information's been\n"
# 135 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "seriously useful to you, right?$"
# 136 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 137 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FacilityIsHottest::
# 138 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Mal sehen…\p"
# 139 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Scheinbar ist {STR_VAR_1}\n"
# 140 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "im Moment der angesagteste Ort.$"
# 141 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 142 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
# 143 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Mal sehen…\p"
# 144 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Scheinbar ist der Duellturm\n"
# 145 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "{STR_VAR_1} im Moment der\l"
# 146 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angesagteste Ort.$"
# 147 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 148 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
# 149 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 150 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 151 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 152 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein sehr geheimnisvoller Trainer…\n"
# 153 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Der Kampfkoloss, der hier alles leitet.$"
# 154 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 155 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
# 156 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon gegen den Kampfkoloss\n"
# 157 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten?\p"
# 158 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Er schätzt seine Gegner ab und setzt\n"
# 159 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "die folgenden drei Pokémon ein:\p"
# 160 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Psi-Pokémon, Typ Psycho.\n"
# 161 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Vulkan-Pokémon, Typ Feuer.\p"
# 162 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Und ein Tagträumer-Pokémon,\n"
# 163 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Normal.$"
# 164 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 165 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
# 166 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du dem Kampfkoloss schon\n"
# 167 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "begegnet, wenn er ernsthaft kämpft?\p"
# 168 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "In dem Fall setzt er folgende Pokémon\n"
# 169 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "ein:\p"
# 170 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Äon-Pokémon, Typ Drache & Psycho.\n"
# 171 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Donner-Pokémon, Typ Elektro.\l"
# 172 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Und ein Tagträumer-Pokémon,\l"
# 173 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Normal.$"
# 174 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 175 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceIsThere::
# 176 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 177 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 178 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 179 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein großspuriger Trainer…\n"
# 180 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Der Stadionstar, der hier alles leitet.$"
# 181 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 182 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceSilverMons::
# 183 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon gegen den Stadionstar\n"
# 184 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten?\p"
# 185 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Er tritt mit folgenden Pokémon gegen\n"
# 186 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "seine Herausforderer an:\p"
# 187 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Drache-Pokémon, Typ Drache & Flug.\n"
# 188 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Lehmhüpfer-Pokémon, Typ Wasser\l"
# 189 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "& Boden.\p"
# 190 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Und ein Flamme-Pokémon, Typ\n"
# 191 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Feuer & Flug.$"
# 192 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 193 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DomeAceGoldMons::
# 194 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon gegen den Stadionstar\n"
# 195 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
# 196 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Dann zeigt er dem Gegner mit den\n"
# 197 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "folgenden 3 Pokémon seine Strategie:\p"
# 198 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein ÄON-Pokémon, Typ Drache & Psycho.\n"
# 199 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Lehmhüpfer-Pokémon, Typ Wasser\l"
# 200 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "& Boden.\p"
# 201 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Und ein Eisenfuß-Pokémon, Typ\n"
# 202 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Stahl & Psycho.$"
# 203 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 204 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
# 205 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 206 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 207 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 208 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein sehr geheimnisvoller Trainer…\n"
# 209 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Der Fabrikleiter, der hier alles leitet.$"
# 210 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 211 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
# 212 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon gegen den Fabrikleiter\n"
# 213 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten?\p"
# 214 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Lass mich mal nachdenken… Er geht\n"
# 215 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "immer mit drei Leih-Pokémon in den Kampf.\p"
# 216 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Er kämpft also fast unter den gleichen\n"
# 217 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bedingungen wie du.$"
# 218 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 219 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
# 220 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon gegen den Fabrikleiter\n"
# 221 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten, wenn er ernsthaft kämpft?\p"
# 222 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Auch wenn er sich nicht zurückhalten\n"
# 223 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "will, nimmt er drei Leih-Pokémon mit in\l"
# 224 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "den Kampf.\p"
# 225 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Er kämpft also fast unter den gleichen\n"
# 226 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bedingungen wie du.$"
# 227 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 228 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenIsThere::
# 229 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 230 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 231 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 232 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein sehr geheimnisvoller Trainer…\n"
# 233 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Die Pfipitistin, die hier alles leitet.$"
# 234 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 235 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
# 236 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen die\n"
# 237 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Pfipitistin angetreten?\p"
# 238 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn sie gute Laune hat, dann setzt sie\n"
# 239 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "die folgenden drei Pokémon ein:\p"
# 240 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Reisszahn-Pokémon, Typ Gift.\n"
# 241 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Schimmel-Pokémon, Typ Käfer &\p"
# 242 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Gestein sowie ein Zartheit-Pokémon,\n"
# 243 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Wasser.$"
# 244 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 245 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
# 246 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du mal gegen die Pfipitistin an-\n"
# 247 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "getreten, wenn sie ernsthaft kämpft?\p"
# 248 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn sie schlechte Laune hat, dann\n"
# 249 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "setzt sie die folgenden 3 Pokémon ein:\p"
# 250 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Reisszahn-Pokémon, Typ Gift.\n"
# 251 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Stahlboa-Pokémon, Typ Stahl &\p"
# 252 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Boden sowie ein Grausam-Pokémon,\n"
# 253 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Wasser & Flug.$"
# 254 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 255 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
# 256 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 257 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 258 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 259 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein niedlicher Trainer…\n"
# 260 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Der Ringmeister, der hier\l"
# 261 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "alles leitet.$"
# 262 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 263 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
# 264 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen den\n"
# 265 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ringmeister angetreten?\p"
# 266 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn er seinen Gegner abschätzen will,\n"
# 267 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "setzt er diese drei Pokémon ein:\p"
# 268 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Einzelhorn-Pokémon, Typ Käfer &\n"
# 269 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampf. Ein Mondschein-Pokémon, Typ\p"
# 270 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Unlicht sowie ein Häutung-Pokémon,\n"
# 271 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Käfer & Geist.$"
# 272 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 273 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
# 274 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen den\n"
# 275 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ringmeister angetreten, wenn er\l"
# 276 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "ernsthaft kämpft?\p"
# 277 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Er bleibt auch dann noch sehr höflich\n"
# 278 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "und setzt diese drei Pokémon ein:\p"
# 279 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Mondschein-Pokémon, Typ\n"
# 280 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Unlicht, ein Schatten-Pokémon, Typ\l"
# 281 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Geist & Gift sowie ein Pilz-Pokémon,\l"
# 282 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Pflanze & Kampf.$"
# 283 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 284 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
# 285 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 286 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 287 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 288 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein sehr hinterhältiger Trainer…\n"
# 289 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Der Palastregent, der hier alles leitet.$"
# 290 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 291 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
# 292 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen den Palast-\n"
# 293 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "regenten angetreten?\p"
# 294 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn er den Geist seiner Gegner\n"
# 295 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "abschätzen will, setzt er diese\l"
# 296 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "3 Pokémon ein:\p"
# 297 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Fledermaus-Pokémon, Typ Gift &\n"
# 298 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Flug. Ein Müßig-Pokémon, Typ\p"
# 299 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Normal sowie ein Transport-Pokémon,\n"
# 300 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Wasser & EIS.$"
# 301 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 302 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
# 303 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen den Palast-\n"
# 304 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "regenten angetreten, wenn er\l"
# 305 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "ernsthaft kämpft?\p"
# 306 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn er im Kampf alles geben will, setzt\n"
# 307 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "er diese drei Pokémon ein:\p"
# 308 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein legendäres Pokémon, Typ Feuer.\n"
# 309 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Müßig-Pokémon, Typ\p"
# 310 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Normal sowie ein Polarlicht-Pokémon,\n"
# 311 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Wasser.$"
# 312 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 313 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingIsThere::
# 314 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ich wette, das hier weißt du noch nicht!\p"
# 315 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Einer der Top-Trainer, die Scott die\n"
# 316 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Kampfkoryphäen nennt, ist hier.\p"
# 317 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein sehr hitzköpfiger Trainer…\n"
# 318 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Der Pyrakönig, der hier alles leitet.$"
# 319 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 320 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
# 321 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen den Pyrakönig\n"
# 322 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten?\p"
# 323 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn er die Kraft seiner Gegner\n"
# 324 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "abschätzen will, setzt er diese\l"
# 325 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "3 Pokémon ein:\p"
# 326 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Steingipfel-Pokémon, Typ Gestein.\n"
# 327 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Eisberg-Pokémon, Typ\p"
# 328 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Eis sowie ein Eisen-Pokémon,\n"
# 329 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Typ Stahl.$"
# 330 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 331 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
# 332 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bist du schon mal gegen den Pyrakönig\n"
# 333 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "angetreten, wenn er ernsthaft\l"
# 334 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "kämpft?\p"
# 335 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Wenn er vor Kraft fast explodiert,\n"
# 336 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "setzt er diese drei Pokémon ein:\p"
# 337 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Eis-Pokémon, Typ Eis & Flug.\n"
# 338 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Ein Elektro-Pokémon, Typ\p"
# 339 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Elektro & Flug sowie ein Flamme-\n"
# 340 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Pokémon, Typ Feuer & Flug$"
# 341 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 342 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
# 343 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Natürlich gibt es verschiedene Orte, an\n"
# 344 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "denen du Doppelkämpfe austragen\l"
# 345 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "kannst.\p"
# 346 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Aber die Doppelkämpfe des\n"
# 347 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Duellturms sind klasse!\p"
# 348 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Dort kannst du lernen, wie die Doppel-\n"
# 349 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "kämpfe hier in der Kampfzone\l"
# 350 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "ausgetragen werden.$"
# 351 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 352 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
# 353 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Beobachte dich selbst und lerne dazu.\p"
# 354 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Die Trainer hier haben Strategien\n"
# 355 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "entwickelt, die sie nur hier in\l"
# 356 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Doppelkämpfen einsetzen!$"
# 357 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 358 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
# 359 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Sobald du Selbstvertrauen gewonnen\n"
# 360 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "hast und du dich bei Doppelkämpfen\l"
# 361 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "auskennst, solltest du andere Orte\l"
# 362 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "aufsuchen, die diese Kämpfe anbieten.$"
# 363 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 364 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_MultiBattleAdvice::
# 365 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "In der Teamlounge trifft man auf die\n"
# 366 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "unterschiedlichsten Trainer.\p"
# 367 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Stell dir mal vor! Du triffst vielleicht\n"
# 368 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "auf einen Freund oder Fans!\l"
# 369 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Schau dich gut um!$"
# 370 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 371 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
# 372 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Begleitet dich ein Freund, solltet ihr\n"
# 373 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "den Link-Multikampf-Raum aufsuchen.\p"
# 374 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Trittst du mit einem starken Freund\n"
# 375 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "an, sind auch deine Gegner stark!$"
# 376 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 377 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_NewsGatheringPower::
# 378 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Was für ein Talent, Neuigkeiten aufzu-\n"
# 379 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "spüren! Niemand kann meinem Mentor\l"
# 380 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "darin das Wasser reichen!$"
# 381 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 382 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
# 383 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Was für eine Beobachtungsgabe!\n"
# 384 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Niemand kann meinem Mentor\l"
# 385 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "darin das Wasser reichen!$"
# 386 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 387 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
# 388 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Was für eine Überzeugungskraft!\n"
# 389 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Niemand kann meinem Mentor\l"
# 390 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "darin das Wasser reichen!$"
# 391 "data/maps/BattleFrontier_Lounge2/scripts.pory"

# 392 "data/maps/BattleFrontier_Lounge2/scripts.pory"
BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
# 393 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Was ist dies für ein Ort?\n"
# 394 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Er macht mir Angst…$"
