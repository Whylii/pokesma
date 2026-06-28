# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 3 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 6 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 13 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 14 "data/maps/AquaHideout_1F/scripts.pory"

# 15 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 18 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 19 "data/maps/AquaHideout_1F/scripts.pory"

# 20 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 24 "data/maps/AquaHideout_1F/scripts.pory"

# 25 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 26 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 33 "data/maps/AquaHideout_1F/scripts.pory"

# 34 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 38 "data/maps/AquaHideout_1F/scripts.pory"

# 39 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 43 "data/maps/AquaHideout_1F/scripts.pory"

# 44 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 48 "data/maps/AquaHideout_1F/scripts.pory"

# 49 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 53 "data/maps/AquaHideout_1F/scripts.pory"

# 54 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
# 56 "data/maps/AquaHideout_1F/scripts.pory"
	.string "schaffen?\p"
# 57 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Unser Boss ist nicht hier! Er ist dabei,\n"
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	.string "sich etwas sehr Wichtiges unter den\l"
# 59 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Nagel zu reißen.\p"
# 60 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wo er hin ist?\p"
# 62 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Uahahaha! Du glaubst doch nicht im\n"
# 63 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ernst, dass ich dir das verrate!?!$"
# 64 "data/maps/AquaHideout_1F/scripts.pory"

# 65 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 66 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was? Wie?!?\n"
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Du bist einer von Team Magma?\p"
# 68 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ich habe gehört, dass Team Magma\n"
# 69 "data/maps/AquaHideout_1F/scripts.pory"
	.string "versucht, ein großartiges Pokémon in\l"
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	.string "seinem Versteck aufzuwecken.\p"
# 71 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Aber wo ist das Versteck wohl?$"
# 72 "data/maps/AquaHideout_1F/scripts.pory"

# 73 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
# 75 "data/maps/AquaHideout_1F/scripts.pory"
	.string "schaffen?\p"
# 76 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Unser Boss ist nicht hier! Er ist dabei,\n"
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	.string "sich ein U-Boot unter den Nagel zu\l"
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	.string "reißen.\p"
# 79 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 80 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Wo er hin ist?\p"
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Uahahaha! Du glaubst doch nicht im\n"
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ernst, dass ich dir das verrate!?!$"
# 83 "data/maps/AquaHideout_1F/scripts.pory"

# 84 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 85 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
# 86 "data/maps/AquaHideout_1F/scripts.pory"
	.string "schaffen?\p"
# 87 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Unser Boss ist nicht hier! Er ist auf\n"
# 88 "data/maps/AquaHideout_1F/scripts.pory"
	.string "dem Weg zum Pyroberg auf der\l"
# 89 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Route 122!\p"
# 90 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 91 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Warum er dorthin ist?\p"
# 92 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Uahahaha! Du glaubst doch nicht im\n"
# 93 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ernst, dass ich dir das verrate!?!$"
# 94 "data/maps/AquaHideout_1F/scripts.pory"

# 95 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 96 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was? Wie?!?\n"
# 97 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Bist du einer von den Team Magma\l"
# 98 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Rüpeln?\p"
# 99 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ich habe gehört, dass Team Magma am\n"
# 100 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Schlotberg nach einem unglaublichen\l"
# 101 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Pokémon sucht.\p"
# 102 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was ist das wohl für ein Pokémon?$"
# 103 "data/maps/AquaHideout_1F/scripts.pory"

# 104 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 105 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Was? Wie? Was hast du mit Team Aqua zu\n"
# 106 "data/maps/AquaHideout_1F/scripts.pory"
	.string "schaffen?\p"
# 107 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Unser Boss ist nicht hier! Er ist auf\n"
# 108 "data/maps/AquaHideout_1F/scripts.pory"
	.string "dem Weg nach Ggraphitport City!\p"
# 109 "data/maps/AquaHideout_1F/scripts.pory"
	.string "… …\n"
# 110 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Warum er dorthin ist?\p"
# 111 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Uahahaha! Du glaubst doch nicht im\n"
# 112 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ernst, dass ich dir das verrate!?!$"
# 113 "data/maps/AquaHideout_1F/scripts.pory"

# 114 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 115 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Huhuuhuhuu!\n"
# 116 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Verdächtige Person gesichtet!$"
# 117 "data/maps/AquaHideout_1F/scripts.pory"

# 118 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 119 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrr…\n"
# 120 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ich habe verloren!$"
# 121 "data/maps/AquaHideout_1F/scripts.pory"

# 122 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 123 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Nun hat das Team verloren, aber ich\n"
# 124 "data/maps/AquaHideout_1F/scripts.pory"
	.string "habe meinen Job gemacht…$"
