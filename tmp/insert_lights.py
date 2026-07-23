#!/usr/bin/env python3
import json, os, glob

SRC = "/mnt/c/Users/willy/Documents/GitHub/pokeemerald-modern-oras/data/maps"
DST = "/home/willyunix/decomps/pokegba/data/maps"

maps_with_lights = [
    "BattleFrontier_OutsideEast", "BattleFrontier_OutsideWest", "DewfordTown",
    "EverGrandeCity", "FallarborTown", "FortreeCity", "LavaridgeTown",
    "LilycoveCity", "MauvilleCity", "MossdeepCity", "MtPyre_Summit",
    "OldaleTown", "PacifidlogTown", "PetalburgCity", "Route101", "Route102",
    "Route112", "Route113", "Route119", "SlateportCity", "SootopolisCity",
    "VerdanturfTown"
]

for map_name in maps_with_lights:
    src_path = os.path.join(SRC, map_name, "map.json")
    dst_path = os.path.join(DST, map_name, "map.json")
    
    if not os.path.exists(src_path) or not os.path.exists(dst_path):
        print(f"SKIP {map_name}: missing file")
        continue
    
    with open(src_path) as f:
        src_data = json.load(f)
    with open(dst_path) as f:
        dst_data = json.load(f)
    
    # Extract light sprites from source
    lights = [e for e in src_data.get("object_events", [])
              if e.get("graphics_id") == "OBJ_EVENT_GFX_LIGHT_SPRITE"]
    
    if not lights:
        print(f"{map_name}: no light sprites found in source")
        continue
    
    # Remove any existing lights from dest
    dst_data["object_events"] = [e for e in dst_data.get("object_events", [])
                                 if e.get("graphics_id") != "OBJ_EVENT_GFX_LIGHT_SPRITE"]
    
    # Append lights
    dst_data["object_events"].extend(lights)
    
    with open(dst_path, "w") as f:
        json.dump(dst_data, f, indent=2)
    
    print(f"{map_name}: added {len(lights)} light sprite(s)")
