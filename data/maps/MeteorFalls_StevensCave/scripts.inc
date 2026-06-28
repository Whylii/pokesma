# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven::
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_ExclamationMark
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_Delay48
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Defeated::
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_STEVEN, Common_Movement_FacePlayer
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Troy: Oh, wow, {PLAYER}{KUN}!\n"
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Ich bin erstaunt, dass du mich\l"
# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "gefunden hast!\p"
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Du, äh… denkst bestimmt, ich bin nur\n"
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "verrückt nach Steinen, nicht wahr?\p"
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Nein, das tust du bestimmt nicht.\p"
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Wir haben ja schon als Team im\n"
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Moosbach City Raumfahrtzentrum\l"
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "gekämpft.\p"
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Da hast du bestimmt einen Eindruck\n"
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "davon gewonnen, wie gut ich bin.\p"
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, wenn du dich auf eine\n"
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "ernsthafte Herausforderung einlässt,\l"
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "sei auf das Schlimmste gefasst!$"
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_StevenDefeat:
# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Du…\n"
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Ich hätte nie gedacht, dass du so stark\l"
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "werden würdest…$"
# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Troy: Aber, wenn ich es recht bedenke…\n"
# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Damals, als wir uns zum ersten Mal in der\p"
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Granithöhle von Faustauhaven\n"
# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "begegneten, hatte ich schon dieses\l"
# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Gefühl.\p"
# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Ich wusste, du würdest irgendwann der\n"
# 58 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Champ werden.\p"
# 59 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Und mein Gefühl trügt mich nie!\p"
# 60 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Wohin wird dein Weg dich jetzt führen?\p"
# 61 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … …\n"
# 62 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "…\l"
# 63 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … …\l"
# 64 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "…\p"
# 65 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Hehehehe, das kann selbst ich dir\n"
# 66 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "nicht sagen.$"
