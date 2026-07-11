# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Bleib sofort stehen!$"
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Hahahaha…\n"
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Du warst das also die ganze Zeit.$"
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Schau nur, schau nur!\p"
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Schau, wie schön die schlafende Gestalt\n"
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "des Urzeit-Pokémon Kyogre ist!\p"
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ich habe so lange auf diesen Tag\n"
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "gewartet…$"
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Es überrascht mich, wie du es\n"
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "geschafft hast, mir zu folgen.\p"
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aber das ist nun alles Nebensache.\p"
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Damit meine Träume wahr werden, musst\n"
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "du leider verschwinden!$"
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Was?!\n"
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ich habe gegen ein Kind verloren?!$"
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Hahahaha…\p"
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ich empfehle mich. Ich muss sagen, du\n"
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "bist wirklich sehr talentiert.\p"
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aber!\n"
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ich habe dieses hier in meinem Besitz!\p"
# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Mit dieser roten Kugel kann ich\n"
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Kyogre…$"
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Die rote Kugel beginnt plötzlich von\n"
# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "innen heraus zu leuchten!$"
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Was?!\p"
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ich habe doch gar nichts gemacht.\n"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Die rote Kugel… Warum…\p"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wo ist Kyogre geblieben?$"
# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Hm? Dies ist eine Nachricht\n"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "unserer Mitglieder draußen…$"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Ja, was ist denn jetzt los?\p"
# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Es regnet? So heftig?\p"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Gut… Genau darauf habe ich gewartet.\n"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Deshalb haben wir Kyogre erweckt.\l"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Um Team Aquas Vision von der Erweite-\l"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "rung der Meere zu realisieren.\p"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Was?!\p"
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Es regnet stärker, als wir es voraus-\n"
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "gesagt haben? Wir sind in Gefahr?\p"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Das kann nicht sein…\n"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Das ist unmöglich…\p"
# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Bleib, wo du bist und behalte die\n"
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Situation im Auge!$"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: Irgendetwas stimmt da ganz und\n"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "gar nicht…\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Die rote Kugel sollte Kyogre auf-\n"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "wecken und unter Kontrolle halten…\p"
# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Aber… Warum?\n"
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Warum ist Kyogre verschwunden?\p"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Warum?!$"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Marc: Was hast du da nur herauf-\n"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "beschworen?\p"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian… Du hast Kyogre aufge-\n"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "weckt, stimmt's?\p"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Was wird nur aus der Welt, wenn es\n"
# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "bis in alle Ewigkeit regnen wird?\p"
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Das Land wird untergehen und im\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Meer verschwinden…$"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Adrian: W-Was?!\n"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Behandle mich nicht so von oben herab!\p"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wart ihr es nicht, Team Magma, die\n"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Groudon erzürnt habt?\p"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Solange ich die rote Kugel habe, habe\n"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ich auch die Kontrolle über Kyogre…\p"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Ich sollte es kontrollieren können…$"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Marc: Wir haben keine Zeit für\n"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Diskussionen!\p"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Geh nach draußen und sieh es dir\n"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "selber an!\p"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Sieh, ob das, was du heraufbeschworen\n"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "hast, das ist, was du wolltest!$"
# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Marc: {PLAYER}, komm, du musst\n"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ebenfalls von hier verschwinden!$"
