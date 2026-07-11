# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 3 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 4 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 5 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity/scripts.pory"

# 7 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 8 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 9 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 10 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 11 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/LilycoveCity/scripts.pory"
	end
# 14 "data/maps/LilycoveCity/scripts.pory"

# 15 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 16 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 17 "data/maps/LilycoveCity/scripts.pory"
	end
# 18 "data/maps/LilycoveCity/scripts.pory"

# 19 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 20 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 21 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 22 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	return
# 33 "data/maps/LilycoveCity/scripts.pory"

# 34 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 35 "data/maps/LilycoveCity/scripts.pory"
	lock
# 36 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 37 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 38 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 39 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity/scripts.pory"
	giverandomberry BERRY_ID_CHERI, BERRY_ID_SITRUS
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 42 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 43 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 44 "data/maps/LilycoveCity/scripts.pory"
	release
# 45 "data/maps/LilycoveCity/scripts.pory"
	end
# 46 "data/maps/LilycoveCity/scripts.pory"

# 47 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 54 "data/maps/LilycoveCity/scripts.pory"
	end
# 55 "data/maps/LilycoveCity/scripts.pory"

# 56 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 57 "data/maps/LilycoveCity/scripts.pory"
	lock
# 58 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 59 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 60 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 61 "data/maps/LilycoveCity/scripts.pory"
	release
# 62 "data/maps/LilycoveCity/scripts.pory"
	end
# 63 "data/maps/LilycoveCity/scripts.pory"

# 64 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 71 "data/maps/LilycoveCity/scripts.pory"
	end
# 72 "data/maps/LilycoveCity/scripts.pory"

# 73 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 74 "data/maps/LilycoveCity/scripts.pory"
	lock
# 75 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 76 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 77 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 78 "data/maps/LilycoveCity/scripts.pory"
	release
# 79 "data/maps/LilycoveCity/scripts.pory"
	end
# 80 "data/maps/LilycoveCity/scripts.pory"

# 81 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 87 "data/maps/LilycoveCity/scripts.pory"
	lock
# 88 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 89 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 90 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity/scripts.pory"
	release
# 92 "data/maps/LilycoveCity/scripts.pory"
	end
# 93 "data/maps/LilycoveCity/scripts.pory"

# 94 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 101 "data/maps/LilycoveCity/scripts.pory"
	end
# 102 "data/maps/LilycoveCity/scripts.pory"

# 103 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 104 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 105 "data/maps/LilycoveCity/scripts.pory"
	end
# 106 "data/maps/LilycoveCity/scripts.pory"

# 107 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 108 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 109 "data/maps/LilycoveCity/scripts.pory"
	end
# 110 "data/maps/LilycoveCity/scripts.pory"

# 111 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 112 "data/maps/LilycoveCity/scripts.pory"
	lock
# 113 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 114 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 115 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 116 "data/maps/LilycoveCity/scripts.pory"
	release
# 117 "data/maps/LilycoveCity/scripts.pory"
	end
# 118 "data/maps/LilycoveCity/scripts.pory"

# 119 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 126 "data/maps/LilycoveCity/scripts.pory"
	end
# 127 "data/maps/LilycoveCity/scripts.pory"

# 128 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 129 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 130 "data/maps/LilycoveCity/scripts.pory"
	end
# 131 "data/maps/LilycoveCity/scripts.pory"

# 132 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 133 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
# 136 "data/maps/LilycoveCity/scripts.pory"
	end
# 137 "data/maps/LilycoveCity/scripts.pory"

# 138 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 139 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 140 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 141 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
# 142 "data/maps/LilycoveCity/scripts.pory"
	end
# 143 "data/maps/LilycoveCity/scripts.pory"

# 144 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 146 "data/maps/LilycoveCity/scripts.pory"
	end
# 147 "data/maps/LilycoveCity/scripts.pory"

# 148 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 149 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 150 "data/maps/LilycoveCity/scripts.pory"
	end
# 151 "data/maps/LilycoveCity/scripts.pory"

# 152 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 153 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 154 "data/maps/LilycoveCity/scripts.pory"
	end
# 155 "data/maps/LilycoveCity/scripts.pory"

