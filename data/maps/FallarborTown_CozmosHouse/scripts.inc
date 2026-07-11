# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_METEORITE
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_RETURN
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Kosmo: Oh…\n"
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ich hätte mich nie dazu verleiten\l"
# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "lassen dürfen, Team Magma zu verraten,\l"
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "wo Meteoriten zu finden sind…\p"
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Der Meteorit von den Meteorfällen…\n"
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Nun wird er niemals mir gehören…$"
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh!\n"
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oooh?\p"
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Dieses Item…\p"
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Kann es sein?\p"
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ist das der Meteorit, den Team Magma\n"
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "aus den Meteorfällen entwendet hat?\p"
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Bitte, darf ich den haben?\p"
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Du bekommst auch etwas dafür.\n"
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Was hältst du von dieser TM?$"
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Kosmo: Mit dieser TM möchte ich\n"
# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "dir meine Dankbarkeit ausdrücken.\l"
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Bitte, nimm sie an!$"
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Kosmo: Oh, ich kann es einfach\n"
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "nicht glauben! Das ist nett! So nett!!!\p"
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Das wird mir bei meinen Forschungen\n"
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "enorm weiterhelfen!$"
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Kosmo: Oh, aber…\n"
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Das enttäuscht mich jetzt maßlos…$"
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Kosmo: Bitte, darf ich den\n"
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Meteoriten haben?\p"
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ich möchte ihn nicht umsonst haben! Wie\n"
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "wäre es mit dieser TM im Tausch dafür?$"
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Kosmo ist unterwegs zu den\n"
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Meteorfällen an der Route 114. Einige\l"
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Leute von Team Magma begleiten ihn.$"
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Armer Prof. Kosmo…\n"
# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Er ist so deprimiert… Er tut mir Leid.$"
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Schau dir nur Prof. Kosmo an…\n"
# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Er ist so glücklich! Richtig niedlich.$"
