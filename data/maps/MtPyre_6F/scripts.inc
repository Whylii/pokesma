# 1 "data/maps/MtPyre_6F/scripts.pory"

# 2 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_MapScripts::
# 3 "data/maps/MtPyre_6F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_6F/scripts.pory"

# 5 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Valerie::
# 6 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
# 7 "data/maps/MtPyre_6F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MtPyre_6F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
# 9 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
# 10 "data/maps/MtPyre_6F/scripts.pory"
	release
# 11 "data/maps/MtPyre_6F/scripts.pory"
	end
# 12 "data/maps/MtPyre_6F/scripts.pory"

# 13 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RegisterValerie::
# 14 "data/maps/MtPyre_6F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 15 "data/maps/MtPyre_6F/scripts.pory"
	waitmovement 0
# 16 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
# 17 "data/maps/MtPyre_6F/scripts.pory"
	register_matchcall TRAINER_VALERIE_1
# 18 "data/maps/MtPyre_6F/scripts.pory"
	release
# 19 "data/maps/MtPyre_6F/scripts.pory"
	end
# 20 "data/maps/MtPyre_6F/scripts.pory"

# 21 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_RematchValerie::
# 22 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
# 23 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtPyre_6F/scripts.pory"
	end
# 25 "data/maps/MtPyre_6F/scripts.pory"

# 26 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_EventScript_Cedric::
# 27 "data/maps/MtPyre_6F/scripts.pory"
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
# 28 "data/maps/MtPyre_6F/scripts.pory"
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtPyre_6F/scripts.pory"
	end
# 30 "data/maps/MtPyre_6F/scripts.pory"

# 31 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieIntro:
# 32 "data/maps/MtPyre_6F/scripts.pory"
	.string "Wenn ich hier bin… dann durchströmt\n"
# 33 "data/maps/MtPyre_6F/scripts.pory"
	.string "mich eine seltsame Macht…$"
# 34 "data/maps/MtPyre_6F/scripts.pory"

# 35 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieDefeat:
# 36 "data/maps/MtPyre_6F/scripts.pory"
	.string "Die Macht ebbt ab…$"
# 37 "data/maps/MtPyre_6F/scripts.pory"

# 38 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostBattle:
# 39 "data/maps/MtPyre_6F/scripts.pory"
	.string "Die Geister der hier ruhenden Pokémon,\n"
# 40 "data/maps/MtPyre_6F/scripts.pory"
	.string "erfüllen mich mit ihrer Macht…$"
# 41 "data/maps/MtPyre_6F/scripts.pory"

# 42 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRegister:
# 43 "data/maps/MtPyre_6F/scripts.pory"
	.string "Hehehe… Ich habe den Kampf verloren,\n"
# 44 "data/maps/MtPyre_6F/scripts.pory"
	.string "aber… ich habe dieses Talent…\p"
# 45 "data/maps/MtPyre_6F/scripts.pory"
	.string "Ohne, dass ich den Pokénav berühren\n"
# 46 "data/maps/MtPyre_6F/scripts.pory"
	.string "muss… Hiyah!$"
# 47 "data/maps/MtPyre_6F/scripts.pory"

# 48 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchIntro:
# 49 "data/maps/MtPyre_6F/scripts.pory"
	.string "Hinter dir…\n"
# 50 "data/maps/MtPyre_6F/scripts.pory"
	.string "W… Was ist das?$"
# 51 "data/maps/MtPyre_6F/scripts.pory"

# 52 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValerieRematchDefeat:
# 53 "data/maps/MtPyre_6F/scripts.pory"
	.string "Etwas war da und verschwand…$"
# 54 "data/maps/MtPyre_6F/scripts.pory"

# 55 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_ValeriePostRematch:
# 56 "data/maps/MtPyre_6F/scripts.pory"
	.string "Die Pokémon, die hier ruhen…\n"
# 57 "data/maps/MtPyre_6F/scripts.pory"
	.string "Manchmal spielen sie…$"
# 58 "data/maps/MtPyre_6F/scripts.pory"

# 59 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricIntro:
# 60 "data/maps/MtPyre_6F/scripts.pory"
	.string "Hast du die Orientierung verloren?\n"
# 61 "data/maps/MtPyre_6F/scripts.pory"
	.string "Keine Angst, ich bin ja hier.$"
# 62 "data/maps/MtPyre_6F/scripts.pory"

# 63 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricDefeat:
# 64 "data/maps/MtPyre_6F/scripts.pory"
	.string "Du hattest die Orientierung gar\n"
# 65 "data/maps/MtPyre_6F/scripts.pory"
	.string "nicht verloren?$"
# 66 "data/maps/MtPyre_6F/scripts.pory"

# 67 "data/maps/MtPyre_6F/scripts.pory"
MtPyre_6F_Text_CedricPostBattle:
# 68 "data/maps/MtPyre_6F/scripts.pory"
	.string "Mein Gefühl sagte mir, dass ein Trainer,\n"
# 69 "data/maps/MtPyre_6F/scripts.pory"
	.string "der sich verlaufen hat, panisch\l"
# 70 "data/maps/MtPyre_6F/scripts.pory"
	.string "reagiert und leichter zu besiegen ist.\p"
# 71 "data/maps/MtPyre_6F/scripts.pory"
	.string "Das war ein schmutziger Versuch…$"