# 156 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 157 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 158 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 159 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 160 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 161 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 162 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 163 "data/maps/LilycoveCity/scripts.pory"
	end
# 164 "data/maps/LilycoveCity/scripts.pory"

# 165 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 171 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 172 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 173 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 174 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 175 "data/maps/LilycoveCity/scripts.pory"
	end
# 176 "data/maps/LilycoveCity/scripts.pory"

# 177 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 184 "data/maps/LilycoveCity/scripts.pory"
	end
# 185 "data/maps/LilycoveCity/scripts.pory"

# 186 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 187 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 188 "data/maps/LilycoveCity/scripts.pory"
	end
# 189 "data/maps/LilycoveCity/scripts.pory"

# 190 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 191 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 192 "data/maps/LilycoveCity/scripts.pory"
	end
# 193 "data/maps/LilycoveCity/scripts.pory"

# 194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 195 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 196 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 197 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 198 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 199 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 200 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 201 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 202 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 204 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 205 "data/maps/LilycoveCity/scripts.pory"
	end
# 206 "data/maps/LilycoveCity/scripts.pory"

# 207 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 208 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 209 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 214 "data/maps/LilycoveCity/scripts.pory"
	end
# 215 "data/maps/LilycoveCity/scripts.pory"

# 216 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 217 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 222 "data/maps/LilycoveCity/scripts.pory"
	end
# 223 "data/maps/LilycoveCity/scripts.pory"

# 224 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 225 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 226 "data/maps/LilycoveCity/scripts.pory"
	end
# 227 "data/maps/LilycoveCity/scripts.pory"

# 228 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 229 "data/maps/LilycoveCity/scripts.pory"
	lock
# 230 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 231 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 232 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 233 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 234 "data/maps/LilycoveCity/scripts.pory"
	end
# 235 "data/maps/LilycoveCity/scripts.pory"

# 236 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 237 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 238 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 239 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 240 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 241 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 242 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 243 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 244 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 245 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 246 "data/maps/LilycoveCity/scripts.pory"
	end
# 247 "data/maps/LilycoveCity/scripts.pory"

# 248 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 249 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 250 "data/maps/LilycoveCity/scripts.pory"
	return
# 251 "data/maps/LilycoveCity/scripts.pory"

# 252 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 253 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 254 "data/maps/LilycoveCity/scripts.pory"
	return
# 255 "data/maps/LilycoveCity/scripts.pory"

# 256 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 257 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 258 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 259 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 260 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 261 "data/maps/LilycoveCity/scripts.pory"
	release
# 262 "data/maps/LilycoveCity/scripts.pory"
	end
# 263 "data/maps/LilycoveCity/scripts.pory"

# 264 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 265 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 266 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 267 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 268 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 269 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 270 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 271 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 272 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 273 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 274 "data/maps/LilycoveCity/scripts.pory"
	end
# 275 "data/maps/LilycoveCity/scripts.pory"

# 276 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 277 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 278 "data/maps/LilycoveCity/scripts.pory"
	return
# 279 "data/maps/LilycoveCity/scripts.pory"

# 280 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 281 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 282 "data/maps/LilycoveCity/scripts.pory"
	return
# 283 "data/maps/LilycoveCity/scripts.pory"

# 284 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 285 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 286 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 287 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 288 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 289 "data/maps/LilycoveCity/scripts.pory"
	release
# 290 "data/maps/LilycoveCity/scripts.pory"
	end
# 291 "data/maps/LilycoveCity/scripts.pory"

# 292 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 293 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 294 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 295 "data/maps/LilycoveCity/scripts.pory"
	end
# 296 "data/maps/LilycoveCity/scripts.pory"

# 297 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 298 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 299 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 300 "data/maps/LilycoveCity/scripts.pory"
	end
# 301 "data/maps/LilycoveCity/scripts.pory"

# 302 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 303 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 304 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 305 "data/maps/LilycoveCity/scripts.pory"
	end
# 306 "data/maps/LilycoveCity/scripts.pory"

# 307 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 308 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 309 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 310 "data/maps/LilycoveCity/scripts.pory"
	end
# 311 "data/maps/LilycoveCity/scripts.pory"

