# 1 "data/maps/MtPyre_2F/scripts.pory"

# 2 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_MapScripts::
# 3 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/MtPyre_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtPyre_2F_SetHoleWarp
# 6 "data/maps/MtPyre_2F/scripts.pory"
	.byte 0
# 7 "data/maps/MtPyre_2F/scripts.pory"

# 8 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_SetHoleWarp:
# 9 "data/maps/MtPyre_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/MtPyre_2F/scripts.pory"
	setholewarp MAP_MT_PYRE_1F
# 11 "data/maps/MtPyre_2F/scripts.pory"
	end
# 12 "data/maps/MtPyre_2F/scripts.pory"

# 13 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Woman::
# 14 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MemoriesOfSkitty, MSGBOX_NPC
# 15 "data/maps/MtPyre_2F/scripts.pory"
	end
# 16 "data/maps/MtPyre_2F/scripts.pory"

# 17 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_PokefanM::
# 18 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_TumbledFromFloorAbove, MSGBOX_NPC
# 19 "data/maps/MtPyre_2F/scripts.pory"
	end
# 20 "data/maps/MtPyre_2F/scripts.pory"

# 21 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Mark::
# 22 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_MARK, MtPyre_2F_Text_MarkIntro, MtPyre_2F_Text_MarkDefeat
# 23 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_2F/scripts.pory"
	end
# 25 "data/maps/MtPyre_2F/scripts.pory"

# 26 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Luke::
# 27 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 28 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_2F/scripts.pory"
	end
# 30 "data/maps/MtPyre_2F/scripts.pory"

# 31 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Dez::
# 32 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_DezIntro, MtPyre_2F_Text_DezDefeat, MtPyre_2F_Text_DezNotEnoughMons
# 33 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_DezPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/MtPyre_2F/scripts.pory"
	end
# 35 "data/maps/MtPyre_2F/scripts.pory"

# 36 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Leah::
# 37 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_LEAH, MtPyre_2F_Text_LeahIntro, MtPyre_2F_Text_LeahDefeat
# 38 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/MtPyre_2F/scripts.pory"
	end
# 40 "data/maps/MtPyre_2F/scripts.pory"

# 41 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_EventScript_Zander::
# 42 "data/maps/MtPyre_2F/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, MtPyre_2F_Text_ZanderIntro, MtPyre_2F_Text_ZanderDefeat
# 43 "data/maps/MtPyre_2F/scripts.pory"
	msgbox MtPyre_2F_Text_ZanderPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/MtPyre_2F/scripts.pory"
	end
# 45 "data/maps/MtPyre_2F/scripts.pory"

# 46 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MemoriesOfSkitty:
# 47 "data/maps/MtPyre_2F/scripts.pory"
	.string "Die Erinnerungen an meinen Liebling\n"
# 48 "data/maps/MtPyre_2F/scripts.pory"
	.string "Eneco… Ich könnte weinen…$"
# 49 "data/maps/MtPyre_2F/scripts.pory"

# 50 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_TumbledFromFloorAbove:
# 51 "data/maps/MtPyre_2F/scripts.pory"
	.string "Au au au au… Der Boden hat an einigen\n"
# 52 "data/maps/MtPyre_2F/scripts.pory"
	.string "Stellen Löcher.\p"
# 53 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ich habe das nicht gesehen und bin ins\n"
# 54 "data/maps/MtPyre_2F/scripts.pory"
	.string "untere Stockwerk gefallen. Autsch, aua.$"
# 55 "data/maps/MtPyre_2F/scripts.pory"

# 56 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkIntro:
# 57 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hey! Suchst du nach Pokémon? Du bist\n"
# 58 "data/maps/MtPyre_2F/scripts.pory"
	.string "mir hinterhergeschlichen! Fiesling!$"
# 59 "data/maps/MtPyre_2F/scripts.pory"

# 60 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkDefeat:
# 61 "data/maps/MtPyre_2F/scripts.pory"
	.string "Oweiowei.\n"
# 62 "data/maps/MtPyre_2F/scripts.pory"
	.string "Tut mir Leid. Entschuldige bitte!$"
# 63 "data/maps/MtPyre_2F/scripts.pory"

# 64 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_MarkPostBattle:
# 65 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hier sind nie viele Leute. Daher soll es\n"
# 66 "data/maps/MtPyre_2F/scripts.pory"
	.string "hier seltene Pokémon geben.$"
# 67 "data/maps/MtPyre_2F/scripts.pory"

# 68 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeIntro:
# 69 "data/maps/MtPyre_2F/scripts.pory"
	.string "Leif: Wir machen hier eine Mutprobe.\p"
# 70 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hehe, wenn ich zeige, wie cool ich bin,\n"
# 71 "data/maps/MtPyre_2F/scripts.pory"
	.string "wird sie sich sicher in mich verlieben!\p"
# 72 "data/maps/MtPyre_2F/scripts.pory"
	.string "Besser: Ich werde dich vernichtend\n"
# 73 "data/maps/MtPyre_2F/scripts.pory"
	.string "schlagen. Dann bin ich echt cool!$"
# 74 "data/maps/MtPyre_2F/scripts.pory"

# 75 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeDefeat:
# 76 "data/maps/MtPyre_2F/scripts.pory"
	.string "Leif: Huups!$"
# 77 "data/maps/MtPyre_2F/scripts.pory"

