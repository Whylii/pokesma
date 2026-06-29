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


# 76 "data/maps/DewfordTown/scripts.pory"

# 77 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 78 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 79 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 80 "data/maps/DewfordTown/scripts.pory"

# 81 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 82 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 83 "data/maps/DewfordTown/scripts.pory"
	end
# 84 "data/maps/DewfordTown/scripts.pory"

# 85 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 86 "data/maps/DewfordTown/scripts.pory"
	lock
# 87 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 88 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 89 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 90 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 91 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 92 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 94 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 95 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 96 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 97 "data/maps/DewfordTown/scripts.pory"
	end
# 98 "data/maps/DewfordTown/scripts.pory"

# 99 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 100 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 101 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 102 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 103 "data/maps/DewfordTown/scripts.pory"
	release
# 104 "data/maps/DewfordTown/scripts.pory"
	end
# 105 "data/maps/DewfordTown/scripts.pory"

# 106 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 107 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 108 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 109 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 110 "data/maps/DewfordTown/scripts.pory"
	release
# 111 "data/maps/DewfordTown/scripts.pory"
	end
# 112 "data/maps/DewfordTown/scripts.pory"

# 113 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 114 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 115 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 116 "data/maps/DewfordTown/scripts.pory"
	release
# 117 "data/maps/DewfordTown/scripts.pory"
	end
# 118 "data/maps/DewfordTown/scripts.pory"

# 119 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 120 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 121 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 122 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 123 "data/maps/DewfordTown/scripts.pory"
	release
# 124 "data/maps/DewfordTown/scripts.pory"
	end
# 125 "data/maps/DewfordTown/scripts.pory"

# 126 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 127 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 128 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 129 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 130 "data/maps/DewfordTown/scripts.pory"
	end
# 131 "data/maps/DewfordTown/scripts.pory"

# 132 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 133 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 134 "data/maps/DewfordTown/scripts.pory"
	end
# 135 "data/maps/DewfordTown/scripts.pory"

# 136 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 137 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 138 "data/maps/DewfordTown/scripts.pory"
	end
# 139 "data/maps/DewfordTown/scripts.pory"

# 140 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 141 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 142 "data/maps/DewfordTown/scripts.pory"
	end
# 143 "data/maps/DewfordTown/scripts.pory"

# 144 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 145 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 146 "data/maps/DewfordTown/scripts.pory"
	end
# 147 "data/maps/DewfordTown/scripts.pory"

# 148 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 149 "data/maps/DewfordTown/scripts.pory"
	lock
# 150 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 151 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 152 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 153 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 154 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 155 "data/maps/DewfordTown/scripts.pory"
	end
# 156 "data/maps/DewfordTown/scripts.pory"

# 157 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 158 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 159 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 160 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 161 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 162 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 163 "data/maps/DewfordTown/scripts.pory"
	release
# 164 "data/maps/DewfordTown/scripts.pory"
	end
# 165 "data/maps/DewfordTown/scripts.pory"

# 166 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 167 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 168 "data/maps/DewfordTown/scripts.pory"
	release
# 169 "data/maps/DewfordTown/scripts.pory"
	end
# 170 "data/maps/DewfordTown/scripts.pory"

# 171 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 172 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 173 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 174 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 175 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 176 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 177 "data/maps/DewfordTown/scripts.pory"
	end
# 178 "data/maps/DewfordTown/scripts.pory"

# 179 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 180 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 181 "data/maps/DewfordTown/scripts.pory"
	release
# 182 "data/maps/DewfordTown/scripts.pory"
	end
# 183 "data/maps/DewfordTown/scripts.pory"

# 184 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 185 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 186 "data/maps/DewfordTown/scripts.pory"
	release
# 187 "data/maps/DewfordTown/scripts.pory"
	end
# 188 "data/maps/DewfordTown/scripts.pory"

