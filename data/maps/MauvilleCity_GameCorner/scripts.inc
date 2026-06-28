# 1 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 2 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.set LOCALID_BOUNCER, 24
# 3 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 4 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_MapScripts::
# 5 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerId_Onframe
# 6 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.byte 0
# 7 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 8 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	@ Game Corner prices
# 9 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_DOUBLE_TEAM_COINS, 1500
# 10 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_PSYCHIC_COINS, 3500
# 11 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_FLAMETHROWER_COINS, 4000
# 12 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_THUNDERBOLT_COINS, 4000
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set TM_ICE_BEAM_COINS, 4000
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set DOLL_COINS, 1000
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set RARECANDY_COINS, 4000
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set SUNSTONE_COINS, 2000
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set MOONSTONE_COINS, 2000
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set FIRESTONE_COINS, 2000
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set THUNDERSTONE_COINS, 2000
# 20 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set WATERSTONE_COINS, 2000
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set LEAFSTONE_COINS, 2000
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set CHOICEBAND_COINS, 4500
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set BRIGHTPOWDER_COINS, 4500
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_50,  1000
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.set COINS_PRICE_500, 10000
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 28 "data/maps/MauvilleCity_GameCorner/scripts.pory"
TrainerId_Onframe:
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if GAME_CORNER_VAR_ID_CHECK != 0
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	map_script_2 GAME_CORNER_VAR_ID_CHECK, 0, BouncerCheck
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.2byte 0
# 33 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BouncerCheck::
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_WalkInPlaceFasterLeft
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_PIN
# 39 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_ExclamationMark
# 40 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 41 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Common_Movement_Delay48
# 42 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Movement_Bouncer_Approach
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer1, MSGBOX_DEFAULT
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_ID_CHECK, 1
# 48 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement LOCALID_BOUNCER, Movement_Bouncer_Leave
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Movement_Bouncer_Approach:
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_left
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	step_end	
# 57 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Movement_Bouncer_Leave:
# 59 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 60 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_right
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	walk_in_place_faster_left
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	step_end		
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Blackjack::
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BlackJack, MSGBOX_YESNO
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlackJack
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 74 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 77 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Derby::
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby, MSGBOX_YESNO
# 84 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelBJ
# 86 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_PEWTER, FALSE
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartDerby
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CheckWinnings::
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq GAME_CORNER_VAR_WINNINGS, 0, MauvilleCity_GameCorner_NoWin
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_YOU_WON_TEXT, MSGBOX_DEFAULT
# 96 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelVF::
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_CancelBJ::
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_NoWin::
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Snake::
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Onix_Not_Enough
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Snake, MSGBOX_YESNO
# 118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartSnake
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FlappyBird::
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Butterfree_Not_Enough
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bird, MSGBOX_YESNO
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_NONE, FALSE
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartFlappyBird
# 149 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BlockStacker::
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, BlockStacker_Not_Enough
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_BS, MSGBOX_YESNO
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_CASINO_PLUS_1, FALSE
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartBlockStacker
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 174 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BlockStacker_Not_Enough::
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox BS_Not_Enough, MSGBOX_DEFAULT
# 178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Pinball_Not_Enough::
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox PB_Not_Enough, MSGBOX_DEFAULT
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Onix_Not_Enough::
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Snake_Not_Enough, MSGBOX_DEFAULT
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Juice_Not_Enough::
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bjuice_Not_Enough, MSGBOX_DEFAULT
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 195 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Butterfree_Not_Enough::
# 197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Bird_Not_Enough, MSGBOX_DEFAULT
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Not_Enough::
# 202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox Flip_Not_Enough, MSGBOX_DEFAULT
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Pachinko::	
# 207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pachinko, MSGBOX_YESNO
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_ROUTE1, FALSE
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayPachinko
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballMeowth::
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Meowth, MSGBOX_YESNO
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_POKE_CENTER, FALSE
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayMeowthPinballGame
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 242 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballDiglett::
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, Pinball_Not_Enough
# 249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Diglett, MSGBOX_YESNO
# 251 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_POKE_JUMP, FALSE
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayDiglettPinballGame
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 264 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballSeel::
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 25, Pinball_Not_Enough
# 271 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Seel, MSGBOX_YESNO
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 25
# 276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 278 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_SS_ANNE, FALSE
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlaySeelPinballGame
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate 
# 283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 285 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PinballGengar::
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 292 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 100, Pinball_Not_Enough
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Pinball_Gengar, MSGBOX_YESNO
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF	
# 297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 100
# 298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_POKE_TOWER, FALSE
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	callnative PlayGengarPinballGame
# 304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
    waitstate
