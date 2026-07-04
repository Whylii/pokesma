Aide_EventScript_HaventCaughtEnough::
	msgbox Aide_Text_HaventCaughtEnoughMonsForItem
	release
	end

Aide_EventScript_NoRoomForItem::
	msgbox Aide_Text_DontHaveAnyRoomForItem
	release
	end

Aide_EventScript_DeclineCheckMons::
	msgbox Aide_Text_GetEnoughMonsComeBackForItem
	release
	end

Aide_Text_HaventCaughtEnoughMonsForItem::
	.string "Mal sehen.\n"
	.string "Hoppla! Du hast nur\l"
	.string "{STR_VAR_3} Arten von Pokémon gefangen!\p"
	.string "Du brauchst {STR_VAR_1} Arten,\n"
	.string "wenn du {STR_VAR_2} haben möchtest.$""

Aide_Text_GetEnoughMonsComeBackForItem::
	.string "Oh. Verstehe.\p"
	.string "Wenn du {STR_VAR_1} Arten von Pokémon\n"
	.string "hast, komm wegen {STR_VAR_2} zurück.$""

Aide_Text_DontHaveAnyRoomForItem::
	.string "Oh! Du hast leider keinen Platz\n"
	.string "für {STR_VAR_2}.$""
