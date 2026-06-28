# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 3 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 4 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 5 "data/maps/VerdanturfTown/scripts.pory"

# 6 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 7 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 8 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/VerdanturfTown/scripts.pory"
	end
# 10 "data/maps/VerdanturfTown/scripts.pory"

# 11 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 12 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 13 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 14 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 15 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 17 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 18 "data/maps/VerdanturfTown/scripts.pory"
	release
# 19 "data/maps/VerdanturfTown/scripts.pory"
	end
# 20 "data/maps/VerdanturfTown/scripts.pory"

# 21 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 22 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 23 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
# 24 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 25 "data/maps/VerdanturfTown/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown/scripts.pory"

# 28 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 29 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 30 "data/maps/VerdanturfTown/scripts.pory"
	end
# 31 "data/maps/VerdanturfTown/scripts.pory"

# 32 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 33 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 34 "data/maps/VerdanturfTown/scripts.pory"
	end
# 35 "data/maps/VerdanturfTown/scripts.pory"

# 36 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 37 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 38 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 39 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 40 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 41 "data/maps/VerdanturfTown/scripts.pory"
	release
# 42 "data/maps/VerdanturfTown/scripts.pory"
	end
# 43 "data/maps/VerdanturfTown/scripts.pory"

# 44 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 45 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 46 "data/maps/VerdanturfTown/scripts.pory"
	release
# 47 "data/maps/VerdanturfTown/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown/scripts.pory"

# 49 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TownSign::
# 50 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 51 "data/maps/VerdanturfTown/scripts.pory"
	end
# 52 "data/maps/VerdanturfTown/scripts.pory"

# 53 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 54 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 55 "data/maps/VerdanturfTown/scripts.pory"
	end
# 56 "data/maps/VerdanturfTown/scripts.pory"

# 57 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 58 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 59 "data/maps/VerdanturfTown/scripts.pory"
	end
# 60 "data/maps/VerdanturfTown/scripts.pory"

# 61 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 62 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 63 "data/maps/VerdanturfTown/scripts.pory"
	end
# 64 "data/maps/VerdanturfTown/scripts.pory"

# 65 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 66 "data/maps/VerdanturfTown/scripts.pory"
	.string "Mein Papa hat mir das erzählt.\p"
# 67 "data/maps/VerdanturfTown/scripts.pory"
	.string "Er sagt, der Tunnel sei voller scheuer\n"
# 68 "data/maps/VerdanturfTown/scripts.pory"
	.string "Pokémon.\p"
# 69 "data/maps/VerdanturfTown/scripts.pory"
	.string "Sie haben Angst vor lauten Geräuschen\n"
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "und machen einen Aufruhr.\p"
# 71 "data/maps/VerdanturfTown/scripts.pory"
	.string "Daher musste das Tunnelprojekt\n"
# 72 "data/maps/VerdanturfTown/scripts.pory"
	.string "gestoppt werden.\p"
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "Aber es gibt da einen Mann. Der ver-\n"
# 74 "data/maps/VerdanturfTown/scripts.pory"
	.string "sucht, den Tunnel alleine zu graben.$"
# 75 "data/maps/VerdanturfTown/scripts.pory"

# 76 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 77 "data/maps/VerdanturfTown/scripts.pory"
	.string "Da war ein Mann, der hat den Tunnel\n"
# 78 "data/maps/VerdanturfTown/scripts.pory"
	.string "ganz alleine für die Frau seines\l"
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "Herzens gegraben.\p"
# 80 "data/maps/VerdanturfTown/scripts.pory"
	.string "Ich habe das nie so ganz verstanden.\n"
# 81 "data/maps/VerdanturfTown/scripts.pory"
	.string "Aber, hey, ich finde es trotzdem klasse.$"
# 82 "data/maps/VerdanturfTown/scripts.pory"