# 312 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 313 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 314 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 315 "data/maps/LilycoveCity/scripts.pory"
	end
# 316 "data/maps/LilycoveCity/scripts.pory"

# 317 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 318 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 319 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 320 "data/maps/LilycoveCity/scripts.pory"
	end
# 321 "data/maps/LilycoveCity/scripts.pory"

# 322 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 323 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 324 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 325 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 326 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 327 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 328 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 329 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 330 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 331 "data/maps/LilycoveCity/scripts.pory"
	end
# 332 "data/maps/LilycoveCity/scripts.pory"

# 333 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 334 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 335 "data/maps/LilycoveCity/scripts.pory"
	return
# 336 "data/maps/LilycoveCity/scripts.pory"

# 337 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 338 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 339 "data/maps/LilycoveCity/scripts.pory"
	return
# 340 "data/maps/LilycoveCity/scripts.pory"

# 341 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 342 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 343 "data/maps/LilycoveCity/scripts.pory"
	return
# 344 "data/maps/LilycoveCity/scripts.pory"

# 345 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 346 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 347 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 348 "data/maps/LilycoveCity/scripts.pory"
	return
# 349 "data/maps/LilycoveCity/scripts.pory"

# 350 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 351 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 352 "data/maps/LilycoveCity/scripts.pory"
	return
# 353 "data/maps/LilycoveCity/scripts.pory"

# 354 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 355 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 356 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 357 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 358 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 359 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 360 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 361 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 362 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 363 "data/maps/LilycoveCity/scripts.pory"
	end
# 364 "data/maps/LilycoveCity/scripts.pory"

# 365 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 366 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 367 "data/maps/LilycoveCity/scripts.pory"
	return
# 368 "data/maps/LilycoveCity/scripts.pory"

# 369 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 370 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 371 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 372 "data/maps/LilycoveCity/scripts.pory"
	return
# 373 "data/maps/LilycoveCity/scripts.pory"

# 374 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 375 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 376 "data/maps/LilycoveCity/scripts.pory"
	return
# 377 "data/maps/LilycoveCity/scripts.pory"

# 378 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 379 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 380 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 381 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 382 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 383 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 384 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 385 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 386 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 387 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 388 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 389 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 390 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 391 "data/maps/LilycoveCity/scripts.pory"
	release
# 392 "data/maps/LilycoveCity/scripts.pory"
	end
# 393 "data/maps/LilycoveCity/scripts.pory"

# 394 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 395 "data/maps/LilycoveCity/scripts.pory"
	lock
# 396 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 397 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 398 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 399 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 400 "data/maps/LilycoveCity/scripts.pory"
	release
# 401 "data/maps/LilycoveCity/scripts.pory"
	end
# 402 "data/maps/LilycoveCity/scripts.pory"

# 403 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 404 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 405 "data/maps/LilycoveCity/scripts.pory"
	return
# 406 "data/maps/LilycoveCity/scripts.pory"

# 407 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 408 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 409 "data/maps/LilycoveCity/scripts.pory"
	return
# 410 "data/maps/LilycoveCity/scripts.pory"

# 411 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 412 "data/maps/LilycoveCity/scripts.pory"
	.string "Maike: Oh, hey?\n"
# 413 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, bist du auch am Einkaufen?\p"
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe eine Menge Puppen und Poster\n"
# 415 "data/maps/LilycoveCity/scripts.pory"
	.string "gekauft.\p"
# 416 "data/maps/LilycoveCity/scripts.pory"
	.string "Natürlich habe ich auch Pokémon\n"
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "gefangen und die ziehe ich geradezu\l"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "vorbildlich auf.\p"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe eher Bedenken, dass du dich um\n"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "deine Pokémon nicht richtig kümmerst.\p"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich werde gegen dich kämpfen, dann\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "sehe ich, ob du sie gut behandelst.$"
# 423 "data/maps/LilycoveCity/scripts.pory"

# 424 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "Maike: Oh, hui. Hast du dich denn nicht\n"
# 426 "data/maps/LilycoveCity/scripts.pory"
	.string "um deine Pokémon gekümmert, {PLAYER}{KUN}?\p"
