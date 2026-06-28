# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 11 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 12 "data/maps/MauvilleCity_House1/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash::
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 20 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 21 "data/maps/MauvilleCity_House1/scripts.pory"

# 22 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!\p"
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Die Leute nennen mich den\n"
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Zertrümmerer, aber ich finde den Namen\l"
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "unter meinem Niveau!\p"
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Ich verdiene doch wohl etwas mehr\n"
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Respekt! Man sollte mich Zertrümmerer-\l"
# 29 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Meister nennen!\p"
# 30 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo, deine Pokémon sehen wirklich\n"
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "sehr stark aus.\p"
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Das sehe ich gerne!\n"
# 33 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hier, nimm diese VM!$"
# 34 "data/maps/MauvilleCity_House1/scripts.pory"

# 35 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash:
# 36 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Diese VM enthält Zertrümmerer.\p"
# 37 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Wenn du unterwegs auf große\n"
# 38 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Felsbrocken stößt…\p"
# 39 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Dann nutze diese VM, um dir den Weg\n"
# 40 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "freizumachen.\p"
# 41 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Jawohl! Zertrümmert Hindernisse, das\n"
# 42 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "ist meine Devise. Woohoo!$"
# 43 "data/maps/MauvilleCity_House1/scripts.pory"

# 44 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
# 45 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh ja, wenn du einen Felsen\n"
# 46 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "zertrümmerst, könnte ein Pokémon\l"
# 47 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "zum Vorschein kommen.\p"
# 48 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
