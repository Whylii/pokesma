# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition:
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad:
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Ich bin der Fossilmaniac… Ich bin\n"
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "ein netter Typ, der Fossilien liebt…\p"
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Möchtest du ein Fossil haben?\p"
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Die Fossilien in dieser Gegend gehören\n"
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "allerdings alle mir! Keines ist für dich…\p"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Wenn du unbedingt ein Fossil haben\n"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "möchtest, geh in die Wüste und suche\l"
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "bei den Felsen und im Sand. Vielleicht\l"
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "findest du dort eines…$"
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Du hast ein Fossil gefunden, stimmt's?\n"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Das ist schön… Traumhaft…\p"
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Was wirst du mit dem Fossil machen?\p"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Ich habe gehört, dass Devon versucht,\n"
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "aus den Fossilien Pokémon zum\l"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Leben zu erwecken…\p"
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Ich liebe Fossilien, daher würde ich\n"
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "so etwas niemals machen…$"
# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossilien sind so… Wundervoll…\n"
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Einfach traumhaft…$"
# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "So ist es nicht sicher…\p"
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Ich habe hier gegraben…\n"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Die Wand ist auf einmal eingestürzt…\p"
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Jetzt gibt es hier eine große Höhle…\p"
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Aber ich habe sie nicht weiter\n"
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "untersucht, denn ich glaube nicht, dass\l"
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "sich dort ein Fossil befindet…$"