# 83 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 84 "data/maps/VerdanturfTown/scripts.pory"
	.string "Der Wind steht immer so günstig, dass\n"
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "die Asche vom Vulkan nie hierher\l"
# 86 "data/maps/VerdanturfTown/scripts.pory"
	.string "geweht wird.\p"
# 87 "data/maps/VerdanturfTown/scripts.pory"
	.string "Die Luft ist sauber und klar.\n"
# 88 "data/maps/VerdanturfTown/scripts.pory"
	.string "Hier zu leben, hilft auch den schwachen\l"
# 89 "data/maps/VerdanturfTown/scripts.pory"
	.string "und kränklichen Menschen.$"
# 90 "data/maps/VerdanturfTown/scripts.pory"

# 91 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 92 "data/maps/VerdanturfTown/scripts.pory"
	.string "Meine Pokémon und ich haben gerade\n"
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "eine Gewinnserie.\p"
# 94 "data/maps/VerdanturfTown/scripts.pory"
	.string "Daher werde ich nun meinen Auftritt\n"
# 95 "data/maps/VerdanturfTown/scripts.pory"
	.string "im Kampfcamp haben.$"
# 96 "data/maps/VerdanturfTown/scripts.pory"

# 97 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 98 "data/maps/VerdanturfTown/scripts.pory"
	.string "Siehst du die Höhle neben dem Super-\n"
# 99 "data/maps/VerdanturfTown/scripts.pory"
	.string "markt?\p"
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "Da ist ein Typ drin, der die Felsbrocken\n"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "sprengen will, damit er auf die andere\l"
# 102 "data/maps/VerdanturfTown/scripts.pory"
	.string "Seite gehen kann.\p"
# 103 "data/maps/VerdanturfTown/scripts.pory"
	.string "Wäre das toll, wenn ich auch dort durch-\n"
# 104 "data/maps/VerdanturfTown/scripts.pory"
	.string "gehen könnte… Ein Besuch in\l"
# 105 "data/maps/VerdanturfTown/scripts.pory"
	.string "Metarost City wäre dann ganz einfach.$"
# 106 "data/maps/VerdanturfTown/scripts.pory"

# 107 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 108 "data/maps/VerdanturfTown/scripts.pory"
	.string "Die Höhle neben dem Supermarkt\n"
# 109 "data/maps/VerdanturfTown/scripts.pory"
	.string "ist nun ein Tunnel zur anderen Seite.\p"
# 110 "data/maps/VerdanturfTown/scripts.pory"
	.string "Das ist toll! Jetzt kommt man ganz\n"
# 111 "data/maps/VerdanturfTown/scripts.pory"
	.string "einfach nach Metarost City, um\l"
# 112 "data/maps/VerdanturfTown/scripts.pory"
	.string "Devon-Waren zu kaufen.$"
# 113 "data/maps/VerdanturfTown/scripts.pory"

# 114 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 115 "data/maps/VerdanturfTown/scripts.pory"
	.string "Wiesenflur\p"
# 116 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Das vom Wind gestreichelte Hoch-\n"
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "land mit dem süßen Duft des Grases.”$"
# 118 "data/maps/VerdanturfTown/scripts.pory"

# 119 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 120 "data/maps/VerdanturfTown/scripts.pory"
	.string "Heikes Haus$"
# 121 "data/maps/VerdanturfTown/scripts.pory"

# 122 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 123 "data/maps/VerdanturfTown/scripts.pory"
	.string "Kampfcamp Wiesenflur\n"
# 124 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Wo Kämpfe Eine Augenweide Sind”$"
# 125 "data/maps/VerdanturfTown/scripts.pory"

# 126 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 127 "data/maps/VerdanturfTown/scripts.pory"
	.string "Metaflurtunnel\n"
# 128 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Verbindet Metarost City und\p"
# 129 "data/maps/VerdanturfTown/scripts.pory"
	.string "Wiesenflur.\n"
# 130 "data/maps/VerdanturfTown/scripts.pory"
	.string "Das Tunnelprojekt wurde abgebrochen.”$"