# 427 "data/maps/LilycoveCity/scripts.pory"
	.string "Als Trainer machst du wirklich keinen\n"
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "guten Eindruck!$"
# 429 "data/maps/LilycoveCity/scripts.pory"

# 430 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "Maike: Komm, kämpfe mit mir, dann kann\n"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "ich deine Pokémon beurteilen.$"
# 433 "data/maps/LilycoveCity/scripts.pory"

# 434 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "Maike: Die Pokémon, die ich aufgezogen\n"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "habe, sind mit Sicherheit unbesiegbar.$"
# 437 "data/maps/LilycoveCity/scripts.pory"

# 438 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich kann mich noch gut an unseren\n"
# 441 "data/maps/LilycoveCity/scripts.pory"
	.string "Kampf auf der Route 103 erinnern,\l"
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "Dieser Kampf hat dir enorm geholfen,\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "stärker zu werden, oder?$"
# 445 "data/maps/LilycoveCity/scripts.pory"

# 446 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 447 "data/maps/LilycoveCity/scripts.pory"
	.string "Maike: Ich überlege, ob ich bald nach\n"
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "Wurzelheim zurückgehe.\p"
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe eine anständige Gruppe von\n"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon gefangen und mein Pokédex\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "sieht immer besser aus. Ich gehe nach\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "Hause und zeige das meinem Papa.$"
# 453 "data/maps/LilycoveCity/scripts.pory"

# 454 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 455 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, was wirst du machen?\p"
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "Alle Orden der Arenen sammeln und die\n"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Liga herausfordern?\p"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "Nun, während du deine Orden sammelst,\n"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "werde ich weiter an meinem Pokédex\l"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "arbeiten. Ich werde ihn eher\l"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "vollständig haben als du, wetten?\p"
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "Bis dann!$"
# 463 "data/maps/LilycoveCity/scripts.pory"

# 464 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "Und, {PLAYER}{KUN}, was wirst du machen?\p"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "Wirst du die Pokémon Liga heraus-\n"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "fordern?\p"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "Oder wirst du deinen Pokédex vervoll-\n"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "ständigen?\p"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe gegen dich verloren, aber den\n"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex werde ich eher vollständig\l"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "haben als du!\p"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "Man sieht sich!$"
# 474 "data/maps/LilycoveCity/scripts.pory"

# 475 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "Und, {PLAYER}{KUN}, was wirst du machen?\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "Wirst du zur Kampfzone gehen?\p"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "Oder wirst du deinen Pokédex vervoll-\n"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "ständigen?\p"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe gegen dich verloren, aber den\n"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex werde ich eher vollständig\l"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "haben als du!\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "Man sieht sich!$"
# 484 "data/maps/LilycoveCity/scripts.pory"

# 485 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "Brix: Oh, du bist es, {PLAYER}.\p"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich mache Besorgungen für meinen\n"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "Vater. Nein, ich kaufe keine Puppen!\p"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "Wir haben uns lange nicht mehr gesehen.\p"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "Sollen wir kämpfen, um zu sehen, wer\n"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "seine Pokémon besser trainiert?$"
# 492 "data/maps/LilycoveCity/scripts.pory"

# 493 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Brix: Oh, hast du ein Problem? Nicht\n"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "genügend Selbstbewusstsein, was?$"
# 496 "data/maps/LilycoveCity/scripts.pory"

# 497 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "Brix: Sollen wir kämpfen, um zu\n"
# 499 "data/maps/LilycoveCity/scripts.pory"
	.string "sehen, wer seine Pokémon besser\l"
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "trainiert?$"
# 501 "data/maps/LilycoveCity/scripts.pory"

# 502 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "Brix: Aah, ich werde doch nicht\n"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "gegen {PLAYER} verlieren! Niemals!$"
# 505 "data/maps/LilycoveCity/scripts.pory"

# 506 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "Ach…\n"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "Du hast dich stark verbessert.\p"
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "Das schmerzt - und dabei hatte ich als\n"
# 510 "data/maps/LilycoveCity/scripts.pory"
	.string "Trainer sogar einen Vorsprung…$"
# 511 "data/maps/LilycoveCity/scripts.pory"

