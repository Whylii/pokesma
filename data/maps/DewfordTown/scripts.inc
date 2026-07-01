DewfordTown_EventScript_PkmnSign::
# 2 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_PkmnSign_Text_0, MSGBOX_DEFAULT
# 4 "data/maps/DewfordTown/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, DewfordTown_EventScript_PkmnSign_Text_1, DewfordTown_EventScript_PkmnSign_Text_2
# 5 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq DewfordTown_EventScript_PkmnSign_2
# 9 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_PkmnSign_5
# 26 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_PkmnSign_6
	return

DewfordTown_EventScript_PkmnSign_2:
# 6 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_PkmnSign_5:
# 11 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PkmnSignWasser, MSGBOX_DEFAULT
# 12 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 13 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 14 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 15 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 16 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 17 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 18 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 19 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 20 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_PELIPPER, 10, 3
# 21 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_PELIPPER, 0
# 22 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 23 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 24 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_PkmnSign_6:
# 27 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PkmnSignAngel, MSGBOX_DEFAULT
# 28 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 29 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 30 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 31 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 32 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 33 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 34 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 35 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 36 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PkmnSignAngel2, MSGBOX_DEFAULT
# 37 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 38 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 39 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 40 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 41 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 42 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 43 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 44 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 45 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 46 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 47 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 48 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 49 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PkmnSignAngel3, MSGBOX_DEFAULT
# 50 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 51 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 52 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 53 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 54 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_MapScripts::
# 77 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DewfordTown_MapScripts_MAP_SCRIPT_ON_LOAD
# 88 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	.byte 0

DewfordTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 78 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_TEMP_1
# 79 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_TEMP_2
# 80 "data/maps/DewfordTown/scripts.pory"
	random 2
# 81 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 84 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

DewfordTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 83 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_TEMP_1
	return

DewfordTown_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 85 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_TEMP_2
	return


# 91 "data/maps/DewfordTown/scripts.pory"

# 92 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 93 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 94 "data/maps/DewfordTown/scripts.pory"
	end
# 95 "data/maps/DewfordTown/scripts.pory"

# 96 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 97 "data/maps/DewfordTown/scripts.pory"
	lock
# 98 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 99 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 100 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 101 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 102 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 103 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 104 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 105 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 106 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 107 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 108 "data/maps/DewfordTown/scripts.pory"
	end
# 109 "data/maps/DewfordTown/scripts.pory"

# 110 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 111 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 112 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 113 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 114 "data/maps/DewfordTown/scripts.pory"
	release
# 115 "data/maps/DewfordTown/scripts.pory"
	end
# 116 "data/maps/DewfordTown/scripts.pory"

# 117 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 118 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 119 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 120 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 121 "data/maps/DewfordTown/scripts.pory"
	release
# 122 "data/maps/DewfordTown/scripts.pory"
	end
# 123 "data/maps/DewfordTown/scripts.pory"

# 124 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 125 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 126 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 127 "data/maps/DewfordTown/scripts.pory"
	release
# 128 "data/maps/DewfordTown/scripts.pory"
	end
# 129 "data/maps/DewfordTown/scripts.pory"

# 130 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 131 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 132 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 133 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 134 "data/maps/DewfordTown/scripts.pory"
	release
# 135 "data/maps/DewfordTown/scripts.pory"
	end
# 136 "data/maps/DewfordTown/scripts.pory"

# 137 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 138 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 139 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 140 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 141 "data/maps/DewfordTown/scripts.pory"
	end
# 142 "data/maps/DewfordTown/scripts.pory"

# 143 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 144 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 145 "data/maps/DewfordTown/scripts.pory"
	end
# 146 "data/maps/DewfordTown/scripts.pory"

# 147 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 148 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 149 "data/maps/DewfordTown/scripts.pory"
	end
# 150 "data/maps/DewfordTown/scripts.pory"

# 151 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 152 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 153 "data/maps/DewfordTown/scripts.pory"
	end
# 154 "data/maps/DewfordTown/scripts.pory"

# 155 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 156 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 157 "data/maps/DewfordTown/scripts.pory"
	end
# 158 "data/maps/DewfordTown/scripts.pory"

# 159 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 160 "data/maps/DewfordTown/scripts.pory"
	lock
# 161 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 162 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 163 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 164 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 165 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 166 "data/maps/DewfordTown/scripts.pory"
	end
# 167 "data/maps/DewfordTown/scripts.pory"

# 168 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 169 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 170 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 171 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 172 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 173 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 174 "data/maps/DewfordTown/scripts.pory"
	release
