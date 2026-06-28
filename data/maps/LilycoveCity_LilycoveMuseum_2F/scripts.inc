# 1 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_MapScripts::
# 3 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_LilycoveMuseum_2F_OnLoad
# 4 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_LilycoveMuseum_2F_OnFrame
# 5 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 7 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnLoad:
# 8 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting
# 9 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 10 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 11 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 12 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting::
# 13 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting
# 14 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 15 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 17 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting::
# 18 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting
# 19 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 20 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 22 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting::
# 23 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting
# 24 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 25 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 27 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting::
# 28 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting
# 29 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 30 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 31 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCoolPainting::
# 32 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 10, 6, METATILE_LilycoveMuseum_Painting2_Left, TRUE
# 33 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 11, 6, METATILE_LilycoveMuseum_Painting2_Right, TRUE
# 34 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckBeautyPainting
# 35 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 37 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetBeautyPainting::
# 38 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 18, 6, METATILE_LilycoveMuseum_Painting1_Left, TRUE
# 39 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 19, 6, METATILE_LilycoveMuseum_Painting1_Right, TRUE
# 40 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckCutePainting
# 41 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetCutePainting::
# 44 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 14, 10, METATILE_LilycoveMuseum_Painting3_Left, TRUE
# 45 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 15, 10, METATILE_LilycoveMuseum_Painting3_Right, TRUE
# 46 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckSmartPainting
# 47 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 48 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 49 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetSmartPainting::
# 50 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 6, 10, METATILE_LilycoveMuseum_Painting0_Left, TRUE
# 51 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 7, 10, METATILE_LilycoveMuseum_Painting0_Right, TRUE
# 52 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CheckToughPainting
# 53 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SetToughPainting::
# 56 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 2, 6, METATILE_LilycoveMuseum_Painting4_Left, TRUE
# 57 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 3, 6, METATILE_LilycoveMuseum_Painting4_Right, TRUE
# 58 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 60 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_OnFrame:
# 61 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script_2 VAR_LILYCOVE_MUSEUM_2F_STATE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall
# 62 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.2byte 0
# 63 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 64 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall::
# 65 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 66 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 67 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 68 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall, MSGBOX_SIGN
# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 71 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 73 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall, MSGBOX_SIGN
# 75 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 76 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft
# 78 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit, MSGBOX_SIGN
# 80 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#ifdef UBFIX
# 81 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 82 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#else
# 83 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn=FALSE
# 84 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#endif
# 85 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 86 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 88 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_PlayerWalkInPlaceLeft:
# 89 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	walk_in_place_faster_left
# 90 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 91 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 92 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall:
# 93 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	face_up
# 94 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	delay_16
# 95 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	step_end
# 96 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 97 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator::
# 98 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 99 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GLASS_ORNAMENT, LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament
# 100 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 101 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	switch VAR_0x8004
# 102 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 103 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 104 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 105 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting
# 106 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 5, LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer
# 107 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit, MSGBOX_NPC
# 108 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 109 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 110 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_AddedPainting::
# 111 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting, MSGBOX_NPC
# 112 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 113 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 114 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ThankPlayer::
# 115 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 116 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer, MSGBOX_DEFAULT
# 118 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_Movement_FaceExhibitHall
# 119 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests, MSGBOX_DEFAULT
# 120 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament
# 121 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 122 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 123 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_GiveGlassOrnament::
# 124 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 125 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	givedecoration DECOR_GLASS_ORNAMENT
# 127 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament
# 128 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setflag FLAG_RECEIVED_GLASS_ORNAMENT
# 129 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 130 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 131 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 132 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 133 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_NoRoomForGlassOrnament::
# 134 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 135 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou, MSGBOX_DEFAULT
# 136 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 137 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 138 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 139 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 140 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ReceivedGlassOrnament::
# 141 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit, MSGBOX_NPC
# 142 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 143 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 144 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 145 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting::
# 146 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 147 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting
# 148 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame, MSGBOX_SIGN
# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 151 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting::
# 152 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 153 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting
# 154 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 156 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 157 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting::
# 158 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 159 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting
# 160 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame, MSGBOX_SIGN
# 161 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 162 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 163 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting::
# 164 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 165 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting
# 166 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame, MSGBOX_SIGN
# 167 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 168 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 169 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting::
# 170 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 171 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting
# 172 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame, MSGBOX_SIGN
# 173 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 174 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 175 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_Girl::
# 176 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe, MSGBOX_NPC
# 177 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 178 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 179 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM::
# 180 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing, MSGBOX_NPC
# 181 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 182 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 183 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy::
# 184 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon, MSGBOX_NPC
# 185 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 186 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 187 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCoolPainting::
# 188 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 190 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_COOL
# 191 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 192 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 193 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 194 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowBeautyPainting::
# 195 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 196 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 197 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_BEAUTY
# 198 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 199 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 200 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 201 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowCutePainting::
# 202 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 203 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 204 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_CUTE
# 205 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 206 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 207 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 208 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowSmartPainting::
# 209 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 210 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_SMART
# 212 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 213 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 214 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 215 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowToughPainting::
# 216 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 217 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_TOUGH
# 219 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 220 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end
# 221 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 222 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall:
# 223 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Dies ist unser besonderer\n"
# 224 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ausstellungsraum.$"
# 225 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 226 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall:
# 227 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Wie du klar erkennen kannst, gibt es\n"
# 228 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "hier nicht ein einziges Gemälde.\p"
# 229 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich möchte hier auch nicht einfach die\n"
# 230 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Gemälde der so genannten Klassiker\l"
# 231 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "ausstellen.\p"
# 232 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Hier soll Kunst zu sehen sein, die\n"
# 233 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "weit von den Klassikern entfernt ist.\p"
# 234 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Kunst ist doch nicht nur auf alte,\n"
# 235 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "berühmte Werke begrenzt!\p"
# 236 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "In diesem Ausstellungsraum will ich…\p"
# 237 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "moderne und lebendige Kunst über\n"
# 238 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Pokémon sehen, die bereit sind, in\l"
# 239 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "ein ruhmreiches Leben zu treten!$"
# 240 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 241 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit:
# 242 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Oh, entschuldige. Ich wollte dich nicht\n"
# 243 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "mit meinen Monologen langweilen.\p"
# 244 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Nun, du bist jung und offensichtlich\n"
# 245 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "weit gereist…\p"
# 246 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Du hast bestimmt schon viele Pokémon\n"
# 247 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "gesehen und Bilder, die sie darstellen.\p"
# 248 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Wenn du ein solches Bild siehst, kannst\n"
# 249 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "du den Künstler bitte fragen, ob wir\l"
# 250 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "sein Werk hier ausstellen dürfen?$"
# 251 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 252 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit:
# 253 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich möchte diesen Ausstellungsraum mit\n"
# 254 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "modernen und lebendigen Gemälden von\l"
# 255 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Pokémon füllen.$"
# 256 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 257 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting:
# 258 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Dank dir konnten wir ein neues Gemälde\n"
# 259 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "für unsere Kollektion erwerben!\p"
# 260 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich habe gehört, es stellt dein Pokémon\n"
# 261 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "dar. Wirklich einzigartig!\p"
# 262 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Vielen, vielen Dank!$"
# 263 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 264 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer:
# 265 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah! Du bist es!\n"
# 266 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "{PLAYER}!$"
# 267 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 268 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests:
# 269 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ist das nicht fantastisch?\n"
# 270 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Diese Sammlung von Gemälden!\p"
# 271 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Jedes einzelne makellos!\n"
# 272 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Keines besser als das andere!\p"
# 273 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Diese Gemälde ziehen viele neue\n"
# 274 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Besucher für unser Kunstmuseum an.\p"
# 275 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ehrlich, ich danke dir, {PLAYER}.\n"
# 276 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Mein Traum ist wahr geworden!$"
# 277 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 278 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude:
# 279 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Dies ist nur ein kleines Dankeschön.$"
# 280 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 281 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou:
# 282 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich werde das für dich aufbewahren, bis\n"
# 283 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "wir uns wiedersehen.$"
# 284 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 285 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit:
# 286 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah, schön, dich zu sehen, {PLAYER}!\p"
# 287 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Es ist eine Ehre für uns, dass du uns\n"
# 288 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "trotz deiner vielen Aufgaben besuchst.\p"
# 289 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Bitte, entspanne dich und genieße\n"
# 290 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "deinen Besuch bei uns.$"
# 291 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 292 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame:
# 293 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ein Bilderrahmen mit pinkfarbenen\n"
# 294 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Verzierungen.$"
# 295 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 296 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame:
# 297 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ein Bilderrahmen mit gelben\n"
# 298 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Verzierungen.$"
# 299 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 300 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame:
# 301 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ein Bilderrahmen mit blauen\n"
# 302 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Verzierungen.$"
# 303 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 304 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame:
# 305 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ein Bilderrahmen mit roten\n"
# 306 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Verzierungen.$"
# 307 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 308 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame:
# 309 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ein Bilderrahmen mit grünen\n"
# 310 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Verzierungen.$"
# 311 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 312 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon:
# 313 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ein Bild eines Pokémon.$"
# 314 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 315 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe:
# 316 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich war eine Weile nicht hier, daher\n"
# 317 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "haben mich die neuen Gemälde über-\l"
# 318 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "rascht.\p"
# 319 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich wünschte, jemand würde mein\n"
# 320 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Pokémon so wunderbar porträtieren.$"
# 321 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 322 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing:
# 323 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Nun… Hier stellen sie also Werke zum\n"
# 324 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Thema Pokémon aus.\p"
# 325 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ich sehe schon. Die Gemälde sind\n"
# 326 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "wirklich amüsant.$"
# 327 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 328 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon:
# 329 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Wow, ehrlich?\n"
# 330 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Das sind Gemälde deiner Pokémon?\p"
# 331 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ist das nicht die absolute Freude für\n"
# 332 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "einen Trainer?$"
