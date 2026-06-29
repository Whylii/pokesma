Route109_EventScript_PkmnSign::
# 2 "data/maps/Route109/scripts.pory"
	msgbox Route109_EventScript_PkmnSign_Text_0, MSGBOX_DEFAULT
# 4 "data/maps/Route109/scripts.pory"
	dynmultichoice 1, 3, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Route109_EventScript_PkmnSign_Text_1, Route109_EventScript_PkmnSign_Text_2
# 5 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, 127
	goto_if_eq Route109_EventScript_PkmnSign_2
# 9 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_PkmnSign_5
# 26 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_PkmnSign_6
	return

Route109_EventScript_PkmnSign_2:
# 6 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_PkmnSign_5:
# 11 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PkmnSignWasser, MSGBOX_DEFAULT
# 12 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 13 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 14 "data/maps/Route109/scripts.pory"
	delay 60
# 15 "data/maps/Route109/scripts.pory"
	hidemonpic
# 16 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_WINGULL, 10, 3
# 17 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 18 "data/maps/Route109/scripts.pory"
	delay 60
# 19 "data/maps/Route109/scripts.pory"
	hidemonpic
# 20 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_PELIPPER, 10, 3
# 21 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_PELIPPER, 0
# 22 "data/maps/Route109/scripts.pory"
	delay 60
# 23 "data/maps/Route109/scripts.pory"
	hidemonpic
# 24 "data/maps/Route109/scripts.pory"
	release
	end

Route109_EventScript_PkmnSign_6:
# 27 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PkmnSignAngel, MSGBOX_DEFAULT
# 28 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 29 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 30 "data/maps/Route109/scripts.pory"
	delay 60
# 31 "data/maps/Route109/scripts.pory"
	hidemonpic
# 32 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 33 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 34 "data/maps/Route109/scripts.pory"
	delay 60
# 35 "data/maps/Route109/scripts.pory"
	hidemonpic
# 36 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PkmnSignAngel2, MSGBOX_DEFAULT
# 37 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_MAGIKARP, 10, 3
# 38 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_MAGIKARP, 0
# 39 "data/maps/Route109/scripts.pory"
	delay 60
# 40 "data/maps/Route109/scripts.pory"
	hidemonpic
# 41 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_TENTACOOL, 10, 3
# 42 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_TENTACOOL, 0
# 43 "data/maps/Route109/scripts.pory"
	delay 60
# 44 "data/maps/Route109/scripts.pory"
	hidemonpic
# 45 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 46 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 47 "data/maps/Route109/scripts.pory"
	delay 60
# 48 "data/maps/Route109/scripts.pory"
	hidemonpic
# 49 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PkmnSignAngel3, MSGBOX_DEFAULT
# 50 "data/maps/Route109/scripts.pory"
	showmonpic SPECIES_WAILMER, 10, 3
# 51 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_WAILMER, 0
# 52 "data/maps/Route109/scripts.pory"
	delay 60
# 53 "data/maps/Route109/scripts.pory"
	hidemonpic
# 54 "data/maps/Route109/scripts.pory"
	release
	end


# 76 "data/maps/Route109/scripts.pory"

# 77 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 78 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 79 "data/maps/Route109/scripts.pory"

# 80 "data/maps/Route109/scripts.pory"
Route109_MapScripts::
# 81 "data/maps/Route109/scripts.pory"
	.byte 0
# 82 "data/maps/Route109/scripts.pory"

# 83 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 84 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 85 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 86 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109, 0
# 87 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, Route109_Movement_BrineyEnterBoat
# 88 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_BRINEY
# 90 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 91 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 92 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 93 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 94 "data/maps/Route109/scripts.pory"
	end
# 95 "data/maps/Route109/scripts.pory"

# 96 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 97 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 98 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 100 "data/maps/Route109/scripts.pory"
	end
# 101 "data/maps/Route109/scripts.pory"

# 102 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 103 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 104 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 106 "data/maps/Route109/scripts.pory"
	end
# 107 "data/maps/Route109/scripts.pory"

# 108 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 109 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 110 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 112 "data/maps/Route109/scripts.pory"
	end
# 113 "data/maps/Route109/scripts.pory"

# 114 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 115 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE109
# 116 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 117 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BOAT, Route109_Movement_SailToDewford
# 118 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_SailToDewford
# 119 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route109/scripts.pory"
	delay 50
# 121 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 122 "data/maps/Route109/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 123 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerExitBoat
# 124 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 126 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 127 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 128 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 129 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 130 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route109_Movement_BrineyExitBoat
# 131 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 133 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 134 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_ROUTE109_BOAT, MAP_ROUTE109
# 135 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 136 "data/maps/Route109/scripts.pory"
	closemessage
