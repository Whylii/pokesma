# 1 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_MapScripts::
# 3 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 5 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Gentleman::
# 6 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
# 7 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 8 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 9 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Demetrius::
# 10 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
# 11 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_Thalia::
# 15 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
# 16 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 17 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
# 18 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
# 19 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 20 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 21 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
# 23 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 24 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
# 26 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	register_matchcall TRAINER_THALIA_1
# 27 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	release
# 28 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 29 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 30 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
# 31 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
# 32 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
# 33 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	end
# 34 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 35 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_TakingALookAround:
# 36 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Schiffe dieser Art sind sehr selten,\n"
# 37 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "daher schaue ich mich hier gut um.\p"
# 38 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Hmmm…\n"
# 39 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Da sind die anderen Kabinen…$"
# 40 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 41 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaIntro:
# 42 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Was bringt dich hierher?\n"
# 43 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Das ist bestimmt die schiere Neugier.$"
# 44 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 45 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
# 46 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Nicht nur neugierig, sondern auch\n"
# 47 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "stark…$"
# 48 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 49 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
# 50 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Der Mann nebenan…\p"
# 51 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Er sagt, er habe nur einen Ausflug\n"
# 52 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "hierher gemacht, aber Genaues\l"
# 53 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "weiß ich auch nicht…$"
# 54 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 55 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRegister:
# 56 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Du bist so ein starker Trainer!\n"
# 57 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ich werde dich zur Erinnerung im\l"
# 58 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Pokénav eintragen.$"
# 59 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 60 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
# 61 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Was bringt dich hierher?\n"
# 62 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Das ist bestimmt die schiere Neugier.$"
# 63 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 64 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
# 65 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Bist du nicht ein bisschen zu stark?$"
# 66 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 67 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
# 68 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ich bin sicher, der Mann hat was vor!\n"
# 69 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Der benimmt sich ganz eigenartig!$"
# 70 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 71 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusIntro:
# 72 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Waaaah!\n"
# 73 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ich wurde entdeckt! Häh…$"
# 74 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 75 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
# 76 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Oh, du bist ja gar nicht meine Mama!$"
# 77 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"

# 78 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
# 79 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Ich habe mich mit meiner Mama gezankt\n"
# 80 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "und verstecke mich jetzt.\l"
# 81 "data/maps/AbandonedShip_Rooms_1F/scripts.pory"
	.string "Verrat mich nicht!$"
