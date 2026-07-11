# 1 "data/maps/MossdeepCity_House1/scripts.pory"

# 2 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_MapScripts::
# 3 "data/maps/MossdeepCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House1/scripts.pory"

# 5 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_BlackBelt::
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MossdeepCity_House1_EventScript_NeutralNature
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
	release
# 14 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 15 "data/maps/MossdeepCity_House1/scripts.pory"

# 16 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_NeutralNature::
# 17 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	release
# 19 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 20 "data/maps/MossdeepCity_House1/scripts.pory"

# 21 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_Woman::
# 22 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
# 23 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 24 "data/maps/MossdeepCity_House1/scripts.pory"

# 25 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_HmmYourPokemon:
# 26 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Hmm!\n"
# 27 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Dein {STR_VAR_1}…$"
# 28 "data/maps/MossdeepCity_House1/scripts.pory"

# 29 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_ItLikesXPokeblocks:
# 30 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Es mag {STR_VAR_1},\n"
# 31 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "nicht wahr?\p"
# 32 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Nein, ich bin mir sicher. Es mag mit\n"
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Sicherheit {STR_VAR_1}!$"
# 34 "data/maps/MossdeepCity_House1/scripts.pory"

# 35 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks:
# 36 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Es scheint Pokériegel\n"
# 37 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "weder zu lieben noch abzulehnen.$"
# 38 "data/maps/MossdeepCity_House1/scripts.pory"

# 39 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes:
# 40 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Mein Mann weiß auf den ersten Blick,\n"
# 41 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "welche Art von Pokériegel\l"
# 42 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "ein Pokémon mag und welche nicht.$"
