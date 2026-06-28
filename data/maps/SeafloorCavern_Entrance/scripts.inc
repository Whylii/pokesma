# 1 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_MapScripts::
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_OnResume
# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.byte 0
# 5 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume:
# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 8 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 9 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1, SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_ExclamationMark
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_Delay48
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterLeft
# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterRight
# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep:
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Hey!\n"
# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Dein Gesicht kenne ich doch!\p"
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Du bist hier, und das kann nur bedeuten,\n"
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "dass du dich wieder in unsere\l"
# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Angelegenheiten einmischen willst!\p"
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Glaubst du wirklich, dass ein Baby wie\n"
# 67 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "du es mit Team Aqua aufnehmen kann?\p"
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Du versuchst es besser in einer\n"
# 69 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Trillionen Jahren mal.\p"
# 70 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Du passt hervorragend zu Team Magma.\p"
# 71 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Und wo wir grad beim Thema sind: Team\n"
# 72 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Magma soll in der Nähe von Moosbach\l"
# 73 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "gesehen worden sein.\p"
# 74 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Die passen mit Sicherheit nicht ans\n"
# 75 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Meer.$"
# 76 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 77 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort:
# 78 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Glaubst du wirklich, dass ein Baby wie\n"
# 79 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "du es mit Team Aqua aufnehmen kann?\p"
# 80 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Du versuchst es besser in einer\n"
# 81 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Trillionen Jahren mal.\p"
# 82 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Du passt hervorragend zu Team Magma.\p"
# 83 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Und wo wir grad beim Thema sind: Team\n"
# 84 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Magma soll in der Nähe von Moosbach\l"
# 85 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "gesehen worden sein.\p"
# 86 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Die passen mit Sicherheit nicht ans\n"
# 87 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Meer.$"