# 189 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 190 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 191 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 192 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 0
# 193 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 194 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 195 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 196 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 197 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 199 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 200 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToPetalburg
# 201 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 202 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 204 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 205 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 206 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 208 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 209 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 210 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 211 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 212 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 213 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 214 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 215 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 216 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 217 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 218 "data/maps/DewfordTown/scripts.pory"
	release
# 219 "data/maps/DewfordTown/scripts.pory"
	end
# 220 "data/maps/DewfordTown/scripts.pory"

# 221 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 222 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 223 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 224 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 1
# 225 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 226 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 228 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 229 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 230 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 231 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 232 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToSlateport
# 233 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToSlateport
# 234 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 235 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 236 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE109
# 237 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 238 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_BRINEY, 21, 26
# 240 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BRINEY
# 241 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 242 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, DewfordTown_Movement_BrineyExitBoat
# 243 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 245 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BOAT
# 246 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 247 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 248 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 249 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 250 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 251 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 252 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 253 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 254 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109
# 255 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_BRINEY
# 256 "data/maps/DewfordTown/scripts.pory"
	release
# 257 "data/maps/DewfordTown/scripts.pory"
	end
# 258 "data/maps/DewfordTown/scripts.pory"

# 259 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 260 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 261 "data/maps/DewfordTown/scripts.pory"
	return
# 262 "data/maps/DewfordTown/scripts.pory"

# 263 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 264 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 265 "data/maps/DewfordTown/scripts.pory"
	return
# 266 "data/maps/DewfordTown/scripts.pory"

# 267 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 268 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 269 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 270 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 271 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 272 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 273 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 274 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 275 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 276 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 277 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 278 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
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
	walk_fast_left
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
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
	walk_fast_up
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 462 "data/maps/DewfordTown/scripts.pory"
	step_end
# 463 "data/maps/DewfordTown/scripts.pory"

# 464 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
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
	walk_fast_right
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 615 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 617 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 618 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 619 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 621 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 627 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 629 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 631 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 635 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 636 "data/maps/DewfordTown/scripts.pory"
	step_end
# 637 "data/maps/DewfordTown/scripts.pory"

# 638 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 639 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 640 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 641 "data/maps/DewfordTown/scripts.pory"
	step_end
# 642 "data/maps/DewfordTown/scripts.pory"

# 643 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 644 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 645 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 646 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 647 "data/maps/DewfordTown/scripts.pory"
	step_end
# 648 "data/maps/DewfordTown/scripts.pory"

# 649 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 650 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 651 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 652 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 653 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 654 "data/maps/DewfordTown/scripts.pory"
	step_end
# 655 "data/maps/DewfordTown/scripts.pory"

# 656 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 657 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 658 "data/maps/DewfordTown/scripts.pory"
	step_end
# 659 "data/maps/DewfordTown/scripts.pory"

# 660 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 661 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 662 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 663 "data/maps/DewfordTown/scripts.pory"
	step_end
# 664 "data/maps/DewfordTown/scripts.pory"

# 665 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 666 "data/maps/DewfordTown/scripts.pory"
	lock
# 667 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 668 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 669 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 670 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 671 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 672 "data/maps/DewfordTown/scripts.pory"
	end
# 673 "data/maps/DewfordTown/scripts.pory"

# 674 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 675 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 676 "data/maps/DewfordTown/scripts.pory"
	release
# 677 "data/maps/DewfordTown/scripts.pory"
	end
# 678 "data/maps/DewfordTown/scripts.pory"

# 679 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 680 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 681 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 682 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 683 "data/maps/DewfordTown/scripts.pory"
	lock
# 684 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 685 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 686 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 687 "data/maps/DewfordTown/scripts.pory"
	end
# 688 "data/maps/DewfordTown/scripts.pory"

# 689 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 690 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 691 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 692 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 693 "data/maps/DewfordTown/scripts.pory"
	release
# 694 "data/maps/DewfordTown/scripts.pory"
	end
# 695 "data/maps/DewfordTown/scripts.pory"

# 696 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 697 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 698 "data/maps/DewfordTown/scripts.pory"
	release