# 137 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 138 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109
# 139 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 140 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 141 "data/maps/Route109/scripts.pory"
	release
# 142 "data/maps/Route109/scripts.pory"
	end
# 143 "data/maps/Route109/scripts.pory"

# 144 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 145 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 146 "data/maps/Route109/scripts.pory"
	walk_down
# 147 "data/maps/Route109/scripts.pory"
	walk_down
# 148 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 151 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 152 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 153 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 154 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 155 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 156 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 157 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 158 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 159 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 160 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 161 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 162 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 163 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 164 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 165 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 166 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 167 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 168 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 169 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 173 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 174 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 175 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 176 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 177 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 178 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 179 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 180 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 181 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 184 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 185 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 186 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 187 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 188 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 189 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 190 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 191 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 192 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 193 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 194 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 195 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 196 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 197 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 198 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 199 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 200 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 201 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 202 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 203 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 204 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 205 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 206 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 207 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 208 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 209 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 210 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 211 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 212 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 213 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 214 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 215 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 219 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 220 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 221 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 222 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 223 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 224 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 225 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 226 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 227 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 228 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 229 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 230 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 231 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 232 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 233 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 234 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 235 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 236 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 237 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 238 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 239 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 240 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 241 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 242 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 243 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 244 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 245 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 246 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 247 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 248 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 249 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 250 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 251 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 252 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 253 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 254 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 255 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 256 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 257 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 258 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 259 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 260 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 261 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 262 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 263 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 264 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 265 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 266 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 267 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 268 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 269 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 270 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 271 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 272 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 273 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 274 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 275 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 276 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 277 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 278 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 279 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 280 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 281 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 282 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 283 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 284 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 285 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 286 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 287 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 288 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 289 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 290 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 291 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 292 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 293 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 294 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 295 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 296 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 297 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 298 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 299 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 300 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 301 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 302 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 303 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 304 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 305 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 306 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 307 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 308 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 309 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 310 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 311 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 312 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 313 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 314 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route109/scripts.pory"
	walk_left
# 316 "data/maps/Route109/scripts.pory"
	walk_left
# 317 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 318 "data/maps/Route109/scripts.pory"
	step_end
# 319 "data/maps/Route109/scripts.pory"

# 320 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 321 "data/maps/Route109/scripts.pory"
	walk_down
# 322 "data/maps/Route109/scripts.pory"
	walk_down
# 323 "data/maps/Route109/scripts.pory"
	step_end
# 324 "data/maps/Route109/scripts.pory"

# 325 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 326 "data/maps/Route109/scripts.pory"
	walk_down
# 327 "data/maps/Route109/scripts.pory"
	walk_down
# 328 "data/maps/Route109/scripts.pory"
	walk_left
# 329 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 330 "data/maps/Route109/scripts.pory"
	step_end
# 331 "data/maps/Route109/scripts.pory"

# 332 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 333 "data/maps/Route109/scripts.pory"
	walk_right
# 334 "data/maps/Route109/scripts.pory"
	walk_down
# 335 "data/maps/Route109/scripts.pory"
	step_end
# 336 "data/maps/Route109/scripts.pory"

# 337 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 338 "data/maps/Route109/scripts.pory"
	walk_left
# 339 "data/maps/Route109/scripts.pory"
	walk_down
# 340 "data/maps/Route109/scripts.pory"
	step_end
# 341 "data/maps/Route109/scripts.pory"

# 342 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 343 "data/maps/Route109/scripts.pory"
	walk_down
# 344 "data/maps/Route109/scripts.pory"
	step_end
# 345 "data/maps/Route109/scripts.pory"

# 346 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 347 "data/maps/Route109/scripts.pory"
	walk_down
# 348 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 349 "data/maps/Route109/scripts.pory"
	step_end
# 350 "data/maps/Route109/scripts.pory"

# 351 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 352 "data/maps/Route109/scripts.pory"
	lock
# 353 "data/maps/Route109/scripts.pory"
	faceplayer
# 354 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 355 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 356 "data/maps/Route109/scripts.pory"
	end
# 357 "data/maps/Route109/scripts.pory"

# 358 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 359 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 360 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 361 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 362 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 363 "data/maps/Route109/scripts.pory"
	end
# 364 "data/maps/Route109/scripts.pory"

# 365 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 366 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 367 "data/maps/Route109/scripts.pory"
	waitmessage
# 368 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 369 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 370 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 371 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 372 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 373 "data/maps/Route109/scripts.pory"
	end
