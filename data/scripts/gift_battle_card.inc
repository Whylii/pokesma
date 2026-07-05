MysteryGiftScript_BattleCard::
	setvaddress MysteryGiftScript_BattleCard
	vgoto_if_set FLAG_MYSTERY_GIFT_DONE, MysteryGiftScript_BattleCardInfo
	setorcopyvar VAR_RESULT, GET_CARD_BATTLES_WON
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	vgoto_if_ne VAR_0x8008, REQUIRED_CARD_BATTLES, MysteryGiftScript_BattleCardInfo
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard_WonPrize
	waitmessage
	waitbuttonpress
	giveitem ITEM_POTION
	release
	setflag FLAG_MYSTERY_GIFT_DONE
	end

MysteryGiftScript_BattleCardInfo:
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftBattleCountCard:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Deine Kampfzähler-Karte zeichnet\n"
	.string "deine Kämpfe gegen Trainer mit\l"
	.string "gleicher Karte auf.\p"
	.string "Suche und kämpfe gegen Trainer,\n"
	.string "die dieselbe Karte haben.\p"
	.string "Prüfe die Rangliste in den\n"
	.string "Nachrichten.\p"
	.string "Probier es einfach aus!$"

sText_MysteryGiftBattleCountCard_WonPrize:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Glückwunsch!\p"
	.string "Du hast einen Preis für drei\n"
	.string "errungene Siege gewonnen!\p"
	.string "Wir hoffen, das spornt dich zu\n"
	.string "weiteren Kämpfen an.$"
