#ifndef GUARD_POKEDEX_AREA_REGION_MAP_H
#define GUARD_POKEDEX_AREA_REGION_MAP_H

#include "region_map.h"

void LoadPokedexAreaMapGfx(void);
void LoadPokedexAreaMapGfxForRegionType(enum RegionMapType regionMapType);
bool32 TryShowPokedexAreaMap(void);
void PokedexAreaMapChangeBgY(u32 move);

#endif // GUARD_POKEDEX_AREA_REGION_MAP_H
