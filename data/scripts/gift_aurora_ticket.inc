MysteryGiftScript_AuroraTicket::
	setvaddress MysteryGiftScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_BATTLED_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicketForYou:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich.$"

sText_AuroraTicketUseAtPort:
	.string "Es scheint für den Hafen von\n"
	.string "Lilycove City zu sein.\p"
	.string "Probier es doch mal aus und\n"
	.string "finde heraus, was es damit auf sich hat.$"

sText_AuroraTicketThankYou:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.$"

sText_AuroraTicketBagFull:
	.string "Oh, tut mir leid, {PLAYER}.\n"
	.string "Deine Tasche hat keinen Platz mehr\n"
	.string "für Basis-Items.\p"
	.string "Lager etwas auf deinem PC und\n"
	.string "komm dann wieder her.$"
