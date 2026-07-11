# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTOR
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTORIA
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VIVI
# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICKY
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	release
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Ich habe noch nie einen Trainer ge-\n"
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "sehen, der seine Pokémon so meister-\l"
# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "haft einsetzt wie du.\p"
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Aber, ich muss dir auch sagen… mein\n"
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Sohn ist stärker als du.\p"
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Er hat sogar die Pokémon Liga heraus-\n"
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "gefordert. Das solltest du wissen.$"
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Wir benutzen dieses Machoband, um die\n"
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Pokémon im Training noch mehr\l"
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "zu stärken.\p"
# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Da du unsere gesamte Familie besiegt\n"
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "hast, brauchst du es vielleicht gar\l"
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "nicht. Aber wir möchten dir dieses\l"
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Machoband trotzdem gerne schenken.$"
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Wenn es um Pokémon-Kämpfe geht, ist\n"
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "die ganze Familie sehr leidenschaftlich.$"
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mami ist stärker als Papi.\p"
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Ich bin stärker als Mami.\p"
# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Und Omi ist stärker als ich!\p"
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Und mein großer Bruder ist noch\n"
# 87 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "stärker als Omi!$"
# 88 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 89 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 90 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Es steht außer Frage, dass du stark\n"
# 91 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "bist.\p"
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Aber wenn du gegen meinen Enkel an-\n"
# 93 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "treten willst, bringt dir das nur Tränen\l"
# 94 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "der Frustration ein.\p"
# 95 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Er ist viel stärker als jeder Trainer,\n"
# 96 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "den unsere Familie kennt.\p"
# 97 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Er müsste jetzt gerade eigentlich dabei\n"
# 98 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "sein, die Pokémon Liga\l"
# 99 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "herauszufordern.\p"
# 100 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Wie ich meinen Enkel kenne, ist er\n"
# 101 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "mittlerweile bestimmt schon der Champ!$"
# 102 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 103 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 104 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mein Enkel müsste jetzt gerade dabei\n"
# 105 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "sein, die Pokémon Liga\l"
# 106 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "herauszufordern.\p"
# 107 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Wie ich meinen Enkel kenne, ist er\n"
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "mittlerweile bestimmt schon der Champ!$"
