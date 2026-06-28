# 1 "data/maps/SootopolisCity_House1/scripts.pory"

# 2 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_MapScripts::
# 3 "data/maps/SootopolisCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House1/scripts.pory"

# 5 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
# 6 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BRICK_BREAK, SootopolisCity_House1_EventScript_ReceivedBrickBreak
# 9 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 11 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/SootopolisCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
# 13 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 14 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 15 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 16 "data/maps/SootopolisCity_House1/scripts.pory"

# 17 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_ReceivedBrickBreak::
# 18 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
# 19 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 20 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 21 "data/maps/SootopolisCity_House1/scripts.pory"

# 22 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_EventScript_Kecleon::
# 23 "data/maps/SootopolisCity_House1/scripts.pory"
	lock
# 24 "data/maps/SootopolisCity_House1/scripts.pory"
	faceplayer
# 25 "data/maps/SootopolisCity_House1/scripts.pory"
	waitse
# 26 "data/maps/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 27 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 28 "data/maps/SootopolisCity_House1/scripts.pory"
	waitmoncry
# 29 "data/maps/SootopolisCity_House1/scripts.pory"
	release
# 30 "data/maps/SootopolisCity_House1/scripts.pory"
	end
# 31 "data/maps/SootopolisCity_House1/scripts.pory"

# 32 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_DevelopedThisTM:
# 33 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Seit 30 Jahren lebe ich in Xeneroville\n"
# 34 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "und verbessere meine Fähigkeiten.\p"
# 35 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Ich habe eine alles erschütternde TM\n"
# 36 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "entwickelt. Die schenke ich dir!$"
# 37 "data/maps/SootopolisCity_House1/scripts.pory"

# 38 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_ExplainBrickBreak:
# 39 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "TM31 enthält Durchbruch! Eine schier\n"
# 40 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "unbeschreibliche Attacke. Horror!$"
# 41 "data/maps/SootopolisCity_House1/scripts.pory"

# 42 "data/maps/SootopolisCity_House1/scripts.pory"
SootopolisCity_House1_Text_Kecleon:
# 43 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Kecleon: Puu puhyaah.$"
