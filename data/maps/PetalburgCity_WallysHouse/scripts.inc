# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_HOUSE_WALLYS_DAD, DIR_WEST
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Du…\n"
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ach, du bist bestimmt {PLAYER}{KUN}, richtig?\p"
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Danke, dass du dich um Heiko gekümmert\n"
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "hast.\p"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Er war schon als Baby immer zart und\n"
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "kränklich.\p"
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wir haben ihn für eine Weile zu\n"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Verwandten nach Wiesenflur\l"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "geschickt.\p"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Die Luft ist dort viel sauberer als hier.\p"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Was heißt das? Wo ist Heiko?\n"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Er ist fort, unser Heiko?\p"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ich frage mich, wo er jetzt wohl sein\n"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "mag?$"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ich frage mich, wie es unserem\n"
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Heiko geht.$"
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Hallo {PLAYER}{KUN}! Bitte entschuldige,\n"
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dass wir dich den weiten Weg hierher\l"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gerufen haben.\p"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Unser Heiko ist viel robuster ge-\n"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "worden, seit er in Wiesenflur ist.\p"
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Das verdanken wir allein dir!\p"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Als Heiko den Ort verließ, hast du\n"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "ihm geholfen, ein Pokémon zu fangen,\l"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "stimmt's?\p"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ich glaube, das hat Heiko richtig\n"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "glücklich gemacht.\p"
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Und nicht nur Heiko. Auch mich als\n"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Vater hat es sehr glücklich gemacht.\p"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Glücklich darüber, dass er einen Freund\n"
# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "wie dich gefunden hat.\p"
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Das soll jetzt keine Bestechung sein!\n"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Aber ich möchte dir dies schenken.$"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wenn dein Pokémon Surfer beherrscht,\n"
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "kannst du viele neue Orte bereisen.$"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Heiko wird bald wieder nach Hause\n"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "kommen. Ich freue mich schon so.$"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh! Du hast Heiko in Prachtpolis City\n"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "getroffen?\p"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ach, {PLAYER}{KUN}, du willst mich auf den Arm\n"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "nehmen!\p"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Er mag sich gesundheitlich erholt\n"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "haben, aber er wird nicht alleine so weit\l"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "fortgegangen sein!$"
# 124 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 125 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 126 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Heiko war richtig glücklich, als er\n"
# 127 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "uns erzählte, dass er ein Pokémon\l"
# 128 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gefangen habe.\p"
# 129 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ich habe ihn schon seit Ewigkeiten\n"
# 130 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "nicht mehr so glücklich erlebt!$"
# 131 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 132 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 133 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ich muss das vor meinem Mann\n"
# 134 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "verheimlichen…\p"
# 135 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Aber unser Heiko hat Wiesenflur\n"
# 136 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "verlassen, ohne jemandem davon zu\l"
# 137 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "erzählen.\p"
# 138 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Weißt du, Heiko ist nicht kräftig,\n"
# 139 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "besitzt aber einen starken Willen.\p"
# 140 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ich bin sicher, er wird gesund und wohl-\n"
# 141 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "behalten wieder nach Hause kommen.$"
