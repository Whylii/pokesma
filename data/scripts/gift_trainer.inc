MysteryGiftScript_VisitingTrainer::
	setvaddress MysteryGiftScript_VisitingTrainer
	special ValidateEReaderTrainer
	vgoto_if_eq VAR_RESULT, 0, MysteryGiftScript_VisitingTrainerArrived
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerInstructions
	waitmessage
	waitbuttonpress
	release
	end

MysteryGiftScript_VisitingTrainerArrived:
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerArrived
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftVisitingTrainerInstructions:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Mit dieser Wunderkarte kannst du\n"
	.string "an einer Umfrage in einem\l"
	.string "Pokémon-Markt teilnehmen.\p"
	.string "Nutze diese Umfragen, um Trainer\n"
	.string "nach Graphitport City einzuladen.\p"
	.string "...Ich verrate dir ein geheimes\n"
	.string "Passwort für eine Umfrage:\p"
	.string "GIVE ME\n"
	.string "AWESOME TRAINER\p"
	.string "Trag das in eine Umfrage ein und\n"
	.string "schicke sie an das drahtlose\l"
	.string "Kommunikations-System.$"

sText_MysteryGiftVisitingTrainerArrived:
	.string "Danke für die Nutzung des\n"
	.string "Geheimgeschehen-Systems.\p"
	.string "Ein Trainer ist in Graphitport City\n"
	.string "angekommen und sucht dich.\p"
	.string "Wir hoffen, du genießt den Kampf\n"
	.string "mit dem Gast-Trainer.\p"
	.string "Du kannst andere Trainer mit\n"
	.string "weiteren Passwörtern einladen.\p"
	.string "Probier andere Passwörter aus.$"