# 305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CheckWinnings
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VoltorbFlip::
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 50, VF_Not_Enough
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF, MSGBOX_YESNO
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 50
# 320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_OAK, FALSE
# 325 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again::
# 334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox VF_Come_Again_Text, MSGBOX_DEFAULT
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Go_On::
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS	
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VF_Keep_Going, MSGBOX_YESNO
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VF_Cash_Out
# 347 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto VF_Loop
# 348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Loop::
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special Special_ViewVoltorbFlip
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VF_Come_Again
# 354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VF_Go_On
# 355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Cash_Out::	
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins GAME_CORNER_VAR_WINNINGS
# 360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar GAME_CORNER_VAR_WINNINGS, 0
# 361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.if FLIP_VAR_LEVEL != 0
# 362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar FLIP_VAR_LEVEL, 0
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
.endif
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 369 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Basic::
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 380 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 381 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GachaCommon::
# 383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special StartGacha
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitstate
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	savebgm MUS_DUMMY
# 387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	fadedefaultbgm
# 388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_RecieveGachaMonParty
# 389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_RecieveGachaMonPC
# 390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GachaEnd:
# 391 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	return
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RecieveGachaMonParty:
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_GachaEnd
# 396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GachaEnd
# 399 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RecieveGachaMonPC:
# 401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_TransferGachaMonToPC
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TransferGachaMonToPC:
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_GachaEnd
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Great::
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Ultra::
# 418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gacha_Master::
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call MauvilleCity_GameCorner_EventScript_GachaCommon
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50
# 446 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
# 448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 463 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy50Coins::
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_50
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 50
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_50
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Buy500Coins::
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, (MAX_COINS + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkmoney COINS_PRICE_500
# 484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 500
# 486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney COINS_PRICE_500
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NeedCoinCase::
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
# 498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 500 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
# 502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
# 503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 505 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 507 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
# 509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 514 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 518 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 522 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
# 528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 530 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
# 532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 534 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 537 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
# 542 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
# 547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
# 548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
# 549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 552 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TreeckoDoll::
# 554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
# 556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 557 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TorchicDoll::
# 559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
# 561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MudkipDoll::
# 564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
# 566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
# 571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
# 573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
# 574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
# 575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
# 578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 582 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TREECKO_DOLL
# 585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 586 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 590 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
# 592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 593 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 597 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_TORCHIC_DOLL
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 604 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
# 608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
# 611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins DOLL_COINS
# 612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 616 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 618 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 623 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
# 627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 628 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 629 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 634 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 637 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage
# 641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 644 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew::
# 645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 649 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage
# 650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 652 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PrizeCornerNew2::
# 654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 656 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
# 657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2
# 659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 661 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrizeMessage::
# 663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage::
# 670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 671 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 676 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrizeMessage2::
# 677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2		
# 682 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize::
# 684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
# 687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 688 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize::
# 689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize	
# 692 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2::
# 694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseNewPrize2	
# 697 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_TMDoubleTeam
# 702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_TMPsychic
# 703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_TMFlamethrower
# 704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_TMThunderbolt
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_TMIceBeam
# 706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 708 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize::
# 711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	@ multichoice 12, 0, MULTI_GAMECORNER_NEW, FALSE
# 712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_RareCandy
# 714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_SunStone
# 715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_MoonStone
# 716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChoiceBand
# 717 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BrightPowder
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 721 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChooseNewPrize2::
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	@ multichoice 12, 0, MULTI_GAMECORNER_NEW2, FALSE
# 724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_FireStone
# 726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ThunderStone
# 727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_WaterStone
# 728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_LeafStone
# 729 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 732 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ChoiceBand::
# 734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 8
# 735 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CHOICE_BAND
# 736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_CHOICE_BAND
# 737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BrightPowder::
# 740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 9
# 741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_BRIGHT_POWDER
# 742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_BRIGHT_POWDER
# 743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_RareCandy::
# 746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_RARE_CANDY
# 748 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_RARE_CANDY
# 749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 751 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SunStone::
# 752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SUN_STONE
# 754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_SUN_STONE
# 755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 756 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_MoonStone::
# 758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 759 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MOON_STONE
# 760 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_MOON_STONE
# 761 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 762 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 763 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ThunderStone::
# 764 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 765 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_THUNDER_STONE
# 766 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_THUNDER_STONE
# 767 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 768 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 769 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_WaterStone::
# 770 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 6
# 771 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_WATER_STONE
# 772 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_WATER_STONE
# 773 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 774 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 775 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_LeafStone::
# 776 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 7
# 777 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LEAF_STONE
# 778 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_LEAF_STONE
# 779 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize
# 780 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 781 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_FireStone::
# 782 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 783 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FIRE_STONE
# 784 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_FIRE_STONE
# 785 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmNewPrize	
# 786 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 787 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmNewPrize::
# 788 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	//special BufferItemName
# 789 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX, MSGBOX_YESNO
# 790 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 791 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 792 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyRareCandy
# 793 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuySunStone
# 794 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyMoonStone
# 795 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyFireStone
# 796 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyThunderStone
# 797 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 6, MauvilleCity_GameCorner_EventScript_BuyWaterStone
# 798 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 7, MauvilleCity_GameCorner_EventScript_BuyLeafStone
# 799 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 8, MauvilleCity_GameCorner_EventScript_BuyChoiceBand
# 800 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 9, MauvilleCity_GameCorner_EventScript_BuyBrightPowder
# 801 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 802 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 803 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 804 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyBrightPowder::
# 805 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 806 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, BRIGHTPOWDER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 807 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_BRIGHT_POWDER
# 808 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 809 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins BRIGHTPOWDER_COINS
# 810 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_BRIGHT_POWDER
# 811 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 812 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 813 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 814 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 815 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 816 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 817 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyChoiceBand::
# 818 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 819 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, CHOICEBAND_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 820 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_CHOICE_BAND
# 821 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 822 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins CHOICEBAND_COINS
# 823 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_CHOICE_BAND
# 824 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 825 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 826 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 827 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 828 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 829 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 830 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyRareCandy::
# 831 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 832 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, RARECANDY_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 833 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_RARE_CANDY
# 834 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 835 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins RARECANDY_COINS
# 836 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_RARE_CANDY
# 837 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 838 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 839 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 840 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 841 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 842 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 843 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuySunStone::
# 844 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 845 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, SUNSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 846 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_SUN_STONE
# 847 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 848 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins SUNSTONE_COINS
# 849 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_SUN_STONE
# 850 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 851 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 852 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 853 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 854 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 855 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 856 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyMoonStone::
# 857 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 858 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, MOONSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew
# 859 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_MOON_STONE
# 860 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew
# 861 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins MOONSTONE_COINS
# 862 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_MOON_STONE
# 863 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 864 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 865 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 866 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 867 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 868 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 869 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyFireStone::
# 870 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 871 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, FIRESTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 872 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_FIRE_STONE
# 873 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 874 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins FIRESTONE_COINS
# 875 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_FIRE_STONE
# 876 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 877 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 878 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 879 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 880 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 881 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 882 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyThunderStone::
# 883 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 884 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, THUNDERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 885 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_THUNDER_STONE
# 886 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 887 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins THUNDERSTONE_COINS
# 888 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_THUNDER_STONE
# 889 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 890 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 891 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 892 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 893 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 894 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 895 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyWaterStone::
# 896 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 897 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, WATERSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 898 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_WATER_STONE
# 899 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 900 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins WATERSTONE_COINS
# 901 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_WATER_STONE
# 902 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 903 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 904 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 905 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 906 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 907 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 908 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyLeafStone::
# 909 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 910 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, LEAFSTONE_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2
# 911 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_LEAF_STONE
# 912 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForNew2
# 913 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins LEAFSTONE_COINS
# 914 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_LEAF_STONE
# 915 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 916 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 917 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 918 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 919 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 920 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 921 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMDoubleTeam::
# 922 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 1
# 923 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_DOUBLE_TEAM
# 924 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_DOUBLE_TEAM
# 925 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 926 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 927 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMPsychic::
# 928 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 2
# 929 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_PSYCHIC
# 930 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_PSYCHIC
# 931 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 932 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 933 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMFlamethrower::
# 934 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 3
# 935 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_FLAMETHROWER
# 936 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_FLAMETHROWER
# 937 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 938 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 939 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMThunderbolt::
# 940 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 4
# 941 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_THUNDERBOLT
# 942 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_THUNDERBOLT
# 943 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 944 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 945 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TMIceBeam::
# 946 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 5
# 947 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_TM_ICE_BEAM
# 948 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, ITEM_TM_ICE_BEAM
# 949 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmTMPrize
# 950 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 951 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ConfirmTMPrize::
# 952 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 953 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 954 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelTMSelect
# 955 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 956 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam
# 957 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_BuyTMPsychic
# 958 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower
# 959 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt
# 960 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_BuyTMIceBeam
# 961 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 962 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 963 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMDoubleTeam::
# 964 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 965 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_DOUBLE_TEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 966 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_DOUBLE_TEAM
# 967 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 968 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_DOUBLE_TEAM_COINS
# 969 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_DOUBLE_TEAM
# 970 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 971 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 972 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 973 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 974 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 975 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 976 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMPsychic::
# 977 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 978 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_PSYCHIC_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 979 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_PSYCHIC
# 980 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 981 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_PSYCHIC_COINS
# 982 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_PSYCHIC
# 983 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 984 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 985 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 986 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 987 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 988 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 989 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMFlamethrower::
# 990 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 991 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_FLAMETHROWER_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 992 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_FLAMETHROWER
# 993 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 994 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_FLAMETHROWER_COINS
# 995 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_FLAMETHROWER
# 996 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 997 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 998 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 999 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1000 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1001 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1002 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMThunderbolt::
# 1003 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1004 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_THUNDERBOLT_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1005 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_THUNDERBOLT
# 1006 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1007 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_THUNDERBOLT_COINS
# 1008 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_THUNDERBOLT
# 1009 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1010 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1011 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1012 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1013 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1014 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1015 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_BuyTMIceBeam::
# 1016 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1017 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, TM_ICE_BEAM_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM
# 1018 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitemspace ITEM_TM_ICE_BEAM
# 1019 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForTM
# 1020 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins TM_ICE_BEAM_COINS
# 1021 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem ITEM_TM_ICE_BEAM
# 1022 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1023 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1024 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
# 1025 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1026 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1027 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1028 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForTM::
# 1029 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1030 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1031 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1032 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1033 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew::
# 1034 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1035 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1036 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1037 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1038 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForNew2::
# 1039 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 1040 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1041 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1042 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1043 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForTM::
# 1044 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1045 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseTMPrize
# 1046 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1047 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1048 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew::
# 1049 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1050 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize
# 1051 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1052 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1053 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForNew2::
# 1054 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
# 1055 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseNewPrize2
# 1056 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1057 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1058 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 1059 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 1060 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 1061 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1062 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1063 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1064 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman2::
# 1065 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
# 1066 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1067 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1068 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer::
# 1069 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer, MSGBOX_NPC
# 1070 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1071 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1072 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1073 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Dealer2::
# 1074 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Dealer2, MSGBOX_NPC
# 1075 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1076 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1077 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1078 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy1::
# 1079 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy1, MSGBOX_NPC
# 1080 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1081 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1082 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1083 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_VFGuy2::
# 1084 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_VFGuy2, MSGBOX_NPC
# 1085 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1086 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1087 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1088 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gentleman::
# 1089 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
# 1090 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1091 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1092 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Girl::
# 1093 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1094 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1095 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1096 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 1097 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
# 1098 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 1099 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
# 1100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
# 1101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
# 1102 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1103 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
# 1105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
# 1106 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TREECKO_DOLL
# 1107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1108 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TREECKO_DOLL
# 1110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1113 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
# 1115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
# 1116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_TORCHIC_DOLL
# 1117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1118 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_TORCHIC_DOLL
# 1120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1121 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1123 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
# 1125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
# 1126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkdecorspace DECOR_MUDKIP_DOLL
# 1127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
# 1128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 1129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration DECOR_MUDKIP_DOLL
# 1130 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 1131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
# 1132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1133 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
# 1135 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 1136 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
# 1137 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1139 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
# 1141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
# 1142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1144 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
# 1146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
# 1147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1149 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanM::
# 1151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 1155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
# 1156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1158 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1159 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_TryGive20Coins::
# 1160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_1
# 1162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
# 1163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 1164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 1165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 1166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
# 1168 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1169 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PokefanMNormal::
# 1171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
# 1172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1174 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_OldMan::
# 1176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1178 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 1179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_PachinkoGuy::
# 1183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1184 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_PachinkoGuy, MSGBOX_DEFAULT
# 1186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1189 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Hiker::
# 1190 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1191 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Hiker, MSGBOX_DEFAULT
# 1193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1194 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1195 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1196 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Bouncer::
# 1197 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Bouncer2, MSGBOX_DEFAULT
# 1200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end		
# 1202 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady1::
# 1204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1206 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_1, MSGBOX_DEFAULT
# 1207 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_DerbyLady2::
# 1211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Derby_2, MSGBOX_DEFAULT
# 1214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1216 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1217 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Fisherman::
# 1218 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Fisherman, MSGBOX_DEFAULT
# 1221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1223 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1224 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Gachalady::
# 1225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Gachalady, MSGBOX_DEFAULT
# 1228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1230 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Employee::
# 1232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Employee, MSGBOX_DEFAULT
# 1235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1236 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end			
# 1237 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Cook::
# 1239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1241 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 1242 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1244 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Man::
# 1246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1248 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 1249 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1250 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1251 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_JuiceLady::	
# 1253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1256 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase2
# 1257 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 1258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Juice, MSGBOX_YESNO
# 1259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_CancelVF
# 1261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkcoins VAR_TEMP_2
# 1262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_lt VAR_TEMP_2, 10, Juice_Not_Enough
# 1263 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 10
# 1264 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 1265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 1266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	delay 40
# 1267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
# 1268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 1269 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1270 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1271 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
# 1273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	closemessage
# 1274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 1275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmovement 0
# 1276 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	release
# 1277 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1278 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Maniac::
# 1280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 1283 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1284 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1285 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_Woman::
# 1287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock
# 1288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	faceplayer
# 1289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 1290 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
# 1291 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1292 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 1294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1297 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 1298 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1299 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1303 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1304 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 1305 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1306 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 1309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1311 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1312 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1313 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1314 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 1316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1318 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1319 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 1320 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1325 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1326 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 1327 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 1331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1332 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1333 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1334 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1336 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 1338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1339 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1340 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1341 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 1342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1346 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1347 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1348 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 1349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 1353 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1354 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1355 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1358 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 1360 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1361 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1362 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 1364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1366 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1369 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 1371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1373 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 1375 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1376 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1380 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1381 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 1382 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1383 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 1386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1387 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1388 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1389 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1390 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1391 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 1393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1396 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 1397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1399 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1400 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1401 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1402 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 1404 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 1408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1410 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1411 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1412 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1413 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1414 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 1415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 1416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 1417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
# 1418 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 1419 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 1420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playbgm MUS_GAME_CORNER, FALSE
# 1421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 1422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1424 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase::
# 1426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
# 1427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end
# 1429 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_EventScript_NoCoinCase2::
# 1431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase, MSGBOX_DEFAULT
# 1432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
# 1433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	end	
# 1434 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
# 1436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Willkommen in unserer Spielhalle.$"
# 1437 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_PachinkoGuy:
# 1439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich besaß früher einen dieser\n"
# 1440 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "staubigen alten Dropspin-Automaten.\p"
# 1441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Das Handbuch sagte immer 'Mit den\n"
# 1442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Richtungstasten Neigen und\l"
# 1443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Fallgeschwindigkeit anpassen…'\p"
# 1444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich habe mich immer gefragt\n"
# 1445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "was das bedeutet.$"
# 1446 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Hiker:
# 1448 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aah!\n"
# 1449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich habe alles bei diesem Onix-\l"
# 1450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Spiel verloren…\p"
# 1451 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Man gewinnt nur 2 Münzen\n"
# 1452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "für jeden Punkt.$"
# 1453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_1:
# 1455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Willst du auf das Rennen wetten?\n"
# 1456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wir sind jetzt digital!\p"
# 1457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Benutze eines der Tablets\n"
# 1458 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "vor dem Schalter.$"	
# 1459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby_2:
# 1461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es geht nicht nur um die Ausdauer.\p"
# 1462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Am Ende des Tages, gehört\n"
# 1463 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "auch Glück dazu.$"	
# 1464 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Fisherman:
# 1466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich komme für das Essen.\p"
# 1467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist nicht das Prismania Cafe…\n"
# 1468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aber gut genug.$"		
# 1469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Gachalady:
# 1471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Die Lotterie-Automaten haben\n"
# 1472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Gewinnchancen, doch nichts ist.\l"
# 1473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "garantiert.\p"
# 1474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Einige Automaten sind besser,\l"
# 1475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "mit anderen Seltenheitsstufen.\p"
# 1476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Neue Pokémon werden zudem auch\n"
# 1477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "von deinem Pokédex beeinflusst.$"	
# 1478 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Employee:
# 1480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich bin ein Angestellter hier…\n"
# 1481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "und ein Kunde.$"
# 1482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer1:
# 1484 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du benötigst einen Trainerpass\n"
# 1485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "um die Spielhalle zu betreten.\p"
# 1486 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mal seh'n…\p"
# 1487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1488 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hmm…\p"
# 1489 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "…\p"
# 1490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wunderbar.\n"
# 1491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Viel Spaß in der Spielhalle!$"	
# 1492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1493 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bouncer2:
# 1494 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Viel Spaß in der Spielhalle!$"	
# 1495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1496 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pachinko:
# 1497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ein Dropspin-Automat!\n"
# 1498 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "3 Münzen pro Ball.$"
# 1499 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1500 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
# 1501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, du möchtest Münzen für die\n"
# 1502 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Spiele haben?\p"
# 1503 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Aber du hast keinen Münzkorb für die\n"
# 1504 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Münzen.$"
# 1505 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1506 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
# 1507 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Suchst du nach Münzen?\p"
# 1508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Das macht ¥1000 für 50 Münzen.\n"
# 1509 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Möchtest du welche haben?$"
# 1510 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1511 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
# 1512 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Vielen Dank!\n"
# 1513 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hier sind deine Münzen!$"
# 1514 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1515 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
# 1516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ähm… Es scheint, du hast nicht\n"
# 1517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "genügend Geld dabei…$"
# 1518 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1519 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinCaseIsFull:
# 1520 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
# 1521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dein Münzkorb ist voll.$"
# 1522 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1523 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
# 1524 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… Dann brauchst du keine Münzen?\n"
# 1525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Viel Glück bei deinem Abenteuer!$"
# 1526 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1527 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
# 1528 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Willkommen.\p"
# 1529 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hier kannst du deine Münzen gegen\n"
# 1530 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Preise eintauschen.$"
# 1531 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1532 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_WhichPrize:
# 1533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welchen Preis hättest du gerne?$"
# 1534 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1535 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX:
# 1536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du möchtest also\n"
# 1537 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} {STR_VAR_2}?$"
# 1538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1539 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsTheNewX:
# 1540 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du möchtest also\n"
# 1541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1}?$"
# 1542 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1543 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BlackJack:
# 1544 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ein Blackjack-Tisch!\n"
# 1545 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Spielen?$"
# 1546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1547 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Derby:
# 1548 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Das Malvenfroh-Rennen!\n"
# 1549 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wetten?$"	
# 1550 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Snake:
# 1552 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Onix!\n"
# 1553 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "25 Münzen pro Spiel.$"		
# 1554 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1555 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Bird:
# 1556 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Smettbird!\n"
# 1557 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "25 Münzen pro Spiel.$"		
# 1558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1559 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Meowth:
# 1560 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ein Pinball-Automat!\n"
# 1561 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "25 Münzen pro Spiel.$"	
# 1562 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_BS:
# 1564 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Block-Bauer!\n"
# 1565 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "25 Münzen pro Spiel.$"	
# 1566 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Seel:
# 1568 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ein Pinball-Automat!\n"
# 1569 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "25 Münzen pro Spiel.$"	
# 1570 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1571 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Diglett:
# 1572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ein Pinball-Automat!\n"
# 1573 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "50 Münzen pro Spiel.$"	
# 1574 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1575 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Pinball_Gengar:
# 1576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ein Pinball-Automat!\n"
# 1577 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "100 Münzen pro Spiel.$"	
# 1578 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1579 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF:
# 1580 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Voltobal-Flip!\n"
# 1581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "50 Münzen pro Spiel.$"	
# 1582 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1583 "data/maps/MauvilleCity_GameCorner/scripts.pory"
VF_Come_Again_Text:
# 1584 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Zu schade.\n"
# 1585 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Viel Glück beim nächsten Mal!$"
# 1586 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SendToYourHomePC:
# 1588 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Danke!\n"
# 1589 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wir senden das auf deinen PC.$"
# 1590 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NotEnoughCoins:
# 1592 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du hast nicht genügend Münzen.$"
# 1593 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1594 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_YOU_WON_TEXT:
# 1595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du hast\n"
# 1596 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Münzen gewonnen!$"
# 1597 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1598 "data/maps/MauvilleCity_GameCorner/scripts.pory"
PB_Not_Enough:
# 1599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ein Pinball-Automat!\n"
# 1600 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nicht genügend Münzen…$"
# 1601 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1602 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Snake_Not_Enough:
# 1603 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Onix!\p"
# 1604 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nicht genügend Münzen…$"
# 1605 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bjuice_Not_Enough:
# 1607 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nicht genügend Münzen…$"
# 1608 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1609 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Bird_Not_Enough:
# 1610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Smettbird!\p"
# 1611 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nicht genügend Münzen…$"	
# 1612 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1613 "data/maps/MauvilleCity_GameCorner/scripts.pory"
BS_Not_Enough:
# 1614 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Block-Bauer!\p"
# 1615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nicht genügend Münzen…$"
# 1616 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1617 "data/maps/MauvilleCity_GameCorner/scripts.pory"
Flip_Not_Enough:
# 1618 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Voltobal-Flip!\p"
# 1619 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nicht genügend Münzen…$"
# 1620 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1621 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1622 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
# 1623 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
# 1624 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "placing {STR_VAR_1}.$"
# 1625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1626 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VF_Keep_Going:
# 1627 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du hast {STR_VAR_1} Münzen gewonnen.\n"
# 1628 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Weiterspielen?$"
# 1629 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1630 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_OhIsThatSo:
# 1631 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, wirklich?\n"
# 1632 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du musst einige Münzen sparen, bevor\l"
# 1633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "du wiederkommst.$"
# 1634 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1635 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
# 1636 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du möchtest also {STR_VAR_1}?$"
# 1637 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1638 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo:
# 1639 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bitte schön!$"
# 1640 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1641 "data/maps/MauvilleCity_GameCorner/scripts.pory"
@ Unused
# 1642 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
# 1643 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"
# 1644 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1645 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
# 1646 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich habe mich vertan und zweimal die\n"
# 1647 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "gleiche Puppe genommen.\p"
# 1648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Möchtest du eine davon haben?$"
# 1649 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1650 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HereYouGo2:
# 1651 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bitte schön!$"
# 1652 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_YouWantItButNotNow:
# 1654 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bitte?\n"
# 1655 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du möchtest sie, aber nicht jetzt?$"
# 1656 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1657 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DontBeNegative:
# 1658 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, sei doch nicht so negativ drauf!\n"
# 1659 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du kannst sie wirklich gerne haben!$"
# 1660 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1661 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantWinJackpot:
# 1662 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es gibt einen Preis, den ich haben\n"
# 1663 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "möchte, aber ich kann den Jackpot\l"
# 1664 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "nicht knacken.$"
# 1665 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1666 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
# 1667 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, Kindchen, wenn du hier spielen\n"
# 1668 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "willst, brauchst du einen Münzkorb.\p"
# 1669 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich glaube, die junge Dame nebenan hat\n"
# 1670 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "einen. Besuche sie mal!$"
# 1671 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1672 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
# 1673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Mein Glück wird nicht immer anhalten.\n"
# 1674 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Das ist zu viel für mich.\l"
# 1675 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hier, nimm die Münzen!$"
# 1676 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1677 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
# 1678 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Immer, wenn ich in Malvenfroh City bin,\n"
# 1679 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "gehe ich in die Spielhalle.\p"
# 1680 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Malvenfroh City bringt mir einfach\n"
# 1681 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glück.$"
# 1682 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1683 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
# 1684 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Beim Roulette gibt es verschiedene\n"
# 1685 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Einsatzhöhen.\p"
# 1686 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Überprüf deine Münzen, bevor du dich\n"
# 1687 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "für einen Tisch entscheidest.$"
# 1688 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1689 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
# 1690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hier kann man leicht die Zeit vergessen.\n"
# 1691 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich sollte wieder an die Arbeit gehen.$"
# 1692 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1693 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
# 1694 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Münzen werden gebraucht, um hier in der\n"
# 1695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Spielhalle spielen zu können.$"
# 1696 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1697 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	MauvilleCity_GameCorner_Text_Dealer:
# 1698 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Manche sagen beim Blackjack.\n"
# 1699 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "benötigt man Skills, andere\l"
# 1700 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "sagen Glück.\p"
# 1701 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich sage, es geht um Spaß…\n"
# 1702 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "und einen großen Gewinn!$"
# 1703 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1704 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	MauvilleCity_GameCorner_Text_Dealer2:
# 1705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du kannst Wetten, die ein\n"
# 1706 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Vielfaches von 10 sind abschließen.\p"
# 1707 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Vielleicht ein All-in?$"	
# 1708 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1709 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy1:
# 1710 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Möchtest du Voltobal-Flip spielen?\p"
# 1711 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Das geht nur von der\n"
# 1712 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "anderen Seite des Tisches.$"
# 1713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1714 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_VFGuy2:
# 1715 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Versuch's auf der anderen\n"
# 1716 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Seite des Tisches.$"	
# 1717 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
# 1719 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Dieses Roulette-Dingens…\n"
# 1720 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Es ist ziemlich anstrengend.\p"
# 1721 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich versuche, zu gewinnen. Aber ich\n"
# 1722 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "verliere immer. Doch ich gebe nicht auf.$"
# 1723 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1724 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
# 1725 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Bis zu drei Münzen können an den Ein-\n"
# 1726 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "armigen Banditen eingesetzt werden.\p"
# 1727 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Je mehr Münzen du einsetzt, desto\n"
# 1728 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "höher ist deine Chance auf den Jackpot.$"
# 1729 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_DifficultToStopOn7:
# 1731 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Kannst du es genau bei “7” stoppen?\p"
# 1732 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wenn es bei “7” stoppt,\n"
# 1733 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "während ein Reel Time gespielt wird,\l"
# 1734 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "erhältst du Extra-Münzen.$"
# 1735 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1736 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
# 1737 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Ich kann dir einige nützliche Tipps zu\n"
# 1738 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "den einarmigen Banditen geben.\p"
# 1739 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Je mehr Blitze du anhältst, desto\n"
# 1740 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "größer die Chance auf ein Reel Time,\l"
# 1741 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "eine Glücksrunde!\p"
# 1742 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "In einem Spiel mit fünf möglichen\n"
# 1743 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Glücksrunden…\p"
# 1744 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "ist es möglich, vier reguläre Boni und\n"
# 1745 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "dann einen Big Bonus zu gewinnen.\p"
# 1746 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Das ergibt zusammen 660 Münzen,\n"
# 1747 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "aber ist sehr schwer zu gewinnen.$"
# 1748 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1749 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
# 1750 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Du kannst ohne Münzkorb nicht spielen.$"
# 1751 "data/maps/MauvilleCity_GameCorner/scripts.pory"

# 1752 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_CantBuyWithNoCoinCase:
# 1753 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh? Es scheint du benötigst\n"
# 1754 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "einen Münzkorb.$"
# 1755 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	
# 1756 "data/maps/MauvilleCity_GameCorner/scripts.pory"
MauvilleCity_GameCorner_Text_Juice:
# 1757 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Beerensaft!\n"
# 1758 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Nur 10 Münzen.$"