# 374 "data/maps/Route109/scripts.pory"

# 375 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 376 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 377 "data/maps/Route109/scripts.pory"
	closemessage
# 378 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 379 "data/maps/Route109/scripts.pory"
	end
# 380 "data/maps/Route109/scripts.pory"

# 381 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 382 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 383 "data/maps/Route109/scripts.pory"
	release
# 384 "data/maps/Route109/scripts.pory"
	end
# 385 "data/maps/Route109/scripts.pory"

# 386 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 387 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 388 "data/maps/Route109/scripts.pory"
	release
# 389 "data/maps/Route109/scripts.pory"
	end
# 390 "data/maps/Route109/scripts.pory"

# 391 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 392 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 393 "data/maps/Route109/scripts.pory"
	end
# 394 "data/maps/Route109/scripts.pory"

# 395 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 396 "data/maps/Route109/scripts.pory"
	lock
# 397 "data/maps/Route109/scripts.pory"
	faceplayer
# 398 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 399 "data/maps/Route109/scripts.pory"
	closemessage
# 400 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 401 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route109/scripts.pory"
	release
# 403 "data/maps/Route109/scripts.pory"
	end
# 404 "data/maps/Route109/scripts.pory"

# 405 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 406 "data/maps/Route109/scripts.pory"
	lock
# 407 "data/maps/Route109/scripts.pory"
	faceplayer
# 408 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 409 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 410 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 411 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 412 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 413 "data/maps/Route109/scripts.pory"
	closemessage
# 414 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 415 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 417 "data/maps/Route109/scripts.pory"
	release
# 418 "data/maps/Route109/scripts.pory"
	end
# 419 "data/maps/Route109/scripts.pory"

# 420 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 421 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 422 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 423 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 424 "data/maps/Route109/scripts.pory"
	release
# 425 "data/maps/Route109/scripts.pory"
	end
# 426 "data/maps/Route109/scripts.pory"

# 427 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 428 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 429 "data/maps/Route109/scripts.pory"
	end
# 430 "data/maps/Route109/scripts.pory"

# 431 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 432 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 433 "data/maps/Route109/scripts.pory"
	end
# 434 "data/maps/Route109/scripts.pory"

# 435 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 436 "data/maps/Route109/scripts.pory"
	lock
# 437 "data/maps/Route109/scripts.pory"
	faceplayer
# 438 "data/maps/Route109/scripts.pory"
	waitse
# 439 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 440 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 441 "data/maps/Route109/scripts.pory"
	waitmoncry
# 442 "data/maps/Route109/scripts.pory"
	release
# 443 "data/maps/Route109/scripts.pory"
	end
# 444 "data/maps/Route109/scripts.pory"

# 445 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 446 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 447 "data/maps/Route109/scripts.pory"
	end
# 448 "data/maps/Route109/scripts.pory"

# 449 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 450 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 451 "data/maps/Route109/scripts.pory"
	end
# 452 "data/maps/Route109/scripts.pory"

# 453 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 454 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 455 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 456 "data/maps/Route109/scripts.pory"
	end
# 457 "data/maps/Route109/scripts.pory"

# 458 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 459 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 460 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 461 "data/maps/Route109/scripts.pory"
	end
# 462 "data/maps/Route109/scripts.pory"

# 463 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 464 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 465 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route109/scripts.pory"
	end
# 467 "data/maps/Route109/scripts.pory"

# 468 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 469 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 470 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 471 "data/maps/Route109/scripts.pory"
	end
# 472 "data/maps/Route109/scripts.pory"

# 473 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 474 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 475 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 476 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 477 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 478 "data/maps/Route109/scripts.pory"
	release
# 479 "data/maps/Route109/scripts.pory"
	end
# 480 "data/maps/Route109/scripts.pory"

# 481 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 482 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 483 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 484 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 485 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 486 "data/maps/Route109/scripts.pory"
	release
# 487 "data/maps/Route109/scripts.pory"
	end
# 488 "data/maps/Route109/scripts.pory"

# 489 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 490 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 491 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 492 "data/maps/Route109/scripts.pory"
	end
# 493 "data/maps/Route109/scripts.pory"

# 494 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 495 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 496 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 497 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 498 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 499 "data/maps/Route109/scripts.pory"
	release
# 500 "data/maps/Route109/scripts.pory"
	end
# 501 "data/maps/Route109/scripts.pory"

# 502 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 503 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 504 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 505 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 506 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 507 "data/maps/Route109/scripts.pory"
	release
# 508 "data/maps/Route109/scripts.pory"
	end
# 509 "data/maps/Route109/scripts.pory"

