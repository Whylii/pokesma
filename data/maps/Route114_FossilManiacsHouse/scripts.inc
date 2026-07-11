# 1 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_MapScripts::
# 3 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
# 4 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 6 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_OnTransition:
# 7 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
# 8 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 9 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 10 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_ReceivedDig
# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
# 15 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	giveitem ITEM_TM_DIG
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 17 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 19 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 20 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 21 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_ReceivedDig::
# 22 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
# 23 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 24 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 25 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 26 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_RockDisplay::
# 27 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 29 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 30 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_Bookshelf::
# 31 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
# 32 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 33 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 34 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
# 35 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Mein großer Bruder ist ein Fossil-\n"
# 36 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "maniac… Er ist ein netter Kerl, der\l"
# 37 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Fossilien liebt…\p"
# 38 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Er liebt es auch, Löcher zu graben…\n"
# 39 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Dieses Loch hat er alleine gegraben!\p"
# 40 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Hier, das kannst du haben. Damit kannst\n"
# 41 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "du Löcher graben, wie mein Bruder…$"
# 42 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 43 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
# 44 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Wenn ein Pokémon in einer Höhle\n"
# 45 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Schaufler einsetzt, kommst du zum\l"
# 46 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Eingang zurück.$"
# 47 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 48 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
# 49 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Steine in den unterschiedlichsten\n"
# 50 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Formen liegen im Glasschaukasten.$"
# 51 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 52 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_CrammedWithBooks:
# 53 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Die Zusammensetzung der Erdschicht…\n"
# 54 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Wie Regen das Land formt…\l"
# 55 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Steine, Boden und Felsen…\p"
# 56 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Gerammelt voll mit Büchern.$"
