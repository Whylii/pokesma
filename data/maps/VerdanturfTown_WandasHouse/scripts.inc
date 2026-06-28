# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heiko: Ich habe gegen dich verloren,\n"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{PLAYER}. Aber das betrübt mich nicht.\p"
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ich habe ein neues Ziel in meinem Leben.\n"
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Zusammen mit meinem Trasla mache\p"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "ich mich auf, die Arenen herauszu-\n"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "fordern und ein großer Trainer zu\l"
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "werden.\p"
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Behalte mich ruhig im Auge, {PLAYER}.\n"
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Bald bin ich stärker als du!\p"
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Und dann werde ich dich zu einem neuen\n"
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Kampf herausfordern.$"
# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heiko: Behalte mich ruhig im Auge,\n"
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{PLAYER}. Bald bin ich stärker als du!\p"
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Und dann werde ich dich zu einem neuen\n"
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Kampf herausfordern.$"
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Onkel: Oh! {PLAYER}{KUN}!\n"
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Du findest Heiko nebenan.\p"
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Aber es gibt etwas, das ich dir sagen\n"
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "muss.\p"
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Diese natürliche Umgebung hat Wunder\n"
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "gewirkt bei Heikos Gesundheit.\p"
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Und nicht nur die natürliche Umgebung!\n"
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ich denke, auch die Freundschaft zu\l"
# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "den Pokémon hat ihm geholfen…$"
# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heiko ist weggegangen…\n"
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Er ist nun auf seinem eigenen Weg…$"
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Onkel: Stimmt das?\n"
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heiko ist ganz alleine in die Welt\l"
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "hinausgezogen…\p"
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ich sollte ihn unterstützen - er ist der\n"
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Sohn meines kleinen Bruders…$"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heike: Wer bist du?\n"
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Oh, ja, ich weiß schon…\p"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Du bist {PLAYER}. Heiko hat mir schon\n"
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "viel von dir erzählt.\p"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ich bin Heikos Cousine.\n"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Nett, dich kennen zu lernen!\p"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ich finde, seit Heiko hier lebt, ist er\n"
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "viel gesünder und lebendiger geworden.$"
# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heike: Mach dir keine Sorgen um Heiko.\n"
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ihm geht es mit Sicherheit gut.\p"
# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Ich kenne doch meinen kleinen Vetter.\n"
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Außerdem hat er sein Pokémon dabei.$"
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Dank dir kann ich meine Freundin jetzt\n"
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "jeden Tag sehen. Ob ich glücklich bin?\l"
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Darauf kannst du wetten!$"
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Der Freund meiner Tochter besitzt viel\n"
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Schwung und Energie.\p"
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Er gräbt ununterbrochen einen Tunnel,\n"
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "damit er meine Tochter sehen kann.\p"
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Meine Tochter ist etwas besorgt des-\n"
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "wegen und schaut jeden Tag nach ihm.$"
# 155 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 156 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 157 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Es ist unglaublich! Der Freund meiner \n"
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Tochter hat den Tunnel\p"
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "von Hand gegraben! Einfach sagenhaft!$"
# 160 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Sollte Heiko irgendetwas passieren,\n"
# 163 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "könnte ich seinen Eltern in Blütenburg\l"
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "City nicht mehr in die Augen schauen…$"
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 166 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 167 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Heiko war in Prachtpolis City?\p"
# 168 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Seine Eltern in Blütenburg City werden\n"
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "erstaunt sein, das zu hören.$"
