const struct Decoration gDecorations[] =
{
    [DECOR_NONE] =
    {
        .id = DECOR_NONE,
        .name = _("Kleiner Tisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DESK,
        .price = 0,
        .description = COMPOUND_STRING(
            "Ein kleiner Tisch\n"
            "für eine Person."),
        .tiles = DecorGfx_SMALL_DESK,
        .icon = {gItemIcon_QuestionMark, gItemIconPalette_QuestionMark},
    },

    [DECOR_SMALL_DESK] =
    {
        .id = DECOR_SMALL_DESK,
        .name = _("Kleiner Tisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DESK,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein kleiner Tisch\n"
            "für eine Person."),
        .tiles = DecorGfx_SMALL_DESK,
        .icon = {NULL, NULL},
    },

    [DECOR_POKEMON_DESK] =
    {
        .id = DECOR_POKEMON_DESK,
        .name = _("Pokémontisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DESK,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein kleiner Tisch,\n"
            "geformt wie ein\n"
            "Pokéball."),
        .tiles = DecorGfx_POKEMON_DESK,
        .icon = {NULL, NULL},
    },

    [DECOR_HEAVY_DESK] =
    {
        .id = DECOR_HEAVY_DESK,
        .name = _("Schwerer Tisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x2,
        .category = DECORCAT_DESK,
        .price = 6000,
        .description = COMPOUND_STRING(
            "Ein großer Tisch\n"
            "aus Stahl. Für\n"
            "Dekorationen."),
        .tiles = DecorGfx_HEAVY_DESK,
        .icon = {gDecorIcon_HeavyDesk, gDecorIconPalette_HeavyDesk},
    },

    [DECOR_RAGGED_DESK] =
    {
        .id = DECOR_RAGGED_DESK,
        .name = _("Intarsientisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x2,
        .category = DECORCAT_DESK,
        .price = 6000,
        .description = COMPOUND_STRING(
            "Ein großer Tisch\n"
            "aus Holz. Für\n"
            "Dekorationen."),
        .tiles = DecorGfx_RAGGED_DESK,
        .icon = {gDecorIcon_RaggedDesk, gDecorIconPalette_RaggedDesk},
    },

    [DECOR_COMFORT_DESK] =
    {
        .id = DECOR_COMFORT_DESK,
        .name = _("Naturtisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x2,
        .category = DECORCAT_DESK,
        .price = 6000,
        .description = COMPOUND_STRING(
            "Ein riesiger Tisch\n"
            "aus Blättern. Für\n"
            "Dekorationen."),
        .tiles = DecorGfx_COMFORT_DESK,
        .icon = {gDecorIcon_ComfortDesk, gDecorIconPalette_ComfortDesk},
    },

    [DECOR_PRETTY_DESK] =
    {
        .id = DECOR_PRETTY_DESK,
        .name = _("Edler Tisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = COMPOUND_STRING(
            "Ein riesiger Tisch\n"
            "aus Glas. Trägt\n"
            "viele Dekorationen."),
        .tiles = DecorGfx_PRETTY_DESK,
        .icon = {gDecorIcon_PrettyDesk, gDecorIconPalette_PrettyDesk},
    },

    [DECOR_BRICK_DESK] =
    {
        .id = DECOR_BRICK_DESK,
        .name = _("Backsteintisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = COMPOUND_STRING(
            "Ein riesiger Tisch\n"
            "aus Backstein. Für\n"
            "viele Dekorationen."),
        .tiles = DecorGfx_BRICK_DESK,
        .icon = {gDecorIcon_BrickDesk, gDecorIconPalette_BrickDesk},
    },

    [DECOR_CAMP_DESK] =
    {
        .id = DECOR_CAMP_DESK,
        .name = _("Campingtisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = COMPOUND_STRING(
            "Ein riesiger Tisch\n"
            "aus Baumstämmen.\n"
            "Für Dekorationen."),
        .tiles = DecorGfx_CAMP_DESK,
        .icon = {gDecorIcon_CampDesk, gDecorIconPalette_CampDesk},
    },

    [DECOR_HARD_DESK] =
    {
        .id = DECOR_HARD_DESK,
        .name = _("Massiver Tisch"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = COMPOUND_STRING(
            "Ein riesiger Tisch\n"
            "aus Stein. Trägt\n"
            "viele Dekorationen."),
        .tiles = DecorGfx_HARD_DESK,
        .icon = {gDecorIcon_HardDesk, gDecorIconPalette_HardDesk},
    },

    [DECOR_SMALL_CHAIR] =
    {
        .id = DECOR_SMALL_CHAIR,
        .name = _("Kleiner Stuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "für eine Person."),
        .tiles = DecorGfx_SMALL_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_POKEMON_CHAIR] =
    {
        .id = DECOR_POKEMON_CHAIR,
        .name = _("Pokémon Stuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "in der Form eines\n"
            "Pokéballs."),
        .tiles = DecorGfx_POKEMON_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_HEAVY_CHAIR] =
    {
        .id = DECOR_HEAVY_CHAIR,
        .name = _("Schwerer Stuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Stahl."),
        .tiles = DecorGfx_HEAVY_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_PRETTY_CHAIR] =
    {
        .id = DECOR_PRETTY_CHAIR,
        .name = _("Edler Stuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Glas."),
        .tiles = DecorGfx_PRETTY_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_COMFORT_CHAIR] =
    {
        .id = DECOR_COMFORT_CHAIR,
        .name = _("Naturstuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Blättern."),
        .tiles = DecorGfx_COMFORT_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_RAGGED_CHAIR] =
    {
        .id = DECOR_RAGGED_CHAIR,
        .name = _("Intarsienstuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Holz."),
        .tiles = DecorGfx_RAGGED_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_BRICK_CHAIR] =
    {
        .id = DECOR_BRICK_CHAIR,
        .name = _("Backsteinstuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Backstein."),
        .tiles = DecorGfx_BRICK_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_CAMP_CHAIR] =
    {
        .id = DECOR_CAMP_CHAIR,
        .name = _("Campingstuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Baumstämmen."),
        .tiles = DecorGfx_CAMP_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_HARD_CHAIR] =
    {
        .id = DECOR_HARD_CHAIR,
        .name = _("Massiver Stuhl"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ein kleiner Stuhl\n"
            "aus Stein."),
        .tiles = DecorGfx_HARD_CHAIR,
        .icon = {NULL, NULL},
    },

    [DECOR_RED_PLANT] =
    {
        .id = DECOR_RED_PLANT,
        .name = _("Rote Pflanze"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_PLANT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Eine leuchtend\n"
            "rote Pflanze."),
        .tiles = DecorGfx_RED_PLANT,
        .icon = {gDecorIcon_RedPlant, gDecorIconPalette_RedPlant},
    },

    [DECOR_TROPICAL_PLANT] =
    {
        .id = DECOR_TROPICAL_PLANT,
        .name = _("Tropenpflanze"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_PLANT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Eine blühende,\n"
            "tropische Pflanze\n"
            "in einem Übertopf."),
        .tiles = DecorGfx_TROPICAL_PLANT,
        .icon = {gDecorIcon_TropicalPlant, gDecorIconPalette_TropicalPlant},
    },

    [DECOR_PRETTY_FLOWERS] =
    {
        .id = DECOR_PRETTY_FLOWERS,
        .name = _("Hübsche Blumen"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_PLANT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Topf mit\n"
            "hübschen Blumen."),
        .tiles = DecorGfx_PRETTY_FLOWERS,
        .icon = {gDecorIcon_PrettyFlowers, gDecorIconPalette_PrettyFlowers},
    },

    [DECOR_COLORFUL_PLANT] =
    {
        .id = DECOR_COLORFUL_PLANT,
        .name = _("Bunte Pflanze"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_PLANT,
        .price = 5000,
        .description = COMPOUND_STRING(
            "Ein großer Topf mit\n"
            "vielen, farben-\n"
            "prächtigen Blumen."),
        .tiles = DecorGfx_COLORFUL_PLANT,
        .icon = {gDecorIcon_ColorfulPlant, gDecorIconPalette_ColorfulPlant},
    },

    [DECOR_BIG_PLANT] =
    {
        .id = DECOR_BIG_PLANT,
        .name = _("Große Pflanze"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_PLANT,
        .price = 5000,
        .description = COMPOUND_STRING(
            "Eine große, schirm-\n"
            "förmige Pflanze in\n"
            "einem großen Topf."),
        .tiles = DecorGfx_BIG_PLANT,
        .icon = {gDecorIcon_BigPlant, gDecorIconPalette_BigPlant},
    },

    [DECOR_GORGEOUS_PLANT] =
    {
        .id = DECOR_GORGEOUS_PLANT,
        .name = _("Zierpflanze"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_PLANT,
        .price = 5000,
        .description = COMPOUND_STRING(
            "Eine beeindruckend\n"
            "große Pflanze in\n"
            "einem großen Topf."),
        .tiles = DecorGfx_GORGEOUS_PLANT,
        .icon = {gDecorIcon_GorgeousPlant, gDecorIconPalette_GorgeousPlant},
    },

    [DECOR_RED_BRICK] =
    {
        .id = DECOR_RED_BRICK,
        .name = _("Roter Stein"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein roter Back-\n"
            "stein. Stelle Deko-\n"
            "rationen darauf."),
        .tiles = DecorGfx_RED_BRICK,
        .icon = {gDecorIcon_RedBrick, gDecorIconPalette_RedBrick},
    },

    [DECOR_YELLOW_BRICK] =
    {
        .id = DECOR_YELLOW_BRICK,
        .name = _("Gelber Stein"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein gelber Back-\n"
            "stein. Stelle Deko-\n"
            "rationen darauf."),
        .tiles = DecorGfx_YELLOW_BRICK,
        .icon = {gDecorIcon_YellowBrick, gDecorIconPalette_YellowBrick},
    },

    [DECOR_BLUE_BRICK] =
    {
        .id = DECOR_BLUE_BRICK,
        .name = _("Blauer Stein"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein blauer Back-\n"
            "stein. Stelle Deko-\n"
            "rationen darauf."),
        .tiles = DecorGfx_BLUE_BRICK,
        .icon = {gDecorIcon_BlueBrick, gDecorIconPalette_BlueBrick},
    },

    [DECOR_RED_BALLOON] =
    {
        .id = DECOR_RED_BALLOON,
        .name = _("Roter Ballon"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein roter Ballon mit\n"
            "Wasser. Platzt beim\n"
            "Drauftreten."),
        .tiles = DecorGfx_RED_BALLOON,
        .icon = {NULL, NULL},
    },

    [DECOR_BLUE_BALLOON] =
    {
        .id = DECOR_BLUE_BALLOON,
        .name = _("Blauer Ballon"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein blauer Ballon\n"
            "mit Wasser. Platzt\n"
            "beim Drauftreten."),
        .tiles = DecorGfx_BLUE_BALLOON,
        .icon = {NULL, NULL},
    },

    [DECOR_YELLOW_BALLOON] =
    {
        .id = DECOR_YELLOW_BALLOON,
        .name = _("Gelber Ballon"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein gelber Ballon\n"
            "mit Wasser. Platzt\n"
            "beim Drauftreten."),
        .tiles = DecorGfx_YELLOW_BALLOON,
        .icon = {NULL, NULL},
    },

    [DECOR_RED_TENT] =
    {
        .id = DECOR_RED_TENT,
        .name = _("Rotes Zelt"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_ORNAMENT,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Ein großes, rotes\n"
            "Zelt. Darin kann man\n"
            "sich verstecken."),
        .tiles = DecorGfx_RED_TENT,
        .icon = {gDecorIcon_RedTent, gDecorIconPalette_RedTent},
    },

    [DECOR_BLUE_TENT] =
    {
        .id = DECOR_BLUE_TENT,
        .name = _("Blaues Zelt"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_ORNAMENT,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Ein großes, blaues\n"
            "Zelt. Darin kann man\n"
            "sich verstecken."),
        .tiles = DecorGfx_BLUE_TENT,
        .icon = {gDecorIcon_BlueTent, gDecorIconPalette_BlueTent},
    },

    [DECOR_SOLID_BOARD] =
    {
        .id = DECOR_SOLID_BOARD,
        .name = _("Solides Brett"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Leg es über ein\n"
            "Loch, um die andere\n"
            "Seite zu erreichen."),
        .tiles = DecorGfx_SOLID_BOARD,
        .icon = {gDecorIcon_SolidBoard, gDecorIconPalette_SolidBoard},
    },

    [DECOR_SLIDE] =
    {
        .id = DECOR_SLIDE,
        .name = _("Rutsche"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_2x4,
        .category = DECORCAT_ORNAMENT,
        .price = 8000,
        .description = COMPOUND_STRING(
            "Nützlich, um von der\n"
            "Plattform hinab-\n"
            "gleiten zu können."),
        .tiles = DecorGfx_SLIDE,
        .icon = {gDecorIcon_Slide, gDecorIconPalette_Slide},
    },

    [DECOR_FENCE_LENGTH] =
    {
        .id = DECOR_FENCE_LENGTH,
        .name = _("Zaun Vertikal"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein kleiner Zaun,\n"
            "der den Durchgang\n"
            "versperrt."),
        .tiles = DecorGfx_FENCE_LENGTH,
        .icon = {NULL, NULL},
    },

    [DECOR_FENCE_WIDTH] =
    {
        .id = DECOR_FENCE_WIDTH,
        .name = _("Zaun Horizontal"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Ein kleiner Zaun,\n"
            "der den Durchgang\n"
            "versperrt."),
        .tiles = DecorGfx_FENCE_WIDTH,
        .icon = {NULL, NULL},
    },

    [DECOR_TIRE] =
    {
        .id = DECOR_TIRE,
        .name = _("Reifen"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_ORNAMENT,
        .price = 800,
        .description = COMPOUND_STRING(
            "Ein großer, alter\n"
            "Reifen. Für\n"
            "Dekorationen."),
        .tiles = DecorGfx_TIRE,
        .icon = {gDecorIcon_Tire, gDecorIconPalette_Tire},
    },

    [DECOR_STAND] =
    {
        .id = DECOR_STAND,
        .name = _("Podest"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_4x2,
        .category = DECORCAT_ORNAMENT,
        .price = 7000,
        .description = COMPOUND_STRING(
            "Ein Podest mit\n"
            "Stufen."),
        .tiles = DecorGfx_STAND,
        .icon = {gDecorIcon_Stand, gDecorIconPalette_Stand},
    },

    [DECOR_MUD_BALL] =
    {
        .id = DECOR_MUD_BALL,
        .name = _("Lehmball"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 200,
        .description = COMPOUND_STRING(
            "Ein großer Ball aus\n"
            "Lehm. Geht kaputt\n"
            "beim Drauftreten."),
        .tiles = DecorGfx_MUD_BALL,
        .icon = {NULL, NULL},
    },

    [DECOR_BREAKABLE_DOOR] =
    {
        .id = DECOR_BREAKABLE_DOOR,
        .name = _("Brechbare Tür"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Eine verrückte Tür,\n"
            "durch die man hin-\n"
            "durchlaufen kann."),
        .tiles = DecorGfx_BREAKABLE_DOOR,
        .icon = {gDecorIcon_BreakableDoor, gDecorIconPalette_BreakableDoor},
    },

    [DECOR_SAND_ORNAMENT] =
    {
        .id = DECOR_SAND_ORNAMENT,
        .name = _("Sandornament"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein Ornament aus\n"
            "Sand. Fällt bei\n"
            "Kontakt zusammen."),
        .tiles = DecorGfx_SAND_ORNAMENT,
        .icon = {gDecorIcon_SandOrnament, gDecorIconPalette_SandOrnament},
    },

    [DECOR_SILVER_SHIELD] =
    {
        .id = DECOR_SILVER_SHIELD,
        .name = _("Silberschild"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 0,
        .description = COMPOUND_STRING(
            "Belohnung für\n"
            "50 Siege in Folge im\n"
            "Duellturm."),
        .tiles = DecorGfx_SILVER_SHIELD,
        .icon = {NULL, NULL},
    },

    [DECOR_GOLD_SHIELD] =
    {
        .id = DECOR_GOLD_SHIELD,
        .name = _("Goldschild"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 0,
        .description = COMPOUND_STRING(
            "Belohnung für\n"
            "100 Siege in Folge\n"
            "im Duellturm."),
        .tiles = DecorGfx_GOLD_SHIELD,
        .icon = {NULL, NULL},
    },

    [DECOR_GLASS_ORNAMENT] =
    {
        .id = DECOR_GLASS_ORNAMENT,
        .name = _("Glasornament"),
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 0,
        .description = COMPOUND_STRING(
            "Das Replikat einer\n"
            "berühmten Skulptur\n"
            "des Kunstmuseums."),
        .tiles = DecorGfx_GLASS_ORNAMENT,
        .icon = {gDecorIcon_GlassOrnament, gDecorIconPalette_GlassOrnament},
    },

    [DECOR_TV] =
    {
        .id = DECOR_TV,
        .name = _("Fernseher"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ein kleiner, grauer\n"
            "Spielzeug-\n"
            "Fernseher."),
        .tiles = DecorGfx_TV,
        .icon = {NULL, NULL},
    },

    [DECOR_ROUND_TV] =
    {
        .id = DECOR_ROUND_TV,
        .name = _("Runder TV"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Ein Spielzeug-\n"
            "Fernseher in der\n"
            "Form von Samurzel."),
        .tiles = DecorGfx_ROUND_TV,
        .icon = {NULL, NULL},
    },

    [DECOR_CUTE_TV] =
    {
        .id = DECOR_CUTE_TV,
        .name = _("Hübscher TV"),
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Ein Spielzeug-\n"
            "Fernseher in der\n"
            "Form eines Eneco."),
        .tiles = DecorGfx_CUTE_TV,
        .icon = {NULL, NULL},
    },

    [DECOR_GLITTER_MAT] =
    {
        .id = DECOR_GLITTER_MAT,
        .name = _("Glitzer-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Eine seltsame\n"
            "Matte. Glitzert\n"
            "beim Drauftreten."),
        .tiles = DecorGfx_GLITTER_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_JUMP_MAT] =
    {
        .id = DECOR_JUMP_MAT,
        .name = _("Sprung-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Eine Trick-Matte,\n"
            "die hüpft, wenn man\n"
            "drauftritt."),
        .tiles = DecorGfx_JUMP_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_SPIN_MAT] =
    {
        .id = DECOR_SPIN_MAT,
        .name = _("Dreh-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Eine Trick-Matte,\n"
            "die sich beim\n"
            "Drauftreten dreht."),
        .tiles = DecorGfx_SPIN_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_C_LOW_NOTE_MAT] =
    {
        .id = DECOR_C_LOW_NOTE_MAT,
        .name = _("Tiefes C-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die das\n"
            "tiefe C spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_C_LOW_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_D_NOTE_MAT] =
    {
        .id = DECOR_D_NOTE_MAT,
        .name = _("D-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die\n"
            "ein D spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_D_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_E_NOTE_MAT] =
    {
        .id = DECOR_E_NOTE_MAT,
        .name = _("E-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die\n"
            "ein E spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_E_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_F_NOTE_MAT] =
    {
        .id = DECOR_F_NOTE_MAT,
        .name = _("F-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die\n"
            "ein F spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_F_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_G_NOTE_MAT] =
    {
        .id = DECOR_G_NOTE_MAT,
        .name = _("G-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die\n"
            "ein G spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_G_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_A_NOTE_MAT] =
    {
        .id = DECOR_A_NOTE_MAT,
        .name = _("A-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die\n"
            "ein A spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_A_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_B_NOTE_MAT] =
    {
        .id = DECOR_B_NOTE_MAT,
        .name = _("H-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die\n"
            "ein H spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_B_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_C_HIGH_NOTE_MAT] =
    {
        .id = DECOR_C_HIGH_NOTE_MAT,
        .name = _("Hohes C-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = COMPOUND_STRING(
            "Eine Matte, die das\n"
            "hohe C spielt, wenn\n"
            "man drauftritt."),
        .tiles = DecorGfx_C_HIGH_NOTE_MAT,
        .icon = {NULL, NULL},
    },

    [DECOR_SURF_MAT] =
    {
        .id = DECOR_SURF_MAT,
        .name = _("Surfer-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "einem Surfer-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_SURF_MAT,
        .icon = {gDecorIcon_SurfMat, gDecorIconPalette_SurfMat},
    },

    [DECOR_THUNDER_MAT] =
    {
        .id = DECOR_THUNDER_MAT,
        .name = _("Donner-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "einem Donner-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_THUNDER_MAT,
        .icon = {gDecorIcon_ThunderMat, gDecorIconPalette_ThunderMat},
    },

    [DECOR_FIRE_BLAST_MAT] =
    {
        .id = DECOR_FIRE_BLAST_MAT,
        .name = _("Feuer-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "Feuersturm-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_FIRE_BLAST_MAT,
        .icon = {gDecorIcon_FireBlastMat, gDecorIconPalette_FireBlastMat},
    },

    [DECOR_POWDER_SNOW_MAT] =
    {
        .id = DECOR_POWDER_SNOW_MAT,
        .name = _("Schnee-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "Pulverschnee-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_POWDER_SNOW_MAT,
        .icon = {gDecorIcon_PowderSnowMat, gDecorIconPalette_PowderSnowMat},
    },

    [DECOR_ATTRACT_MAT] =
    {
        .id = DECOR_ATTRACT_MAT,
        .name = _("Anziehung-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "Anziehung-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_ATTRACT_MAT,
        .icon = {gDecorIcon_AttractMat, gDecorIconPalette_AttractMat},
    },

    [DECOR_FISSURE_MAT] =
    {
        .id = DECOR_FISSURE_MAT,
        .name = _("Geofissur-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "Geofissur-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_FISSURE_MAT,
        .icon = {gDecorIcon_FissureMat, gDecorIconPalette_FissureMat},
    },

    [DECOR_SPIKES_MAT] =
    {
        .id = DECOR_SPIKES_MAT,
        .name = _("Stachler-Matte"),
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = COMPOUND_STRING(
            "Eine Matte mit\n"
            "Stachler-\n"
            "Muster. Für Items."),
        .tiles = DecorGfx_SPIKES_MAT,
        .icon = {gDecorIcon_SpikesMat, gDecorIconPalette_SpikesMat},
    },

    [DECOR_BALL_POSTER] =
    {
        .id = DECOR_BALL_POSTER,
        .name = _("Ballposter"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein kleines Poster\n"
            "von Pokébällen."),
        .tiles = DecorGfx_BALL_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_GREEN_POSTER] =
    {
        .id = DECOR_GREEN_POSTER,
        .name = _("Grünes Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein kleines Poster\n"
            "von Geckarbor."),
        .tiles = DecorGfx_GREEN_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_RED_POSTER] =
    {
        .id = DECOR_RED_POSTER,
        .name = _("Rotes Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein kleines Poster\n"
            "von Flemmli."),
        .tiles = DecorGfx_RED_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_BLUE_POSTER] =
    {
        .id = DECOR_BLUE_POSTER,
        .name = _("Blaues Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein kleines Poster\n"
            "von Hydropi."),
        .tiles = DecorGfx_BLUE_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_CUTE_POSTER] =
    {
        .id = DECOR_CUTE_POSTER,
        .name = _("Hübsches Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = COMPOUND_STRING(
            "Ein kleines Poster\n"
            "von Azurill."),
        .tiles = DecorGfx_CUTE_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_PIKA_POSTER] =
    {
        .id = DECOR_PIKA_POSTER,
        .name = _("Pikachu-Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = COMPOUND_STRING(
            "Ein großes Poster\n"
            "von Pikachu und\n"
            "Pichu."),
        .tiles = DecorGfx_PIKA_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_LONG_POSTER] =
    {
        .id = DECOR_LONG_POSTER,
        .name = _("Schlang-Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = COMPOUND_STRING(
            "Ein großes Poster\n"
            "von Vipitis."),
        .tiles = DecorGfx_LONG_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_SEA_POSTER] =
    {
        .id = DECOR_SEA_POSTER,
        .name = _("Meer-Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = COMPOUND_STRING(
            "Ein großes Poster\n"
            "von Relicanth."),
        .tiles = DecorGfx_SEA_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_SKY_POSTER] =
    {
        .id = DECOR_SKY_POSTER,
        .name = _("Himmel-Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = COMPOUND_STRING(
            "Ein großes Poster\n"
            "von Wingull."),
        .tiles = DecorGfx_SKY_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_KISS_POSTER] =
    {
        .id = DECOR_KISS_POSTER,
        .name = _("Kuss-Poster"),
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = COMPOUND_STRING(
            "Ein großes Poster\n"
            "von Kussilla."),
        .tiles = DecorGfx_KISS_POSTER,
        .icon = {NULL, NULL},
    },

    [DECOR_PICHU_DOLL] =
    {
        .id = DECOR_PICHU_DOLL,
        .name = _("Pichu-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Pichu-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_PICHU_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_PIKACHU_DOLL] =
    {
        .id = DECOR_PIKACHU_DOLL,
        .name = _("Pikachu-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Pikachu-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_PIKACHU_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_MARILL_DOLL] =
    {
        .id = DECOR_MARILL_DOLL,
        .name = _("Marill-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Marill-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_MARILL_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_TOGEPI_DOLL] =
    {
        .id = DECOR_TOGEPI_DOLL,
        .name = _("Togepi-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Togepi-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_TOGEPI_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_CYNDAQUIL_DOLL] =
    {
        .id = DECOR_CYNDAQUIL_DOLL,
        .name = _("Feurigel-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Feurigel-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_CYNDAQUIL_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_CHIKORITA_DOLL] =
    {
        .id = DECOR_CHIKORITA_DOLL,
        .name = _("Endivie-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Endivie-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_CHIKORITA_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_TOTODILE_DOLL] =
    {
        .id = DECOR_TOTODILE_DOLL,
        .name = _("Karnimani-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Karnimani-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_TOTODILE_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_JIGGLYPUFF_DOLL] =
    {
        .id = DECOR_JIGGLYPUFF_DOLL,
        .name = _("Pummeluff-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Pummeluff-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_JIGGLYPUFF_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_MEOWTH_DOLL] =
    {
        .id = DECOR_MEOWTH_DOLL,
        .name = _("Mauzi-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Mauzi-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_MEOWTH_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_CLEFAIRY_DOLL] =
    {
        .id = DECOR_CLEFAIRY_DOLL,
        .name = _("Piepi-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Piepi-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_CLEFAIRY_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_DITTO_DOLL] =
    {
        .id = DECOR_DITTO_DOLL,
        .name = _("Ditto-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Ditto-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_DITTO_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_SMOOCHUM_DOLL] =
    {
        .id = DECOR_SMOOCHUM_DOLL,
        .name = _("Kussilla-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Kussilla-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_SMOOCHUM_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_TREECKO_DOLL] =
    {
        .id = DECOR_TREECKO_DOLL,
        .name = _("Geckarbor-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Geckarbor-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_TREECKO_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_TORCHIC_DOLL] =
    {
        .id = DECOR_TORCHIC_DOLL,
        .name = _("Flemmli-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Flemmli-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_TORCHIC_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_MUDKIP_DOLL] =
    {
        .id = DECOR_MUDKIP_DOLL,
        .name = _("Hydropi-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Hydropi-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_MUDKIP_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_DUSKULL_DOLL] =
    {
        .id = DECOR_DUSKULL_DOLL,
        .name = _("Zwirrl.-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Zwirrlicht-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_DUSKULL_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_WYNAUT_DOLL] =
    {
        .id = DECOR_WYNAUT_DOLL,
        .name = _("Isso-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Isso-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_WYNAUT_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_BALTOY_DOLL] =
    {
        .id = DECOR_BALTOY_DOLL,
        .name = _("Puppance-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Puppance-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_BALTOY_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_KECLEON_DOLL] =
    {
        .id = DECOR_KECLEON_DOLL,
        .name = _("Kecleon-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Kecleon-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_KECLEON_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_AZURILL_DOLL] =
    {
        .id = DECOR_AZURILL_DOLL,
        .name = _("Azurill-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Azurill-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_AZURILL_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_SKITTY_DOLL] =
    {
        .id = DECOR_SKITTY_DOLL,
        .name = _("Eneco-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Eneco-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_SKITTY_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_SWABLU_DOLL] =
    {
        .id = DECOR_SWABLU_DOLL,
        .name = _("Wablu-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Wablu-Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder einen Tisch."),
        .tiles = DecorGfx_SWABLU_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_GULPIN_DOLL] =
    {
        .id = DECOR_GULPIN_DOLL,
        .name = _("Schlupp.-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Schluppuck-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_GULPIN_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_LOTAD_DOLL] =
    {
        .id = DECOR_LOTAD_DOLL,
        .name = _("Loturzel-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Loturzel-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_LOTAD_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_SEEDOT_DOLL] =
    {
        .id = DECOR_SEEDOT_DOLL,
        .name = _("Samurzel-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = COMPOUND_STRING(
            "Samurzel-Puppe.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_SEEDOT_DOLL,
        .icon = {NULL, NULL},
    },

    [DECOR_PIKA_CUSHION] =
    {
        .id = DECOR_PIKA_CUSHION,
        .name = _("Pikachu-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Pikachu-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_PIKA_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_ROUND_CUSHION] =
    {
        .id = DECOR_ROUND_CUSHION,
        .name = _("Rundes Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Marill-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_ROUND_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_KISS_CUSHION] =
    {
        .id = DECOR_KISS_CUSHION,
        .name = _("Kuss-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Kussilla-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_KISS_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_ZIGZAG_CUSHION] =
    {
        .id = DECOR_ZIGZAG_CUSHION,
        .name = _("Zigzachs-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Zigzachs-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_ZIGZAG_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_SPIN_CUSHION] =
    {
        .id = DECOR_SPIN_CUSHION,
        .name = _("Pandir-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Pandir-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_SPIN_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_DIAMOND_CUSHION] =
    {
        .id = DECOR_DIAMOND_CUSHION,
        .name = _("Zobiris-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Zobiris-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_DIAMOND_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_BALL_CUSHION] =
    {
        .id = DECOR_BALL_CUSHION,
        .name = _("Ball-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Ball-Kissen.\n"
            "Für eine Matte oder\n"
            "den Tisch."),
        .tiles = DecorGfx_BALL_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_GRASS_CUSHION] =
    {
        .id = DECOR_GRASS_CUSHION,
        .name = _("Pflanzen-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Kissen mit Gras-\n"
            "muster. Für\n"
            "Matte oder Tisch."),
        .tiles = DecorGfx_GRASS_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_FIRE_CUSHION] =
    {
        .id = DECOR_FIRE_CUSHION,
        .name = _("Feuer-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Kissen mit Feuer-\n"
            "muster. Für\n"
            "Matte oder Tisch."),
        .tiles = DecorGfx_FIRE_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_WATER_CUSHION] =
    {
        .id = DECOR_WATER_CUSHION,
        .name = _("Wasser-Kissen"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = COMPOUND_STRING(
            "Kissen mit Wasser-\n"
            "muster. Für\n"
            "Matte oder Tisch."),
        .tiles = DecorGfx_WATER_CUSHION,
        .icon = {NULL, NULL},
    },

    [DECOR_SNORLAX_DOLL] =
    {
        .id = DECOR_SNORLAX_DOLL,
        .name = _("Relaxo-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_SNORLAX_DOLL,
        .icon = {gDecorIcon_SnorlaxDoll, gDecorIconPalette_SnorlaxDoll},
    },

    [DECOR_RHYDON_DOLL] =
    {
        .id = DECOR_RHYDON_DOLL,
        .name = _("Rizeros-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_RHYDON_DOLL,
        .icon = {gDecorIcon_RhydonDoll, gDecorIconPalette_RhydonDoll},
    },

    [DECOR_LAPRAS_DOLL] =
    {
        .id = DECOR_LAPRAS_DOLL,
        .name = _("Lapras-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_LAPRAS_DOLL,
        .icon = {gDecorIcon_LaprasDoll, gDecorIconPalette_LaprasDoll},
    },

    [DECOR_VENUSAUR_DOLL] =
    {
        .id = DECOR_VENUSAUR_DOLL,
        .name = _("Bisaflor-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_VENUSAUR_DOLL,
        .icon = {gDecorIcon_VenusaurDoll, gDecorIconPalette_VenusaurDoll},
    },

    [DECOR_CHARIZARD_DOLL] =
    {
        .id = DECOR_CHARIZARD_DOLL,
        .name = _("Glurak-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_CHARIZARD_DOLL,
        .icon = {gDecorIcon_CharizardDoll, gDecorIconPalette_CharizardDoll},
    },

    [DECOR_BLASTOISE_DOLL] =
    {
        .id = DECOR_BLASTOISE_DOLL,
        .name = _("Turtok-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_BLASTOISE_DOLL,
        .icon = {gDecorIcon_BlastoiseDoll, gDecorIconPalette_BlastoiseDoll},
    },

    [DECOR_WAILMER_DOLL] =
    {
        .id = DECOR_WAILMER_DOLL,
        .name = _("Wailmer-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_WAILMER_DOLL,
        .icon = {gDecorIcon_WailmerDoll, gDecorIconPalette_WailmerDoll},
    },

    [DECOR_REGIROCK_DOLL] =
    {
        .id = DECOR_REGIROCK_DOLL,
        .name = _("Regirock-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_REGIROCK_DOLL,
        .icon = {gDecorIcon_RegirockDoll, gDecorIconPalette_RegirockDoll},
    },

    [DECOR_REGICE_DOLL] =
    {
        .id = DECOR_REGICE_DOLL,
        .name = _("Regice-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_REGICE_DOLL,
        .icon = {gDecorIcon_RegiceDoll, gDecorIconPalette_RegiceDoll},
    },

    [DECOR_REGISTEEL_DOLL] =
    {
        .id = DECOR_REGISTEEL_DOLL,
        .name = _("Registeel-Puppe"),
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = COMPOUND_STRING(
            "Große Puppe. Leg\n"
            "sie auf eine Matte\n"
            "oder den Tisch."),
        .tiles = DecorGfx_REGISTEEL_DOLL,
        .icon = {gDecorIcon_RegisteelDoll, gDecorIconPalette_RegisteelDoll},
    }
};