# 510 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 511 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 512 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route109/scripts.pory"
	end
# 514 "data/maps/Route109/scripts.pory"

# 515 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 516 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 517 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/Route109/scripts.pory"
	end
# 519 "data/maps/Route109/scripts.pory"

# 520 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 521 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 522 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/Route109/scripts.pory"
	end
# 524 "data/maps/Route109/scripts.pory"

# 525 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 526 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 527 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/Route109/scripts.pory"
	end
# 529 "data/maps/Route109/scripts.pory"

# 530 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 531 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 532 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/Route109/scripts.pory"
	end
# 534 "data/maps/Route109/scripts.pory"

# 535 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 536 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 537 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route109/scripts.pory"
	end
# 539 "data/maps/Route109/scripts.pory"

# 540 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 541 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 542 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route109/scripts.pory"
	end
# 544 "data/maps/Route109/scripts.pory"

# 545 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 546 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 547 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route109/scripts.pory"
	end
# 549 "data/maps/Route109/scripts.pory"

# 550 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 551 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 552 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route109/scripts.pory"
	end
# 554 "data/maps/Route109/scripts.pory"

# 555 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 556 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 557 "data/maps/Route109/scripts.pory"
	.string "Graphitport City angelegt.\p"
# 558 "data/maps/Route109/scripts.pory"
	.string "Ich vermute, du gehst jetzt zu Kapt.\n"
# 559 "data/maps/Route109/scripts.pory"
	.string "Brigg und bringst ihm die Devon-\l"
# 560 "data/maps/Route109/scripts.pory"
	.string "Waren?$"
# 561 "data/maps/Route109/scripts.pory"

# 562 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 563 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Überbringst du nicht die\n"
# 564 "data/maps/Route109/scripts.pory"
	.string "Devon-Waren?\p"
# 565 "data/maps/Route109/scripts.pory"
	.string "Heißt das, du willst nach Faustauhaven\n"
# 566 "data/maps/Route109/scripts.pory"
	.string "zurücksegeln?$"
# 567 "data/maps/Route109/scripts.pory"

# 568 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 569 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Also, auf nach Faustauhaven!\p"
# 570 "data/maps/Route109/scripts.pory"
	.string "Anker gelichtet!\n"
# 571 "data/maps/Route109/scripts.pory"
	.string "Pecko, wir setzen Segel, mein Liebling!$"
# 572 "data/maps/Route109/scripts.pory"

# 573 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 574 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Dann geh und überbringe die\n"
# 575 "data/maps/Route109/scripts.pory"
	.string "Devon-Waren. Ich warte hier.$"
# 576 "data/maps/Route109/scripts.pory"

# 577 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 578 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 579 "data/maps/Route109/scripts.pory"
	.string "Graphitport City angelegt!\p"
# 580 "data/maps/Route109/scripts.pory"
	.string "Wann immer du magst, können wir wieder\n"
# 581 "data/maps/Route109/scripts.pory"
	.string "die Segel setzen.$"
# 582 "data/maps/Route109/scripts.pory"

# 583 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 584 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Ahoi! Für dich fahre ich\n"
# 585 "data/maps/Route109/scripts.pory"
	.string "jederzeit wieder raus!\p"
# 586 "data/maps/Route109/scripts.pory"
	.string "Nun, wo soll es hingehen?$"
# 587 "data/maps/Route109/scripts.pory"

# 588 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 589 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Sag mir einfach Bescheid,\n"
# 590 "data/maps/Route109/scripts.pory"
	.string "wenn wir wieder Segel setzen sollen.$"
# 591 "data/maps/Route109/scripts.pory"

# 592 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 593 "data/maps/Route109/scripts.pory"
	.string "Yo, Trainer!\n"
# 594 "data/maps/Route109/scripts.pory"
	.string "Seid ihr in Eile,\l"
# 595 "data/maps/Route109/scripts.pory"
	.string "müsst wieder fort,\l"
# 596 "data/maps/Route109/scripts.pory"
	.string "erfrischt euch doch an Papas Ort!$"
# 597 "data/maps/Route109/scripts.pory"

# 598 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 599 "data/maps/Route109/scripts.pory"
	.string "Kleine Kinder sind blitzschnell und\n"
# 600 "data/maps/Route109/scripts.pory"
	.string "flink.\p"
# 601 "data/maps/Route109/scripts.pory"
	.string "Du darfst sie nicht eine Sekunde aus\n"
# 602 "data/maps/Route109/scripts.pory"
	.string "den Augen lassen. Das strengt an.\p"