# 175 "data/maps/DewfordTown/scripts.pory"
	end
# 176 "data/maps/DewfordTown/scripts.pory"

# 177 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 178 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 179 "data/maps/DewfordTown/scripts.pory"
	release
# 180 "data/maps/DewfordTown/scripts.pory"
	end
# 181 "data/maps/DewfordTown/scripts.pory"

# 182 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 183 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 184 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 185 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 186 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 187 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 188 "data/maps/DewfordTown/scripts.pory"
	end
# 189 "data/maps/DewfordTown/scripts.pory"

# 190 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 191 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 192 "data/maps/DewfordTown/scripts.pory"
	release
# 193 "data/maps/DewfordTown/scripts.pory"
	end
# 194 "data/maps/DewfordTown/scripts.pory"

# 195 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 196 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 197 "data/maps/DewfordTown/scripts.pory"
	release
# 198 "data/maps/DewfordTown/scripts.pory"
	end
# 199 "data/maps/DewfordTown/scripts.pory"

# 200 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 201 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 202 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 203 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 0
# 204 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 205 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 207 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 208 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 210 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 211 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToPetalburg
# 212 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 213 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 215 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 216 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 217 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 219 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 220 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 221 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 222 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 223 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 224 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 225 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 226 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 227 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 228 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 229 "data/maps/DewfordTown/scripts.pory"
	release
# 230 "data/maps/DewfordTown/scripts.pory"
	end
# 231 "data/maps/DewfordTown/scripts.pory"

# 232 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 233 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 234 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 235 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 1
# 236 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 237 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 239 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 240 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 242 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 243 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToSlateport
# 244 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToSlateport
# 245 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 247 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE109
# 248 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 249 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_BRINEY, 21, 26
# 251 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BRINEY
# 252 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 253 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, DewfordTown_Movement_BrineyExitBoat
# 254 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 255 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 256 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BOAT
# 257 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 258 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 259 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 260 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 261 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 262 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 263 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 264 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 265 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109
# 266 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_BRINEY
# 267 "data/maps/DewfordTown/scripts.pory"
	release
# 268 "data/maps/DewfordTown/scripts.pory"
	end
# 269 "data/maps/DewfordTown/scripts.pory"

# 270 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 271 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 272 "data/maps/DewfordTown/scripts.pory"
	return
# 273 "data/maps/DewfordTown/scripts.pory"

# 274 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 275 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 276 "data/maps/DewfordTown/scripts.pory"
	return
# 277 "data/maps/DewfordTown/scripts.pory"

# 278 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 308 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 309 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 310 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 311 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 312 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 313 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 314 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 315 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 316 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 317 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 318 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 319 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 320 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 321 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 322 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 323 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 324 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 325 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 326 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 327 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 328 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 329 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 330 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 331 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 332 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 333 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 356 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 357 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 358 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 359 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 360 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 361 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 362 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 363 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 364 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 365 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 366 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 367 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 368 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 369 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 370 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 371 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 372 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 373 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 374 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 375 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 376 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 377 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 378 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 379 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 380 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 381 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 387 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 388 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 389 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 473 "data/maps/DewfordTown/scripts.pory"
	step_end
# 474 "data/maps/DewfordTown/scripts.pory"

# 475 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 523 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 527 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 529 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 533 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 535 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 541 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 545 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 549 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 551 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 553 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 555 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 557 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 561 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 562 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 563 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 566 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 567 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 568 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 569 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 573 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 579 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 581 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 583 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 585 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 589 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 591 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 593 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 594 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 595 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 597 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 598 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 599 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 600 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 601 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 603 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 604 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 605 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 606 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 607 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 608 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 609 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 610 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 611 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 612 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 615 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 617 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 618 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 619 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 621 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 627 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 629 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 631 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 635 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 636 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 637 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 638 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 639 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 640 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 641 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 642 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 643 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 644 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 645 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 646 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 647 "data/maps/DewfordTown/scripts.pory"
	step_end
# 648 "data/maps/DewfordTown/scripts.pory"

# 649 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 650 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 651 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 652 "data/maps/DewfordTown/scripts.pory"
	step_end
# 653 "data/maps/DewfordTown/scripts.pory"

# 654 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 655 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 656 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 657 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 658 "data/maps/DewfordTown/scripts.pory"
	step_end
# 659 "data/maps/DewfordTown/scripts.pory"

# 660 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 661 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 662 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 663 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 664 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 665 "data/maps/DewfordTown/scripts.pory"
	step_end
# 666 "data/maps/DewfordTown/scripts.pory"

