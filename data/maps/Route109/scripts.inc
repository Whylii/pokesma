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


Route109_MapScripts::
# 77 "data/maps/Route109/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route109_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route109_MapScripts_MAP_SCRIPT_ON_LOAD:
# 78 "data/maps/Route109/scripts.pory"
	setflag FLAG_TEMP_1
# 79 "data/maps/Route109/scripts.pory"
	random 2
# 80 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route109_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route109_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 81 "data/maps/Route109/scripts.pory"
	clearflag FLAG_TEMP_1
	return


# 86 "data/maps/Route109/scripts.pory"

# 87 "data/maps/Route109/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 88 "data/maps/Route109/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 89 "data/maps/Route109/scripts.pory"

# 90 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 91 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 92 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 93 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109, 0
# 94 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, Route109_Movement_BrineyEnterBoat
# 95 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_BRINEY
# 97 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 98 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 99 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 100 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 101 "data/maps/Route109/scripts.pory"
	end
# 102 "data/maps/Route109/scripts.pory"

# 103 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 104 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 105 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 107 "data/maps/Route109/scripts.pory"
	end
# 108 "data/maps/Route109/scripts.pory"

# 109 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 110 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 111 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 113 "data/maps/Route109/scripts.pory"
	end
# 114 "data/maps/Route109/scripts.pory"

# 115 "data/maps/Route109/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 116 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 117 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 119 "data/maps/Route109/scripts.pory"
	end
# 120 "data/maps/Route109/scripts.pory"

# 121 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 122 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE109
# 123 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 124 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BOAT, Route109_Movement_SailToDewford
# 125 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_SailToDewford
# 126 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route109/scripts.pory"
	delay 50
# 128 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 129 "data/maps/Route109/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 130 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_PlayerExitBoat
# 131 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 133 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 134 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 135 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 136 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 137 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route109_Movement_BrineyExitBoat
# 138 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 140 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 141 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_ROUTE109_BOAT, MAP_ROUTE109
# 142 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 143 "data/maps/Route109/scripts.pory"
	closemessage
# 144 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 145 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109
# 146 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 147 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 148 "data/maps/Route109/scripts.pory"
	release
# 149 "data/maps/Route109/scripts.pory"
	end
# 150 "data/maps/Route109/scripts.pory"

# 151 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 152 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 153 "data/maps/Route109/scripts.pory"
	walk_down
# 154 "data/maps/Route109/scripts.pory"
	walk_down
# 155 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 156 "data/maps/Route109/scripts.pory"
	walk_fast_down
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
	walk_faster_down
# 167 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 168 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 169 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 170 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 171 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 172 "data/maps/Route109/scripts.pory"
	walk_faster_down
# 173 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 174 "data/maps/Route109/scripts.pory"
	walk_fast_down
# 175 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route109/scripts.pory"
	walk_fast_left
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
	walk_faster_left
# 307 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 308 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 309 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 310 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 311 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 312 "data/maps/Route109/scripts.pory"
	walk_faster_left
# 313 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 314 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 315 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 316 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 317 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 318 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 319 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 320 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 321 "data/maps/Route109/scripts.pory"
	walk_fast_left
# 322 "data/maps/Route109/scripts.pory"
	walk_left
# 323 "data/maps/Route109/scripts.pory"
	walk_left
# 324 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_down
# 325 "data/maps/Route109/scripts.pory"
	step_end
# 326 "data/maps/Route109/scripts.pory"

# 327 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 328 "data/maps/Route109/scripts.pory"
	walk_down
# 329 "data/maps/Route109/scripts.pory"
	walk_down
# 330 "data/maps/Route109/scripts.pory"
	step_end
# 331 "data/maps/Route109/scripts.pory"

# 332 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 333 "data/maps/Route109/scripts.pory"
	walk_down
# 334 "data/maps/Route109/scripts.pory"
	walk_down
# 335 "data/maps/Route109/scripts.pory"
	walk_left
# 336 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_right
# 337 "data/maps/Route109/scripts.pory"
	step_end
# 338 "data/maps/Route109/scripts.pory"

# 339 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 340 "data/maps/Route109/scripts.pory"
	walk_right
# 341 "data/maps/Route109/scripts.pory"
	walk_down
