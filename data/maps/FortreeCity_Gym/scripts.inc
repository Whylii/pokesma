# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition:
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower bc of rotating gates
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 11 "data/maps/FortreeCity_Gym/scripts.pory"

# 12 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 20 "data/maps/FortreeCity_Gym/scripts.pory"

# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 29 "data/maps/FortreeCity_Gym/scripts.pory"

# 30 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 52 "data/maps/FortreeCity_Gym/scripts.pory"

# 53 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 60 "data/maps/FortreeCity_Gym/scripts.pory"

# 61 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 67 "data/maps/FortreeCity_Gym/scripts.pory"

# 68 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 72 "data/maps/FortreeCity_Gym/scripts.pory"

# 73 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 77 "data/maps/FortreeCity_Gym/scripts.pory"

# 78 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 82 "data/maps/FortreeCity_Gym/scripts.pory"

# 83 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 87 "data/maps/FortreeCity_Gym/scripts.pory"

# 88 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 92 "data/maps/FortreeCity_Gym/scripts.pory"

# 93 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 97 "data/maps/FortreeCity_Gym/scripts.pory"

# 98 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 102 "data/maps/FortreeCity_Gym/scripts.pory"

# 103 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 110 "data/maps/FortreeCity_Gym/scripts.pory"

# 111 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 115 "data/maps/FortreeCity_Gym/scripts.pory"

# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 121 "data/maps/FortreeCity_Gym/scripts.pory"

# 122 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 127 "data/maps/FortreeCity_Gym/scripts.pory"

# 128 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 132 "data/maps/FortreeCity_Gym/scripts.pory"

# 133 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 137 "data/maps/FortreeCity_Gym/scripts.pory"

# 138 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice:
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Na, wie sieht es aus? Auf dem Weg zum\n"
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Champ, {PLAYER}?\p"
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Die Leiterin der Arena von Baumhausen\n"
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "City, Wibke, ist eine Meisterin der\l"
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flug-Pokémon.\p"
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sie wartet hinten in der Arena auf dich,\n"
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "hinter den Drehtüren.\p"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sie wartet auf neue Herausforderer,\n"
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "denen sie die Flügel stutzen kann!\p"
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, dann viel Glück!$"
# 149 "data/maps/FortreeCity_Gym/scripts.pory"

# 150 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory:
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du hast es geschafft!\n"
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du hast Startfreigabe!$"
# 153 "data/maps/FortreeCity_Gym/scripts.pory"

# 154 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro:
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Bewundere den eleganten Kampfstil der\n"
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Vogel-Pokémon!$"
# 157 "data/maps/FortreeCity_Gym/scripts.pory"

# 158 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat:
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du…\n"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du bist stark…$"
# 161 "data/maps/FortreeCity_Gym/scripts.pory"

# 162 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle:
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ein Trainer muss clever genug sein, mit\n"
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "den Wendungen im Kampf fertig zu\l"
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "werden.\p"
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Mal sehen, ob du clever genug bist, bis\n"
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "zu unserer Leiterin vorzudringen.$"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"

# 169 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro:
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Liebhaber von Vogel-Pokémon streben\n"
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "danach, dieser Arena beizutreten.\p"
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Als Mitglied der Arena von Baumhausen\n"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "City darf ich nicht verlieren!$"
# 174 "data/maps/FortreeCity_Gym/scripts.pory"

# 175 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat:
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Das war doch etwas zu schwer für mich\n"
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "zu tragen…$"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"

# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle:
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Die Welt ist groß und es gibt zahlreiche\n"
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "starke Trainer.\p"
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich werde weiter trainieren und so\n"
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "immer stärker werden!$"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"

# 185 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro:
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Es gibt keinen Grund, dass Wibke,\n"
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "unsere Arenaleiterin, sich mit dir\l"
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "abgibt!\p"
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich bin schon stark genug für dich!$"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"

# 191 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat:
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke… Ich…\n"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich habe verloren!$"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"

# 195 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle:
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke ist süß, aber auch stark.\n"
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sie ist die ultimative Leiterin!\p"
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Hups… Wie peinlich. Ich werde nicht rot!$"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"

# 200 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro:
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke hat mich persönlich geschult!\n"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du wirst kein leichtes Spiel haben!$"
# 203 "data/maps/FortreeCity_Gym/scripts.pory"

# 204 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat:
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich wurde geschlagen…$"
# 206 "data/maps/FortreeCity_Gym/scripts.pory"

# 207 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle:
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Dank Wibke leben die Einwohner von\n"
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Baumhausen City ohne Furcht.$"
# 210 "data/maps/FortreeCity_Gym/scripts.pory"