# 512 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "Brix: Ich…\n"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich gehe nach Hause, nach Wurzelheim.\p"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "Weißt du, ich helfe meinem Vater bei dem\n"
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. Es geht ganz anständig voran\l"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "und ich sollte ihm das mal zeigen.$"
# 518 "data/maps/LilycoveCity/scripts.pory"

# 519 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "Und, {PLAYER}, was wirst du tun?\p"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "Wirst du alle Orden der Arenen sammeln\n"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "und die Pokémon Liga herausfordern?\p"
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "Vielleicht werde ich das auch machen…\p"
# 524 "data/maps/LilycoveCity/scripts.pory"
	.string "Gut, bleib am Ball!$"
# 525 "data/maps/LilycoveCity/scripts.pory"

# 526 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "Und, {PLAYER}, was wirst du tun?\p"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "Da du so stark gewOrden bist, wirst du\n"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "die Pokémon Liga herausfordern?\p"
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, ich habe meine Pokémon bestimmt\n"
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "viel besser trainiert und sollte\l"
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "eigentlich stärker sein als du…\p"
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "Nun ja, bleib am Ball!$"
# 534 "data/maps/LilycoveCity/scripts.pory"

# 535 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Und, {PLAYER}, was machst du nun?\p"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "Wirst du zur Kampfzone gehen?\p"
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "Oder wirst du deinen Pokédex\n"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "vervollständigen?\p"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Da du so stark gewOrden bist, solltest\n"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "du zur Kampfzone gehen.\p"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "Häh, wenn ich meine Pokémon besser\n"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "trainiere, sollte ich eigentlich stärker\l"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "werden als du…\p"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Vielleicht sollte ich zur Kampfzone\n"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "gehen.\p"
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "Wie dem auch sei… Bleib am Ball!$"
# 548 "data/maps/LilycoveCity/scripts.pory"

# 549 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Heute haben wir noch mehr Beute in\n"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "unser Versteck gebracht…\p"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "We…wer bist du denn??? Ich… äh, habe\n"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "mit mir selbst gesprochen!$"
# 555 "data/maps/LilycoveCity/scripts.pory"

# 556 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich bin nur ein Rüpel, ich weiß nicht,\n"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "was unser BOSS so vorhat…\p"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "Aber als Mitglied von Team Aqua habe\n"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "ich die Möglichkeit, große Dinge zu tun!\p"
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "Ww…wer bist du denn??? I-Ich… hähähä,\n"
# 562 "data/maps/LilycoveCity/scripts.pory"
	.string "habe nur mit mir selber gesprochen!$"
# 563 "data/maps/LilycoveCity/scripts.pory"

# 564 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, du da!\p"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "Komm bloß nicht in die Nähe der Höhle in\n"
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "der Bucht!\p"
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "Warum nicht? Das geht dich nichts an!\n"
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich bin ein Erwachsener, also gehorche!$"
# 570 "data/maps/LilycoveCity/scripts.pory"

# 571 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "Wenn die ganze Welt erst einmal uns\n"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "gehört, Team Aqua, dann wird sie\l"
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "ein besserer Ort für Pokémon sein.$"
# 575 "data/maps/LilycoveCity/scripts.pory"

# 576 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 577 "data/maps/LilycoveCity/scripts.pory"
	.string "Hier, Wailmer!!!\n"
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "Springt aus dem Wasser!$"
# 579 "data/maps/LilycoveCity/scripts.pory"

# 580 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "Häh? Was willst du?\p"
# 582 "data/maps/LilycoveCity/scripts.pory"
	.string "Du störst uns beim Training, also würde\n"
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "ich vorschlagen, du verschwindest!$"
# 584 "data/maps/LilycoveCity/scripts.pory"

# 585 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "Hier gibt es eine Pokémon Wettbewerbs-\n"
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "halle.\p"
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "Und das bedeutet, dass gut\n"
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "aufgezogene Pokémon aus dem ganzen\l"
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "Land zu sehen sind.\p"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "Mein Herz strömt über vor Begeisterung!$"
# 592 "data/maps/LilycoveCity/scripts.pory"