# 342 "data/maps/Route109/scripts.pory"
	step_end
# 343 "data/maps/Route109/scripts.pory"

# 344 "data/maps/Route109/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 345 "data/maps/Route109/scripts.pory"
	walk_left
# 346 "data/maps/Route109/scripts.pory"
	walk_down
# 347 "data/maps/Route109/scripts.pory"
	step_end
# 348 "data/maps/Route109/scripts.pory"

# 349 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 350 "data/maps/Route109/scripts.pory"
	walk_down
# 351 "data/maps/Route109/scripts.pory"
	step_end
# 352 "data/maps/Route109/scripts.pory"

# 353 "data/maps/Route109/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 354 "data/maps/Route109/scripts.pory"
	walk_down
# 355 "data/maps/Route109/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/Route109/scripts.pory"
	step_end
# 357 "data/maps/Route109/scripts.pory"

# 358 "data/maps/Route109/scripts.pory"
Route109_EventScript_MrBriney::
# 359 "data/maps/Route109/scripts.pory"
	lock
# 360 "data/maps/Route109/scripts.pory"
	faceplayer
# 361 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 362 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 363 "data/maps/Route109/scripts.pory"
	end
# 364 "data/maps/Route109/scripts.pory"

# 365 "data/maps/Route109/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 366 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 367 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 368 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 369 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 370 "data/maps/Route109/scripts.pory"
	end
# 371 "data/maps/Route109/scripts.pory"

# 372 "data/maps/Route109/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 373 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 374 "data/maps/Route109/scripts.pory"
	waitmessage
# 375 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 376 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 377 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 378 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 379 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 380 "data/maps/Route109/scripts.pory"
	end
# 381 "data/maps/Route109/scripts.pory"

# 382 "data/maps/Route109/scripts.pory"
Route109_EventScript_SailToDewford::
# 383 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 384 "data/maps/Route109/scripts.pory"
	closemessage
# 385 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 386 "data/maps/Route109/scripts.pory"
	end
# 387 "data/maps/Route109/scripts.pory"

# 388 "data/maps/Route109/scripts.pory"
Route109_EventScript_StayHere::
# 389 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 390 "data/maps/Route109/scripts.pory"
	release
# 391 "data/maps/Route109/scripts.pory"
	end
# 392 "data/maps/Route109/scripts.pory"

# 393 "data/maps/Route109/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 394 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 395 "data/maps/Route109/scripts.pory"
	release
# 396 "data/maps/Route109/scripts.pory"
	end
# 397 "data/maps/Route109/scripts.pory"

# 398 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 399 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 400 "data/maps/Route109/scripts.pory"
	end
# 401 "data/maps/Route109/scripts.pory"

# 402 "data/maps/Route109/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 403 "data/maps/Route109/scripts.pory"
	lock
# 404 "data/maps/Route109/scripts.pory"
	faceplayer
# 405 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 406 "data/maps/Route109/scripts.pory"
	closemessage
# 407 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 408 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route109/scripts.pory"
	release
# 410 "data/maps/Route109/scripts.pory"
	end
# 411 "data/maps/Route109/scripts.pory"

# 412 "data/maps/Route109/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 413 "data/maps/Route109/scripts.pory"
	lock
# 414 "data/maps/Route109/scripts.pory"
	faceplayer
# 415 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 416 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 417 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 418 "data/maps/Route109/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 419 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 420 "data/maps/Route109/scripts.pory"
	closemessage
# 421 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 422 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 423 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 424 "data/maps/Route109/scripts.pory"
	release
# 425 "data/maps/Route109/scripts.pory"
	end
# 426 "data/maps/Route109/scripts.pory"

# 427 "data/maps/Route109/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 428 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 429 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 430 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 431 "data/maps/Route109/scripts.pory"
	release
# 432 "data/maps/Route109/scripts.pory"
	end
# 433 "data/maps/Route109/scripts.pory"

# 434 "data/maps/Route109/scripts.pory"
Route109_EventScript_Woman::
# 435 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 436 "data/maps/Route109/scripts.pory"
	end
# 437 "data/maps/Route109/scripts.pory"

# 438 "data/maps/Route109/scripts.pory"
Route109_EventScript_OldMan::
# 439 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 440 "data/maps/Route109/scripts.pory"
	end
