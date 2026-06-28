# 1 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 2 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_MapScripts::
# 3 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 12 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 13 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 14 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 15 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 20 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 21 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 26 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Ich untersuche das Schiff im Auftrag\n"
# 28 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "von Kapt. Brigg.\p"
# 29 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Er hat mich auch beauftragt, einen\n"
# 30 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Scanner zu finden, aber ich habe \l"
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "ihn noch nicht gefunden.$"
# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! Das ist der Scanner!\p"
# 35 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Würdest du den bitte für mich zu\n"
# 36 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Kapt. Brigg bringen? Das wäre nett.\p"
# 37 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Ich möchte das Schiff noch weiter\n"
# 38 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "untersuchen.$"
# 39 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Dieses Schiff heißt MS Cactus. Es\n"
# 42 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "scheint aus einer früheren Epoche zu\l"
# 43 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "stammen.$"