# 699 "data/maps/DewfordTown/scripts.pory"
	end
# 700 "data/maps/DewfordTown/scripts.pory"

# 701 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 702 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 703 "data/maps/DewfordTown/scripts.pory"
	release
# 704 "data/maps/DewfordTown/scripts.pory"
	end
# 705 "data/maps/DewfordTown/scripts.pory"

# 706 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 707 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven ist eine kleine\n"
# 708 "data/maps/DewfordTown/scripts.pory"
	.string "Inselgemeinschaft. Wenn hier etwas in\l"
# 709 "data/maps/DewfordTown/scripts.pory"
	.string "Mode kommt, will jeder es haben.$"
# 710 "data/maps/DewfordTown/scripts.pory"

# 711 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 712 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven\n"
# 713 "data/maps/DewfordTown/scripts.pory"
	.string "“Eine kleine Insel im blauen Meer.”$"
# 714 "data/maps/DewfordTown/scripts.pory"

# 715 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 716 "data/maps/DewfordTown/scripts.pory"
	.string "Pokémon Arena von Faustauhaven\n"
# 717 "data/maps/DewfordTown/scripts.pory"
	.string "Leiter: Kamillo\l"
# 718 "data/maps/DewfordTown/scripts.pory"
	.string "“Eine große Welle des Kampfes!”$"
# 719 "data/maps/DewfordTown/scripts.pory"

# 720 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 721 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven Halle\n"
# 722 "data/maps/DewfordTown/scripts.pory"
	.string "“Die Informationsbörse für jedermann!”$"
# 723 "data/maps/DewfordTown/scripts.pory"

# 724 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 725 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 726 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven Anker geworfen.\p"
# 727 "data/maps/DewfordTown/scripts.pory"
	.string "Ich vermute, du wirst diesen Brief\n"
# 728 "data/maps/DewfordTown/scripts.pory"
	.string "jetzt diesem… Troy bringen?$"
# 729 "data/maps/DewfordTown/scripts.pory"

# 730 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 731 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Hast du den Brief\n"
# 732 "data/maps/DewfordTown/scripts.pory"
	.string "überbracht?\p"
# 733 "data/maps/DewfordTown/scripts.pory"
	.string "Oder meinst du, wir müssen zurück\n"
# 734 "data/maps/DewfordTown/scripts.pory"
	.string "nach Blütenburg City segeln?$"
# 735 "data/maps/DewfordTown/scripts.pory"

# 736 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 737 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Blütenburg City…\n"
# 738 "data/maps/DewfordTown/scripts.pory"
	.string "In Ordnung.\p"
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "Anker gelichtet!\n"
# 740 "data/maps/DewfordTown/scripts.pory"
	.string "Pecko, mein Schatz, wir setzen Segel!$"
# 741 "data/maps/DewfordTown/scripts.pory"

# 742 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Dann bring den Brief zu\n"
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "seinem Empfänger. Ich warte hier.$"
# 745 "data/maps/DewfordTown/scripts.pory"

# 746 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 747 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "Faustauhaven Anker geworfen!\p"
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "Komm, wenn wir wieder Segel\n"
# 750 "data/maps/DewfordTown/scripts.pory"
	.string "setzen sollen.$"
# 751 "data/maps/DewfordTown/scripts.pory"

# 752 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Ahoi! Für dich fahre ich\n"
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "jederzeit wieder raus!\p"
# 755 "data/maps/DewfordTown/scripts.pory"
	.string "Nun, wo soll es hingehen?$"
# 756 "data/maps/DewfordTown/scripts.pory"

# 757 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 758 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Blütenburg City soll es\n"
# 759 "data/maps/DewfordTown/scripts.pory"
	.string "sein?\p"
# 760 "data/maps/DewfordTown/scripts.pory"
	.string "Anker gelichtet!\n"
# 761 "data/maps/DewfordTown/scripts.pory"
	.string "Pecko, mein Schatz, wir setzen Segel!$"
