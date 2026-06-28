# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"

# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition:
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowNoRoomForDecor
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"

# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_OfferAdvice::
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"

# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"

# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"

# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"

# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"

# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EverythingClutteredKeepThis:
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Lanette: Oh! {PLAYER}{KUN}!\p"
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Entschuldige, dass es hier so chaotisch\n"
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "aussieht. Immer, wenn ich forsche,\l"
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "vergesse ich aufzuräumen…\p"
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Das ist echt peinlich… Erzähl das bloß\n"
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "niemandem! Ich gebe dir auch dies hier…$"
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"

# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_OrganizeYourBoxes:
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Soll ich dir einige Hinweise zum\n"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Pokémon-Lagerungs-System geben?\p"
# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Du solltest deine Boxen gut verwalten,\n"
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "damit du weißt, welche Pokémon sich \l"
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "in welcher Box befinden…$"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"

# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 65 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Lanettes Forschungs-Aufzeichnungen.\n"
# 66 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Das sind Informationen zu den Boxen.\p"
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Es sollten Boxen eingerichtet werden,\n"
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "die jeweils 30 Pokémon aufnehmen\l"
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "können.\p"
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Jeder Trainer sollte in der Lage sein,\n"
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "420 Pokémon im PC-System zu lagern.\p"
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Weiterlesen?$"
# 73 "data/maps/Route114_LanettesHouse/scripts.pory"

# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Es muss ein Markierungssystem einge-\n"
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "richtet werden, mit dem man eine gute\l"
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Übersicht über die Pokémon bekommt.\p"
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Der Name und der Hintergrund jeder BOX\n"
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "lassen sich verändern, zur Freude der\l"
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "darin gelagerten Pokémon.\p"
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Weiterlesen?$"
# 82 "data/maps/Route114_LanettesHouse/scripts.pory"

# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Immer, wenn ein Pokémon gelagert wird,\n"
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "wird es in der BOX gelagert, die als\l"
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Letzte geöffnet wurde.\p"
# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Ist diese Box voll, wird das Pokémon in\n"
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "der nächsten Box gelagert.\p"
# 89 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Mit anderen Worten, die zuletzt ge-\n"
# 90 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "öffnete Box wird automatisch gewählt,\l"
# 91 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "um ein Pokémon zu lagern.$"
# 92 "data/maps/Route114_LanettesHouse/scripts.pory"

# 93 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 94 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} schließt das Notizbuch.$"
# 95 "data/maps/Route114_LanettesHouse/scripts.pory"

# 96 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill:
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Da ist eine E-Mail von jemandem\n"
# 98 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "auf dem PC.\p"
# 99 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“… … … … … … …\p"
# 100 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Dein Lagerungs-System bietet viel mehr\n"
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Komfort als meines.\p"
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Es besitzt viele anwenderfreundliche\n"
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Features, die nützlich sind und Spaß\l"
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "machen.\p"
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Es macht mich stolz, dass ich Teil\n"
# 106 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "dieser Entwicklung war.\p"
# 107 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Ich hoffe sehr, du setzt deine For-\n"
# 108 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "schungen in diesem Bereich weiter fort.\p"
# 109 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Bill\n"
# 110 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… … … … … … … …”$"
