BattleFrontier_Lounge5_MapScripts::
	.byte 0

BattleFrontier_Lounge5_EventScript_NatureGirl::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_NatureGirlGreeting, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	chooseboxmon
	waitstate
	lock
	faceplayer
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge5_EventScript_NatureGirlEgg
	special ShowNatureGirlMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlEgg::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlEgg, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_NatureGirlNoneShown::
	msgbox BattleFrontier_Lounge5_Text_NatureGirlNoneShown, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge5_EventScript_Gentleman::
	msgbox BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_BlackBelt::
	msgbox BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound, MSGBOX_NPC
	end

BattleFrontier_Lounge5_EventScript_LittleBoy::
	msgbox BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot, MSGBOX_NPC
	end

BattleFrontier_Lounge5_Text_NatureGirlGreeting::
	.string "Hihihi! Ich kann die Gedanken\n"
	.string "von Pokémon lesen!\p"
	.string "Bitte! Darf ich deine Pokémon mal\n"
	.string "sehen? Bitte, bitte!$"

BattleFrontier_Lounge5_Text_NatureGirlNoneShown::
	.string "Booh!\n"
	.string "Fiesling!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es kämpft für sein\n"
	.string "Leben gern! Es kämpft sogar,\l"
	.string "wenn es ganz viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es kämpft für sein\n"
	.string "Leben gern! Aber wenn es genug\l"
	.string "Autschies hat, sorgt es sich!$"

BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es kämpft für sein\n"
	.string "Leben gern! Aber wenn es genug\l"
	.string "Autschies hat, wird es faul!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow::
	.string "Hmm…\p"
	.string "Dieses hier sagt, es liebt Kämpfe!\n"
	.string "Es wird sogar kämpfen, wenn es\l"
	.string "ganz viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es passt auf sich auf!\n"
	.string "Es sorgt sich um sich, egal ob es\l"
	.string "viele oder wenig Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es passt auf sich auf!\n"
	.string "Aber wenn es genug Autschies hat,\l"
	.string "wird es faul!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es mag es faul zu sein!\n"
	.string "Aber wenn es genug Autschies hat,\l"
	.string "schlägt es zurück!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es mag es faul zu sein!\n"
	.string "Aber wenn es genug Autschies hat,\l"
	.string "sorgt es sich um sich!$"

BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow::
	.string "Hmhm…\p"
	.string "Dieses sagt, es mag es faul zu sein!\n"
	.string "Es sagt, es ist auch gern faul,\l"
	.string "wenn es viele Autschies hat!$"

BattleFrontier_Lounge5_Text_NatureGirlEgg::
	.string "Du bist komisch! Das ist ein Ei. Das\n"
	.string "schläft doch! Wie soll ich damit reden?!$"

BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon::
	.string "Wie charmant!\n"
	.string "Diese kleine Dame hier behauptet, sie\l"
	.string "könne die Pokémon verstehen!$"

BattleFrontier_Lounge5_Text_GirlSayingSomethingProfound::
	.string "Ich habe das Gefühl, dies kleine\n"
	.string "Mädchen sagt profunde Dinge!$"

BattleFrontier_Lounge5_Text_GirlPlaysAtRedHouseALot::
	.string "Ich weiß was! Ich weiß was!\p"
	.string "Das kleine Mädchen spielt ganz oft\n"
	.string "im roten Haus!$"

