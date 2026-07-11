# 1 "data/maps/MossdeepCity_House3/scripts.pory"

# 2 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_MapScripts::
# 3 "data/maps/MossdeepCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House3/scripts.pory"

# 5 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_SuperRodFisherman::
# 6 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_ReceivedSuperRod
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperRod
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_House3/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 16 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 17 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_House3/scripts.pory"

# 19 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_ReceivedSuperRod::
# 20 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 21 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 22 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_House3/scripts.pory"

# 24 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_EventScript_DeclineSuperRod::
# 25 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity_House3/scripts.pory"
	release
# 27 "data/maps/MossdeepCity_House3/scripts.pory"
	end
# 28 "data/maps/MossdeepCity_House3/scripts.pory"

# 29 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_YouWantSuperRod:
# 30 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Hey, du da! Trainer!\n"
# 31 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Eine Superangel ist wirklich super!\p"
# 32 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Man kann sagen, was man will, aber mit\n"
# 33 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "diesem Baby kann man Pokémon vom\l"
# 34 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Meeresboden weg fangen!\p"
# 35 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Na? Du würdest doch zu gerne auch so\n"
# 36 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "eine Angel haben, oder?$"
# 37 "data/maps/MossdeepCity_House3/scripts.pory"

# 38 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_SuperRodIsSuper:
# 39 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Sicher, sicher!\n"
# 40 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Schließlich ist eine Superangel super!$"
# 41 "data/maps/MossdeepCity_House3/scripts.pory"

# 42 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_TryDroppingRodInWater:
# 43 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Stehst du am Wasser, dann wirf die\n"
# 44 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Angel aus und schau, was anbeißt!$"
# 45 "data/maps/MossdeepCity_House3/scripts.pory"

# 46 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_DontYouLikeToFish:
# 47 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Was???\n"
# 48 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Liebst du das Angeln nicht?$"
# 49 "data/maps/MossdeepCity_House3/scripts.pory"

# 50 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_Text_GoAfterSeafloorPokemon:
# 51 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Mit deiner Superangel kannst du die\n"
# 52 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Pokémon am Meeresboden fangen.$"