# 603 "data/maps/Route109/scripts.pory"
	.string "Meine Kinder sind mit meinen Pokémon\n"
# 604 "data/maps/Route109/scripts.pory"
	.string "zusammen, da sind sie gut aufgehoben.$"
# 605 "data/maps/Route109/scripts.pory"

# 606 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 607 "data/maps/Route109/scripts.pory"
	.string "Wir brauchen ganz lange, um unsere\n"
# 608 "data/maps/Route109/scripts.pory"
	.string "Sandburg zu bauen.$"
# 609 "data/maps/Route109/scripts.pory"

# 610 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 611 "data/maps/Route109/scripts.pory"
	.string "Das schenk ich dir!$"
# 612 "data/maps/Route109/scripts.pory"

# 613 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 614 "data/maps/Route109/scripts.pory"
	.string "Wir nehmen allen Sand vom Strand\n"
# 615 "data/maps/Route109/scripts.pory"
	.string "und bauen damit eine gaaanz große Burg.\p"
# 616 "data/maps/Route109/scripts.pory"
	.string "Und dann sind wir Königin und König!\p"
# 617 "data/maps/Route109/scripts.pory"
	.string "Und du darfst unser Diener sein.$"
# 618 "data/maps/Route109/scripts.pory"

# 619 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 620 "data/maps/Route109/scripts.pory"
	.string "Das Wasser in diesen Breiten ist sauber.\p"
# 621 "data/maps/Route109/scripts.pory"
	.string "Aber ich sammle zusammen mit meinem\n"
# 622 "data/maps/Route109/scripts.pory"
	.string "Zigzachs den Müll am Ufer auf.\p"
# 623 "data/maps/Route109/scripts.pory"
	.string "Verschmutztes Wasser wird zu Regen und\n"
# 624 "data/maps/Route109/scripts.pory"
	.string "gelangt in die Flüsse, aus denen wir\l"
# 625 "data/maps/Route109/scripts.pory"
	.string "unser Trinkwasser gewinnen…\p"
# 626 "data/maps/Route109/scripts.pory"
	.string "Verschmutzen wir das Meer, bekommen\n"
# 627 "data/maps/Route109/scripts.pory"
	.string "wir den Schmutz wieder zurück.$"
# 628 "data/maps/Route109/scripts.pory"

# 629 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 630 "data/maps/Route109/scripts.pory"
	.string "Zigzachs: Guguu?$"
# 631 "data/maps/Route109/scripts.pory"

# 632 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 633 "data/maps/Route109/scripts.pory"
	.string "Strandhaus\p"
# 634 "data/maps/Route109/scripts.pory"
	.string "“Mögen heiße Kämpfe im heißen Sand\n"
# 635 "data/maps/Route109/scripts.pory"
	.string "stattfinden! Heiße Trainer\l"
# 636 "data/maps/Route109/scripts.pory"
	.string "willkommen!”$"
# 637 "data/maps/Route109/scripts.pory"

# 638 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 639 "data/maps/Route109/scripts.pory"
	.string "Tipps für Trainer\p"
# 640 "data/maps/Route109/scripts.pory"
	.string "Pokémon mit gleichem Level haben nicht\n"
# 641 "data/maps/Route109/scripts.pory"
	.string "unbedingt identische Statuswerte.\p"
# 642 "data/maps/Route109/scripts.pory"
	.string "Pokémon, die von Trainern aufgezogen\n"
# 643 "data/maps/Route109/scripts.pory"
	.string "werden, wachsen schneller als wilde\l"
# 644 "data/maps/Route109/scripts.pory"
	.string "Pokémon.$"

Route109_EventScript_PkmnSign_Text_0:
# 2 "data/maps/Route109/scripts.pory"
	.string "Hier findest du Informationen über die \n"
	.string "Pokémon, die auf dieser Route leben.$"

Route109_EventScript_PkmnSign_Text_1:
# 4 "data/maps/Route109/scripts.pory"
	.string "Wasser$"

Route109_EventScript_PkmnSign_Text_2:
# 4 "data/maps/Route109/scripts.pory"
	.string "Angel$"

Route109_Text_PkmnSignWasser::
# 59 "data/maps/Route109/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich im Wasser:$"

Route109_Text_PkmnSignAngel::
# 63 "data/maps/Route109/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tief im Wasser:$"

Route109_Text_PkmnSignAngel2::
# 67 "data/maps/Route109/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich tiefer im Wasser:$"

Route109_Text_PkmnSignAngel3::
# 71 "data/maps/Route109/scripts.pory"
	.string "Folgende Pokémon verstecken\n"
	.string "sich sehr tief im Wasser:$"
