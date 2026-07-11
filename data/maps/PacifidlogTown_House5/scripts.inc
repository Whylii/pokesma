# 1 "data/maps/PacifidlogTown_House5/scripts.pory"

# 2 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_MapScripts::
# 3 "data/maps/PacifidlogTown_House5/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House5/scripts.pory"

# 5 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandWatcher::
# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 9 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
# 10 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 12 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 13 "data/maps/PacifidlogTown_House5/scripts.pory"

# 14 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandPresent::
# 15 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
# 16 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown_House5/scripts.pory"

# 19 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_Gentleman::
# 20 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
# 21 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 22 "data/maps/PacifidlogTown_House5/scripts.pory"

# 23 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CantSeeMirageIslandToday:
# 24 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Ich kann Wundereiland heute\n"
# 25 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "nicht sehen…$"
# 26 "data/maps/PacifidlogTown_House5/scripts.pory"

# 27 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
# 28 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oh! Oh! Heute kann ich Wundereiland\n"
# 29 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "sehen!$"
# 30 "data/maps/PacifidlogTown_House5/scripts.pory"

# 31 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather:
# 32 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Wundereiland…\p"
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Die Insel ist sichtbar oder nicht\n"
# 34 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "sichtbar. Das hängt vom Wetter ab, das\l"
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Fata Morganen möglich macht oder nicht.\p"
# 36 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oder verschwindet die Insel\n"
# 37 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "tatsächlich manchmal?$"
