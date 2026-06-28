# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 3 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 4 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 5 "data/maps/VictoryRoad_1F/scripts.pory"

# 6 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
# 8 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 10 "data/maps/VictoryRoad_1F/scripts.pory"

# 11 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
# 13 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 15 "data/maps/VictoryRoad_1F/scripts.pory"

# 16 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
# 18 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 20 "data/maps/VictoryRoad_1F/scripts.pory"

# 21 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 22 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 23 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer1
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 29 "data/maps/VictoryRoad_1F/scripts.pory"

# 30 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_Movement_WallyApproachPlayer2
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 38 "data/maps/VictoryRoad_1F/scripts.pory"

# 39 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 49 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 51 "data/maps/VictoryRoad_1F/scripts.pory"

# 52 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer1:
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 54 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 58 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 65 "data/maps/VictoryRoad_1F/scripts.pory"

# 66 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_WallyApproachPlayer2:
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	step_end
# 78 "data/maps/VictoryRoad_1F/scripts.pory"

# 79 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_EntranceWally::
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
# 82 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 83 "data/maps/VictoryRoad_1F/scripts.pory"

# 84 "data/maps/VictoryRoad_1F/scripts.pory"
@ This Wally appears and remains at the exit after the Hall of Fame is entered
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_ExitWally::
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 91 "data/maps/VictoryRoad_1F/scripts.pory"

# 92 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_RematchWally::
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 94 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 96 "data/maps/VictoryRoad_1F/scripts.pory"

# 97 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 98 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 101 "data/maps/VictoryRoad_1F/scripts.pory"

# 102 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 104 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_1F/scripts.pory"

# 107 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 111 "data/maps/VictoryRoad_1F/scripts.pory"

# 112 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 116 "data/maps/VictoryRoad_1F/scripts.pory"

# 117 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 121 "data/maps/VictoryRoad_1F/scripts.pory"

# 122 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Heiko: Hallo, {PLAYER}!\p"
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Du bist bestimmt überrascht, mich hier\n"
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "zu treffen!\p"
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich habe es bis hierher geschafft und\n"
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "das verdanke ich dir!\p"
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, meine Niederlage gegen dich\n"
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "hat mich viel stärker gemacht!\p"
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich werde nie wieder verlieren!\p"
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich werde gewinnen! Für die Pokémon,\n"
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "die mir Mut und Kraft gegeben haben!\p"
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Jetzt komme ich!$"
# 134 "data/maps/VictoryRoad_1F/scripts.pory"

# 135 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyEntranceDefeat:
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, du wirst immer stärker!$"
# 138 "data/maps/VictoryRoad_1F/scripts.pory"

# 139 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostEntranceBattle:
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Heiko: Ich konnte dich heute nicht be-\n"
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "siegen, aber eines Tages werde ich es\l"
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "mit dir aufnehmen!$"
# 143 "data/maps/VictoryRoad_1F/scripts.pory"

# 144 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyIntro:
# 145 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Heiko: Hallo, {PLAYER}!\p"
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich bin viel stärker geworden! Das\n"
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "möchte ich dir zeigen, {PLAYER}!\p"
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay… Jetzt komme ich!$"
# 149 "data/maps/VictoryRoad_1F/scripts.pory"

# 150 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyDefeat:
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, du bist immer noch zu stark!$"
# 153 "data/maps/VictoryRoad_1F/scripts.pory"

# 154 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_WallyPostBattle:
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Heiko: Ich konnte dich wieder nicht\n"
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "besiegen… Aber eines Tages, {PLAYER},\l"
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "eines Tages…\p"
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Da werde ich sogar die Pokémon Liga\n"
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "herausfordern!$"
# 160 "data/maps/VictoryRoad_1F/scripts.pory"

# 161 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich habe es innerhalb kürzester Zeit\n"
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "bis hierher geschafft, aber das letzte\l"
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Stück zieht sich wie Kaugummi…$"
# 165 "data/maps/VictoryRoad_1F/scripts.pory"

# 166 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hier enden meine Träume…$"
# 168 "data/maps/VictoryRoad_1F/scripts.pory"

# 169 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Du bist weit gekommen. Lasse nicht nach\n"
# 171 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "und versuche, der Champ zu werden!\l"
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wenn einer das kann, dann du!$"
# 173 "data/maps/VictoryRoad_1F/scripts.pory"

# 174 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich bin nicht hierher gekommen, um zu\n"
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "verlieren. Diese Option existiert nicht!$"
# 177 "data/maps/VictoryRoad_1F/scripts.pory"

# 178 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Unmöglich…\n"
# 180 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich habe verloren?$"
# 181 "data/maps/VictoryRoad_1F/scripts.pory"

# 182 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 183 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich habe hier verloren…\p"
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Das heißt, mir fehlt noch eine Menge,\n"
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "um Champ werden zu können.$"
# 186 "data/maps/VictoryRoad_1F/scripts.pory"

# 187 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 188 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Diese unendliche, raue Straße wird\n"
# 189 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "ihrem Namen - Sieg - gerecht.$"
# 190 "data/maps/VictoryRoad_1F/scripts.pory"

# 191 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 192 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Dein Kampfstil ist fantastisch…$"
# 193 "data/maps/VictoryRoad_1F/scripts.pory"

# 194 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Du hast wirklich das Potenzial, der\n"
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Champ zu werden.$"
# 197 "data/maps/VictoryRoad_1F/scripts.pory"

# 198 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 199 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Was ist die Siegesstraße?\n"
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wenn du gewinnst, verrat ich es dir.$"
# 201 "data/maps/VictoryRoad_1F/scripts.pory"

# 202 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 203 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 204 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Gut gemacht!$"
# 205 "data/maps/VictoryRoad_1F/scripts.pory"

# 206 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 207 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hier sicher durchzukommen, das ist der\n"
# 208 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "letzte Test für einen TRAINER, der\l"
# 209 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Champ werden will.\p"
# 210 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Daher nennt man sie Siegesstraße.$"
# 211 "data/maps/VictoryRoad_1F/scripts.pory"

# 212 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 213 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Ich habe jemandem, der so weit\n"
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "gekommen ist, nichts zu sagen. Los!$"
# 215 "data/maps/VictoryRoad_1F/scripts.pory"

# 216 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 217 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Was für eine Blamage…$"
# 218 "data/maps/VictoryRoad_1F/scripts.pory"

# 219 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 220 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Hmpf, geh einfach weiter.\n"
# 221 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Mir doch egal…$"
