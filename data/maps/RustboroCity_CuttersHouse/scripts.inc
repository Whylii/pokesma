# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Diese Entschlossenheit…\n"
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Deine Beweglichkeit…\l"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Deine Hingabe für Pokémon…\p"
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Du bist wirklich ein talentierter\n"
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Trainer!\p"
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Nein, warte. Sag jetzt nichts.\n"
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Ich brauche dich nur anzuschauen.\p"
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Ich bin mir sicher, dass du mit dieser\n"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "VM sehr gut umgehen wirst.\p"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Kein Grund, so schüchtern zu sein.\n"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hier, nimm sie!$"
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut:
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Diese Versteckte Maschine, sie enthält\n"
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Zerschneider. Eine VM ist eine Attacke,\l"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "die auch außerhalb des Kampfes von\l"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "einem Pokémon angewandt werden kann.\p"
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Jedes Pokémon, das diese Attacke\n"
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "gelernt hat, kann Bäume damit\l"
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "zerschneiden, wenn der Trainer den\l"
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Steinorden besitzt.\p"
# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Und, wie eine TM, kann eine VM\n"
# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "mehrfach gelehrt werden.$"
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Als sie die Stadt Metarost City\n"
# 52 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "vergrößert haben, hat mein Vater ihnen\l"
# 53 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "geholfen.\p"
# 54 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Seine Pokémon fällten die Bäume mit\n"
# 55 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Zerschneider.$"
