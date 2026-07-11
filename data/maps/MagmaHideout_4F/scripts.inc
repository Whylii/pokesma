# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_4F/scripts.pory"

# 5 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie::
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 75 "data/maps/MagmaHideout_4F/scripts.pory"

# 76 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonApproach:
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_slow_down
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 88 "data/maps/MagmaHideout_4F/scripts.pory"

# 89 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 93 "data/maps/MagmaHideout_4F/scripts.pory"

# 94 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	step_end
# 107 "data/maps/MagmaHideout_4F/scripts.pory"

# 108 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 112 "data/maps/MagmaHideout_4F/scripts.pory"

# 113 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 117 "data/maps/MagmaHideout_4F/scripts.pory"

# 118 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 122 "data/maps/MagmaHideout_4F/scripts.pory"

# 123 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Tabitha::
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 127 "data/maps/MagmaHideout_4F/scripts.pory"

# 128 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich würde so gerne einen Blick auf\n"
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon werfen, aber ich darf nicht mal\l"
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "einen Blick auf seinen Schweif werfen.\p"
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Das frustriert mich total.\p"
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, nein!\n"
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich quatsche hier über Groudon!$"
# 135 "data/maps/MagmaHideout_4F/scripts.pory"

# 136 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wenn der Verstand durch andere Dinge\n"
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "abgelenkt ist, ist es unmöglich,\l"
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "zu gewinnen…$"
# 140 "data/maps/MagmaHideout_4F/scripts.pory"

# 141 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich frage mich, ob Groudon überhaupt\n"
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "einen Schweif hat?$"
# 144 "data/maps/MagmaHideout_4F/scripts.pory"

# 145 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Muahahaha!\n"
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Bald! Sehr bald!\l"
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Werden wir unser großes Ziel erreichen!$"
# 149 "data/maps/MagmaHideout_4F/scripts.pory"

# 150 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich bin so weit gekommen und nun das?$"
# 153 "data/maps/MagmaHideout_4F/scripts.pory"

# 154 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Marc, Sir!\n"
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ein Eindringling ist auf dem Weg!$"
# 157 "data/maps/MagmaHideout_4F/scripts.pory"

# 158 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Du bist noch nicht fertig!\n"
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An mir kommst du nicht so leicht vorbei!$"
# 161 "data/maps/MagmaHideout_4F/scripts.pory"

# 162 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "War ich so leicht zu besiegen?$"
# 164 "data/maps/MagmaHideout_4F/scripts.pory"

# 165 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "K-Komm schon, noch ein Kampf…$"
# 167 "data/maps/MagmaHideout_4F/scripts.pory"

# 168 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaIntro:
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Du hast es bis hierher geschafft, daher\l"
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "verrate ich dir etwas!\p"
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Es stimmt!\n"
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Dort drüben schläft Groudon!\p"
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Marc ist vor ein paar Sekunden zu ihm\n"
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "gegangen!\p"
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Es wird bald erwachen!\n"
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe! Hehehehe!$"
# 178 "data/maps/MagmaHideout_4F/scripts.pory"

# 179 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaDefeat:
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Schon wieder verloren…\n"
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehe…$"
# 182 "data/maps/MagmaHideout_4F/scripts.pory"

# 183 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_TabithaPostBattle:
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Und während du deine Zeit mit mir\n"
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "verschwendest… sollte Marc\l"
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon aufgeweckt haben…$"
# 187 "data/maps/MagmaHideout_4F/scripts.pory"

# 188 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieAwakenGroudon:
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Marc: Groudon…\p"
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Nichts konnte deinen Schlummer in\n"
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "dem heißen Magma stören…\p"
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Du wolltest diese Blaue Kugel haben,\n"
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "nicht wahr?\p"
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich habe sie dir gebracht.\n"
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ihr Licht soll dich aufwecken!\p"
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Und nun zeig mir…\n"
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Zeig mir deine ganze Kraft!$"
# 198 "data/maps/MagmaHideout_4F/scripts.pory"

# 199 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Marc: Groudon!\n"
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was ist los?\p"
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Die Blaue Kugel ist doch der Schlüssel,\n"
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "oder etwa nicht?\p"
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon!\n"
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wo bist du hin…$"
# 206 "data/maps/MagmaHideout_4F/scripts.pory"

# 207 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieOhItWasYou:
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Marc: Du warst das also!\p"
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich habe gesehen, wie du unerlaubter-\n"
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "weise deine Nase hier und dort\l"
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "hineingesteckt hast.\p"
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich verstehe es jetzt!\n"
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Du hast eine ganz billige Nummer\l"
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "abgezogen!$"
# 215 "data/maps/MagmaHideout_4F/scripts.pory"

# 216 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieDefeat:
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Wie kommt es, dass du so gut mit\n"
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Pokémon umgehen kannst?$"
# 219 "data/maps/MagmaHideout_4F/scripts.pory"

# 220 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Marc: Es muss einen Grund geben, warum\n"
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Groudon geflohen ist…\p"
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Das willst du mir doch sagen, oder?\p"
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … …\n"
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…\l"
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "… … … … …\l"
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…\p"
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hmpf…\n"
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Du meinst, das wüsste ich nicht?\p"
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Da Groudon weg ist, hat dieser Vulkan\n"
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "keinen Nutzen mehr.\p"
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Ich werde Groudon folgen. Hier trennen\n"
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "sich unsere Wege.$"
