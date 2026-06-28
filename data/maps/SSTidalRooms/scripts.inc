# 1 "data/maps/SSTidalRooms/scripts.pory"

# 2 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_MapScripts::
# 3 "data/maps/SSTidalRooms/scripts.pory"
	.byte 0
# 4 "data/maps/SSTidalRooms/scripts.pory"

# 5 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_SnatchGiver::
# 6 "data/maps/SSTidalRooms/scripts.pory"
	lock
# 7 "data/maps/SSTidalRooms/scripts.pory"
	faceplayer
# 8 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
# 9 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/SSTidalRooms/scripts.pory"
	giveitem ITEM_TM_SNATCH
# 11 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 13 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 14 "data/maps/SSTidalRooms/scripts.pory"
	release
# 15 "data/maps/SSTidalRooms/scripts.pory"
	end
# 16 "data/maps/SSTidalRooms/scripts.pory"

# 17 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_ExplainSnatch::
# 18 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
# 19 "data/maps/SSTidalRooms/scripts.pory"
	release
# 20 "data/maps/SSTidalRooms/scripts.pory"
	end
# 21 "data/maps/SSTidalRooms/scripts.pory"

# 22 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Bed::
# 23 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 24 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 25 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 26 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 27 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 28 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
# 29 "data/maps/SSTidalRooms/scripts.pory"
	end
# 30 "data/maps/SSTidalRooms/scripts.pory"

# 31 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Colton::
# 32 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 33 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SSTidalRooms/scripts.pory"
	end
# 35 "data/maps/SSTidalRooms/scripts.pory"

# 36 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Micah::
# 37 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 38 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SSTidalRooms/scripts.pory"
	end
# 40 "data/maps/SSTidalRooms/scripts.pory"

# 41 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Thomas::
# 42 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 43 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SSTidalRooms/scripts.pory"
	end
# 45 "data/maps/SSTidalRooms/scripts.pory"

# 46 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Jed::
# 47 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 48 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SSTidalRooms/scripts.pory"
	end
# 50 "data/maps/SSTidalRooms/scripts.pory"

# 51 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Lea::
# 52 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 53 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SSTidalRooms/scripts.pory"
	end
# 55 "data/maps/SSTidalRooms/scripts.pory"

# 56 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Garret::
# 57 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 58 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SSTidalRooms/scripts.pory"
	end
# 60 "data/maps/SSTidalRooms/scripts.pory"

# 61 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_EventScript_Naomi::
# 62 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 63 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/SSTidalRooms/scripts.pory"
	end
# 65 "data/maps/SSTidalRooms/scripts.pory"

# 66 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_TakeRestOnBed:
# 67 "data/maps/SSTidalRooms/scripts.pory"
	.string "Da steht ein Bett…\n"
# 68 "data/maps/SSTidalRooms/scripts.pory"
	.string "Eine Pause wäre willkommen.$"
# 69 "data/maps/SSTidalRooms/scripts.pory"

# 70 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonIntro:
# 71 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ich segle oft nach Seegrasulb City.\p"
# 72 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ich liebe es, an den Wettbewerben\n"
# 73 "data/maps/SSTidalRooms/scripts.pory"
	.string "teilzunehmen.$"
# 74 "data/maps/SSTidalRooms/scripts.pory"

# 75 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonDefeat:
# 76 "data/maps/SSTidalRooms/scripts.pory"
	.string "Das war ein wunderbarer Kampf!$"
# 77 "data/maps/SSTidalRooms/scripts.pory"

# 78 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ColtonPostBattle:
# 79 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ich bin schon ganz aufgeregt, wenn ich\n"
# 80 "data/maps/SSTidalRooms/scripts.pory"
	.string "mir vorstelle, welche Pokémon ich im\l"
# 81 "data/maps/SSTidalRooms/scripts.pory"
	.string "nächsten Wettbewerb sehen werde!$"
# 82 "data/maps/SSTidalRooms/scripts.pory"

