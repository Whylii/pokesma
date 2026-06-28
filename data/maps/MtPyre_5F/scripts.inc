# 1 "data/maps/MtPyre_5F/scripts.pory"

# 2 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_5F_MapScripts::
# 3 "data/maps/MtPyre_5F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_5F/scripts.pory"

# 5 "data/maps/MtPyre_5F/scripts.pory"
@ Seems like the scripts for the 4F and 5F were swapped
# 6 "data/maps/MtPyre_5F/scripts.pory"

# 7 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_EventScript_Tasha::
# 8 "data/maps/MtPyre_5F/scripts.pory"
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
# 9 "data/maps/MtPyre_5F/scripts.pory"
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 10 "data/maps/MtPyre_5F/scripts.pory"
	end
# 11 "data/maps/MtPyre_5F/scripts.pory"

# 12 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaIntro:
# 13 "data/maps/MtPyre_5F/scripts.pory"
	.string "Ich mag gruselige Horrordinge…\n"
# 14 "data/maps/MtPyre_5F/scripts.pory"
	.string "Es ist wie eine Sucht…\p"
# 15 "data/maps/MtPyre_5F/scripts.pory"
	.string "Sobald ich hier bin…\n"
# 16 "data/maps/MtPyre_5F/scripts.pory"
	.string "stehen mir die Haare zu Berge.$"
# 17 "data/maps/MtPyre_5F/scripts.pory"

# 18 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaDefeat:
# 19 "data/maps/MtPyre_5F/scripts.pory"
	.string "Niederlagen… mag ich nicht.$"
# 20 "data/maps/MtPyre_5F/scripts.pory"

# 21 "data/maps/MtPyre_5F/scripts.pory"
MtPyre_4F_Text_TashaPostBattle:
# 22 "data/maps/MtPyre_5F/scripts.pory"
	.string "Ich will unheimliche Dinge sehen…\n"
# 23 "data/maps/MtPyre_5F/scripts.pory"
	.string "Ich kann nicht weggehen…\p"
# 24 "data/maps/MtPyre_5F/scripts.pory"
	.string "Muss bleiben…\n"
# 25 "data/maps/MtPyre_5F/scripts.pory"
	.string "Willst du nicht bei mir bleiben?$"