# 667 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 668 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 669 "data/maps/DewfordTown/scripts.pory"
	step_end
# 670 "data/maps/DewfordTown/scripts.pory"

# 671 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 672 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 673 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 674 "data/maps/DewfordTown/scripts.pory"
	step_end
# 675 "data/maps/DewfordTown/scripts.pory"

# 676 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 677 "data/maps/DewfordTown/scripts.pory"
	lock
# 678 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 679 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 680 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 681 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 682 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 683 "data/maps/DewfordTown/scripts.pory"
	end
# 684 "data/maps/DewfordTown/scripts.pory"

# 685 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 686 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 687 "data/maps/DewfordTown/scripts.pory"
	release
# 688 "data/maps/DewfordTown/scripts.pory"
	end
# 689 "data/maps/DewfordTown/scripts.pory"

# 690 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 691 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 692 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 693 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 694 "data/maps/DewfordTown/scripts.pory"
	lock
# 695 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 696 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 697 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 698 "data/maps/DewfordTown/scripts.pory"
	end
# 699 "data/maps/DewfordTown/scripts.pory"

# 700 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 701 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 702 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 703 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 704 "data/maps/DewfordTown/scripts.pory"
	release
# 705 "data/maps/DewfordTown/scripts.pory"
	end
# 706 "data/maps/DewfordTown/scripts.pory"

# 707 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 708 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 709 "data/maps/DewfordTown/scripts.pory"
	release
# 710 "data/maps/DewfordTown/scripts.pory"
	end
# 711 "data/maps/DewfordTown/scripts.pory"

# 712 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 713 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 714 "data/maps/DewfordTown/scripts.pory"
	release
# 715 "data/maps/DewfordTown/scripts.pory"
	end
# 716 "data/maps/DewfordTown/scripts.pory"

# 717 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 718 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven ist eine kleine\n"
# 719 "data/maps/DewfordTown/scripts.pory"
	.string "Inselgemeinschaft. Wenn hier etwas in\l"
# 720 "data/maps/DewfordTown/scripts.pory"
	.string "Mode kommt, will jeder es haben.$"
# 721 "data/maps/DewfordTown/scripts.pory"

# 722 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 723 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven\n"
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "“Eine kleine Insel im blauen Meer.”$"
# 725 "data/maps/DewfordTown/scripts.pory"

# 726 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 727 "data/maps/DewfordTown/scripts.pory"
	.string "Pokémon Arena von Faustauhaven\n"
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "Leiter: Kamillo\l"
# 729 "data/maps/DewfordTown/scripts.pory"
	.string "“Eine große Welle des Kampfes!”$"
# 730 "data/maps/DewfordTown/scripts.pory"

# 731 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 732 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven Halle\n"
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "“Die Informationsbörse für jedermann!”$"
# 734 "data/maps/DewfordTown/scripts.pory"

# 735 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 736 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 737 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven Anker geworfen.\p"
# 738 "data/maps/DewfordTown/scripts.pory"
	.string "Ich vermute, du wirst diesen Brief\n"
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "jetzt diesem… Troy bringen?$"
# 740 "data/maps/DewfordTown/scripts.pory"

# 741 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 742 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Hast du den Brief\n"
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "überbracht?\p"
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "Oder meinst du, wir müssen zurück\n"
# 745 "data/maps/DewfordTown/scripts.pory"
	.string "nach Blütenburg City segeln?$"
# 746 "data/maps/DewfordTown/scripts.pory"

# 747 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Blütenburg City…\n"
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "In Ordnung.\p"
# 750 "data/maps/DewfordTown/scripts.pory"
	.string "Anker gelichtet!\n"
# 751 "data/maps/DewfordTown/scripts.pory"
	.string "Pecko, mein Schatz, wir setzen Segel!$"
# 752 "data/maps/DewfordTown/scripts.pory"

# 753 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Dann bring den Brief zu\n"
# 755 "data/maps/DewfordTown/scripts.pory"
	.string "seinem Empfänger. Ich warte hier.$"
# 756 "data/maps/DewfordTown/scripts.pory"

# 757 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 758 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 759 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven Anker geworfen!\p"
# 760 "data/maps/DewfordTown/scripts.pory"
	.string "Komm, wenn wir wieder Segel\n"
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "setzen sollen.$"
# 762 "data/maps/DewfordTown/scripts.pory"

# 763 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Ahoi! Für dich fahre ich\n"
# 765 "data/maps/DewfordTown/scripts.pory"
	.string "jederzeit wieder raus!\p"
