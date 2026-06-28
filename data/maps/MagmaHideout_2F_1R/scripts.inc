# 1 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_MapScripts::
# 3 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 5 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt14::
# 6 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
# 7 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 10 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt3::
# 11 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
# 12 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 14 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 15 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt4::
# 16 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
# 17 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 20 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_EventScript_Grunt5::
# 21 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
# 22 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	end
# 24 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 25 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Intro:
# 26 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Was, wie, wer?\p"
# 27 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Nur Mitglieder von Team Magma dürfen\n"
# 28 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "hier sein.\p"
# 29 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Aber du hast keine Uniform von Team\n"
# 30 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Magma an…\p"
# 31 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Das erregt Verdacht!\n"
# 32 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Kämpf mit mir!$"
# 33 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 34 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14Defeat:
# 35 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Aiyiyi…\n"
# 36 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Mein Stolz als Mitglied von Team Magma…$"
# 37 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 38 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt14PostBattle:
# 39 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Wenn du an Schüttelfrost leidest,\n"
# 40 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "solltest du Team Magma beitreten.$"
# 41 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 42 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Intro:
# 43 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Stopp!\p"
# 44 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Du erwartest doch nicht ernsthaft,\n"
# 45 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "dass ich dich einfach so vorbeigehen\l"
# 46 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "lasse?!?$"
# 47 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 48 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3Defeat:
# 49 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ooh wow!\n"
# 50 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ich gebe mich geschlagen!$"
# 51 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 52 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt3PostBattle:
# 53 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Es wäre vielleicht doch besser gewesen,\n"
# 54 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "dich nicht herauszufordern…$"
# 55 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 56 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Intro:
# 57 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ahah!\n"
# 58 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ein Eindringling!$"
# 59 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 60 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4Defeat:
# 61 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Graaah!$"
# 62 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 63 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt4PostBattle:
# 64 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ich habe doch schon verloren!\p"
# 65 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Muss ich unbedingt weiter im\n"
# 66 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Kreis rennen?$"
# 67 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 68 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Intro:
# 69 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Oh, oh!\n"
# 70 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Ein Eindringling!$"
# 71 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 72 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5Defeat:
# 73 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Murmel…$"
# 74 "data/maps/MagmaHideout_2F_1R/scripts.pory"

# 75 "data/maps/MagmaHideout_2F_1R/scripts.pory"
MagmaHideout_2F_1R_Text_Grunt5PostBattle:
# 76 "data/maps/MagmaHideout_2F_1R/scripts.pory"
	.string "Eigentlich bin ich kein Kampf-Experte…$"