# 593 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "Hast du die seltsame Höhle in der Bucht\n"
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "am Ende des Ortes gesehen?$"
# 596 "data/maps/LilycoveCity/scripts.pory"

# 597 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich werde meinem Pokémon einige neue\n"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "Attacken für den Wettbewerb\l"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "beibringen.\p"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "Daher werde ich den Attacken-\n"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "verlerner besuchen, damit einige\l"
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "VMs verlernt werden.$"
# 604 "data/maps/LilycoveCity/scripts.pory"

# 605 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich komme aus Kanto.\p"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Hoenn-Region ist wunderschön mit\n"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "all dem Wasser und dem Grün.\p"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, warte mal!\p"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "Ob es seltene Pokémon gibt, die nur in\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "dieser Region leben???$"
# 612 "data/maps/LilycoveCity/scripts.pory"

# 613 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua trainiert seine Wailmer\n"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "drüben in der Bucht.\p"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "Wir Matrosen können nicht auslaufen,\n"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "da sie uns im Weg sind.$"
# 618 "data/maps/LilycoveCity/scripts.pory"

# 619 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoi, hast du das mitbekommen?\p"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "Jemand hat für uns Team Aqua aus\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "unserer Fahrrinne verjagt!\p"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Wailmer befinden sich nicht mehr in\n"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "der Bucht und wir haben freie Fahrt.$"
# 625 "data/maps/LilycoveCity/scripts.pory"

# 626 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe ein entspannendes Nickerchen\n"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "im Gasthof am Meer gehalten. Das\l"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "Rauschen der Wellen war so angenehm.\p"
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "Und da hat mir jemand mein Pokémon\n"
# 631 "data/maps/LilycoveCity/scripts.pory"
	.string "gestohlen!\p"
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "Wer ist der schändliche Dieb?\n"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua? Es war Team Aqua?!$"
# 634 "data/maps/LilycoveCity/scripts.pory"

# 635 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "Mein gestohlenes Pokémon…\n"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "Es kam zurück, ohne dass ich es merkte.$"
# 638 "data/maps/LilycoveCity/scripts.pory"

# 639 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich bin ein Kunsthändler.\p"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich kaufe und verkaufe Kunstgegen-\n"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "stände. Vorzugsweise Gemälde.\p"
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe gehört, dass das hiesige\n"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "Museum ständig erstklassige Werke\l"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "ausstellt.$"
# 646 "data/maps/LilycoveCity/scripts.pory"

# 647 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "Auch wenn ich alt und grau werde, das\n"
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "Meer wird immer jung und voll von Leben\l"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "sein…$"
# 651 "data/maps/LilycoveCity/scripts.pory"

# 652 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "Vor 60 Jahren hat mein Mann hier um\n"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "meine Hand angehalten. Und das Meer\l"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "ist immer noch genauso schön.$"
# 656 "data/maps/LilycoveCity/scripts.pory"

# 657 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "the nature-loving TEAM AQUA!\p"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 667 "data/maps/LilycoveCity/scripts.pory"

# 668 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Höhle in der Bucht…\p"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "Es ist mir erst gar nicht aufgefallen,\n"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "aber sie ist völlig leer.\p"
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua muss verschwunden sein.$"
# 673 "data/maps/LilycoveCity/scripts.pory"

# 674 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "Seegrasulb City\p"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "Wo das Land endet und das\n"
# 677 "data/maps/LilycoveCity/scripts.pory"
	.string "Meer beginnt.$"
# 678 "data/maps/LilycoveCity/scripts.pory"

# 679 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon WettbewerbSHALLE\n"
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "Der Treffpunkt für Trainer.$"
# 682 "data/maps/LilycoveCity/scripts.pory"

# 683 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "Grassee Motel\p"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "Behalte uns als Rose von\n"
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "Seegrasulb City in Erinnerung.$"
# 687 "data/maps/LilycoveCity/scripts.pory"

# 688 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "Seegrasulb City Museum\p"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "Ausstellung von\n"
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon-Meisterwerken!$"
# 692 "data/maps/LilycoveCity/scripts.pory"

