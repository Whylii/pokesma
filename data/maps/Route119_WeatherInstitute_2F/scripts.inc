# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly::
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Das Institut hat ein Pokémon ent-\n"
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "wickelt, das irgendwas mit dem Wetter\l"
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "zu tun hat. Das müssen wir kriegen!$"
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ein Kind hat unsere Pläne durchkreuzt?$"
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wenn sie hier tatsächlich ein Pokémon\n"
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "entwickelt haben, das das Wetter kon-\l"
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "trollieren kann, müssen wir von Team\l"
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Aqua es in unsere Gewalt bringen!$"
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wir sind Team Aqua!\n"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wir sind überall dort, wo Raritäten\l"
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "gefunden wurden!$"
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Das war's dann wohl!$"
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Du hast doch gar keine Ahnung, was wir\n"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "von Team Aqua vorbereiten!\l"
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Geh uns gefälligst aus dem Weg!$"
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Jetzt sag nicht, du bist auch auf der\n"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Suche nach diesem Wetter-Pokémon?\p"
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Das erlaube ich nicht!\n"
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wir waren schließlich zuerst hier!$"
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Nun schau dir meine Pokémon an.$"
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hmpf… Was soll's?!\n"
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Das, was wir suchen…\p"
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "ist sowieso nicht hier zu finden…\n"
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hihihihihihi…$"
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro:
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahahaha!\p"
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Du willst dich allen Ernstes in die Ange-\n"
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "legenheiten von Team Aqua einmischen?\p"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dann bist du entweder furchtlos oder\n"
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "einfach dumm! Oder beides?\p"
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Du bist ja so niedlich. Einfach wider-\n"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "lich! Ich mach dich fertig, du Baby!$"
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat:
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Du bist einfach widerlich… stark!$"
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Es ist schon schlimm genug, sich\n"
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "ständig mit Team Magma auseinander-\p"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "setzen zu müssen, und jetzt kommst du\n"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "auch noch daher!\p"
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Warum musst du deine spitze Nase in\n"
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dinge stecken, die dich nichts angehen?$"
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wir haben hier eine Krisensituation!\p"
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Eine Gruppe von Team Magma ist gerade\n"
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "am Klima-Institut vorbeigelaufen!\p"
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Sie ist wohl auf dem Weg zum Pyroberg!$"
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Was?!\n"
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dann lasst uns von hier verschwinden!\p"
# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Und zwar schnell! Wir müssen so schnell\n"
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "wie möglich zum Pyroberg!\p"
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahahaha!\n"
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Magma, mach dich auf was gefasst!$"
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Danke!\n"
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Vielen Dank! Nun sind wir in Sicherheit!\p"
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Es ist vielleicht eine seltsame Art\n"
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "danke zu sagen, aber dieses Pokémon\l"
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "ist für dich!$"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? Du hast keinen Platz für\n"
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "dieses Pokémon.$"
# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} erhält Formeo!$"
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Dieses Pokémon ändert seine Gestalt\n"
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "abhängig vom jeweiligen Wetter.\p"
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hier im Institut gibt es sehr viele\n"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "davon - du kannst es ruhig annehmen.$"
# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Seit Jahren erforsche ich den Regen,\n"
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "aber zu denken, dass Menschen das\l"
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wetter frei bestimmen können, ist dumm.$"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather:
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ich zeichne die Klimaveränderungen in\n"
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "der Hoenn-Region auf.\p"
# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Im Moment gibt es eine Dürre. Und zwar…\n"
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "auf der {STR_VAR_1}.\p"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Bedeutet das, dass auf der\n"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather:
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ich zeichne die Klimaveränderungen in\n"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "der Hoenn-Region auf.\p"
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Im Moment gibt es starke Niederschläge.\n"
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Und zwar… auf der {STR_VAR_1}.\p"
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Bedeutet das, dass auf der\n"
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Das Wetter hat sich beruhigt. Es gibt\n"
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "keine außergewöhnlichen Vorkommnisse.\p"
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Der gelegentliche Regen ist ein Segen,\n"
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "wirklich.$"
