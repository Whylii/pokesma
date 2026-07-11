# 1 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts::
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_down
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_faster_up
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ja? Wenn du Brigg suchst… Der\n"
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "bin ich.\p"
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Das müssen die Stücke sein, die ich\n"
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "bei Mr. Trumm von Devon bestellt habe.\p"
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Danke schön! Das ist großartig!\n"
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Nun können wir unsere Expedition\l"
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "vorbereiten.$"
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, wartet! Das ist doch viel zu\n"
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "schwer für euch! Wir nehmen das an uns!$"
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Kapt. Brigg: W… Was?\n"
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wer seid ihr?$"
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wir sind Team Aqua!\p"
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Unser Boss will diese Dinge haben!\n"
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Also hört auf zu labern und lasst die\l"
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Teile rüberwachsen!$"
# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oooaaah!\n"
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Geschlagen von einem Kind!$"
# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, Mann! Was für ein Desaster…\n"
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Der Boss wird verdammt wütend sein…$"
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pah, du Waschlappen!\n"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ich werde das Ding schon schaukeln!$"
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Was?!\n"
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ich habe auch verloren!$"
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Und nun? Wenn wir die Stücke nicht\n"
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "bekommen, können wir uns auf etwas\l"
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "gefasst machen!\p"
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Argh, ich hatte nicht damit gerechnet,\n"
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dass ein nervendes Kind meine Nerven\l"
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "nervt.$"
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ich bin gekommen, um zu sehen, warum ihr\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "so lange braucht. Und was sehe ich? Ihr\l"
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Idioten lasst euch von einem kleinen\l"
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Kind die Suppe versalzen!$"
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wir sind Team Aqua und lieben\n"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "das Meer!\p"
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Und ich bin Team Aquas Boss,\n"
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Adrian!\p"
# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wieso mischst du dich in unsere\n"
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Angelegenheiten ein?\p"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Nein… Das kann nicht sein!\n"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Du bist doch nicht von Team Magma?\p"
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Warte mal, das stimmt doch einfach\n"
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "nicht! Du bist doch gar nicht danach\l"
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "angezogen!\p"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon, Menschen - alles Leben\n"
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "basiert auf den Kräften des Meeres.\p"
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Daher setzt Team Aqua sich für die\n"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ausweitung des Meeres ein.\p"
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Meinst du nicht auch, dass wir uns eine\n"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "großartige Aufgabe gestellt haben?\p"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Mhm…\n"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Du bist wahrscheinlich noch zu klein.\p"
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Du kannst unsere Ideale einfach noch\n"
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "nicht verstehen.\p"
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Aber: Wenn du dich jemals wieder gegen\n"
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "uns stellst, wirst du die Konsequenzen\l"
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "zu spüren bekommen!\p"
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Vergiss das nicht!$"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Kapt. Brigg: Du bist…\n"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Aah, du bist {PLAYER}{KUN}…\p"
# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, das war eine kritische Situation!\n"
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Danke, dass du uns gerettet hast!\p"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, fast hätte ich vergessen, dass du\n"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "uns die Teile von Devon gebracht hast!$"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Kapt. Brigg: Hoppla!\n"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wir dürfen keine Zeit mehr verlieren!\p"
# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wir müssen so schnell wie möglich zur\n"
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Expedition zum Meeresgrund\l"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "aufbrechen.\p"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Danke! Und entschuldige mich nun!\p"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Du kannst dir hier ruhig alles in Ruhe\n"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "anschauen, wenn du magst.$"
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ich habe hier ein Schiffsmodell\n"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "gesehen.\p"
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es erinnert mich an das Schiffswrack\n"
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "in der Nähe von Faustauhaven…$"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Es ist strikt verboten, im Museum\n"
# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "zu rennen!$"
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, das U-Boot ist der helle Wahnsinn!\n"
# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Damit würde ich gerne auf Fahrt gehen!$"
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wasserqualität Beispiel 1\n"
# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "steht auf dem Schild.\p"
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Das Meer ist grenzübergreifend, aber\n"
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "das Wasser scheint in jeder Region eine\l"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "andere Qualität zu haben.$"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wasserqualität Beispiel 2\n"
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "steht auf dem Schild.\p"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anscheinend ist der Salzgehalt in jeder\n"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Region anders.$"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ein Gummiball wird größer und kleiner.\p"
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Im Meer sorgt das Gewicht des Wassers\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "für ständigen Druck.\p"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "In seichtem Wasser ist der Druck nicht\n"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "sehr hoch.\p"
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "In extrem tiefem Wasser kann der\n"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Druck zehntausende von Tonnen inner-\l"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "halb eines kleinen Bereiches betragen.$"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel:
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Modell der Hoenn-Region\p"
# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ein Diorama der Hoenn-Region.\p"
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wo liegt hier Wurzelheim?$"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Dies ist eine Anzeige der Meeres-\n"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "strömungen.\p"
# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "In der Nähe des Meeresbodens sind die\n"
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Strömungen abhängig von Faktoren wie\l"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Temperatur und Salzgehalt.$"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Dies ist eine Anzeige der Meeres-\n"
# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "strömungen.\p"
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "An der Oberfläche sind die Strömungen\n"
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "abhängig vom Einfluss des Windes.$"
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Die Fähre MS Tide\p"
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ein maßstabsgetreues Modell eines\n"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Schiffes unter Konstruktion in der\l"
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Briggwerft.$"
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Tiefsee-Forschungsboot 1\p"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ein Replikat des Hochleistungs-\n"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "U-Bootes zur Erforschung des\l"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Meeresbodens.$"
# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Tauchboot\p"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ein Replikat eines kompakten,\n"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "unbemannten Spezial-U-Bootes zur Er-\l"
# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "forschung des Meeresbodens.$"
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "MS Anne\p"
# 447 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ein Replikat eines Luxusliners, der\n"
# 448 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "um den Globus kreuzt.$"