# 766 "data/maps/DewfordTown/scripts.pory"
	.string "Nun, wo soll es hingehen?$"
# 767 "data/maps/DewfordTown/scripts.pory"

# 768 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Blütenburg City soll es\n"
# 770 "data/maps/DewfordTown/scripts.pory"
	.string "sein?\p"
# 771 "data/maps/DewfordTown/scripts.pory"
	.string "Anker gelichtet!\n"
# 772 "data/maps/DewfordTown/scripts.pory"
	.string "Pecko, mein Schatz, wir setzen Segel!$"
# 773 "data/maps/DewfordTown/scripts.pory"

# 774 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 775 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Graphitport City soll\n"
# 776 "data/maps/DewfordTown/scripts.pory"
	.string "es sein?\p"
# 777 "data/maps/DewfordTown/scripts.pory"
	.string "Anker gelichtet!\n"
# 778 "data/maps/DewfordTown/scripts.pory"
	.string "Pecko, mein Schatz, wir setzen Segel!$"
# 779 "data/maps/DewfordTown/scripts.pory"

# 780 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 781 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Sag mir einfach Bescheid,\n"
# 782 "data/maps/DewfordTown/scripts.pory"
	.string "wenn wir wieder Segel setzen sollen.$"
# 783 "data/maps/DewfordTown/scripts.pory"

# 784 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 785 "data/maps/DewfordTown/scripts.pory"
	.string "Dies ist ein berühmter Angelplatz.\n"
# 786 "data/maps/DewfordTown/scripts.pory"
	.string "Hast du Lust zu angeln?$"
# 787 "data/maps/DewfordTown/scripts.pory"

# 788 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 789 "data/maps/DewfordTown/scripts.pory"
	.string "Ich habe dir genau zugehört und mir\n"
# 790 "data/maps/DewfordTown/scripts.pory"
	.string "gefällt, was du gesagt hast!\p"
# 791 "data/maps/DewfordTown/scripts.pory"
	.string "Ich werde dir eine meiner Angeln\n"
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "geben.$"
# 793 "data/maps/DewfordTown/scripts.pory"

# 794 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 795 "data/maps/DewfordTown/scripts.pory"
	.string "Und, als kleine Zugabe, gebe ich dir noch\n"
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "einige Tipps zum Angeln!\p"
# 797 "data/maps/DewfordTown/scripts.pory"
	.string "Schau dir zuerst das Wasser an und dann\n"
# 798 "data/maps/DewfordTown/scripts.pory"
	.string "benutze deine Angel.\p"
# 799 "data/maps/DewfordTown/scripts.pory"
	.string "Konzentriere dich… Wenn etwas anbeißt,\n"
# 800 "data/maps/DewfordTown/scripts.pory"
	.string "hol die Angel ein.\p"
# 801 "data/maps/DewfordTown/scripts.pory"
	.string "Manchmal kannst du mit einem Mal etwas\n"
# 802 "data/maps/DewfordTown/scripts.pory"
	.string "Großes fangen, manchmal musst du\l"
# 803 "data/maps/DewfordTown/scripts.pory"
	.string "immer wieder kurz die Angel anheben,\l"
# 804 "data/maps/DewfordTown/scripts.pory"
	.string "um etwas an Land zu ziehen.$"
# 805 "data/maps/DewfordTown/scripts.pory"

# 806 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 807 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, wirklich?\n"
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist aber schade.$"
# 809 "data/maps/DewfordTown/scripts.pory"

# 810 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 811 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "Wie steht’s mit deinen Angelkünsten?$"
# 813 "data/maps/DewfordTown/scripts.pory"

# 814 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 815 "data/maps/DewfordTown/scripts.pory"
	.string "Also, wenn das stimmt… Das wäre\n"
# 816 "data/maps/DewfordTown/scripts.pory"
	.string "großartig! Petri heil!$"
# 817 "data/maps/DewfordTown/scripts.pory"

# 818 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "Hey, lass den Kopf nicht hängen! Ich\n"
# 820 "data/maps/DewfordTown/scripts.pory"
	.string "gebe dir einige Tipps zum Angeln!\p"
# 821 "data/maps/DewfordTown/scripts.pory"
	.string "Schau dir zuerst das Wasser an\n"
# 822 "data/maps/DewfordTown/scripts.pory"
	.string "und dann benutze deine Angel.\p"
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "Konzentriere dich… Wenn etwas\n"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "anbeißt, hol die Angel ein.\p"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "Manchmal kannst du mit einem Mal etwas\n"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "Großes fangen, manchmal musst du\limmer wieder kurz die Angel anheben,\l"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "um etwas an Land zu ziehen.$"
# 828 "data/maps/DewfordTown/scripts.pory"

