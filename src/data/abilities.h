const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Spezial-Fähigkeit."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Duftnote"),
        .description = COMPOUND_STRING("Lässt Gegner mögl. zurückschrecken."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Niesel"),
        .description = COMPOUND_STRING("Ruft im Kampf Regen herbei."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Temposchub"),
        .description = COMPOUND_STRING("Erhöht Init. nach und nach."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Kampfpanzer"),
        .description = COMPOUND_STRING("Wehrt Volltreffer ab."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Robustheit"),
        .description = COMPOUND_STRING("Keine 1-Treffer-K.O.-Attacken."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Feuchtigkeit"),
        .description = COMPOUND_STRING("Verhindert Selbstzerstörung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Flexibilität"),
        .description = COMPOUND_STRING("Verhindert Paralyse."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sandschleier"),
        .description = COMPOUND_STRING("Erhöht Fluchtw. im Sandsturm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Statik"),
        .description = COMPOUND_STRING("Paralysiert bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Voltabsorber"),
        .description = COMPOUND_STRING("Wandelt Elektriz. in KP um."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("H2O-Absorber"),
        .description = COMPOUND_STRING("Wandelt Wasser in KP um."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Dösigkeit"),
        .description = COMPOUND_STRING("Verhindert Anziehung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Wolke Sieben"),
        .description = COMPOUND_STRING("Keine Wetter-Effekte."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Facettenauge"),
        .description = COMPOUND_STRING("Steigert Genauigkeit."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Verhindert Einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Farbwechsel"),
        .description = COMPOUND_STRING("Ändert Att.-Typ des Gegners."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunität"),
        .description = COMPOUND_STRING("Verhindert Vergiftungen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Feuerfänger"),
        .description = COMPOUND_STRING("Steigt, wenn von Feuer getr."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Puderabwehr"),
        .description = COMPOUND_STRING("Gegen Zusatz-Effekte."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Tempomacher"),
        .description = COMPOUND_STRING("Verhindert Verwirrung."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Saugnapf"),
        .description = COMPOUND_STRING("Verankert den Körper."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Bedroher"),
        .description = COMPOUND_STRING("Senkt Angriff des Gegners."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Wegsperre"),
        .description = COMPOUND_STRING("Hindert Gegner an Flucht."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rauhaut"),
        .description = COMPOUND_STRING("Verletzt bei Berührung."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wunderwache"),
        .description = COMPOUND_STRING("Nur sehr eff. Treff. schaden"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Schwebe"),
        .description = COMPOUND_STRING("Kein Treffer bei Boden-Att."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Sporenwirt"),
        .description = COMPOUND_STRING("Gibt bei Kontakt Sporen ab."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchro"),
        .description = COMPOUND_STRING("Gibt Statusprobleme weiter."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Neutraltorso"),
        .description = COMPOUND_STRING("Verhindert Fähigk.-Reduk."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Innere Kraft"),
        .description = COMPOUND_STRING("Heilt bei Austausch."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Blitzfänger"),
        .description = COMPOUND_STRING("Zieht Elektro-Attacken an."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Edelmut"),
        .description = COMPOUND_STRING("Verstärkt Zusatz-Effekte."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Wassertempo"),
        .description = COMPOUND_STRING("Steigert Init. bei Regen."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Steigert Init. bei Sonne."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Erleuchtung"),
        .description = COMPOUND_STRING("Mehr Pokémon-Begegnungen."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Erfassen"),
        .description = COMPOUND_STRING("Kopiert Spezial-Fähigkeit."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE, //B_UPDATED_ABILITY_DATA >= GEN_4
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Kraftkoloss"),
        .description = COMPOUND_STRING("Steigert Angriff"),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Giftdorn"),
        .description = COMPOUND_STRING("Vergiftet bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Konzentrator"),
        .description = COMPOUND_STRING("Verhindert Zurückschrecken."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magmapanzer"),
        .description = COMPOUND_STRING("Verhindert Einfrieren."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Aquahülle"),
        .description = COMPOUND_STRING("Verhindert Verbrennungen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnetfalle"),
        .description = COMPOUND_STRING("Fängt STAHL-POKéMON."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Lärmschutz"),
        .description = COMPOUND_STRING("Immun gg. Lärm-Attacken."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Regengenuss"),
        .description = COMPOUND_STRING("KP-Anstieg bei Regen."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sandsturm"),
        .description = COMPOUND_STRING("Erzeugt einen Sandsturm."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Erzwinger"),
        .description = COMPOUND_STRING("Steigert AP-Verbrauch des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Speckschicht"),
        .description = COMPOUND_STRING("Schutz vor Hitze und Kälte."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Frühwecker"),
        .description = COMPOUND_STRING("Schnelles Aufwachen."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flammkörper"),
        .description = COMPOUND_STRING("Verbrennt bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Angsthase"),
        .description = COMPOUND_STRING("Erleichtert das Entkommen."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Adlerauge"),
        .description = COMPOUND_STRING("Verhindert Genauigk.-Verlust."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Scherenmacht"),
        .description = COMPOUND_STRING("Verhindert Angr.-Reduz."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Mitnahme"),
        .description = COMPOUND_STRING("Kann Items finden."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Schnarchnase"),
        .description = COMPOUND_STRING("Greift in jedem 2. Zug an."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Übereifer"),
        .description = COMPOUND_STRING("Tauscht Genauigk. u. Kraft."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Charmebolzen"),
        .description = COMPOUND_STRING("Wirkt bei Kontakt betörend."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("Bildet ein Team mit Minun."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("Bildet ein Team mit Plusle."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Wetterlage"),
        .description = COMPOUND_STRING("Ist vom Wetter abhängig."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_4,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Klebehülle"),
        .description = COMPOUND_STRING("Verhindert Item-Diebstahl."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Häutung"),
        .description = COMPOUND_STRING("Heilt durch Häutung."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Ehrgeiz"),
        .description = COMPOUND_STRING("Steigert Angr. bei Leiden."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Wunderschuppe"),
        .description = COMPOUND_STRING("Steigert Vert. bei Leiden."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Saftsack"),
        .description = COMPOUND_STRING("Saug-Attacken schädigen."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Notdünger"),
        .description = COMPOUND_STRING("Erhöht Pflanzen-Attacken in der Not."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Großbrand"),
        .description = COMPOUND_STRING("Erhöht Feuer-Attacken in der Not."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Sturzbach"),
        .description = COMPOUND_STRING("Erhöht Wasser-Attacken in der Not."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Hexaplaga"),
        .description = COMPOUND_STRING("Erhöht Käfer-Attacken in der Not."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Steinhaupt"),
        .description = COMPOUND_STRING("Verh. Rückstoß-Schaden."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Dürre"),
        .description = COMPOUND_STRING("Erzeugt Sonne im Kampf."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arenafalle"),
        .description = COMPOUND_STRING("Verhindert Flucht."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Munterkeit"),
        .description = COMPOUND_STRING("Verhindert Einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Pulverrauch"),
        .description = COMPOUND_STRING("Verhindert Fähigk.-Reduz."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Mentalkraft"),
        .description = COMPOUND_STRING("Steigert Angr."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Panzerhülle"),
        .description = COMPOUND_STRING("Wehrt Volltreffer ab."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Luftschleuse"),
        .description = COMPOUND_STRING("Eliminiert die Wirkung des Wetters."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Taumelschritt"),
        .description = COMPOUND_STRING("Erhöht Fluchtw. bei Verwirrung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Starthilfe"),
        .description = COMPOUND_STRING("Elektro-Att. steigert Init."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalität"),
        .description = COMPOUND_STRING("Stärker gg. gleiches Geschlecht."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Felsenfest"),
        .description = COMPOUND_STRING("Erhöht Init. bei Zurückschrecken."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Schneemantel"),
        .description = COMPOUND_STRING("Erhöht Fluchtw. bei Hagel."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Völlerei"),
        .description = COMPOUND_STRING("Frühzeitiger Beeren-Verzehr."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Kurzschluss"),
        .description = COMPOUND_STRING("Volltreffer max. Angriff."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Entlastung"),
        .description = COMPOUND_STRING("Item-Verbr. steigert Init."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Hitzeschutz"),
        .description = COMPOUND_STRING("Senkt die Kraft von Feuer-Attacken."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Wankelmut"),
        .description = COMPOUND_STRING("Stärkere Statusveränderungen."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Trockenheit"),
        .description = COMPOUND_STRING("Regen heilt, Feuer schadet mehr."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Passt Angriff an Gegner an."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Eisenfaust"),
        .description = COMPOUND_STRING("Stärkt Box-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Aufheber"),
        .description = COMPOUND_STRING("Steigert KP bei Vergiftung."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Anpassung"),
        .description = COMPOUND_STRING("Verstärkt Typen-Bonus."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Wertelink"),
        .description = COMPOUND_STRING("Serien-Att. max. Treffer."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("Heilt Status bei Regen."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solarkraft"),
        .description = COMPOUND_STRING("Steigert Sp. Angriff in Sonne."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Rasanz"),
        .description = COMPOUND_STRING("Erhöht Init. bei Statusproblem."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Regulierung"),
        .description = COMPOUND_STRING("Attacken werden zu Normal-Att."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Superschütze"),
        .description = COMPOUND_STRING("Verstärkt Volltreffer."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magieschild"),
        .description = COMPOUND_STRING("Nur direkte Angriffe schaden."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Schildlos"),
        .description = COMPOUND_STRING("Alle Attacken treffen immer."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Zeitspiel"),
        .description = COMPOUND_STRING("Greift immer zuletzt an."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Techniker"),
        .description = COMPOUND_STRING("Stärkt schwächere Attacken."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Floraschild"),
        .description = COMPOUND_STRING("Schützt vor Status in Sonne."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Tollpatsch"),
        .description = COMPOUND_STRING("Kann Items nicht nutzen."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Überbrückung"),
        .description = COMPOUND_STRING("Ignoriert Fähigkeiten des Gegners."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Glückspilz"),
        .description = COMPOUND_STRING("Erhöht Volltrefferquote."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Finalschlag"),
        .description = COMPOUND_STRING("Schädigt den Gegner bei K.O."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Vorahnung"),
        .description = COMPOUND_STRING("Spürt gefährliche Attacken."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Vorwarnung"),
        .description = COMPOUND_STRING("Erkennt gegnerische Attacke."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unkenntnis"),
        .description = COMPOUND_STRING("Ignoriert Statusveränderungen."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Aufwertung"),
        .description = COMPOUND_STRING("Verstärkt nicht sehr eff. Attacken."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("Schwächt sehr eff. Attacken."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Saumselig"),
        .description = COMPOUND_STRING("Angriff und Init. anfangs halbiert."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Rauflust"),
        .description = COMPOUND_STRING("Trifft auch Geist-Pokémon."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Sturmsog"),
        .description = COMPOUND_STRING("Zieht Wasser-Attacken an."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Eishaut"),
        .description = COMPOUND_STRING("Heilt KP bei Hagel/Schnee."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Felskern"),
        .description = COMPOUND_STRING("Reduziert sehr eff. Treffer."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Hagelalarm"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Ruft im Kampf Schnee herbei."),
    #else
        .description = COMPOUND_STRING("Ruft im Kampf Hagel herbei."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honigmaul"),
        .description = COMPOUND_STRING("Kann Honig finden."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Schnüffler"),
        .description = COMPOUND_STRING("Erkundet Item des Gegners."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Achtlos"),
        .description = COMPOUND_STRING("Stärkt Attacken mit Rückstoß."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Variabilität"),
        .description = COMPOUND_STRING("Ändert Typ durch Item."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Pflanzengabe"),
        .description = COMPOUND_STRING("Stärkt Mitstreiter in Sonne."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_5,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Alptraum"),
        .description = COMPOUND_STRING("Schädigt schlafende Gegner."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Langfinger"),
        .description = COMPOUND_STRING("Stiehlt Item bei Berührung."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Rohe Gewalt"),
        .description = COMPOUND_STRING("Stärker, aber kein Zusatz-Effekt."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Umkehrung"),
        .description = COMPOUND_STRING("Kehrt Statusveränderungen um."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Anspannung"),
        .description = COMPOUND_STRING("Verhindert Beeren-Verzehr."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Siegeswille"),
        .description = COMPOUND_STRING("Steigert Angriff bei Status-Senkung."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Schwächling"),
        .description = COMPOUND_STRING("Schwächt bei halben KP."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Tastfluch"),
        .description = COMPOUND_STRING("Deaktiviert Attacken bei Kontakt."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Heilherz"),
        .description = COMPOUND_STRING("Heilt Status des Partners."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Freundeshut"),
        .description = COMPOUND_STRING("Senkt Schaden für Partner."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Bruchrüstung"),
        .description = COMPOUND_STRING("Vert. sinkt, Init. steigt bei Treff."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Schwermetall"),
        .description = COMPOUND_STRING("Verdoppelt Gewicht."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Leichtmetal"),
        .description = COMPOUND_STRING("Halbiert Gewicht."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multischuppe"),
        .description = COMPOUND_STRING("Halbiert Schaden bei vollen KP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Giftwahn"),
        .description = COMPOUND_STRING("Steigert Angriff bei Vergiftung."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Hitzewahn"),
        .description = COMPOUND_STRING("Steigert Sp. Angriff bei Verbrennung."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Reiche Ernte"),
        .description = COMPOUND_STRING("Erntet verbrauchte Beere wieder."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathie"),
        .description = COMPOUND_STRING("Kein Schaden durch Partner."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Gefühlswippe"),
        .description = COMPOUND_STRING("Status ändert sich nach u. nach."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Partikelschutz"),
        .description = COMPOUND_STRING("Blockt Wetter- und Pulver-Att."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Giftgriff"),
        .description = COMPOUND_STRING("Vergiftet Gegner bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Belebekraft"),
        .description = COMPOUND_STRING("Heilt KP bei Austausch."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Brustbieter"),
        .description = COMPOUND_STRING("Verhindert Vert.-Senkung."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sandscharrer"),
        .description = COMPOUND_STRING("Erhöht Init. im Sandsturm."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wunderhaut"),
        .description = COMPOUND_STRING("Kann Status-Attacken abwehren."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analyse"),
        .description = COMPOUND_STRING("Stärker bei späterem Angriff."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Trugbild"),
        .description = COMPOUND_STRING("Täuscht Partner-Pokémon vor."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Doppelgänger"),
        .description = COMPOUND_STRING("Verwandelt sich in Gegner."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Schwebedurch"),
        .description = COMPOUND_STRING("Durchdringt Barrieren."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mumie"),
        .description = COMPOUND_STRING("Überträgt sich bei Kontakt."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Hochmut"),
        .description = COMPOUND_STRING("Steigert Angriff bei K.O."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Redlichkeit"),
        .description = COMPOUND_STRING("Erhöht Angriff bei Unlicht-Treffer."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Hasenfuß"),
        .description = COMPOUND_STRING("Erhöht Init. bei Schreck-Attacken."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magiespiegel"),
        .description = COMPOUND_STRING("Reflektiert Status-Attacken."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Vegetarier"),
        .description = COMPOUND_STRING("Pfl.-Attacken steigern Angriff."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Strolch"),
        .description = COMPOUND_STRING("Status-Attacken gehen zuerst."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sandgewalt"),
        .description = COMPOUND_STRING("Steigert Kraft im Sandsturm."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Eisenstachel"),
        .description = COMPOUND_STRING("Verletzt bei Berührung."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Trance-Modus"),
        .description = COMPOUND_STRING("Verwandelt bei halben KP."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeOverwritten = B_UPDATED_ABILITY_DATA >= GEN_7,
        .failsOnImposter = TRUE,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Triumphstern"),
        .description = COMPOUND_STRING("Erhöht Genauigkeit im Team."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turbobrand"),
        .description = COMPOUND_STRING("Ignoriert Fähigkeiten des Gegners."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Ignoriert Fähigkeiten des Gegners."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Dufthülle"),
        .description = COMPOUND_STRING("Schützt vor Attacken-Blockade."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Blütenhülle"),
        .description = COMPOUND_STRING("Schützt Pflanzen-Pokémon."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Backentaschen"),
        .description = COMPOUND_STRING("Beeren-Verzehr heilt KP."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Wandlungskunst"),
        .description = COMPOUND_STRING("Ändert Typ an Attacke an."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fellkleid"),
        .description = COMPOUND_STRING("Verdoppelt Vert."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Zauberer"),
        .description = COMPOUND_STRING("Stiehlt Item bei Attacke."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Kugelsicher"),
        .description = COMPOUND_STRING("Immun gg. Geschoss-Att."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Unbeugsamkeit"),
        .description = COMPOUND_STRING("Steigert Sp. Angriff bei Senkung."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Titankiefer"),
        .description = COMPOUND_STRING("Stärkt Biss-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Frostschicht"),
        .description = COMPOUND_STRING("Normal-Att. werden zu Eis."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Zuckerhülle"),
        .description = COMPOUND_STRING("Schützt Team vor Schlaf."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Taktikwechsel"),
        .description = COMPOUND_STRING("Verwandelt sich im Kampf."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Orkanschwingen"),
        .description = COMPOUND_STRING("Flug-Attacken gehen zuerst."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Megawumme"),
        .description = COMPOUND_STRING("Stärkt Impuls-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Pflanzenpelz"),
        .description = COMPOUND_STRING("Erhöht Vert. im Grasfeld."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Nutznießer"),
        .description = COMPOUND_STRING("Gibt Item an Partner weiter."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Krallenwucht"),
        .description = COMPOUND_STRING("Stärkt Kontakt-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Feenschicht"),
        .description = COMPOUND_STRING("Normal-Att. werden zu Fee."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Viskosität"),
        .description = COMPOUND_STRING("Senkt Init. bei Berührung."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Zenithaut"),
        .description = COMPOUND_STRING("Normal-Att. werden zu Flug."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Familienbande"),
        .description = COMPOUND_STRING("Attacken treffen zweimal."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dunkelaura"),
        .description = COMPOUND_STRING("Verstärkt Unlicht-Attacken."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Feenaura"),
        .description = COMPOUND_STRING("Verstärkt Feen-Attacken."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura-Umkehr"),
        .description = COMPOUND_STRING("Kehrt Aura-Fähigkeiten um."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Urmeer"),
        .description = COMPOUND_STRING("Ruft schweren Regen herbei."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Endland"),
        .description = COMPOUND_STRING("Ruft grelle Sonne herbei."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta-Wind"),
        .description = COMPOUND_STRING("Ruft starken Wind herbei."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Zähigkeit"),
        .description = COMPOUND_STRING("Erhöht Vert. bei Treffern."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Reißaus"),
        .description = COMPOUND_STRING("Flieht bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Rückzug"),
        .description = COMPOUND_STRING("Flieht bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Verklumpen"),
        .description = COMPOUND_STRING("Wasser-Treffer steigern Vert."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Quälerei"),
        .description = COMPOUND_STRING("Volltreffer bei vergifteten Gegnern."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Limitschild"),
        .description = COMPOUND_STRING("Schale bricht bei halben KP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Beschattung"),
        .description = COMPOUND_STRING("Stärker gegen einwechselnde Gegner."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Wasserblase"),
        .description = COMPOUND_STRING("Schützt vor Feuer und Verbrennung."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Stahlprofi"),
        .description = COMPOUND_STRING("Verstärkt Stahl-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Wutausbruch"),
        .description = COMPOUND_STRING("Steigert Sp. Angriff bei halben KP."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Schneescharrer"),
        .description = COMPOUND_STRING("Verdoppelt Init. bei Hagel/Schnee."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Langstrecke"),
        .description = COMPOUND_STRING("Nie Kontakt bei Attacken."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Plätscherstimme"),
        .description = COMPOUND_STRING("Laut-Att. werden zu Wasser."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Heilwandel"),
        .description = COMPOUND_STRING("Heil-Attacken gehen zuerst."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Elektrohaut"),
        .description = COMPOUND_STRING("Normal-Att. werden zu Elektro."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surf-Schweif"),
        .description = COMPOUND_STRING("Schneller auf Elektrofeld."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Fischschwarm"),
        .description = COMPOUND_STRING("Formt Schwarm, wenn stark."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Kostümspuk"),
        .description = COMPOUND_STRING("Täuschung schützt einmal."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Freundschaftsakt"),
        .description = COMPOUND_STRING("Formwechsel nach K.O."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Scharwandel"),
        .description = COMPOUND_STRING("Hilfe der Zellen bei Schwäche."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Korrosion"),
        .description = COMPOUND_STRING("Vergiftet jeden Typ."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Dauerschlaf"),
        .description = COMPOUND_STRING("Immer am Schlafen."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Majestät"),
        .description = COMPOUND_STRING("Schützt vor Init.-Attacken."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Magenkrempler"),
        .description = COMPOUND_STRING("Schädigt Gegner bei K.O."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Tänzer"),
        .description = COMPOUND_STRING("Tanzt bei Tanz-Att. mit."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batterie"),
        .description = COMPOUND_STRING("Stärkt Sp. Angriff des Partners."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Flauschigkeit"),
        .description = COMPOUND_STRING("Zäh bei Kontakt, brandempfindlich."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Buntkörper"),
        .description = COMPOUND_STRING("Schützt vor Init.-Attacken."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Seelenherz"),
        .description = COMPOUND_STRING("K.O. steigert Sp. Angriff."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Lockenkopf"),
        .description = COMPOUND_STRING("Senkt Init. bei Berührung."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Kopiert Fähigkeit des Partners."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Chemiekraft"),
        .description = COMPOUND_STRING("Kopiert Fähigkeit des Partners."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Bestien-Boost"),
        .description = COMPOUND_STRING("K.O. steigert besten Status."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Alpha-System"),
        .description = COMPOUND_STRING("Typ wechselt durch Item."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Elektro-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt Elektrofeld."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psycho-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt Psychofeld."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebel-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt Nebelfeld."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Gras-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt Grasfeld."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Metallprotektor"),
        .description = COMPOUND_STRING("Verhindert Status-Senkung."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Phantomschutz"),
        .description = COMPOUND_STRING("Halbiert Schaden bei vollen KP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prismarüstung"),
        .description = COMPOUND_STRING("Reduziert sehr eff. Treffer."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Zerebralmacht"),
        .description = COMPOUND_STRING("Erhöht sehr eff. Schaden."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Kühnes Schwert"),
        .description = COMPOUND_STRING("Erhöht Angriff bei Einsatz."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Wackerer Schild"),
        .description = COMPOUND_STRING("Erhöht Vert. bei Einsatz."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Ändert Typ an Attacke an."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Apport"),
        .description = COMPOUND_STRING("Holt fehlgeschlagenen Ball zurück."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Wollflaum"),
        .description = COMPOUND_STRING("Senkt Init. aller bei Treffer."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Schraubflosse"),
        .description = COMPOUND_STRING("Ignoriert gegnerische Umleitung."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Spiegelrüstung"),
        .description = COMPOUND_STRING("Reflektiert Status-Senkungen."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Würggeschoss"),
        .description = COMPOUND_STRING("Spuckt Beute bei Treffer aus."),
        .aiRating = 3,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeCopied = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeTraced = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stahlrückgrat"),
        .description = COMPOUND_STRING("Ignoriert gegnerische Umleitung."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Dampfantrieb"),
        .description = COMPOUND_STRING("Feuer/Wasser-Treffer steigern Init."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Stärkt und resistiert Laut-Att."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sandspeier"),
        .description = COMPOUND_STRING("Erzeugt Sandsturm bei Treffern."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Eisflügelstaub"),
        .description = COMPOUND_STRING("Halbiert Spezial-Schaden."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Heranreifen"),
        .description = COMPOUND_STRING("Verdoppelt Beeren-Effekt."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Tiefkühlkopf"),
        .description = COMPOUND_STRING("Eiskopf blockt Treffer einmal."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Kraftquelle"),
        .description = COMPOUND_STRING("Stärkt Attacken von Partnern."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimese"),
        .description = COMPOUND_STRING("Ändert Typ je nach Feld."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Hemmungslos"),
        .description = COMPOUND_STRING("Entfernt Lichtwälle bei Einsatz."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Stählerner Wille"),
        .description = COMPOUND_STRING("Stärkt Stahl-Att. der Partner."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Unheilskörper"),
        .description = COMPOUND_STRING("Kontakt-Angreifer erhält Abgesang."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Rastlose Seele"),
        .description = COMPOUND_STRING("Tauscht Fähigkeiten bei Kontakt."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Affenfokus"),
        .description = COMPOUND_STRING("Ups Attack and locks move."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Reaktionsgas"),
        .description = COMPOUND_STRING("Neutralisiert alle Fähigkeiten."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastellhülle"),
        .description = COMPOUND_STRING("Schützt Team vor Vergiftung."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Heißhunger"),
        .description = COMPOUND_STRING("Wechselt Form pro Runde."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Schnellschuss"),
        .description = COMPOUND_STRING("Greift manchmal zuerst an."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Verborgene Faust"),
        .description = COMPOUND_STRING("Kontakt umgeht Schutz-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Kuriose Arznei"),
        .description = COMPOUND_STRING("Entfernt Statusänder. des Teams."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Verstärkt Elektro-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Drachenkiefer"),
        .description = COMPOUND_STRING("Verstärkt Drachen-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Helles Wiehern"),
        .description = COMPOUND_STRING("K.O. steigert Angriff."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Dunkles Wiehern"),
        .description = COMPOUND_STRING("K.O. steigert Sp. Angriff."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("Reitgespann"),
        .description = COMPOUND_STRING("Anspannung u. Helles Wiehern."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("Reitgespann"),
        .description = COMPOUND_STRING("Anspannung u. Dunkles Wiehern."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Duftschwade"),
        .description = COMPOUND_STRING("Überträgt sich bei Kontakt."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Streusaat"),
        .description = COMPOUND_STRING("Erzeugt Grasfeld bei Treffern."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermowandel"),
        .description = COMPOUND_STRING("Feuer-Treffer steigern Angriff."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Wutpanzer"),
        .description = COMPOUND_STRING("Wütet bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Läutersalz"),
        .description = COMPOUND_STRING("Schützt vor Status und Geister-Att."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Knusperkruste"),
        .description = COMPOUND_STRING("Gesteigert durch Feuer."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Windreiter"),
        .description = COMPOUND_STRING("Wind macht immun und stärkt Angriff."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Wachhund"),
        .description = COMPOUND_STRING("Kann nicht eingeschüchtert werden."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Steinträger"),
        .description = COMPOUND_STRING("Verstärkt Gestein-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Windkraft"),
        .description = COMPOUND_STRING("Wind-Att. laden auf."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Superwechsel"),
        .description = COMPOUND_STRING("Formwechsel bei Austausch."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Kommandant"),
        .description = COMPOUND_STRING("Befiehlt von Dondozo aus."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Dynamo"),
        .description = COMPOUND_STRING("Erhält Ladezustand bei Treffer."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Paläosynthese"),
        .description = COMPOUND_STRING("Sonne steigert besten Status."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quantenantrieb"),
        .description = COMPOUND_STRING("Elektrofeld steigert besten Status."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Goldkörper"),
        .description = COMPOUND_STRING("Immun gegen Status-Attacken."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Unheilsgefäß"),
        .description = COMPOUND_STRING("Senkt Sp. Vert. aller Gegner."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Unheilsschwert"),
        .description = COMPOUND_STRING("Senkt Vert. aller Gegner."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Unheilstafeln"),
        .description = COMPOUND_STRING("Senkt Angriff aller Gegner."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Unheilsjuwelen"),
        .description = COMPOUND_STRING("Senkt Sp. Vert. aller Gegner."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Orichalkum-Puls"),
        .description = COMPOUND_STRING("Ruft grelle Sonne herbei."),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Hadronen-Motor"),
        .description = COMPOUND_STRING("Erzeugt Elektrofeld."),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Profiteur"),
        .description = COMPOUND_STRING("Kopiert Statuserhöhung des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Wiederkäuer"),
        .description = COMPOUND_STRING("Isst verbrauchte Beere erneut."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Scharfkantig"),
        .description = COMPOUND_STRING("Stärkt Schnitt-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Feldherr"),
        .description = COMPOUND_STRING("Stärke durch gefallene Partner."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Synchronauftritt"),
        .description = COMPOUND_STRING("Kopiert Statusänder. des Partners."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Giftbelag"),
        .description = COMPOUND_STRING("Legt Giftspitzen bei Treffern."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Schweifrüstung"),
        .description = COMPOUND_STRING("Schützt vor Init.-Attacken."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Bodenschmaus"),
        .description = COMPOUND_STRING("Boden-Att. heilen KP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Myzelienkraft"),
        .description = COMPOUND_STRING("Status-Att. treffen immer."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Gastlichkeit"),
        .description = COMPOUND_STRING("Heilt Partner bei Einsatz."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Geistiges Auge"),
        .description = COMPOUND_STRING("Kombiniert Adlerauge u. Rauflust."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Init."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Angriff."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Sp. Vert."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Erhöht Vert."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Giftkette"),
        .description = COMPOUND_STRING("Attacken können schwer vergiften."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Süßer Nektar"),
        .description = COMPOUND_STRING("Senkt Fluchtw. des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera-Wandel"),
        .description = COMPOUND_STRING("Terakristallisiert bei Einsatz."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera-Panzer"),
        .description = COMPOUND_STRING("Reduziert Schaden bei vollen KP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraforming Null"),
        .description = COMPOUND_STRING("Entfernt Wetter und Feld."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Giftpuppenspiel"),
        .description = COMPOUND_STRING("Verwirrt vergiftete Gegner."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_PIERCING_DRILL] =
    {
        .name = _("Piercing Drill"),
        .description = COMPOUND_STRING("Kontakt umgeht Schutz-Attacken."),
    },

    [ABILITY_DRAGONIZE] =
    {
        .name = _("Dragonize"),
        .description = COMPOUND_STRING("Normal-Att. werden zu Drache."),
    },

    [ABILITY_313] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Spezial-Fähigkeit."),
    },

    [ABILITY_314] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Spezial-Fähigkeit."),
    },

    [ABILITY_MEGA_SOL] =
    {
        .name = _("Mega Sol"),
        .description = COMPOUND_STRING("Agier wie in der Sonne."),
    },

    [ABILITY_316] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Spezial-Fähigkeit."),
    },

    [ABILITY_317] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Spezial-Fähigkeit."),
    },

    [ABILITY_SPICY_SPRAY] =
    {
        .name = _("Spicy Spray"),
        .description = COMPOUND_STRING("Verbrennt Angreifer bei Treffer."),
    },
};
