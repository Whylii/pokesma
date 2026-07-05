MysteryGiftScript_OldSeaMap::
	setvaddress MysteryGiftScript_OldSeaMap
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_OLD_SEA_MAP, OldSeaMap_Obtained
	vgoto_if_set FLAG_CAUGHT_MEW, OldSeaMap_Obtained
	checkitem ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, TRUE, OldSeaMap_Obtained
	vmessage sText_MysteryGiftOldSeaMapForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_OLD_SEA_MAP
	vgoto_if_eq VAR_RESULT, FALSE, OldSeaMap_NoBagSpace
	giveitem ITEM_OLD_SEA_MAP
	setflag FLAG_ENABLE_SHIP_FARAWAY_ISLAND
	setflag FLAG_RECEIVED_OLD_SEA_MAP
	vmessage sText_MysteryGiftOldSeaMapUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

OldSeaMap_NoBagSpace:
	vmessage sText_MysteryGiftOldSeaMapBagFull
	waitmessage
	waitbuttonpress
	release
	end

OldSeaMap_Obtained:
	vmessage sText_MysteryGiftOldSeaMapThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftOldSeaMapForYou:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Bist du {PLAYER}?\p"
	.string "Wir haben diese alte Seekarte\n"
	.string "für dich erhalten.$"

sText_MysteryGiftOldSeaMapUseAtPort:
	.string "Sie scheint für den Hafen von\n"
	.string "Lilycove City zu sein.\p"
	.string "Probier es doch mal aus und\n"
	.string "finde heraus, was es damit auf sich hat.$"

sText_MysteryGiftOldSeaMapThankYou:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.$"

sText_MysteryGiftOldSeaMapBagFull:
	.string "Oh, tut mir leid, {PLAYER}.\n"
	.string "Deine Tasche hat keinen Platz mehr\n"
	.string "für Basis-Items.\p"
	.string "Lager etwas auf deinem PC und\n"
	.string "komm dann wieder her.$"
