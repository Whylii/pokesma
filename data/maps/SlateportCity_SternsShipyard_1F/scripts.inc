# 1 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_MapScripts::
# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 63 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 64 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
# 67 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Ähmm… Wenn das hierhin gehört und das\n"
# 68 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "dahin…\p"
# 69 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Wo gehört dieses dann hin?\n"
# 70 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Und was ist mit diesem Dingsbums?\p"
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aaargh! Ich werde daraus einfach nicht\n"
# 72 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "schlau!$"
# 73 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
# 75 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hm?\n"
# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hallo, ich bin Bootmar.\p"
# 77 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Kapt. Brigg hat mich damit\n"
# 78 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "beauftragt, eine Fähre zu konstruieren.\p"
# 79 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Oh! Das da…\n"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Sind das Devon-Waren?\p"
# 81 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aber, ähm… Das ist ein ungünstiger\n"
# 82 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Zeitpunkt…\p"
# 83 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Kapt. Brigg ist irgendwohin ge-\n"
# 84 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "gangen. Er sagte, er müsse was\l"
# 85 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "erledigen.\p"
# 86 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Kann ich dich bitten, Kapt. Brigg zu\n"
# 87 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "suchen und ihm das Paket zu bringen?$"
# 88 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
# 90 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Bootmar: Wo könnte Kapt. Brigg wohl\n"
# 91 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "hingegangen sein?\p"
# 92 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Kannst du bitte Kapt. Brigg suchen und\n"
# 93 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "ihm die Waren übergeben?$"
# 94 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 95 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Bootmar: Der Schiffsbau ist eine Kunst.\p"
# 97 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Manche Dinge lassen sich auch durch\n"
# 98 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Berechnungen nicht vorhersehen.\p"
# 99 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Jemand, der das Meer kennt wie seine\n"
# 100 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Westentasche, müsste mir helfen…$"
# 101 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 102 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
# 103 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Bootmar: Hallo! Mr. Brack hat sich\n"
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "bereit erklärt, uns zu helfen.\p"
# 105 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Dank dieses erfahrenen Seemannes\n"
# 106 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "kommen wir zügig voran.$"
# 107 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 108 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
# 109 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Bootmar: Die Fähre ist bald fertig!\p"
# 110 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Die neue MS Tide ist ein wahres\n"
# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Technikwunder!\p"
# 112 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aber ich denke doch, dass wir noch\n"
# 113 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "einiges besser machen können.\p"
# 114 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Weißt du, die technische Entwicklung\n"
# 115 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "wird niemals abgeschlossen sein.$"
# 116 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 117 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
# 118 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Mr. Brack: Ah, {PLAYER}{KUN}!\n"
# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Es ist schon lange her!\p"
# 120 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, seit ich dich kennen gelernt habe,\n"
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "bin ich wieder voller Tatendrang.\p"
# 122 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Also habe ich mich entschlossen,\n"
# 123 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Bootmar beim Bau der Fähre zu helfen.\p"
# 124 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, so wie es aussieht, wird die Fähre\n"
# 125 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "viele Passagiere befördern können.\p"
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aber, weißt du, Bootmar ist wirklich\n"
# 127 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "eine besondere Persönlichkeit.\p"
# 128 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Mit seinem technischen Wissen und\n"
# 129 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "meiner Erfahrung auf See werden wir\l"
# 130 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "ein ganz besonderes Schiff bauen, aye.$"
# 131 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 132 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
# 133 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Die Jahreszeit, das Wetter, der Mond,\n"
# 134 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "der vom Himmel herabstrahlt…\p"
# 135 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Das sind die Bedingungen, die die See\n"
# 136 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "so wechselhaft machen.\p"
# 137 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Ganz genau!\n"
# 138 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Die See ist wie ein lebendiges Wesen!$"
# 139 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 140 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
# 141 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Ich werde sehr schnell seekrank.\n"
# 142 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Deshalb helfe ich lieber hier aus.$"
