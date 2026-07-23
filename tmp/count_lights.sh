#!/bin/bash
SRC="/mnt/c/Users/willy/Documents/GitHub/pokeemerald-modern-oras/data/maps"
MAPS="BattleFrontier_OutsideEast BattleFrontier_OutsideWest DewfordTown EverGrandeCity FallarborTown FortreeCity LavaridgeTown LilycoveCity MauvilleCity MossdeepCity MtPyre_Summit OldaleTown PacifidlogTown PetalburgCity Route101 Route102 Route112 Route113 Route119 SlateportCity SootopolisCity VerdanturfTown"
for d in $MAPS; do
    count=$(grep -c 'OBJ_EVENT_GFX_LIGHT_SPRITE' "$SRC/$d/map.json" 2>/dev/null)
    echo "$d: $count"
done
