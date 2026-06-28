# 1 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 11 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	return
# 18 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 19 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
# 20 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 23 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 24 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 30 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 32 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 40 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 42 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 43 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 45 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 50 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 55 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 56 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
# 58 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 60 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 61 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 62 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 63 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
# 65 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 67 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 68 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex:
# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich bin der Game Designer.\p"
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Oh, wirklich?\n"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Du arbeitest an einem Pokédex?\p"
# 73 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Es ist schwer, ihn zu vervollständigen,\n"
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "aber du darfst nicht aufgeben.\p"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Sobald du ihn vervollständigt hast,\n"
# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "komm mich wieder besuchen.$"
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 78 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
# 79 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wow! Das ist beeindruckend!\n"
# 80 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wirklich äußerst beeindruckend!\p"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Dein Pokédex ist absolut vollständig!\n"
# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Du musst die Pokémon wirklich lieben!\p"
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich bin echt beeindruckt!\p"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich möchte dir als Zeichen meiner Aner-\n"
# 85 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "kennung gerne etwas schenken!$"
# 86 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer:
# 88 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich? Sprichst du mit mir?\n"
# 89 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich bin der Programmierer.\p"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich frage mich, wie die einarmigen\n"
# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Banditen hier wohl so sind.$"
# 92 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 93 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist:
# 94 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich bin der Graphic Artist! Sind die\n"
# 95 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Pokémon in der Region von Hoenn\l"
# 96 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "nicht interessant?$"
# 97 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 98 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute:
# 99 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Die Frauen mit den Schwimmreifen\n"
# 100 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "sind total niedlich, meinst du nicht?\l"
# 101 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ein Kampf gegen so niedliche Frauen…\p"
# 102 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Huuh, das ist vielleicht ein Spaß!\p"
# 103 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Und die Zwillinge erst! Sind die süß!?!\n"
# 104 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ein 2-gegen-2-Kampf mit Zwillingen…\p"
# 105 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Huuh, einfach unglaublicher Spaß!$"
# 106 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 107 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart:
# 108 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Die frische Seebrise berührt mein Herz.\n"
# 109 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Es ist einfach wundervoll hier.$"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 111 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy:
# 112 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Du kannst nie vorhersagen, wann und wo\n"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "die Leute dich herausfordern.\p"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Daher gehe ich niemals ohne meinen Game\n"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Boy Advance aus dem Haus.$"
# 116 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 117 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles:
# 118 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Scott: … … … …\n"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "…\l"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … …\l"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Zzzzz…\p"
# 122 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "… … … … …\n"
# 123 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wie?!?\l"
# 124 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Oh, tut mir Leid!\l"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich habe ein bisschen gedöst!\p"
# 126 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich wollte mir mal einen Pokémon\n"
# 127 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wettbewerb anschauen.\p"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Das scheint ganz interessant zu sein,\n"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "aber…\p"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Vielleicht bin ich ja Purist - aber ich\n"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "bevorzuge Kämpfe und starke Trainer.\p"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Aber das liegt wohl an mir.\p"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Ich hoffe du genießt die Arenen,\n"
# 134 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wettbewerbe, Kampfcamps und all\l"
# 135 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "die wunderbaren Dinge, {PLAYER}{KUN}!$"
# 136 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 137 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy:
# 138 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Scott: Ich denke schon, dass es auf\n"
# 139 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Strategie ankommt, um einen Wettbewerb\l"
# 140 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "zu gewinnen.\p"
# 141 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Sich eine Strategie auszudenken ist\n"
# 142 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "nur ein Weg, ein guter Trainer zu\l"
# 143 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "werden…$"