# 762 "data/maps/DewfordTown/scripts.pory"

# 763 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Graphitport City soll\n"
# 765 "data/maps/DewfordTown/scripts.pory"
	.string "es sein?\p"
# 766 "data/maps/DewfordTown/scripts.pory"
	.string "Anker gelichtet!\n"
# 767 "data/maps/DewfordTown/scripts.pory"
	.string "Pecko, mein Schatz, wir setzen Segel!$"
# 768 "data/maps/DewfordTown/scripts.pory"

# 769 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 770 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Brack: Sag mir einfach Bescheid,\n"
# 771 "data/maps/DewfordTown/scripts.pory"
	.string "wenn wir wieder Segel setzen sollen.$"
# 772 "data/maps/DewfordTown/scripts.pory"

# 773 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 774 "data/maps/DewfordTown/scripts.pory"
	.string "Dies ist ein berühmter Angelplatz.\n"
# 775 "data/maps/DewfordTown/scripts.pory"
	.string "Hast du Lust zu angeln?$"
# 776 "data/maps/DewfordTown/scripts.pory"

# 777 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 778 "data/maps/DewfordTown/scripts.pory"
	.string "Ich habe dir genau zugehört und mir\n"
# 779 "data/maps/DewfordTown/scripts.pory"
	.string "gefällt, was du gesagt hast!\p"
# 780 "data/maps/DewfordTown/scripts.pory"
	.string "Ich werde dir eine meiner Angeln\n"
# 781 "data/maps/DewfordTown/scripts.pory"
	.string "geben.$"
# 782 "data/maps/DewfordTown/scripts.pory"

# 783 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 784 "data/maps/DewfordTown/scripts.pory"
	.string "Und, als kleine Zugabe, gebe ich dir noch\n"
# 785 "data/maps/DewfordTown/scripts.pory"
	.string "einige Tipps zum Angeln!\p"
# 786 "data/maps/DewfordTown/scripts.pory"
	.string "Schau dir zuerst das Wasser an und dann\n"
# 787 "data/maps/DewfordTown/scripts.pory"
	.string "benutze deine Angel.\p"
# 788 "data/maps/DewfordTown/scripts.pory"
	.string "Konzentriere dich… Wenn etwas anbeißt,\n"
# 789 "data/maps/DewfordTown/scripts.pory"
	.string "hol die Angel ein.\p"
# 790 "data/maps/DewfordTown/scripts.pory"
	.string "Manchmal kannst du mit einem Mal etwas\n"
# 791 "data/maps/DewfordTown/scripts.pory"
	.string "Großes fangen, manchmal musst du\l"
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "immer wieder kurz die Angel anheben,\l"
# 793 "data/maps/DewfordTown/scripts.pory"
	.string "um etwas an Land zu ziehen.$"
# 794 "data/maps/DewfordTown/scripts.pory"

# 795 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, wirklich?\n"
# 797 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist aber schade.$"
# 798 "data/maps/DewfordTown/scripts.pory"

# 799 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 800 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 801 "data/maps/DewfordTown/scripts.pory"
	.string "Wie steht’s mit deinen Angelkünsten?$"
# 802 "data/maps/DewfordTown/scripts.pory"

# 803 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 804 "data/maps/DewfordTown/scripts.pory"
	.string "Also, wenn das stimmt… Das wäre\n"
# 805 "data/maps/DewfordTown/scripts.pory"
	.string "großartig! Petri heil!$"
# 806 "data/maps/DewfordTown/scripts.pory"

# 807 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "Hey, lass den Kopf nicht hängen! Ich\n"
# 809 "data/maps/DewfordTown/scripts.pory"
	.string "gebe dir einige Tipps zum Angeln!\p"
# 810 "data/maps/DewfordTown/scripts.pory"
	.string "Schau dir zuerst das Wasser an\n"
