# 1 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 2 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_MapScripts::
# 3 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
# 4 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 6 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_OnTransition:
# 7 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 8 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 9 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 10 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler1::
# 11 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
# 12 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 13 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 14 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler2::
# 15 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
# 16 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 17 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 18 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_Tunneler3::
# 19 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	lock
# 20 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
# 22 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
# 23 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 24 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 25 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 26 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_EventScript_TunnelOpened::
# 27 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
# 28 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	release
# 29 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	end
# 30 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 31 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
# 32 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Der Metaflurtunnel…\p"
# 33 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Zunächst hatten wir ein großes Team,\n"
# 34 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "das mit schweren Maschinen durch den\l"
# 35 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Felsen brechen sollte. Dann mussten wir\l"
# 36 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "die Arbeit stoppen.\p"
# 37 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Es stellte sich heraus, dass sich\n"
# 38 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "unsere Arbeit negativ auf die wilden\l"
# 39 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pokémon in dieser Gegend auswirkte.\p"
# 40 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Und daher haben wir nun nichts mehr zu\n"
# 41 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "tun, außer hier faul herumzuhängen.$"
# 42 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 43 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
# 44 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Da ist ein Mann, der sich ganz alleine\n"
# 45 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "seinen Weg nach Wiesenflur gräbt. Er\l"
# 46 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "versucht verzweifelt durchzukommen.\p"
# 47 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Er sagt, wenn er Schritt für Schritt\n"
# 48 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "ohne laute Maschinen gräbt, werden die\l"
# 49 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Pokémon nicht gestört und ihr natür-\l"
# 50 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "licher Lebensraum bleibt erhalten.$"
# 51 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 52 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
# 53 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Um ohne diesen Tunnel nach Wiesenflur\n"
# 54 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "zu kommen, muss man das Meer bei\p"
# 55 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Faustauhaven überqueren, nach\n"
# 56 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Graphitport City segeln und durch\l"
# 57 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Malvenfroh City reisen.$"
# 58 "data/maps/Route116_TunnelersRestHouse/scripts.pory"

# 59 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
# 60 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Hast du schon gehört? Der Tunnel bei\n"
# 61 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wiesenflur ist fertig!\p"
# 62 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "Wenn man nur fest an seine Träume\n"
# 63 "data/maps/Route116_TunnelersRestHouse/scripts.pory"
	.string "glaubt, werden sie irgendwann wahr.$"