# 78 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukePostBattle:
# 79 "data/maps/MtPyre_2F/scripts.pory"
	.string "Leif: Wir haben verloren, aber das macht\n"
# 80 "data/maps/MtPyre_2F/scripts.pory"
	.string "nichts! Solange ich nur bei ihr bin. Wir\l"
# 81 "data/maps/MtPyre_2F/scripts.pory"
	.string "werden diese Mutprobe bestehen!$"
# 82 "data/maps/MtPyre_2F/scripts.pory"

# 83 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LukeNotEnoughMons:
# 84 "data/maps/MtPyre_2F/scripts.pory"
	.string "Leif: Wenn du es mit mir aufnehmen\n"
# 85 "data/maps/MtPyre_2F/scripts.pory"
	.string "willst, brauchst du mehr Pokémon.\p"
# 86 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hast du die nicht, kann ich meiner An-\n"
# 87 "data/maps/MtPyre_2F/scripts.pory"
	.string "gebeteten nicht beweisen, wie cool ich\l"
# 88 "data/maps/MtPyre_2F/scripts.pory"
	.string "bin!$"
# 89 "data/maps/MtPyre_2F/scripts.pory"

# 90 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezIntro:
# 91 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ina: Ich bin hier, um mit meinem Freund\n"
# 92 "data/maps/MtPyre_2F/scripts.pory"
	.string "eine Mutprobe zu bestehen.\p"
# 93 "data/maps/MtPyre_2F/scripts.pory"
	.string "Es ist unheimlich hier, aber zusammen\n"
# 94 "data/maps/MtPyre_2F/scripts.pory"
	.string "mit meinem Freund ist es schon okay.\p"
# 95 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ich hab's: Mein Freund soll zeigen, wie\n"
# 96 "data/maps/MtPyre_2F/scripts.pory"
	.string "cool er ist, indem er dich besiegt!$"
# 97 "data/maps/MtPyre_2F/scripts.pory"

# 98 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezDefeat:
# 99 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ina: Uuuaaa! Ich habe Angst.$"
# 100 "data/maps/MtPyre_2F/scripts.pory"

# 101 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezPostBattle:
# 102 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ina: Wir sind ineinander verliebt, daher\n"
# 103 "data/maps/MtPyre_2F/scripts.pory"
	.string "stört uns eine Niederlage nicht.$"
# 104 "data/maps/MtPyre_2F/scripts.pory"

# 105 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_DezNotEnoughMons:
# 106 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ina: Wenn du gegen uns antreten willst,\n"
# 107 "data/maps/MtPyre_2F/scripts.pory"
	.string "solltest du mindestens zwei Pokémon\l"
# 108 "data/maps/MtPyre_2F/scripts.pory"
	.string "besitzen.\p"
# 109 "data/maps/MtPyre_2F/scripts.pory"
	.string "Mein Freund ist stark. Daher wirst du\n"
# 110 "data/maps/MtPyre_2F/scripts.pory"
	.string "mit einem Pokémon nichts ausrichten.$"
# 111 "data/maps/MtPyre_2F/scripts.pory"

# 112 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahIntro:
# 113 "data/maps/MtPyre_2F/scripts.pory"
	.string "Dein Anblick ist echt ungewöhnlich…\n"
# 114 "data/maps/MtPyre_2F/scripts.pory"
	.string "Verschwinde, bevor dir irgendwas\l"
# 115 "data/maps/MtPyre_2F/scripts.pory"
	.string "passiert.$"
# 116 "data/maps/MtPyre_2F/scripts.pory"

# 117 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahDefeat:
# 118 "data/maps/MtPyre_2F/scripts.pory"
	.string "Hmm…\n"
# 119 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ausdauer hast du ja…$"
# 120 "data/maps/MtPyre_2F/scripts.pory"

# 121 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_LeahPostBattle:
# 122 "data/maps/MtPyre_2F/scripts.pory"
	.string "In unserer Familie gibt es schon seit\n"
# 123 "data/maps/MtPyre_2F/scripts.pory"
	.string "Generationen Trainer, die in dieser\l"
# 124 "data/maps/MtPyre_2F/scripts.pory"
	.string "Gegend leben…\p"
# 125 "data/maps/MtPyre_2F/scripts.pory"
	.string "Es ist eine Pflicht, den Berg zu\n"
# 126 "data/maps/MtPyre_2F/scripts.pory"
	.string "beschützen…$"
# 127 "data/maps/MtPyre_2F/scripts.pory"

# 128 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderIntro:
# 129 "data/maps/MtPyre_2F/scripts.pory"
	.string "Kiyaaaah!\n"
# 130 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ich bin außer mir vor Schreck.$"
# 131 "data/maps/MtPyre_2F/scripts.pory"

# 132 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderDefeat:
# 133 "data/maps/MtPyre_2F/scripts.pory"
	.string "Neeeiiinnn!\n"
# 134 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ich habe meinen Kopf verloren.$"
# 135 "data/maps/MtPyre_2F/scripts.pory"

# 136 "data/maps/MtPyre_2F/scripts.pory"
MtPyre_2F_Text_ZanderPostBattle:
# 137 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ich mach mir jedes Mal vor Schreck in\n"
# 138 "data/maps/MtPyre_2F/scripts.pory"
	.string "die Hose, wenn sich etwas bewegt…\p"
# 139 "data/maps/MtPyre_2F/scripts.pory"
	.string "Ich hätte nicht hierher kommen dürfen…$"
