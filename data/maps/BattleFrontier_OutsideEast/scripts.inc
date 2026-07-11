# 1 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
# 4 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
# 5 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume:
# 8 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
# 9 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo::
# 12 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 16 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 17 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition:
# 18 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 19 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 20 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
# 21 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 22 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 23 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ShowSudowoodo::
# 24 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
# 25 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 26 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 27 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
# 28 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
# 29 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePalaceSign::
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
# 33 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 35 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleArenaSign::
# 36 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 39 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePyramidSign::
# 40 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
# 41 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 43 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_NinjaBoy::
# 44 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial, MSGBOX_NPC
# 45 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man1::
# 48 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier, MSGBOX_NPC
# 49 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 51 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Hiker::
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh, MSGBOX_NPC
# 53 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 55 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_HexManiac::
# 56 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness, MSGBOX_NPC
# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 59 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt1::
# 60 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
# 61 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 63 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Cook::
# 64 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 65 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 68 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 69 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Zigzagoon::
# 70 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 71 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 72 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 73 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 74 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant, MSGBOX_DEFAULT
# 75 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 76 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 79 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RichBoy::
# 80 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody, MSGBOX_NPC
# 81 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 83 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExpertF::
# 84 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader, MSGBOX_NPC
# 85 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 87 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteF::
# 88 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles, MSGBOX_NPC
# 89 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 90 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 91 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Twin::
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon, MSGBOX_NPC
# 93 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 95 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man2::
# 96 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 97 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 99 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 100 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 101 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteM::
# 102 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere, MSGBOX_NPC
# 103 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 105 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Sudowoodo::
# 106 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 107 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 108 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 109 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 110 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 111 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 113 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 114 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
# 116 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 117 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 118 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	special DoWateringBerryTreeAnim
# 119 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 120 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 121 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	applymovement LOCALID_FRONTIER_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmovement 0
# 123 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 124 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	closemessage
# 125 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 126 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay 40
# 128 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 129 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FRONTIER_SUDOWOODO
# 130 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 40
# 131 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	dowildbattle
# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 139 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 140 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 141 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 142 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo::
# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 146 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 147 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Movement_SudowoodoShake:
# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 149 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 150 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 151 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_right
# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_left
# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	delay_8
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	face_down
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	step_end
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 165 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac1::
# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena, MSGBOX_NPC
# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 169 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Girl::
# 170 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere, MSGBOX_NPC
# 171 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 172 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 173 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_PsychicM::
# 174 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
# 175 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 176 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 177 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man3::
# 178 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
# 179 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 180 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 181 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman1::
# 182 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
# 183 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 184 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 185 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman2::
# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll, MSGBOX_NPC
# 187 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 188 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 189 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt2::
# 190 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 192 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 193 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac2::
# 194 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 195 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 197 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 198 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 199 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman3::
# 200 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 201 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 203 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 204 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 205 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RankingHallSign::
# 206 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
# 207 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 208 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 209 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign::
# 210 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
# 211 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 212 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Gentleman::
# 214 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers, MSGBOX_NPC
# 215 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 216 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 217 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman::
# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 219 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 220 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
# 221 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
# 222 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 224 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 225 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone::
# 226 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
# 227 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 229 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 230 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Camper::
# 231 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
# 232 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 234 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerSign:
# 235 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Duellturm\n"
# 236 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Besiege alle und werde der beste\l"
# 237 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Trainer!$"
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 239 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePalaceSign:
# 240 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Dies ist der Kampfpalast!\n"
# 241 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Schaut euch die Pokémon-Kämpfe an!$"
# 242 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 243 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleArenaSign:
# 244 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Dies ist der Kampfring!\n"
# 245 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Hier treffen sich die stärksten Teams!$"
# 246 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePyramidSign:
# 248 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Dies ist die Kampfpyramide!\n"
# 249 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Geh in das Abenteuer Kampfforschung!$"
# 250 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 251 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_RankingHallSign:
# 252 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Kampfzone Ergebnishalle\n"
# 253 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Schau dir die neuesten Rekorde an!$"
# 254 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 255 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ExchangeCornerSign:
# 256 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Gewinnpunkte Tauschecke\n"
# 257 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Löse deine Gewinnpunkte ein!$"
# 258 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 259 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial:
# 260 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wow!\n"
# 261 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ist das riesig!\p"
# 262 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Der Duellturm hat eine besondere\n"
# 263 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Atmosphäre. Ganz anders als die\l"
# 264 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "anderen Orte.$"
# 265 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 266 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier:
# 267 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich habe Großes vor! Ich will die Kampf-\n"
# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "zone und die Pokémon Liga erobern!\p"
# 269 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Und wenn dieser Traum wahr wird…\p"
# 270 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Dann werde ich… meine Nachbarin Mimi\n"
# 271 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "fragen, ob sie meine Freundin wird!$"
# 272 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PyramidTooHarsh:
# 274 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Die Kampfpyramide ist wirklich\n"
# 275 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "hammerhart! Ich schaff das nicht!\p"
# 276 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wenn ich es auf dem normalen Weg nicht\n"
# 277 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "nach oben schaffe… vielleicht sollte\l"
# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ich dann einfach außen hochklettern?$"
# 279 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 280 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ThriveInDarkness:
# 281 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich lebe von der Dunkelheit…\n"
# 282 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ja… Und welche Herausforderung ist\l"
# 283 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "gerade gut genug für mich?\p"
# 284 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Die Kampfpyramide! Liebst du nicht\n"
# 285 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "auch die Dunkelheit? Die Verzweiflung\l"
# 286 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "und das Ungewisse?$"
# 287 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 288 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam:
# 289 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Es hat mich eine Woche Schlaf gekostet,\n"
# 290 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "aber jetzt habe ich es zusammen… Das\p"
# 291 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ultimative Team! Ich sehe mich als\n"
# 292 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Sieger, und nur als Sieger, kein Witz!\p"
# 293 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wir werden den Kampfring wie ein\n"
# 294 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Orkan durchfegen und gewinnen!$"
# 295 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 296 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_DidScottBringYouHere:
# 297 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Hat Scott dich auch hierher einge-\n"
# 298 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "laden? Wie macht er das nur?\p"
# 299 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Er scheint ein Auge für talentierte\n"
# 300 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Trainer zu haben, aber…\p"
# 301 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich habe ihn selbst noch nie kämpfen\n"
# 302 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "gesehen…$"
# 303 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 304 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BelieveInYouBuddy:
# 305 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Zigg!\n"
# 306 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich glaube an dich, mein kleiner Freund!\p"
# 307 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Und wenn du gewinnst, werde ich dich\n"
# 308 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "mit allem, was du magst, verwöhnen!$"
# 309 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 310 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant:
# 311 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Zigzachs schaut erwartungsvoll…$"
# 312 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 313 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody:
# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Die anderen sagen, ich wäre eine\n"
# 315 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Nervensäge, die sich überall einmischt.\p"
# 316 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Aber wenn ich ihnen nicht sage, wo\n"
# 317 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "es langgeht, wer dann?\l"
# 318 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Du da, dein Hut sitzt schief!\n"
# 319 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Du da, wirf keinen Müll auf den Boden!\l"
# 320 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Du da, du machst das ja ganz falsch!\p"
# 321 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich glaube nicht, dass ich es jemals\n"
# 322 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "schaffen werde, im Kampfpalast\l"
# 323 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "still zu sein und zuzuschauen…$"
# 324 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 325 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceBeatGymLeader:
# 326 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Heute ist das vielleicht schwer\n"
# 327 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "vorstellbar, aber ich habe mal einen\l"
# 328 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Arenaleiter besiegt!\p"
# 329 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wer weiß? Vielleicht sollte ich es\n"
# 330 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "noch einmal versuchen?$"
# 331 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 332 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles:
# 333 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich bin schnell mit meinem Fahrrad…\n"
# 334 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Und genauso schnell bin ich auch im\p"
# 335 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Kampf! Ich brauche nur eine\n"
# 336 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Millisekunde für den Sieg!$"
# 337 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon:
# 339 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich kann besser mit Pokémon umgehen\n"
# 340 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "als mein Paps.$"
# 341 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 342 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy:
# 343 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Los, meine kleine Prinzessin! Besiege\n"
# 344 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "die Trainer und mach deinen Paps stolz!\p"
# 345 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Du bist deiner Mum sehr ähnlich. Du\n"
# 346 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "bist dominant, du wirst das schaffen!$"
# 347 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 348 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena:
# 349 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich wusste, der Weg hierher ist sehr\n"
# 350 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "schwierig zu meistern. Aber ich hatte\l"
# 351 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "gehört, dass hier ein umwerfend süßes\p"
# 352 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Mädchen im Kampfring sein soll.\n"
# 353 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Und weißt du, auf wen ich getroffen bin,\l"
# 354 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "als ich dann endlich hier ankam?!\p"
# 355 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Auf ein Team stinkender, schwitzender,\n"
# 356 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "primitiver und nervtötender\l"
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Kampfsportler. Ich könnte platzen…$"
# 358 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 359 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere:
# 360 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Manchmal läuft hier ein wichtig\n"
# 361 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "aussehender, älterer Herr herum.\p"
# 362 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Er hat wirklich beeindruckende Pokémon\n"
# 363 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "und er scheint sehr nett zu sein.$"
# 364 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 365 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid:
# 366 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Hast du schon mal etwas über die\n"
# 367 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Legende der Kampfpyramide gehört?\p"
# 368 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wenn ein überzeugender Trainer den\n"
# 369 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "goldenen Gipfel erreicht, dann\l"
# 370 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "erscheint der Trainer aller Trainer.\p"
# 371 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wie, das wusstest du nicht?\n"
# 372 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Natürlich nicht!\l"
# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Das habe ich doch gerade erfunden!\p"
# 374 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Was das heißen soll? Hehehe, das ist\n"
# 375 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "mein Geheimnis!$"
# 376 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 377 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GotWipedOut:
# 378 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Grummel… Motz…\n"
# 379 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich habe bisher noch nie verloren!\p"
# 380 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Aber diesmal bin ich vom Platz gefegt\n"
# 381 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "worden. Meine Würde ist dahin…\p"
# 382 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Und dann wird mir noch an den Kopf\n"
# 383 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "geworfen, ich hätte kein Talent?\l"
# 384 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Argh… Motz… Meuter…$"
# 385 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 386 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower:
# 387 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Er ist auf einen mordsmäßig starken\n"
# 388 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Trainer getroffen, als er sich durch\l"
# 389 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "den Duellturm gekämpft hat.\p"
# 390 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Und nun schau ihn dir an…\n"
# 391 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ein Häufchen Elend…\p"
# 392 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Du musst auf alles gefasst sein, wenn\n"
# 393 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "du den Duellturm betrittst!$"
# 394 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 395 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll:
# 396 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ja!\n"
# 397 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Endlich habe ich genug Gewinnpunkte!\p"
# 398 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich werde mir eine riesige, niedliche\n"
# 399 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Plüschpuppe holen!$"
# 400 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 401 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere:
# 402 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, yeah, okay!\n"
# 403 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Dies ist also die Ergebnishalle!\p"
# 404 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich will in die Geschichte eingehen! Als\n"
# 405 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Superchamp! Ich will meinen Namen für\l"
# 406 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "die Nachwelt verewigen.$"
# 407 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 408 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou:
# 409 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Mit dir an meiner Seite…\n"
# 410 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "kann ich alles schaffen!$"
# 411 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 412 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome:
# 413 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, Liebling, du bist wundervoll!\p"
# 414 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, ich kann nicht länger warten!\p"
# 415 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Lass uns sofort zu den Multikämpfen\n"
# 416 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "gehen!\p"
# 417 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wenn wir zusammen in der Teamlounge\n"
# 418 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "sind… wird die Macht unserer Liebe alle\l"
# 419 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Hindernisse beseitigen!\p"
# 420 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Sie werden umfallen wie 1000 Domino-\n"
# 421 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "steine in einer Reihe, Liebling!$"
# 422 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 423 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers:
# 424 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Die Kampfzone steht nicht nur\n"
# 425 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "starken Trainern offen.\p"
# 426 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Hier sind auch viele, die sich durch\n"
# 427 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "besondere Eigenschaften und\l"
# 428 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Fähigkeiten auszeichnen.\p"
# 429 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Dieser Scott…\p"
# 430 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Er hat diesen Ort mit Sicherheit gebaut,\n"
# 431 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "weil er etwas Höheres im Sinn hat…$"
# 432 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 433 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle:
# 434 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Entschuldige! Du bist jung! Deine\n"
# 435 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Augen sind bestimmt hervorragend?\p"
# 436 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Da vorne ist ein komischer Baum, und\n"
# 437 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "meine müden Augen scheinen zu sehen,\l"
# 438 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "dass er sich bewegt.$"
# 439 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 440 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere:
# 441 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Entschuldige! Du bist noch jung. Dein\n"
# 442 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Gedächtnis ist bestimmt sehr gut.\p"
# 443 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "War hier nicht früher ein merkwürdiger\n"
# 444 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Baum?$"
# 445 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 446 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_StickyMonWithLongTail:
# 447 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich…\n"
# 448 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ich habe es genau gesehen!\p"
# 449 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Da vorne war ein merkwürdiges Pokémon\n"
# 450 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "mit einem langen Schweif!\p"
# 451 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Es hatte sich unter einem Felsen\n"
# 452 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "versteckt und starrte mich an!$"
