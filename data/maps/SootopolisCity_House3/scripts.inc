# 1 "data/maps/SootopolisCity_House3/scripts.pory"

# 2 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_MapScripts::
# 3 "data/maps/SootopolisCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_House3/scripts.pory"

# 5 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Woman::
# 6 "data/maps/SootopolisCity_House3/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
# 9 "data/maps/SootopolisCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
# 10 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
# 11 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 12 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_House3/scripts.pory"

# 14 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_HaveFans::
# 15 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
# 16 "data/maps/SootopolisCity_House3/scripts.pory"
	release
# 17 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 18 "data/maps/SootopolisCity_House3/scripts.pory"

# 19 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_EventScript_Girl::
# 20 "data/maps/SootopolisCity_House3/scripts.pory"
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
# 21 "data/maps/SootopolisCity_House3/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_House3/scripts.pory"

# 23 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_JuanHasManyFansDoYou:
# 24 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Du bist ein Pokémon-Trainer, oder?\p"
# 25 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Der Arenaleiter von Xeneroville, \n"
# 26 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Juan, hat viele Fans.\p"
# 27 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Mehr als sein Schüler Wassili.\n"
# 28 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Hast du auch Fans?$"
# 29 "data/maps/SootopolisCity_House3/scripts.pory"

# 30 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_YouMustBePrettyStrong:
# 31 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, dann musst du aber sehr stark sein.$"
# 32 "data/maps/SootopolisCity_House3/scripts.pory"

# 33 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
# 34 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Oh, meine Güte…\n"
# 35 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Dann stehst du ja ganz alleine da.\p"
# 36 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Streng dich einfach mehr an, dann\n"
# 37 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "bekommst du auch einen Fan.$"
# 38 "data/maps/SootopolisCity_House3/scripts.pory"

# 39 "data/maps/SootopolisCity_House3/scripts.pory"
SootopolisCity_House3_Text_TrainerFanClubWasWild:
# 40 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Die Fans kommen auch von außerhalb\n"
# 41 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "von Hoenn herbeigeströmt.\p"
# 42 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Ich habe den Trainer-Fanclub in\n"
# 43 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Seegrasulb City besucht.\l"
# 44 "data/maps/SootopolisCity_House3/scripts.pory"
	.string "Verrückte Sache…$"
