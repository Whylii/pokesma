# 1 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Dan::
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterDan
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_DanRematch
# 9 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 11 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 12 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 13 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
# 14 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 17 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 18 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 19 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_DanRematch::
# 20 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
# 22 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Kira::
# 25 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKira
# 26 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms2_1F_EventScript_KiraRematch
# 28 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 30 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 31 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
# 34 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
# 35 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	release
# 36 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 37 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 40 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
# 41 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 42 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Jani::
# 44 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 45 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 47 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 49 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 50 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	end
# 52 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanIntro:
# 54 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Wir haben nach Schätzen gesucht\n"
# 55 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "- und einen Trainer gefunden!$"
# 56 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 57 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanDefeat:
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Wir konnten nicht gewinnen, obwohl\n"
# 59 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "wir zusammengearbeitet haben…$"
# 60 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 61 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostBattle:
# 62 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Wir konnten keine Schätze finden.\n"
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ob uns jemand zuvorgekommen ist?$"
# 64 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 65 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
# 66 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Du hast keine zwei Pokémon.\n"
# 67 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "So kannst du nicht gegen uns antreten.$"
# 68 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraIntro:
# 70 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Oh? Wir haben nach Schätzen\n"
# 71 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "gesucht und einen Trainer gefunden.$"
# 72 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraDefeat:
# 74 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Oh, wow, bist du stark!$"
# 75 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 76 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
# 77 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Ich frage mich, wo die Schätze\n"
# 78 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "versteckt sind…\p"
# 79 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ich weiß, was ich mir alles kaufen\n"
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "würde, wenn ich reich wäre…$"
# 81 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 82 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
# 83 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Hast du keine zwei Pokémon?\n"
# 84 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dann können wir jetzt nicht kämpfen.$"
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 86 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRegister:
# 87 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Du machst mich echt wütend!\n"
# 88 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ich werde dich im Pokénav eintragen.$"
# 89 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
# 91 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Wir haben die ganze Zeit nur nach\n"
# 92 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Schätzen gesucht.\p"
# 93 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Aber unsere Pokémon sind auch stärker\n"
# 94 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "geworden. Dürfen wir dir das zeigen?$"
# 95 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 96 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
# 97 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Du bist stark wie immer.$"
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 99 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanPostRematch:
# 100 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Wir haben keine Schätze gefunden,\n"
# 101 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "sondern gegen Pokémon verloren…\p"
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ich will nach Hause… Aber wenn ich das\n"
# 103 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "laut sage, wird sie sauer auf mich.$"
# 104 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 105 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
# 106 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Max: Du hast keine zwei Pokémon.\n"
# 107 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "So können wir nicht kämpfen.$"
# 108 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 109 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Oh, da bist du ja wieder!\p"
# 111 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Genau wie wir, hast du die Suche nach\n"
# 112 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Schätzen auch nicht aufgegeben, was?\p"
# 113 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Wie wäre es mit einem Kampf? Und der\n"
# 114 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Verlierer gibt die Suche auf?$"
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 116 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
# 117 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Ach, wir haben wieder verloren…$"
# 118 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 119 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
# 120 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Wir müssen unsere Pokémon mehr\n"
# 121 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "trainieren.\p"
# 122 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Wir gehen nicht ohne Schatz nach\n"
# 123 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Hause!$"
# 124 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
# 126 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Jule: Hast du keine zwei Pokémon?\n"
# 127 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Dann müssen wir später kämpfen.$"
# 128 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniIntro:
# 130 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ich kann nicht gut schwimmen.\n"
# 131 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Aber im Kämpfen bin ich spitze!$"
# 132 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 133 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniDefeat:
# 134 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Hups.\n"
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Das ging daneben.$"
# 136 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 137 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
# 138 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Barfuß durch ein Schiff zu laufen, ist\n"
# 139 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "irgendwie eeekelig.$"
# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 141 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
# 142 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Stärke und Mitgefühl…\n"
# 143 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Das wird bei Trainern sehr geschätzt!$"
# 144 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
# 146 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Irgendetwas an dir erstrahlt hell.$"
# 147 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"

# 148 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
# 149 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In einer der Kabinen hier an Bord habe\n"
# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "ich etwas Glitzerndes gesehen.$"
