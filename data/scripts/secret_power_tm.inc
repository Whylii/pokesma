Route111_Text_MakingRoomUseTMToMakeYourOwn:
	.string "Was ist das?\n"
	.string "Was mache ich da?\p"
	.string "Ich überlege, hier mit einer\n"
	.string "Pokémon-Attacke mein eigenes\n"
	.string "Zimmer zu bauen.\p"
	.string "Ich weiß! Ich geb dir diese VM.\n"
	.string "Wirst du damit dein eigenes\n"
	.string "Zimmer bauen?$"

Route111_Text_ExplainSecretPower:
	.string "Such einen großen Baum, der Ranken\n"
	.string "herabhängen lassen könnte.\p"
	.string "Setze die geheime Kraft vor dem\n"
	.string "Baum ein. Ranken kommen herab,\l"
	.string "und du kannst den Baum erklimmen.\p"
	.string "Oben findest du viel Platz für\n"
	.string "deine Lieblingsgegenstände.\p"
	.string "Es wird dein eigener Geheimraum...\n"
	.string "Dein Geheimversteck!\p"
	.string "Du solltest auch eines machen.\p"
	.string "Du musst dein Versteck nicht immer\n"
	.string "in einem Baum bauen.\p"
	.string "Probier die geheime Kraft auch an\n"
	.string "Felswänden mit kleinen Vertiefungen aus.\p"
	.string "Ich werde auch nach weiteren Orten\n"
	.string "suchen. Tschüss!$"

Route111_Text_DontWantThis:
	.string "Oh, du willst das nicht?\n"
	.string "Wenn du es dir anders überlegst,\n"
	.string "sag Bescheid, okay?$"

Route111_Text_DontHaveAnyRoom:
	.string "Oh, du hast keinen Platz dafür.\p"
	.string "Ich heb es für dich auf, also komm\n"
	.string "später wieder, okay?$"

Route111_EventScript_SecretPowerMan::
	lock
	faceplayer
	msgbox Route111_Text_MakingRoomUseTMToMakeYourOwn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_GiveSecretPower
	msgbox Route111_Text_DontWantThis, MSGBOX_DEFAULT
	release
	end

Route111_EventScript_GiveSecretPower::
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
	msgbox Route111_Text_ExplainSecretPower, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	clearflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	call_if_eq VAR_FACING, DIR_WEST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_EAST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_NORTH, Route111_EventScript_SecretPowerManExitNorth
	removeobject VAR_LAST_TALKED
	release
	end

Route111_EventScript_SecretPowerManExit::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExit
	waitmovement 0
	return

Route111_EventScript_SecretPowerManExitNorth::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExitNorth
	waitmovement 0
	return

Route111_EventScript_NoRoomForSecretPower::
	msgbox Route111_Text_DontHaveAnyRoom, MSGBOX_DEFAULT
	release
	end

Route111_Movement_SecretPowerManExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

Route111_Movement_SecretPowerManExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