# 829 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 830 "data/maps/DewfordTown/scripts.pory"
	.string "Ich mag, was hip, aufregend und modern\n"
# 831 "data/maps/DewfordTown/scripts.pory"
	.string "ist. So etwas probiere ich immer aus.\p"
# 832 "data/maps/DewfordTown/scripts.pory"
	.string "Hast du schon einmal was von\n"
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” gehört?\p"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "Wusste ich es doch!\n"
# 835 "data/maps/DewfordTown/scripts.pory"
	.string "Natürlich hast du schon davon gehört!\p"
# 836 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, meine Güte,\n"
# 837 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 838 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist das Coolste überhaupt!\p"
# 839 "data/maps/DewfordTown/scripts.pory"
	.string "Wo immer du auch herkommst,\n"
# 840 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 841 "data/maps/DewfordTown/scripts.pory"
	.string "ist das Aufregendste überhaupt!$"
# 842 "data/maps/DewfordTown/scripts.pory"

# 843 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 844 "data/maps/DewfordTown/scripts.pory"
	.string "Wie bitte?\n"
# 845 "data/maps/DewfordTown/scripts.pory"
	.string "Es ist nicht hip und aufregend?\p"
# 846 "data/maps/DewfordTown/scripts.pory"
	.string "Nun, hey, dann verrate mir aber, was\n"
# 847 "data/maps/DewfordTown/scripts.pory"
	.string "wirklich cool und “in” ist?$"
# 848 "data/maps/DewfordTown/scripts.pory"

# 849 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 850 "data/maps/DewfordTown/scripts.pory"
	.string "Was?\n"
# 851 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 852 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "… Hm… Äh… Yeah! Das stimmt!\n"
# 854 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, ich wusste das! Schon lange!\p"
# 855 "data/maps/DewfordTown/scripts.pory"
	.string "Natürlich weiß ich das!\n"
# 856 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”, richtig?\p"
# 857 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, das ist es, das ist es!\n"
# 858 "data/maps/DewfordTown/scripts.pory"
	.string "Ist “{STR_VAR_2}”\l"
# 859 "data/maps/DewfordTown/scripts.pory"
	.string "nicht das Coolste?\p"
# 860 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist die hippeste Sache überhaupt.\n"
# 861 "data/maps/DewfordTown/scripts.pory"
	.string "Und du dachtest, ich wüsste das nicht?\p"
# 862 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 863 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist doch schon uralt und unmodern.\p"
# 864 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}” ist das,\n"
# 865 "data/maps/DewfordTown/scripts.pory"
	.string "was vital und zeitgemäß ist!$"
# 866 "data/maps/DewfordTown/scripts.pory"

# 867 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 868 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 869 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”, oder?\p"
# 870 "data/maps/DewfordTown/scripts.pory"
	.string "Aber ich persönlich finde,\n"
# 871 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 872 "data/maps/DewfordTown/scripts.pory"
	.string "ist das Coolste überhaupt!$"
# 873 "data/maps/DewfordTown/scripts.pory"

# 874 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 875 "data/maps/DewfordTown/scripts.pory"
	.string "Wenn du irgendetwas über neue, auf-\n"
# 876 "data/maps/DewfordTown/scripts.pory"
	.string "regende Sachen hörst, erzähl mir davon!$"
# 877 "data/maps/DewfordTown/scripts.pory"

# 878 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 879 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolut richtig!\p"
# 880 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” ist die\n"
# 881 "data/maps/DewfordTown/scripts.pory"
	.string "Definition von “in”.$"

DewfordTown_EventScript_PkmnSign_Text_0:
# 2 "data/maps/DewfordTown/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die in diesem Ort leben.$"

DewfordTown_EventScript_PkmnSign_Text_1:
# 4 "data/maps/DewfordTown/scripts.pory"
	.string "Wasser$"

DewfordTown_EventScript_PkmnSign_Text_2:
# 4 "data/maps/DewfordTown/scripts.pory"
	.string "Angel$"

DewfordTown_Text_PkmnSignWasser::
# 59 "data/maps/DewfordTown/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

DewfordTown_Text_PkmnSignAngel::
# 63 "data/maps/DewfordTown/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

DewfordTown_Text_PkmnSignAngel2::
# 67 "data/maps/DewfordTown/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

DewfordTown_Text_PkmnSignAngel3::
# 71 "data/maps/DewfordTown/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