# 441 "data/maps/Route109/scripts.pory"

# 442 "data/maps/Route109/scripts.pory"
Route109_EventScript_Zigzagoon::
# 443 "data/maps/Route109/scripts.pory"
	lock
# 444 "data/maps/Route109/scripts.pory"
	faceplayer
# 445 "data/maps/Route109/scripts.pory"
	waitse
# 446 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 447 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 448 "data/maps/Route109/scripts.pory"
	waitmoncry
# 449 "data/maps/Route109/scripts.pory"
	release
# 450 "data/maps/Route109/scripts.pory"
	end
# 451 "data/maps/Route109/scripts.pory"

# 452 "data/maps/Route109/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 453 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 454 "data/maps/Route109/scripts.pory"
	end
# 455 "data/maps/Route109/scripts.pory"

# 456 "data/maps/Route109/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 457 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 458 "data/maps/Route109/scripts.pory"
	end
# 459 "data/maps/Route109/scripts.pory"

# 460 "data/maps/Route109/scripts.pory"
Route109_EventScript_David::
# 461 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 462 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route109/scripts.pory"
	end
# 464 "data/maps/Route109/scripts.pory"

# 465 "data/maps/Route109/scripts.pory"
Route109_EventScript_Alice::
# 466 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 467 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/Route109/scripts.pory"
	end
# 469 "data/maps/Route109/scripts.pory"

# 470 "data/maps/Route109/scripts.pory"
Route109_EventScript_Huey::
# 471 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 472 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/Route109/scripts.pory"
	end
# 474 "data/maps/Route109/scripts.pory"

# 475 "data/maps/Route109/scripts.pory"
Route109_EventScript_Edmond::
# 476 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 477 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/Route109/scripts.pory"
	end
# 479 "data/maps/Route109/scripts.pory"

# 480 "data/maps/Route109/scripts.pory"
Route109_EventScript_Ricky::
# 481 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 482 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 483 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 484 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 485 "data/maps/Route109/scripts.pory"
	release
# 486 "data/maps/Route109/scripts.pory"
	end
# 487 "data/maps/Route109/scripts.pory"

# 488 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 489 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 490 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 492 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 493 "data/maps/Route109/scripts.pory"
	release
# 494 "data/maps/Route109/scripts.pory"
	end
# 495 "data/maps/Route109/scripts.pory"

# 496 "data/maps/Route109/scripts.pory"
Route109_EventScript_RickyRematch::
# 497 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 498 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 499 "data/maps/Route109/scripts.pory"
	end
# 500 "data/maps/Route109/scripts.pory"

# 501 "data/maps/Route109/scripts.pory"
Route109_EventScript_Lola::
# 502 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 503 "data/maps/Route109/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 504 "data/maps/Route109/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 505 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 506 "data/maps/Route109/scripts.pory"
	release
# 507 "data/maps/Route109/scripts.pory"
	end
# 508 "data/maps/Route109/scripts.pory"

# 509 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 510 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 511 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 512 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 513 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 514 "data/maps/Route109/scripts.pory"
	release
# 515 "data/maps/Route109/scripts.pory"
	end
# 516 "data/maps/Route109/scripts.pory"

# 517 "data/maps/Route109/scripts.pory"
Route109_EventScript_LolaRematch::
# 518 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 519 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 520 "data/maps/Route109/scripts.pory"
	end
# 521 "data/maps/Route109/scripts.pory"

# 522 "data/maps/Route109/scripts.pory"
Route109_EventScript_Austina::
# 523 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 524 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 525 "data/maps/Route109/scripts.pory"
	end
# 526 "data/maps/Route109/scripts.pory"

# 527 "data/maps/Route109/scripts.pory"
Route109_EventScript_Gwen::
# 528 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 529 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/Route109/scripts.pory"
	end
# 531 "data/maps/Route109/scripts.pory"

# 532 "data/maps/Route109/scripts.pory"
Route109_EventScript_Carter::
# 533 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 534 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route109/scripts.pory"
	end
# 536 "data/maps/Route109/scripts.pory"

# 537 "data/maps/Route109/scripts.pory"
Route109_EventScript_Paul::
# 538 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 539 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 540 "data/maps/Route109/scripts.pory"
	end