# 811 "data/maps/DewfordTown/scripts.pory"
	.string "und dann benutze deine Angel.\p"
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "Konzentriere dich… Wenn etwas\n"
# 813 "data/maps/DewfordTown/scripts.pory"
	.string "anbeißt, hol die Angel ein.\p"
# 814 "data/maps/DewfordTown/scripts.pory"
	.string "Manchmal kannst du mit einem Mal etwas\n"
# 815 "data/maps/DewfordTown/scripts.pory"
	.string "Großes fangen, manchmal musst du\limmer wieder kurz die Angel anheben,\l"
# 816 "data/maps/DewfordTown/scripts.pory"
	.string "um etwas an Land zu ziehen.$"
# 817 "data/maps/DewfordTown/scripts.pory"

# 818 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "Ich mag, was hip, aufregend und modern\n"
# 820 "data/maps/DewfordTown/scripts.pory"
	.string "ist. So etwas probiere ich immer aus.\p"
# 821 "data/maps/DewfordTown/scripts.pory"
	.string "Hast du schon einmal was von\n"
# 822 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” gehört?\p"
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "Wusste ich es doch!\n"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "Natürlich hast du schon davon gehört!\p"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, meine Güte,\n"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist das Coolste überhaupt!\p"
# 828 "data/maps/DewfordTown/scripts.pory"
	.string "Wo immer du auch herkommst,\n"
# 829 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 830 "data/maps/DewfordTown/scripts.pory"
	.string "ist das Aufregendste überhaupt!$"
# 831 "data/maps/DewfordTown/scripts.pory"

# 832 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "Wie bitte?\n"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "Es ist nicht hip und aufregend?\p"
# 835 "data/maps/DewfordTown/scripts.pory"
	.string "Nun, hey, dann verrate mir aber, was\n"
# 836 "data/maps/DewfordTown/scripts.pory"
	.string "wirklich cool und “in” ist?$"
# 837 "data/maps/DewfordTown/scripts.pory"

# 838 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 839 "data/maps/DewfordTown/scripts.pory"
	.string "Was?\n"
# 840 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 841 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 842 "data/maps/DewfordTown/scripts.pory"
	.string "… Hm… Äh… Yeah! Das stimmt!\n"
# 843 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, ich wusste das! Schon lange!\p"
# 844 "data/maps/DewfordTown/scripts.pory"
	.string "Natürlich weiß ich das!\n"
# 845 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”, richtig?\p"
# 846 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, das ist es, das ist es!\n"
# 847 "data/maps/DewfordTown/scripts.pory"
	.string "Ist “{STR_VAR_2}”\l"
# 848 "data/maps/DewfordTown/scripts.pory"
	.string "nicht das Coolste?\p"
# 849 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist die hippeste Sache überhaupt.\n"
# 850 "data/maps/DewfordTown/scripts.pory"
	.string "Und du dachtest, ich wüsste das nicht?\p"
# 851 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 852 "data/maps/DewfordTown/scripts.pory"
	.string "Das ist doch schon uralt und unmodern.\p"
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}” ist das,\n"
# 854 "data/maps/DewfordTown/scripts.pory"
	.string "was vital und zeitgemäß ist!$"
# 855 "data/maps/DewfordTown/scripts.pory"

# 856 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 857 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 858 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”, oder?\p"
# 859 "data/maps/DewfordTown/scripts.pory"
	.string "Aber ich persönlich finde,\n"
# 860 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 861 "data/maps/DewfordTown/scripts.pory"
	.string "ist das Coolste überhaupt!$"
# 862 "data/maps/DewfordTown/scripts.pory"

# 863 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 864 "data/maps/DewfordTown/scripts.pory"
	.string "Wenn du irgendetwas über neue, auf-\n"
# 865 "data/maps/DewfordTown/scripts.pory"
	.string "regende Sachen hörst, erzähl mir davon!$"
# 866 "data/maps/DewfordTown/scripts.pory"

# 867 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 868 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolut richtig!\p"
# 869 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” ist die\n"
# 870 "data/maps/DewfordTown/scripts.pory"
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
