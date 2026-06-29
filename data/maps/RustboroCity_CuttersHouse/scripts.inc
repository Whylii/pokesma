RustboroCity_CuttersHouse_EventScript_Cutter::
# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
	checkitem ITEM_MULTITOOL
# 0 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_CuttersHouse_EventScript_Cutter_2
	checkitem ITEM_HM_CUT
# 0 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_CuttersHouse_EventScript_Cutter_5
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_CuttersHouse_EventScript_Cutter_10
RustboroCity_CuttersHouse_EventScript_Cutter_9:
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_Cutter_Text_0
RustboroCity_CuttersHouse_EventScript_Cutter_7:
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end

RustboroCity_CuttersHouse_EventScript_Cutter_2:
# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_AlreadyHasTool, MSGBOX_NPC
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end

RustboroCity_CuttersHouse_EventScript_Cutter_5:
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_NPC
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_NPC
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end

RustboroCity_CuttersHouse_EventScript_Cutter_8:
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_BattleOffer, MSGBOX_YESNO
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_CuttersHouse_EventScript_Cutter_13
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	trainerbattle_single TRAINER_CUTTER_1 Text_CutterIntro Text_CutterDefeat RustboroCity_CuttersHouse_EventScript_AfterBattle
	goto RustboroCity_CuttersHouse_EventScript_Cutter_7

RustboroCity_CuttersHouse_EventScript_Cutter_10:
	checkitem ITEM_MULTITOOL
# 0 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_CuttersHouse_EventScript_Cutter_8
	goto RustboroCity_CuttersHouse_EventScript_Cutter_9

RustboroCity_CuttersHouse_EventScript_Cutter_13:
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_PlayerAnsweredNo
	goto RustboroCity_CuttersHouse_EventScript_Cutter_7


RustboroCity_CuttersHouse_EventScript_PlayerAnsweredNo::
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_PlayerRefused, MSGBOX_NPC
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end


RustboroCity_CuttersHouse_EventScript_AfterBattle::
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_AfterBattle, MSGBOX_NPC
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_MULTITOOL
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	waitfanfare
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
	end


# 112 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 113 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 114 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0	
# 115 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 116 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 117 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 118 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 119 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 120 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 121 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Als sie die Stadt Metarost City\n"
# 122 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "vergrößert haben, hat mein Vater ihnen\l"
# 123 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "geholfen.\p"
# 124 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Seine Pokémon fällten die Bäume mit\n"
# 125 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Zerschneider.$"

RustboroCity_CuttersHouse_EventScript_Cutter_Text_0:
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Komm zurück, wenn du den\n"
	.string "Steinorden hast, und ich bringe\l"
	.string "dir eine weitere Technik bei.$"

RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse::
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Diese Entschlossenheit…\n"
	.string "Deine Beweglichkeit…\l"
	.string "Deine Hingabe für Pokémon…\p"
	.string "Du bist wirklich ein talentierter\n"
	.string "Trainer!\p"
	.string "Nein, warte. Sag jetzt nichts.\n"
	.string "Ich brauche dich nur anzuschauen.\p"
	.string "Ich bin mir sicher, dass du mit dieser\n"
	.string "VM sehr gut umgehen wirst.\p"
	.string "Kein Grund, so schüchtern zu sein.\n"
	.string "Hier, nimm sie!$"

RustboroCity_CuttersHouse_Text_ExplainCut::
# 64 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Diese Versteckte Maschine, sie enthält\n"
	.string "Zerschneider. Eine VM ist eine Attacke,\l"
	.string "die auch außerhalb des Kampfes von\l"
	.string "einem Pokémon angewandt werden kann.\p"
	.string "Jedes Pokémon, das diese Attacke\n"
	.string "gelernt hat, kann Bäume damit\l"
	.string "zerschneiden, wenn der Trainer den\l"
	.string "Steinorden besitzt.\p"
	.string "Und, wie eine TM, kann eine VM\n"
	.string "mehrfach gelehrt werden.$"

RustboroCity_CuttersHouse_Text_AlreadyHasTool::
# 77 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Das Multitool dient dir\n"
	.string "sicher gut. Viel Erfolg!$"

RustboroCity_CuttersHouse_Text_PlayerRefused::
# 82 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Also gut. Komm zurück,\n"
	.string "wenn du bereit bist.$"

RustboroCity_CuttersHouse_Text_AfterBattle::
# 87 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Gut gemacht. Hier ist\n"
	.string "ein spezielles Multitool!\l"
	.string "Dieses kannst du mit weiteren\l"
	.string "Modulen aufrüsten, von\l"
	.string "mir bekommst du die Axt.$"

Text_CutterIntro::
# 95 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Ich zeige dir, was\n"
	.string "Holzfäller drauf haben!$"

Text_CutterDefeat::
# 100 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hätte ich doch nur\n"
	.string "härter trainiert.$"

RustboroCity_CuttersHouse_EventScript_BattleOffer::
# 105 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "So, du hast also den Orden\n"
	.string "gewonnen.\l"
	.string "Bist du bereit, ein Holzfäller\l"
	.string "zu sein?$"