# 541 "data/maps/Route109/scripts.pory"

# 542 "data/maps/Route109/scripts.pory"
Route109_EventScript_Mel::
# 543 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 544 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route109/scripts.pory"
	end
# 546 "data/maps/Route109/scripts.pory"

# 547 "data/maps/Route109/scripts.pory"
Route109_EventScript_Chandler::
# 548 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 549 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route109/scripts.pory"
	end
# 551 "data/maps/Route109/scripts.pory"

# 552 "data/maps/Route109/scripts.pory"
Route109_EventScript_Hailey::
# 553 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 554 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route109/scripts.pory"
	end
# 556 "data/maps/Route109/scripts.pory"

# 557 "data/maps/Route109/scripts.pory"
Route109_EventScript_Elijah::
# 558 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 559 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 560 "data/maps/Route109/scripts.pory"
	end
# 561 "data/maps/Route109/scripts.pory"

# 562 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 563 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 564 "data/maps/Route109/scripts.pory"
	.string "Graphitport City angelegt.\p"
# 565 "data/maps/Route109/scripts.pory"
	.string "Ich vermute, du gehst jetzt zu Kapt.\n"
# 566 "data/maps/Route109/scripts.pory"
	.string "Brigg und bringst ihm die Devon-\l"
# 567 "data/maps/Route109/scripts.pory"
	.string "Waren?$"
# 568 "data/maps/Route109/scripts.pory"

# 569 "data/maps/Route109/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 570 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Überbringst du nicht die\n"
# 571 "data/maps/Route109/scripts.pory"
	.string "Devon-Waren?\p"
# 572 "data/maps/Route109/scripts.pory"
	.string "Heißt das, du willst nach Faustauhaven\n"
# 573 "data/maps/Route109/scripts.pory"
	.string "zurücksegeln?$"
# 574 "data/maps/Route109/scripts.pory"

# 575 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 576 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Also, auf nach Faustauhaven!\p"
# 577 "data/maps/Route109/scripts.pory"
	.string "Anker gelichtet!\n"
# 578 "data/maps/Route109/scripts.pory"
	.string "Pecko, wir setzen Segel, mein Liebling!$"
# 579 "data/maps/Route109/scripts.pory"

# 580 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 581 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Dann geh und überbringe die\n"
# 582 "data/maps/Route109/scripts.pory"
	.string "Devon-Waren. Ich warte hier.$"
# 583 "data/maps/Route109/scripts.pory"

# 584 "data/maps/Route109/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 585 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Ahoi! Wir haben in\n"
# 586 "data/maps/Route109/scripts.pory"
	.string "Graphitport City angelegt!\p"
# 587 "data/maps/Route109/scripts.pory"
	.string "Wann immer du magst, können wir wieder\n"
# 588 "data/maps/Route109/scripts.pory"
	.string "die Segel setzen.$"
# 589 "data/maps/Route109/scripts.pory"

# 590 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 591 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Ahoi! Für dich fahre ich\n"
# 592 "data/maps/Route109/scripts.pory"
	.string "jederzeit wieder raus!\p"
# 593 "data/maps/Route109/scripts.pory"
	.string "Nun, wo soll es hingehen?$"
# 594 "data/maps/Route109/scripts.pory"

# 595 "data/maps/Route109/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 596 "data/maps/Route109/scripts.pory"
	.string "Mr. Brack: Sag mir einfach Bescheid,\n"
# 597 "data/maps/Route109/scripts.pory"
	.string "wenn wir wieder Segel setzen sollen.$"
# 598 "data/maps/Route109/scripts.pory"

# 599 "data/maps/Route109/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 600 "data/maps/Route109/scripts.pory"
	.string "Yo, Trainer!\n"
# 601 "data/maps/Route109/scripts.pory"
	.string "Seid ihr in Eile,\l"
# 602 "data/maps/Route109/scripts.pory"
	.string "müsst wieder fort,\l"
# 603 "data/maps/Route109/scripts.pory"
	.string "erfrischt euch doch an Papas Ort!$"
# 604 "data/maps/Route109/scripts.pory"

# 605 "data/maps/Route109/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 606 "data/maps/Route109/scripts.pory"
	.string "Kleine Kinder sind blitzschnell und\n"
