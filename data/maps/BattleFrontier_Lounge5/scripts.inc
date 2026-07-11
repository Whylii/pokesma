# 1 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 2 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_MapScripts::
# 3 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 5 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirl::
# 6 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 7 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 8 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
# 9 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 10 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	chooseboxmon
# 11 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitstate
# 12 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
# 15 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 16 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
# 17 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	special ShowNatureGirlMessage
# 18 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitmessage
# 19 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	waitbuttonpress
# 20 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 21 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 23 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
# 24 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 26 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 27 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 28 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
# 29 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
# 30 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	release
# 31 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 33 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_Gentleman::
# 34 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
# 35 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 37 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_BlackBelt::
# 38 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
# 39 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 41 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_EventScript_LittleBoy::
# 42 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
# 43 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 45 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlGreeting::
# 46 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hihihi! Ich kann die Gedanken\n"
# 47 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "von Pokémon lesen!\p"
# 48 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Bitte! Darf ich deine Pokémon mal\n"
# 49 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "sehen? Bitte, bitte!$"
# 50 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 51 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
# 52 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Booh!\n"
# 53 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Fiesling!$"
# 54 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 55 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow::
# 56 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 57 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es kämpft für sein\n"
# 58 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Leben gern! Es kämpft sogar,\l"
# 59 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "wenn es ganz viele Autschies hat!$"
# 60 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 61 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow::
# 62 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 63 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es kämpft für sein\n"
# 64 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Leben gern! Aber wenn es genug\l"
# 65 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Autschies hat, sorgt es sich!$"
# 66 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 67 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow::
# 68 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 69 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es kämpft für sein\n"
# 70 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Leben gern! Aber wenn es genug\l"
# 71 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Autschies hat, wird es faul!$"
# 72 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 73 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow::
# 74 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmm…\p"
# 75 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
# 76 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Es wird sogar kämpfen, wenn es\l"
# 77 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "ganz viele Autschies hat!$"
# 78 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 79 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow::
# 80 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 81 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es passt auf sich auf!\n"
# 82 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Es sorgt sich um sich, egal ob es\l"
# 83 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "viele oder wenig Autschies hat!$"
# 84 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 85 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow::
# 86 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 87 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es passt auf sich auf!\n"
# 88 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Aber wenn es genug Autschies hat,\l"
# 89 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "wird es faul!$"
# 90 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 91 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow::
# 92 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 93 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es mag es faul zu sein!\n"
# 94 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Aber wenn es genug Autschies hat,\l"
# 95 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "schlägt es zurück!$"
# 96 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 97 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow::
# 98 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 99 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es mag es faul zu sein!\n"
# 100 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Aber wenn es genug Autschies hat,\l"
# 101 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "sorgt es sich um sich!$"
# 102 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 103 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow::
# 104 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Hmhm…\p"
# 105 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Dieses sagt, es mag es faul zu sein!\n"
# 106 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Es sagt, es ist auch gern faul,\l"
# 107 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "wenn es viele Autschies hat!$"
# 108 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 109 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_NatureGirlEgg::
# 110 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Du bist komisch! Das ist ein Ei. Das\n"
# 111 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "schläft doch! Wie soll ich damit reden?!$"
# 112 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 113 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
# 114 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Wie charmant!\n"
# 115 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Diese kleine Dame hier behauptet, sie\l"
# 116 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "könne die Pokémon verstehen!$"
# 117 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 118 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
# 119 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Ich habe das Gefühl, dies kleine\n"
# 120 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Mädchen sagt profunde Dinge!$"
# 121 "data/maps/BattleFrontier_Lounge5/scripts.pory"

# 122 "data/maps/BattleFrontier_Lounge5/scripts.pory"
BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
# 123 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Ich weiß was! Ich weiß was!\p"
# 124 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "Das kleine Mädchen spielt ganz oft\n"
# 125 "data/maps/BattleFrontier_Lounge5/scripts.pory"
	.string "im roten Haus!$"
