#!/usr/bin/env python3
"""
Toggle porymap.project.cfg identifiers between Emerald and FRLG mode.
Keeps base_game_version=pokeemerald (for triple layer support).
"""
import sys, os, re

CONFIG_PATH = os.path.join(os.getcwd(), "porymap.project.cfg")
if not os.path.exists(CONFIG_PATH):
    CONFIG_PATH = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "porymap.project.cfg")
if not os.path.exists(CONFIG_PATH):
    print("Config not found. Run this script from the project root.")
    sys.exit(1)

with open(CONFIG_PATH, 'r') as f:
    text = f.read()

# Detect current mode from ident/ values
is_frlg = "ident/define_tiles_primary=NUM_TILES_IN_PRIMARY_FRLG" in text

SETTINGS = {
    "base_game_version": ("pokeemerald", "pokeemerald"),  # always emerald for triple layer
    "ident/define_tiles_primary": ("NUM_TILES_IN_PRIMARY", "NUM_TILES_IN_PRIMARY_FRLG"),
    "ident/define_metatiles_primary": ("NUM_METATILES_IN_PRIMARY", "NUM_METATILES_IN_PRIMARY_FRLG"),
    "ident/define_pals_primary": ("NUM_PALS_IN_PRIMARY", "NUM_PALS_IN_PRIMARY_FRLG"),
    "ident/define_mask_behavior": ("METATILE_ATTR_BEHAVIOR_MASK", "METATILE_ATTR_BEHAVIOR_MASK_FRLG"),
    "ident/define_mask_layer": ("METATILE_ATTR_LAYER_MASK", "METATILE_ATTR_LAYER_MASK_FRLG"),
}

mode_name = "FRLG" if not is_frlg else "Emerald"
changed = False

for key, (emerald_val, frlg_val) in SETTINGS.items():
    new_val = frlg_val if not is_frlg else emerald_val
    pattern = rf'^{re.escape(key)}=.*$'
    replacement = f'{key}={new_val}'
    if re.search(pattern, text, re.MULTILINE):
        text = re.sub(pattern, replacement, text, flags=re.MULTILINE)
    else:
        text += f'{replacement}\n'
    changed = True

if changed:
    with open(CONFIG_PATH, 'w', newline='\n') as f:
        f.write(text)
    print(f"Switched to {mode_name} mode (base: pokeemerald for triple layer). Restart Porymap.")
else:
    print("No changes made.")
