# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts::
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition:
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_STAIR_GUARD, 14, 2
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hallo und Willkommen in der\n"
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Devon Corporation.\p"
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Wir sind die stolzen Entwickler von\n"
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Medizin und Items, die das Leben\l"
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "bereichern.$"
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Einem Mitglied unseres Forschungs-\n"
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "teams ist blöderweise ein wichtiges\l"
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Paket gestohlen worden.$"
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, diese Turbotreter!\n"
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Die haben wir auch entwickelt!\p"
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Ich freue mich immer, wenn ich jemanden\n"
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "treffe, der eines unserer Produkte\l"
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "benutzt.$"
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Das gestohlene Paket…\p"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Nun, es ist natürlich sehr wichtig, aber\n"
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "mit dem Inhalt kann niemand etwas\l"
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anfangen.\p"
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Meiner Einschätzung nach ist der Dieb\n"
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "wirklich nicht sehr schlau gewesen…$"
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Klingt, als hätten wir die gestohlenen\n"
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Devon-Waren zurückerhalten.$"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Tut mir Leid, aber nur autorisierte\n"
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Personen haben hier Zutritt.$"
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Das ist mehr als blöd.\n"
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Wie konnten wir nur ausgeraubt werden?$"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi {PLAYER}!\n"
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Du bist hier jederzeit willkommen!$"
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In diesem Schaukasten sind Steine und\n"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Metalle ausgestellt.\p"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Und da ist ein kleines Schild, auf dem\n"
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "etwas geschrieben steht…\p"
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Die Devon Corporation begann\n"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "ihre Erfolgsgeschichte mit der\p"
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Verarbeitung von Steinen aus\n"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Steinbrüchen.\p"
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Außerdem verarbeitete sie Eisenspäne,\n"
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "die man im Sand finden kann.\p"
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Die Verarbeitung von Rohmaterialien\n"
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "war nur der Anfang.\p"
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Heute stellt Devon eine große Anzahl\n"
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "von Industrieprodukten her.”$"
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In diesem Schaukasten kann man\n"
# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypen und Testprodukte sehen.\p"
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hier ist eine Beschreibung…\p"
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Neben der Herstellung von Industrie-\n"
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "produkten stellt Devon eine Vielzahl\p"
# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "an Gütern her, die das alltägliche Leben\n"
# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "leichter machen.\p"
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Devon hat damit begonnen, hilfreiche\n"
# 150 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Produkte für Pokémon-Trainer zu\p"
# 151 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "entwickeln, wie Pokébälle und das\n"
# 152 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Pokénav-System.”$"