# 211 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro:
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibkes Gesicht strahlt eine\n"
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Entschlossenheit aus, wenn sie in den\l"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Kampf geht. Sie ist dann wunderhübsch!\p"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich werde dir dieses hübsche Gesicht\n"
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "zeigen!$"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"

# 218 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat:
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Argh!\n"
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich konnte dich einfach nicht stoppen!$"
# 221 "data/maps/FortreeCity_Gym/scripts.pory"

# 222 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle:
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pass mal besser auf! Du solltest Wibke\n"
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "nicht mit offenem Mund anstarren,\l"
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sonst gehst du erbärmlich unter!$"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"

# 227 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro:
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Es gibt viele verschiedene\n"
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Flug-Pokémon.\p"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Das weißt du, oder?$"
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat:
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du weißt wirklich, was du tust!$"
# 234 "data/maps/FortreeCity_Gym/scripts.pory"

# 235 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle:
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, du hast mich besiegt. Na und?\n"
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Aber gegen unsere Leiterin Wibke\l"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "hast du keine Chance!$"
# 239 "data/maps/FortreeCity_Gym/scripts.pory"

# 240 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro:
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich bin Wibke, die Leiterin der Arena\n"
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "von Baumhausen City.\p"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich wurde das mit Hilfe meiner Vogel-\n"
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon und habe den Himmel berührt.\p"
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wie anstrengend der Kampf auch war, wir\n"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "haben mit Grazie gewonnen…\p"
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Werde Zeuge der eleganten Choreo-\n"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "graphie meiner Vogel-Pokémon!$"
# 249 "data/maps/FortreeCity_Gym/scripts.pory"

# 250 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat:
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich habe noch nie einen Trainer ge-\n"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sehen, der seine Pokémon mit mehr\l"
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Grazie trainiert als ich…\p"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In Anbetracht deiner Fähigkeiten\n"
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "überreiche ich dir diesen Arenaorden.$"
# 256 "data/maps/FortreeCity_Gym/scripts.pory"

# 257 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge:
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} erhält den Federorden von\n"
# 259 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke.$"
# 260 "data/maps/FortreeCity_Gym/scripts.pory"

# 261 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Mit dem Federorden gehorchen dir alle\n"
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon bis Lv. 70, auch die, die du\l"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "durch Tausch bekommen hast.\p"
# 265 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Außerdem kannst du nun die VM Fliegen\n"
# 266 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "außerhalb eines Kampfes einsetzen.\p"
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Und dies…\n"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Dies ist ein Geschenk von mir.$"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"

# 270 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce:
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 enthält Aero-Ass.\p"
# 272 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Diese Geschwindigkeit…\n"
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Kein Pokémon kann ihr entgehen.\p"
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"

# 276 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona:
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Arenaleiterin Wibke wurde im Pokénav-\n"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Verzeichnis eingetragen.$"
# 279 "data/maps/FortreeCity_Gym/scripts.pory"

# 280 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle:
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Auch wenn ich gegen dich verloren habe,\n"
# 282 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gehört meine Liebe den Vogel-Pokémon.$"
# 283 "data/maps/FortreeCity_Gym/scripts.pory"

# 284 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue:
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon Arena von Baumhausen City$"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"

# 287 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified:
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon Arena von Baumhausen City\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibkes anerkannte Trainer:\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"

# 292 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch:
# 293 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke: Wir Menschen können uns der\n"
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Schwerkraft nicht widersetzen.\p"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Aber in unserem Streben nach\n"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Perfektion haben auch wir die Kraft,\l"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "vom Boden abzuheben!\p"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du hast den Gipfel erstürmt. Als\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Champ.\p"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Bitte, zeig mir, wie du abhebst! Zeig\n"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "mir deine Kraft.$"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"

# 303 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat:
# 304 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du fliegst mir zu hoch…$"
# 305 "data/maps/FortreeCity_Gym/scripts.pory"

# 306 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch:
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke: Auch wenn ich verloren habe, mein\n"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Herz wird stets fliegen.\p"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Ich werde immer wieder aufsteigen und\n"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "mich in die Lüfte erheben.\p"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Das weiß ich genau!$"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"

# 313 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Wibke: Wir Menschen können uns der\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Schwerkraft nicht widersetzen.\p"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Aber in unserem Streben nach\n"
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Perfektion haben auch wir die Kraft,\l"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "vom Boden abzuheben!\p"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Du hast den Gipfel erstürmt. Als\n"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Champ.\p"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Bitte, zeig mir wie du abhebst! Zeig\n"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "mir deine Kraft.\p"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh… Du hast nur ein Pokémon bei\n"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "dir?\p"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Bitte komm später wieder und bring\n"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "mindestens zwei Pokémon mit.$"