# 83 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahIntro:
# 84 "data/maps/SSTidalRooms/scripts.pory"
	.string "Sind deine Freunde stark?$"
# 85 "data/maps/SSTidalRooms/scripts.pory"

# 86 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahDefeat:
# 87 "data/maps/SSTidalRooms/scripts.pory"
	.string "Deine Freunde sind in der Tat stark.$"
# 88 "data/maps/SSTidalRooms/scripts.pory"

# 89 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_MicahPostBattle:
# 90 "data/maps/SSTidalRooms/scripts.pory"
	.string "Freunde müssen nicht unbedingt\n"
# 91 "data/maps/SSTidalRooms/scripts.pory"
	.string "menschlich sein. Für mich sind\l"
# 92 "data/maps/SSTidalRooms/scripts.pory"
	.string "Pokémon die besten Freunde.$"
# 93 "data/maps/SSTidalRooms/scripts.pory"

# 94 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasIntro:
# 95 "data/maps/SSTidalRooms/scripts.pory"
	.string "Kind…\n"
# 96 "data/maps/SSTidalRooms/scripts.pory"
	.string "Hast du an der Tür geklopft?$"
# 97 "data/maps/SSTidalRooms/scripts.pory"

# 98 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasDefeat:
# 99 "data/maps/SSTidalRooms/scripts.pory"
	.string "Eine Niederlage muss mit erhobenem\n"
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "Haupt akzeptiert werden.$"
# 101 "data/maps/SSTidalRooms/scripts.pory"

# 102 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ThomasPostBattle:
# 103 "data/maps/SSTidalRooms/scripts.pory"
	.string "In jeder Situation die absolute Ruhe zu\n"
# 104 "data/maps/SSTidalRooms/scripts.pory"
	.string "bewahren, ist die Devise des Gentleman.$"
# 105 "data/maps/SSTidalRooms/scripts.pory"

# 106 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedIntro:
# 107 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uwe: Eigentlich bin ich ja schüchtern…\n"
# 108 "data/maps/SSTidalRooms/scripts.pory"
	.string "Aber die Liebe gibt einem Kraft!$"
# 109 "data/maps/SSTidalRooms/scripts.pory"

# 110 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedDefeat:
# 111 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uwe: Seufz…$"
# 112 "data/maps/SSTidalRooms/scripts.pory"

# 113 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedPostBattle:
# 114 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uwe: Zum ersten Mal war unsere Kraft\n"
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "der Liebe unterlegen!\l"
# 116 "data/maps/SSTidalRooms/scripts.pory"
	.string "Du bist ein unglaublicher Trainer!$"
# 117 "data/maps/SSTidalRooms/scripts.pory"

# 118 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_JedNotEnoughMons:
# 119 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uwe: Du hast nur ein Pokémon?\n"
# 120 "data/maps/SSTidalRooms/scripts.pory"
	.string "Fühlt es sich nicht sehr einsam?$"
# 121 "data/maps/SSTidalRooms/scripts.pory"

# 122 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaIntro:
# 123 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lena: Ich fühle mich etwas albern,\n"
# 124 "data/maps/SSTidalRooms/scripts.pory"
	.string "aber… Aber die Liebe gibt mir Kraft!$"
# 125 "data/maps/SSTidalRooms/scripts.pory"

# 126 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaDefeat:
# 127 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lena: Oh, buhu!$"
# 128 "data/maps/SSTidalRooms/scripts.pory"

# 129 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaPostBattle:
# 130 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lena: Ich kann es einfach nicht fassen!\n"
# 131 "data/maps/SSTidalRooms/scripts.pory"
	.string "Die Kraft unserer Liebe reichte nicht…\l"
# 132 "data/maps/SSTidalRooms/scripts.pory"
	.string "Du bist ein unglaublicher Trainer!$"
# 133 "data/maps/SSTidalRooms/scripts.pory"

