MysteryGiftScript_MysticTicket::
	setvaddress MysteryGiftScript_MysticTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_LUGIA, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_HO_OH, MysticTicket_Obtained
	checkitem ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, MysticTicket_Obtained
	vmessage sText_MysticTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage sText_MysticTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_NoBagSpace:
	vmessage sText_MysticTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_Obtained:
	vmessage sText_MysticTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysticTicketForYou:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich.$"

sText_MysticTicketUseAtPort:
	.string "Es scheint für den Hafen von\n"
	.string "Lilycove City zu sein.\p"
	.string "Probier es doch mal aus und\n"
	.string "finde heraus, was es damit auf sich hat.$"

sText_MysticTicketThankYou:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.$"

sText_MysticTicketBagFull:
	.string "Oh, tut mir leid, {PLAYER}.\n"
	.string "Deine Tasche hat keinen Platz mehr\n"
	.string "für Basis-Items.\p"
	.string "Lager etwas auf deinem PC und\n"
	.string "komm dann wieder her.$"