# 607 "data/maps/Route109/scripts.pory"
	.string "flink.\p"
# 608 "data/maps/Route109/scripts.pory"
	.string "Du darfst sie nicht eine Sekunde aus\n"
# 609 "data/maps/Route109/scripts.pory"
	.string "den Augen lassen. Das strengt an.\p"
# 610 "data/maps/Route109/scripts.pory"
	.string "Meine Kinder sind mit meinen Pokémon\n"
# 611 "data/maps/Route109/scripts.pory"
	.string "zusammen, da sind sie gut aufgehoben.$"
# 612 "data/maps/Route109/scripts.pory"

# 613 "data/maps/Route109/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 614 "data/maps/Route109/scripts.pory"
	.string "Wir brauchen ganz lange, um unsere\n"
# 615 "data/maps/Route109/scripts.pory"
	.string "Sandburg zu bauen.$"
# 616 "data/maps/Route109/scripts.pory"

# 617 "data/maps/Route109/scripts.pory"
Route109_Text_YouCanHaveThis:
# 618 "data/maps/Route109/scripts.pory"
	.string "Das schenk ich dir!$"
# 619 "data/maps/Route109/scripts.pory"

# 620 "data/maps/Route109/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 621 "data/maps/Route109/scripts.pory"
	.string "Wir nehmen allen Sand vom Strand\n"
# 622 "data/maps/Route109/scripts.pory"
	.string "und bauen damit eine gaaanz große Burg.\p"
# 623 "data/maps/Route109/scripts.pory"
	.string "Und dann sind wir Königin und König!\p"
# 624 "data/maps/Route109/scripts.pory"
	.string "Und du darfst unser Diener sein.$"
# 625 "data/maps/Route109/scripts.pory"

# 626 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 627 "data/maps/Route109/scripts.pory"
	.string "Das Wasser in diesen Breiten ist sauber.\p"
# 628 "data/maps/Route109/scripts.pory"
	.string "Aber ich sammle zusammen mit meinem\n"
# 629 "data/maps/Route109/scripts.pory"
	.string "Zigzachs den Müll am Ufer auf.\p"
# 630 "data/maps/Route109/scripts.pory"
	.string "Verschmutztes Wasser wird zu Regen und\n"
# 631 "data/maps/Route109/scripts.pory"
	.string "gelangt in die Flüsse, aus denen wir\l"
# 632 "data/maps/Route109/scripts.pory"
	.string "unser Trinkwasser gewinnen…\p"
# 633 "data/maps/Route109/scripts.pory"
	.string "Verschmutzen wir das Meer, bekommen\n"
# 634 "data/maps/Route109/scripts.pory"
	.string "wir den Schmutz wieder zurück.$"
# 635 "data/maps/Route109/scripts.pory"

# 636 "data/maps/Route109/scripts.pory"
Route109_Text_ZigzagoonCry:
# 637 "data/maps/Route109/scripts.pory"
	.string "Zigzachs: Guguu?$"
# 638 "data/maps/Route109/scripts.pory"

# 639 "data/maps/Route109/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 640 "data/maps/Route109/scripts.pory"
	.string "Strandhaus\p"
# 641 "data/maps/Route109/scripts.pory"
	.string "“Mögen heiße Kämpfe im heißen Sand\n"
# 642 "data/maps/Route109/scripts.pory"
	.string "stattfinden! Heiße Trainer\l"
# 643 "data/maps/Route109/scripts.pory"
	.string "willkommen!”$"
# 644 "data/maps/Route109/scripts.pory"

# 645 "data/maps/Route109/scripts.pory"
Route109_Text_TrainerTipsSign:
# 646 "data/maps/Route109/scripts.pory"
	.string "Tipps für Trainer\p"
# 647 "data/maps/Route109/scripts.pory"
	.string "Pokémon mit gleichem Level haben nicht\n"
# 648 "data/maps/Route109/scripts.pory"
	.string "unbedingt identische Statuswerte.\p"
# 649 "data/maps/Route109/scripts.pory"
	.string "Pokémon, die von Trainern aufgezogen\n"
# 650 "data/maps/Route109/scripts.pory"
	.string "werden, wachsen schneller als wilde\l"
# 651 "data/maps/Route109/scripts.pory"
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
