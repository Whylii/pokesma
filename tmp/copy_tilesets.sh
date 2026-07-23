#!/bin/bash
SRC="/mnt/c/Users/willy/Documents/GitHub/pokeemerald-modern-oras/data/tilesets"
DST="/home/willyunix/decomps/pokegba/data/tilesets"

for t in slateport mauville lavaridge fallarbor fortree lilycove mossdeep ever_grande pacifidlog sootopolis battle_frontier_outside_east battle_frontier_outside_west; do
    cp -r "$SRC/secondary/$t/"* "$DST/secondary/$t/" 2>/dev/null
    echo "$t ok"
done
