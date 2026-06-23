LittlerootTown_House3_OldLady::
# 2 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	goto_if_set 0x265, LittlerootTown_House3_OldLady_2
# 7 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	msgbox LittlerootTown_House3_OldLady_Text_1, MSGBOX_NPC
# 8 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	givemon SPECIES_TORCHIC, 5, item = ITEM_NONE, ball = ITEM_POKE_BALL, nature = NATURE_ADAMANT, abilityNum = 0, gender = MON_GENDERLESS, hpEv = 0, atkEv = 0, defEv = 0, speedEv = 0, spAtkEv = 0, spDefEv = 0, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 9 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	givemon SPECIES_PIPLUP, 5, item = ITEM_NONE, ball = ITEM_POKE_BALL, nature = NATURE_SERIOUS, abilityNum = 0, gender = MON_GENDERLESS, hpEv = 0, atkEv = 0, defEv = 0, speedEv = 0, spAtkEv = 0, spDefEv = 0, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 10 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	givemon SPECIES_TURTWIG, 5, item = ITEM_NONE, ball = ITEM_POKE_BALL, nature = NATURE_DOCILE, abilityNum = 2, gender = MON_GENDERLESS, hpEv = 0, atkEv = 0, defEv = 0, speedEv = 0, spAtkEv = 0, spDefEv = 0, hpIv = 31, atkIv = 31, defIv = 31, speedIv = 31, spAtkIv = 31, spDefIv = 31
# 11 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 12 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	msgbox LittlerootTown_House3_OldLady_Text_2, MSGBOX_NPC
# 13 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	waitfanfare
# 14 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	setflag 0x265
# 15 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	release
	end

LittlerootTown_House3_OldLady_2:
# 3 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	msgbox LittlerootTown_House3_OldLady_Text_0, MSGBOX_NPC
# 4 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	release
	end


# 19 "data/maps/LittlerootTown_House3_1F/scripts.pory"

# 20 "data/maps/LittlerootTown_House3_1F/scripts.pory"
LittlerootTown_House3_1F_MapScripts::
# 21 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	.byte 0

LittlerootTown_House3_OldLady_Text_0:
# 3 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	.string "Viel Glück!$"

LittlerootTown_House3_OldLady_Text_1:
# 7 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	.string "Hallo.$"

LittlerootTown_House3_OldLady_Text_2:
# 12 "data/maps/LittlerootTown_House3_1F/scripts.pory"
	.string "Für dich.$"
