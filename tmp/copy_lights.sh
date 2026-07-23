#!/bin/bash
SRC="/mnt/c/Users/willy/Documents/GitHub/pokeemerald-modern-oras/data/maps"
DST="/home/willyunix/decomps/pokegba/data/maps"

MAPS="BattleFrontier_OutsideEast BattleFrontier_OutsideWest DewfordTown EverGrandeCity FallarborTown FortreeCity LavaridgeTown LilycoveCity MauvilleCity MossdeepCity MtPyre_Summit OldaleTown PacifidlogTown PetalburgCity Route101 Route102 Route112 Route113 Route119 SlateportCity SootopolisCity VerdanturfTown"

for m in $MAPS; do
    for f in map.json events.inc scripts.inc scripts.pory; do
        if [ -f "$SRC/$m/$f" ]; then
            cp "$SRC/$m/$f" "$DST/$m/$f"
        fi
    done
    echo "$m"
done
