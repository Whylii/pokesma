# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition:
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, 0, 5
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy::
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain::
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Der Boss hat Interesse an den \n"
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Forschungen gezeigt, daher hat er uns\l"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "hergeschickt.\p"
# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Stör uns gefälligst nicht!$"
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "So ein Mist…\n"
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Besiegt… von einem Kind!$"
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Unser Boss weiß alles.\p"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Ich bin nur ein Rüpel. Woher soll ich\n"
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "wissen, was er denkt?$"
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wie?\n"
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Was macht denn das Kind hier?$"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wie?\n"
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Ich habe verloren?!$"
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh. Ich werde mir etwas anhören müssen,\n"
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "weil ich gegen ein Kind verloren habe…\p"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Ich muss mich jetzt dringend hinlegen…$"
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Als ich schlief, schlich sich jemand\n"
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "nach oben!$"
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow! Bist du aber stark!\p"
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Ich wäre auch gerne ein Pokémon-\n"
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Trainer wie du!$"
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Der Professor liebt den Regen.\n"
# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Das ist eine Tatsache.\p"
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Aber wenn es noch lange so regnet,\n"
# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "wird das zu Problemen führen. Das ist\l"
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "die andere Seite der Medaille.\p"
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Und daher erforscht der Professor,\n"
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "wie man den Regen positiv nutzen kann.$"
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
# 119 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Im ersten Stock des Instituts\n"
# 120 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "untersuchen wir die Klimaveränderungen\l"
# 121 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "in der Hoenn-Region.\p"
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wir haben dort eine temporäre Dürre\n"
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "und einzelne Fälle von heftigem\l"
# 124 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Niederschlag verzeichnen können.$"
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hallo! Dein beherztes Eingreifen hat\n"
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "uns gerettet!\p"
# 129 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Ich verstehe nur nicht, was die Aquas\n"
# 130 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "von uns wollten…$"
# 131 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Da steht ein Bett…\n"
# 134 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Eine Pause wäre willkommen.$"