# 693 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "Seegrasulb City Museum\p"
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "Aktuelle Ausstellung:\n"
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Pokémon-Sammlung von {PLAYER}!$"
# 697 "data/maps/LilycoveCity/scripts.pory"

# 698 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "Hafen Seegrasulb City\p"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Fähre MS Tide wird momentan\n"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "in der Werft gebaut.\p"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Fähre wird so bald wie möglich ihren\n"
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "Dienst aufnehmen.$"
# 704 "data/maps/LilycoveCity/scripts.pory"

# 705 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "Hafen Seegrasulb City\p"
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "Genießen Sie die entspannende Fahrt\n"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "mit der Fähre MS Tide.$"
# 709 "data/maps/LilycoveCity/scripts.pory"

# 710 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Trainer-Fanclub\p"
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "Die Namen von Trainern sind auf dem\n"
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "Schild eingeritzt…$"
# 714 "data/maps/LilycoveCity/scripts.pory"

# 715 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 716 "data/maps/LilycoveCity/scripts.pory"
	.string "Seegrasulb City Einkaufszentrum\p"
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "Ein Überfluss an Waren und\n"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "Überraschungen!\p"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "Ein Ort, an dem man alles findet, was\n"
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "das Herz begehrt!$"
# 721 "data/maps/LilycoveCity/scripts.pory"

# 722 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "Haus des Attacken-Verlerners\p"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "Hier werden Pokémon-Attacken\n"
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "verlernt.$"
# 726 "data/maps/LilycoveCity/scripts.pory"

# 727 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "Hast du schon mal etwas über den\n"
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "Beerenmixer gehört?$"
# 730 "data/maps/LilycoveCity/scripts.pory"

# 731 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 732 "data/maps/LilycoveCity/scripts.pory"
	.string "Man muss mit anderen zusammenarbeiten,\n"
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "um ihn schneller drehen zu können.\p"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe gehört, je schneller man ihn\n"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "dreht, desto besser werden die Pokériegel.$"
# 736 "data/maps/LilycoveCity/scripts.pory"

# 737 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "Damit stellt man eine Leckerei her, die\n"
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokériegel genannt wird.\p"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "Wenn du einem Pokémon einen guten\n"
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokériegel gibst, verbessern sich seine\l"
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "Eigenschaften.$"
# 743 "data/maps/LilycoveCity/scripts.pory"

# 744 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe gehört, dass draußen auf dem\n"
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "Seeweg ein Turm sein soll.\p"
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "Er soll Himmelturm heißen.$"
# 748 "data/maps/LilycoveCity/scripts.pory"

# 749 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 750 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich habe einen großen Turm in der Nähe\n"
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "der Route 131 gesehen.\p"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "Ist das der…$"
# 753 "data/maps/LilycoveCity/scripts.pory"

# 754 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 755 "data/maps/LilycoveCity/scripts.pory"
	.string "Wir sind in den Flitterwochen und\n"
# 756 "data/maps/LilycoveCity/scripts.pory"
	.string "gerade hier angekommen.\p"
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "Wir haben ein Drachen-Pokémon\n"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "gesehen, das am Himmel flog.\p"
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "Leben in der Hoenn-Region viele\n"
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "solcher coolen Pokémon?$"
# 761 "data/maps/LilycoveCity/scripts.pory"

# 762 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 763 "data/maps/LilycoveCity/scripts.pory"
	.string "Wir haben uns vorgenommen, in unseren\n"
# 764 "data/maps/LilycoveCity/scripts.pory"
	.string "Flitterwochen so viele seltene Pokémon\l"
# 765 "data/maps/LilycoveCity/scripts.pory"
	.string "zu sehen, wie es eben geht.\p"
# 766 "data/maps/LilycoveCity/scripts.pory"
	.string "Daher wAren wir auch total glücklich,\n"
# 767 "data/maps/LilycoveCity/scripts.pory"
	.string "als wir gleich nach unserer Ankunft\l"
# 768 "data/maps/LilycoveCity/scripts.pory"
	.string "dieses Pokémon zu Gesicht bekamen.\p"
# 769 "data/maps/LilycoveCity/scripts.pory"
	.string "Ich meine, wir wAren wirklich glücklich!$"