# 134 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_LeaNotEnoughMons:
# 135 "data/maps/SSTidalRooms/scripts.pory"
	.string "Lena: Ich möchte kämpfen…\n"
# 136 "data/maps/SSTidalRooms/scripts.pory"
	.string "Aber du hast nur ein Pokémon…$"
# 137 "data/maps/SSTidalRooms/scripts.pory"

# 138 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretIntro:
# 139 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, du kommst gerade rechtzeitig.\p"
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ich langweile mich schrecklich.\n"
# 141 "data/maps/SSTidalRooms/scripts.pory"
	.string "Du musst mich jetzt unterhalten.$"
# 142 "data/maps/SSTidalRooms/scripts.pory"

# 143 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretDefeat:
# 144 "data/maps/SSTidalRooms/scripts.pory"
	.string "… Das genügt.$"
# 145 "data/maps/SSTidalRooms/scripts.pory"

# 146 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_GarretPostBattle:
# 147 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ich muss meinen Vater unbedingt\n"
# 148 "data/maps/SSTidalRooms/scripts.pory"
	.string "fragen, ob er mir eine Yacht schenkt.\l"
# 149 "data/maps/SSTidalRooms/scripts.pory"
	.string "Eine Yacht für mich und meine Pokémon!$"
# 150 "data/maps/SSTidalRooms/scripts.pory"

# 151 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiIntro:
# 152 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, du bist so ein wunderbarer Trainer.\n"
# 153 "data/maps/SSTidalRooms/scripts.pory"
	.string "Möchtest du eine Tasse Tee?\l"
# 154 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oder möchtest du lieber kämpfen?$"
# 155 "data/maps/SSTidalRooms/scripts.pory"

# 156 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiDefeat:
# 157 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ich verstehe.\n"
# 158 "data/maps/SSTidalRooms/scripts.pory"
	.string "Du bist eher der aktive Typ.$"
# 159 "data/maps/SSTidalRooms/scripts.pory"

# 160 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NaomiPostBattle:
# 161 "data/maps/SSTidalRooms/scripts.pory"
	.string "Eine Weltreise auf einem Luxusliner hat\n"
# 162 "data/maps/SSTidalRooms/scripts.pory"
	.string "etwas für sich, das muss ich sagen…\p"
# 163 "data/maps/SSTidalRooms/scripts.pory"
	.string "Aber auch eine Fahrt auf der Fähre\n"
# 164 "data/maps/SSTidalRooms/scripts.pory"
	.string "durch Hoenn hat etwas.$"
# 165 "data/maps/SSTidalRooms/scripts.pory"

# 166 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_NotSuspiciousTakeThis:
# 167 "data/maps/SSTidalRooms/scripts.pory"
	.string "Äh… Hallo! Ich… Ich verhalte mich über-\n"
# 168 "data/maps/SSTidalRooms/scripts.pory"
	.string "haupt nicht verdächtig! Äh… hier, das\l"
# 169 "data/maps/SSTidalRooms/scripts.pory"
	.string "ist für dich! Es kostet dich nichts!\p"
# 170 "data/maps/SSTidalRooms/scripts.pory"
	.string "Es… Ehrlich! Ich habe es nicht von\n"
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "jemandem übernommen! Das würde ich\l"
# 172 "data/maps/SSTidalRooms/scripts.pory"
	.string "nie tun! Es ist sauber! Nimm es ruhig!$"
# 173 "data/maps/SSTidalRooms/scripts.pory"

# 174 "data/maps/SSTidalRooms/scripts.pory"
SSTidalRooms_Text_ExplainSnatch:
# 175 "data/maps/SSTidalRooms/scripts.pory"
	.string "Übernahme raubt die nächste Attacke\n"
# 176 "data/maps/SSTidalRooms/scripts.pory"
	.string "eines Pokémon und setzt sie dann\l"
# 177 "data/maps/SSTidalRooms/scripts.pory"
	.string "gegen diesen Gegner ein.$"
