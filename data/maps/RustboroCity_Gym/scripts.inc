# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 36 "data/maps/RustboroCity_Gym/scripts.pory"

# 37 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 41 "data/maps/RustboroCity_Gym/scripts.pory"

# 42 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 46 "data/maps/RustboroCity_Gym/scripts.pory"

# 47 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 64 "data/maps/RustboroCity_Gym/scripts.pory"

# 65 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Gym/scripts.pory"

# 70 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Gym/scripts.pory"

# 76 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 81 "data/maps/RustboroCity_Gym/scripts.pory"

# 82 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 86 "data/maps/RustboroCity_Gym/scripts.pory"

# 87 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 91 "data/maps/RustboroCity_Gym/scripts.pory"

# 92 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hi, wie geht's?\p"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hör zu, mein Freund!\n"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Würdest du gerne Champ werden?\p"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich bin kein Trainer. Ich nicht. Aber\n"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ich kann dir trotzdem einen nützlichen\l"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rat geben.\p"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Also, abgemacht! Wir werden zusammen\n"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "nach der Pokémon-Meisterschaft\l"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "streben!\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Als Trainer musst du die Orden der\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Arenen sammeln, habe ich Recht?\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Aber die Arenaleiter sind nicht gerade\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "einfach zu besiegen!\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Und hier komme ich ins Spiel!\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich werde dir einen Expertentipp geben!\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia, die Arenaleiterin, setzt\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gesteins-Pokémon ein.\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ein Gesteins-Pokémon ist sehr zäh,\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "hat aber gegen Wasser- und Pflanzen-\l"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Attacken keine Chance.\p"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Komm wieder vorbei, wenn du die Arena-\n"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "leiterin besiegt hast.\p"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nun zeig, was du drauf hast!$"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"

# 132 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hui! Was für ein atemberaubender Sieg!\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Meine Zurufe müssen gewirkt haben!\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Großartig!\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Schau mal auf deinen Trainerpass.\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Der Steinorden, den du gerade bekommen\n"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "hast, müsste dort schon vermerkt sein.\p"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Nun hast du den ersten Schritt zur\n"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Meisterschaft schon erfolgreich\l"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "hinter dir!\p"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ein großartiges Gefühl!$"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Unterschätze die Trainer einer Arena\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "nicht! Ich zeige dir, warum wir die\l"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Besten sind!$"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"

# 149 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Du warst viel zu gut für mich…$"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"

# 152 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Du hast noch gar nicht gesehen, was\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gesteins-Pokémon alles können.$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wenn du mich nicht besiegen kannst,\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "hast du keine Chance gegen Felizia.$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! Du hast wirklich Talent!$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia ist um ein Vielfaches stärker\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "als ich.\p"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Du solltest dich besser wappnen!$"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"

# 168 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wir sind hier mitten in einer Stadt,\n"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "na und?!\p"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Meine Gesteins-Pokémon müssen sich\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "einfach austoben!$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mann! Mann! Mann! Unser Herausforderer\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ist aber ein lebhaftes Wesen!$"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"

# 178 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich muss es unserer Leiterin\n"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "überlassen.\p"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Sie ist clever und geschickt, da sie in\n"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ihrem zarten Alter schon Gesteins-\l"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon aufzieht.$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hallo, ich bin Felizia, die Leiterin der\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Arena von Metarost City.\p"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich wurde Arenaleiterin, um mein\n"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wissen, das ich in der Pokémon Trainer-\l"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "schule erworben habe, umzusetzen.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Würdest du mir bitte zeigen, wie du\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "kämpfst und mit welchen Pokémon?$"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"

# 194 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich habe verloren…\p"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Es scheint, ich muss noch eine ganze\n"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Menge lernen…\p"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich verstehe schon.\p"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Die Regeln der Pokémon Liga schreiben\n"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "vor, dass Trainer, die einen Arena-\l"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "leiter besiegt haben, dieses erhalten.\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Bitte nimm den offiziellen Pokémon Liga\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Steinorden an!$"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} hat den Steinorden von\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia erhalten.$"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"

# 210 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Der Steinorden erhöht die Kraft der\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Attacken deiner Pokémon.\p"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Außerdem sind sie nun in der Lage, die\n"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "VM Zerschneider auch außerhalb eines\l"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Kampfes einzusetzen.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Dies möchte ich dir auch noch geben.$"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Diese TM39 enthält Felsgrab.\p"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Sie richtet nicht nur durch das Fallen\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "von Steinen Schaden an, sondern\l"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "reduziert auch die Initiative.\p"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Sobald du eine TM aktivierst, wird die\n"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Attacke einem Pokémon beigebracht.\p"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Aber vergiss nicht, dass eine TM\n"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "öfter beigebracht werden kann. Ihr\l"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Einsatz muss also nicht überlegt sein.$"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"

# 229 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Da du so stark bist, solltest du auch\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "die anderen Arenaleiter\l"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "herausfordern.\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Du lernst wertvolle Dinge dazu, wenn du\n"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "gegen viele Trainer antrittst.$"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"

# 236 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Arena von Metarost City$"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"

# 239 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Arena von Metarost City\p"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizias anerkannte Trainer:\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"

# 244 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Piep!\p"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia: Oh, hallo {PLAYER}.\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hier ist Felizia aus Metarost.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Kamillo hat mir erzählt, dass du\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "die Trainer in atemberaubender\l"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Geschwindigkeit aussuchst und\l"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "besiegst.\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich denke aber nicht, dass ich\n"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "gegen dich verlieren werde.\p"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich werde meine Arena wieder\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "aufbauen. Dann steht deiner He-\l"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rausforderung nichts mehr im Weg.\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Du bist doch bestimmt genauso\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ungeduldig wie ich, nicht wahr?\p"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Klick!$"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"

# 263 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Arenaleiterin Felizia wurde im\n"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokénav-Verzeichnis eingetragen.$"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"

# 267 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia: Ich freue mich, dich wieder zu\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sehen. Ich bin die Arenaleiterin\l"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia.\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich bin sicher, wir beide haben seit\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "unserer letzten Begegnung viele\l"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Erfahrungen gesammelt.\p"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich würde gerne sehen, um wie vieles\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "besser wir beide geworden sind. Los!$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich habe wieder verloren…$"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"

# 281 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia: Ich muss anscheindend noch\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "viel über Pokémon-Kämpfe lernen.\p"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Aber genau deshalb liebe ich das\n"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Kämpfen um so mehr.$"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"

# 287 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia: Ich freue mich, dich wieder zu\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sehen. Ich bin die Arenaleiterin\l"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Felizia.\p"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Ich bin sicher, wir beide haben seit\n"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "unserer letzten Begegnung viele\l"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Erfahrungen gesammelt.\p"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh… Schade!\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Du hast ja nur ein Pokémon dabei!\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Bitte komm doch wieder, wenn du\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "mindestens zwei dabei hast.$"
