#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_record.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_special.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "trainer_slide.h"
#include "trainer_tower.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

struct BattleWindowText
{
    u8 fillValue;
    u8 fontId;
    u8 x;
    u8 y;
    union {
        struct {
            DEPRECATED("Use color.background instead") u8 bgColor;
            DEPRECATED("Use color.foreground instead") u8 fgColor;
            DEPRECATED("Use color.shadow instead") u8 shadowColor;
            DEPRECATED("Use color.accent instead") u8 accentColor;
        };
        union TextColor color;
    };
    u8 letterSpacing;
    u8 lineSpacing;
    u8 speed;
};

#if TESTING
EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
#else
static EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
#endif
EWRAM_DATA struct BattleMsgData *gBattleMsgDataPtr = NULL;

// todo: make some of those names less vague: attacker/target vs pkmn, etc.

static const u8 sText_EmptyString4[] = _("");

const u8 gText_PkmnShroudedInMist[] = _("{B_ATK_TEAM1} wird in Nebel gehüllt!!");
const u8 gText_PkmnGettingPumped[] = _("{B_DEF_NAME_WITH_PREFIX} pumpt sich auf!");
const u8 gText_PkmnsXPreventsSwitching[] = _("{B_LAST_ABILITY} von {B_BUFF1} verhindert Wechsel!\p");
const u8 gText_StatSharply[] = _(" stark");
const u8 gText_StatRose[] = _("steigt!");
const u8 gText_StatFell[] = _("sinkt!");
const u8 gText_DefendersStatRose[] = _("{B_BUFF1} von {B_DEF_NAME_WITH_PREFIX} steigt{B_BUFF2}!");
static const u8 sText_GotAwaySafely[] = _("{PLAY_SE SE_FLEE}Du bist entkommen!\p");
static const u8 sText_PlayerDefeatedLinkTrainer[] = _("{B_LINK_OPPONENT1_NAME} wurde besiegt!");
static const u8 sText_TwoLinkTrainersDefeated[] = _("{B_LINK_OPPONENT1_NAME} und {B_LINK_OPPONENT2_NAME} wurden besiegt!");
static const u8 sText_PlayerLostAgainstLinkTrainer[] = _("Spieler verliert gengen {B_LINK_OPPONENT1_NAME}!");
static const u8 sText_PlayerLostToTwo[] = _("Spieler verliert gegen {B_LINK_OPPONENT1_NAME} und {B_LINK_OPPONENT2_NAME}!");
static const u8 sText_PlayerBattledToDrawLinkTrainer[] = _("Patt zwischen Spieler und {B_LINK_OPPONENT1_NAME}!");
static const u8 sText_PlayerBattledToDrawVsTwo[] = _("Patt zwischen Spieler, {B_LINK_OPPONENT1_NAME} und {B_LINK_OPPONENT2_NAME}!");
static const u8 sText_WildFled[] = _("{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME} flieht!"); //not in gen 5+, replaced with match was forfeited text
static const u8 sText_TwoWildFled[] = _("{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME} und {B_LINK_OPPONENT2_NAME} fliehen!"); //not in gen 5+, replaced with match was forfeited text
static const u8 sText_PlayerDefeatedLinkTrainerTrainer1[] = _("{B_TRAINER1_NAME_WITH_CLASS} wurde besiegt!\p");
static const u8 sText_OpponentMon1Appeared[] = _("{B_OPPONENT_MON1_NAME} erscheint!\p");
static const u8 sText_WildPkmnAppeared[] = _("Ein wildes {B_OPPONENT_MON1_NAME} erscheint!\p");
static const u8 sText_LegendaryPkmnAppeared[] = _("Ein wildes {B_OPPONENT_MON1_NAME} erscheint!\p");
static const u8 sText_WildPkmnAppearedPause[] = _("Ein wildes {B_OPPONENT_MON1_NAME} erscheint!{PAUSE 127}");
static const u8 sText_TwoWildPkmnAppeared[] = _("Oh! Zwei wilde Pokémon: {B_OPPONENT_MON1_NAME} und {B_OPPONENT_MON2_NAME} erscheinen!\p");
static const u8 sText_GhostAppearedCantId[] = _("Ein Geist erscheint!\pOh hoh!\nDer Geist kann nicht identifiziert werden!\p");
static const u8 sText_TheGhostAppeared[] = _("Ein Geist erscheint!\p");
static const u8 sText_Trainer1WantsToBattle[] = _("Eine Herausforderung von {B_TRAINER1_NAME_WITH_CLASS}!\p");
static const u8 sText_LinkTrainerWantsToBattle[] = _("Eine Herausforderung von {B_LINK_OPPONENT1_NAME}!");
static const u8 sText_TwoLinkTrainersWantToBattle[] = _("Eine Herausforderung von {B_LINK_OPPONENT1_NAME} und {B_LINK_OPPONENT2_NAME}!");
static const u8 sText_Trainer1SentOutPkmn[] = _("{B_OPPONENT_MON1_NAME} wird von {B_TRAINER1_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_Trainer1SentOutTwoPkmn[] = _("{B_OPPONENT_MON1_NAME} und {B_OPPONENT_MON2_NAME} werden von {B_TRAINER1_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_Trainer1SentOutPkmn2[] = _("{B_BUFF1} wird von {B_TRAINER1_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_LinkTrainerIntroSendOutPkmn[] = _("{B_LINK_OPPONENT_MON1_NAME} wird von {B_LINK_OPPONENT1_NAME} in den Kampf geschickt!");
static const u8 sText_LinkTrainerSentOutPkmn[] = _("{B_BUFF1} wird von {B_LINK_OPPONENT1_NAME} in den Kampf geschickt!");
static const u8 sText_LinkTrainer2SentOutPkmn2[] = _("{B_BUFF1} wird von {B_LINK_OPPONENT2_NAME} in den Kampf geschickt!");
static const u8 sText_LinkTrainerSentOutTwoPkmn[] = _("{B_OPPONENT_MON1_NAME} und {B_OPPONENT_MON2_NAME} werden von {B_LINK_OPPONENT1_NAME} in den Kampf geschickt!");
static const u8 sText_TwoLinkTrainersIntroSendOutPkmn[] = _("{B_LINK_OPPONENT_MON1_NAME} wird von {B_LINK_OPPONENT1_NAME} in den Kampf geschickt! {B_LINK_OPPONENT_MON2_NAME} wird von {B_LINK_OPPONENT2_NAME} in den Kampf geschickt!");
static const u8 sText_LinkTrainerSentOutPkmn2[] = _("{B_LINK_OPPONENT_MON2_NAME} wird von {B_LINK_OPPONENT1_NAME} in den Kampf geschickt!");
static const u8 sText_LinkTrainerMultiSentOutPkmn[] = _("{B_BUFF1} wird von {B_LINK_SCR_TRAINER_NAME} in den Kampf geschickt!");
static const u8 sText_GoPkmn[] = _("Los! {B_PLAYER_MON1_NAME}!");
static const u8 sText_GoTwoPkmn[] = _("Los! {B_PLAYER_MON1_NAME} und {B_PLAYER_MON2_NAME}!");
static const u8 sText_GoPkmn2[] = _("Los! {B_BUFF1}!");
static const u8 sText_DoItPkmn[] = _("Du schaffst es, {B_BUFF1}!");
static const u8 sText_GoForItPkmn[] = _("Streng dich an, {B_BUFF1}!");
static const u8 sText_JustALittleMorePkmn[] = _("Just a little more! Hang in there, {B_BUFF1}!"); //currently unused, will require code changes
static const u8 sText_YourFoesWeakGetEmPkmn[] = _("Mach es fertig! Los, {B_BUFF1}!");
static const u8 sText_LinkPartnerSentOutPkmn1GoPkmn[] = _("{B_LINK_PLAYER_MON1_NAME} wird von {B_LINK_PARTNER_NAME} in den Kampf geschickt! Los! {B_LINK_PLAYER_MON2_NAME}!");
static const u8 sText_LinkPartnerSentOutPkmn2GoPkmn[] = _("{B_LINK_PLAYER_MON2_NAME} wird von {B_LINK_PARTNER_NAME} in den Kampf geschickt! Los! {B_LINK_PLAYER_MON1_NAME}!");
static const u8 sText_LinkPartnerSentOutPkmn1[] = _("{B_BUFF1} wird von {B_LINK_PARTNER_NAME} in den Kampf geschickt!");
static const u8 sText_LinkPartnerSentOutPkmn2[] = _("{B_BUFF1} wird von {B_LINK_PARTNER_NAME} in den Kampf geschickt!");
static const u8 sText_LinkPartnerWithdrewPkmn1[] = _("{B_LINK_PARTNER_NAME} ruft {B_LINK_PLAYER_MON1_NAME} zurück!");
static const u8 sText_LinkPartnerWithdrewPkmn2[] = _("{B_LINK_PARTNER_NAME} ruft {B_LINK_PLAYER_MON2_NAME} zurück!");
static const u8 sText_PkmnSwitchOut[] = _("{B_BUFF1}, switch out! Come back!"); //currently unused, I believe its used for when you switch on a pokemon in shift mode
static const u8 sText_PkmnThatsEnough[] = _("{B_BUFF1}, genug! Komm zurück!");
static const u8 sText_PkmnComeBack[] = _("{B_BUFF1}, komm zurück!");
static const u8 sText_PkmnOkComeBack[] = _("OK, {B_BUFF1}! Komm zurück!");
static const u8 sText_PkmnGoodComeBack[] = _("Gut, {B_BUFF1}! Komm zurück!");
static const u8 sText_Trainer1WithdrewPkmn[] = _("{B_TRAINER1_NAME_WITH_CLASS} zieht {B_BUFF1} zurück!");
static const u8 sText_Trainer2WithdrewPkmn[] = _("{B_TRAINER2_NAME_WITH_CLASS} zieht {B_BUFF1} zurück!");
static const u8 sText_LinkTrainer1WithdrewPkmn[] = _("{B_LINK_OPPONENT1_NAME} zieht {B_BUFF1} zurück!");
static const u8 sText_LinkTrainer2WithdrewPkmn[] = _("{B_LINK_OPPONENT2_NAME} zieht {B_BUFF1} zurück!");
static const u8 sText_WildPkmnPrefix[] = _(" (Wild)");
static const u8 sText_FoePkmnPrefix[] = _(" (Gegner)");
static const u8 sText_WildPkmnPrefixLower[] = _(" (wild)");
static const u8 sText_FoePkmnPrefixLower[] = _(" (gegner)");
static const u8 sText_EmptyString8[] = _("");
static const u8 sText_FoePkmnPrefix2[] = _("Gegner");
static const u8 sText_AllyPkmnPrefix[] = _("Anwender");
static const u8 sText_FoePkmnPrefix3[] = _("Gegner");
static const u8 sText_AllyPkmnPrefix2[] = _("Anwender");
static const u8 sText_FoePkmnPrefix4[] = _("Gegner");
static const u8 sText_AllyPkmnPrefix3[] = _("Anwender");
static const u8 sText_AttackerUsedX[] = _("{B_ATK_NAME_WITH_PREFIX} setzt {B_BUFF3} ein!");
static const u8 sText_ExclamationMark[] = _("!");
static const u8 sText_ExclamationMark2[] = _("!");
static const u8 sText_ExclamationMark3[] = _("!");
static const u8 sText_ExclamationMark4[] = _("!");
static const u8 sText_ExclamationMark5[] = _("!");
static const u8 sText_HP[] = _("KP");
static const u8 sText_Attack[] = _("Angriff");
static const u8 sText_Defense[] = _("Verteidigung");
static const u8 sText_Speed[] = _("Initiative");
static const u8 sText_SpAttack[] = _("Sp. Ang");
static const u8 sText_SpDefense[] = _("Sp. Ver");
static const u8 sText_Accuracy[] = _("Genauigkeit");
static const u8 sText_Evasiveness[] = _("Fluchtwert");

const u8 *const gStatNamesTable[NUM_BATTLE_STATS] =
{
    [STAT_HP]      = sText_HP,
    [STAT_ATK]     = sText_Attack,
    [STAT_DEF]     = sText_Defense,
    [STAT_SPEED]   = sText_Speed,
    [STAT_SPATK]   = sText_SpAttack,
    [STAT_SPDEF]   = sText_SpDefense,
    [STAT_ACC]     = sText_Accuracy,
    [STAT_EVASION] = sText_Evasiveness,
};
const u8 *const gPokeblockWasTooXStringTable[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = COMPOUND_STRING("zu scharf!"),
    [FLAVOR_DRY]    = COMPOUND_STRING("zu trocken!"),
    [FLAVOR_SWEET]  = COMPOUND_STRING("zu süß!"),
    [FLAVOR_BITTER] = COMPOUND_STRING("zu bitter!"),
    [FLAVOR_SOUR]   = COMPOUND_STRING("zu sauer!"),
};

static const u8 sText_Someones[] = _("einen");
static const u8 sText_Lanettes[] = _("Lanettes"); //no decapitalize until it is everywhere
static const u8 sText_Bills[] = _("Bills");
static const u8 sText_EnigmaBerry[] = _("Enigma-Beere"); //no decapitalize until it is everywhere
static const u8 sText_BerrySuffix[] = _(" Beere"); //no decapitalize until it is everywhere
const u8 gText_EmptyString3[] = _("");

static const u8 sText_TwoInGameTrainersDefeated[] = _("{B_TRAINER1_NAME_WITH_CLASS} und {B_TRAINER2_NAME_WITH_CLASS} wurden besiegt!\p");

// New battle strings.
const u8 gText_drastically[] = _(" drastisch");
const u8 gText_severely[] = _("schwer ");
static const u8 sText_TerrainReturnedToNormal[] = _("The terrain returned to normal!"); // Unused

const u8 *const gBattleStringsTable[STRINGID_COUNT] =
{
    [STRINGID_TRAINER1LOSETEXT]                     = COMPOUND_STRING("{B_TRAINER1_LOSE_TEXT}"),
    [STRINGID_PKMNGAINEDEXP]                        = COMPOUND_STRING("{B_BUFF1} erhält{B_BUFF2} {B_BUFF3} Erfahrungspunkte!\p"),
    [STRINGID_PKMNGREWTOLV]                         = COMPOUND_STRING("{B_BUFF1} erreicht Lv. {B_BUFF2}!{WAIT_SE}\p"),
    [STRINGID_PKMNLEARNEDMOVE]                      = COMPOUND_STRING("{B_BUFF1} erlernt {B_BUFF2}!{WAIT_SE}\p"),
    [STRINGID_TRYTOLEARNMOVE1]                      = COMPOUND_STRING("{B_BUFF1} versucht {B_BUFF2} zu erlernen.\p"),
    [STRINGID_TRYTOLEARNMOVE2]                      = COMPOUND_STRING("Aber, {B_BUFF1} kann nicht mehr als vier Attacken erlernen.\p"),
    [STRINGID_TRYTOLEARNMOVE3]                      = COMPOUND_STRING("Soll eine andere Attacke zugunsten von {B_BUFF2} vergessen werden?"),
    [STRINGID_PKMNFORGOTMOVE]                       = COMPOUND_STRING("{B_BUFF1} hat {B_BUFF2} vergessen…\p"),
    [STRINGID_STOPLEARNINGMOVE]                     = COMPOUND_STRING("{PAUSE 32}{B_BUFF2} nicht erlernen?"),
    [STRINGID_DIDNOTLEARNMOVE]                      = COMPOUND_STRING("{B_BUFF1} hat {B_BUFF2} nicht erlernt.\p"),
    [STRINGID_PKMNLEARNEDMOVE2]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat {B_BUFF1} erlernt!"),
    [STRINGID_PKMNPROTECTEDITSELF]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} schützt sich selbst!"),
    [STRINGID_ITDOESNTAFFECT]                       = COMPOUND_STRING("Es hat keine Wirkung auf {B_DEF_NAME_WITH_PREFIX2}…"),
    [STRINGID_ITDOESNTAFFECTSCR]                    = COMPOUND_STRING("Es hat keine Wirkung auf {B_SCR_NAME_WITH_PREFIX2}…"),
    [STRINGID_BATTLERFAINTED]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde besiegt!\p"),
    [STRINGID_PLAYERGOTMONEY]                       = COMPOUND_STRING("{B_PLAYER_NAME} gewinnt ¥{B_BUFF1}!\p"),
    [STRINGID_PLAYERWHITEOUT]                       = COMPOUND_STRING("{B_PLAYER_NAME} hat keine kampffähigen Pokémon mehr!\p"),
    [STRINGID_PLAYERWHITEOUT2_WILD]                 = COMPOUND_STRING("Vor lauter Panik verlierst du ¥{B_BUFF1}…"),
    [STRINGID_PLAYERWHITEOUT2_TRAINER]              = COMPOUND_STRING("Du hast dem Gewinner ¥{B_BUFF1} gegeben…"),
    [STRINGID_PLAYERWHITEOUT3]                      = COMPOUND_STRING("Du wurdest von deiner Niederlage überwältigt!"),
    [STRINGID_PREVENTSESCAPE]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} verhindert eine Flucht mit {B_SCR_ABILITY}!\p"),
    [STRINGID_HITXTIMES]                            = COMPOUND_STRING("{B_BUFF1}-mal getroffen!"), //SV has dynamic plural here
    [STRINGID_PKMNFELLASLEEP]                       = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} ist eingeschlafen!"),
    [STRINGID_PKMNMADESLEEP]                        = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} lässt {B_EFF_NAME_WITH_PREFIX2} einschlafen!"), //not in gen 5+, ability popup
    [STRINGID_PKMNALREADYASLEEP]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} schläft bereits!"),
    [STRINGID_PKMNALREADYASLEEP2]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} schläft bereits!"),
    [STRINGID_PKMNWASPOISONED]                      = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde vergiftet!"),
    [STRINGID_PKMNPOISONEDBY]                       = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX2} vergiftete {B_EFF_NAME_WITH_PREFIX}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNHURTBYPOISON]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch Gift verletzt!"),
    [STRINGID_PKMNALREADYPOISONED]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist bereits vergiftet!"),
    [STRINGID_PKMNBADLYPOISONED]                    = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde schwer vergiftet!"),
    [STRINGID_PKMNENERGYDRAINED]                    = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde Energie abgesaugt!"),
    [STRINGID_PKMNWASBURNED]                        = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} brennt!"),
    [STRINGID_PKMNBURNEDBY]                         = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} verbrennt {B_EFF_NAME_WITH_PREFIX2}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNHURTBYBURN]                       = COMPOUND_STRING("Die Verbrennung schadet {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNWASFROZEN]                        = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde eingefroren!"),
    [STRINGID_PKMNFROZENBY]                         = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX2} wurde durch {B_BUFF1} von eingefroren {B_SCR_NAME_WITH_PREFIX}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNISFROZEN]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist eingefroren!"),
    [STRINGID_PKMNWASDEFROSTED]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde aufgetaut!"),
    [STRINGID_PKMNWASDEFROSTEDBY]                   = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde durch {B_CURRENT_MOVE} aufgetaut!"),
    [STRINGID_PKMNWASPARALYZED]                     = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} ist paralysiert! Es greift eventuell nicht an!"),
    [STRINGID_PKMNWASPARALYZEDBY]                   = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} paralysierte {B_EFF_NAME_WITH_PREFIX2}! Es greift eventuell nicht an!"), //not in gen 5+, ability popup
    [STRINGID_PKMNISPARALYZED]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist paralysiert! Es kann nicht angreifen!"),
    [STRINGID_PKMNISALREADYPARALYZED]               = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist bereits paralysiert!"),
    [STRINGID_PKMNHEALEDPARALYSIS]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde von der Paralyse geheilt!"),
    [STRINGID_STATSWONTINCREASE]                    = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} kann nicht mehr erhöht werden!"),
    [STRINGID_STATSWONTDECREASE]                    = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} kann nicht weiter gesenkt werden!"),
    [STRINGID_PKMNISCONFUSED]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist verwirrt"),
    [STRINGID_PKMNHEALEDCONFUSION]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist nicht mehr verwirrt!"),
    [STRINGID_PKMNWASCONFUSED]                      = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde verwirrt!"),
    [STRINGID_PKMNALREADYCONFUSED]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ist bereits verwirrt!"),
    [STRINGID_PKMNFELLINLOVE]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hat sich verliebt!"),
    [STRINGID_PKMNINLOVE]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat sich in {B_SCR_NAME_WITH_PREFIX2} verliebt!"),
    [STRINGID_PKMNIMMOBILIZEDBYLOVE]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist starr vor Liebe!"),
    [STRINGID_PKMNCHANGEDTYPE]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verwandelt sich zu Typ {B_BUFF1}!"),
    [STRINGID_PKMNFLINCHED]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} schreckt zurück!"),
    [STRINGID_PKMNREGAINEDHEALTH]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} erholt sich."),
    [STRINGID_PKMNHPFULL]                           = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hat alle KP!"),
    [STRINGID_PKMNRAISEDSPDEF]                      = COMPOUND_STRING("Lichtschild von {B_ATK_TEAM2} erhöht die Spezial-Verteidigung!"),
    [STRINGID_PKMNRAISEDDEF]                        = COMPOUND_STRING("Reflektor von {B_ATK_TEAM2} erhöht die Verteidigung!"),
    [STRINGID_PKMNAURORAVEIL]                       = COMPOUND_STRING("Auroraschleier von {B_ATK_TEAM2} erhöht die Verteidigung und Sp. Ver!"),
    [STRINGID_PKMNCOVEREDBYVEIL]                    = COMPOUND_STRING("Team von {B_ATK_TEAM1} wird von einem Schleier umhüllt!"),
    [STRINGID_PKMNUSEDSAFEGUARD]                    = COMPOUND_STRING("Team von {B_SCR_NAME_WITH_PREFIX} wird durch Bodyguard beschützt!"),
    [STRINGID_PKMNSAFEGUARDEXPIRED]                 = COMPOUND_STRING("Team von {B_ATK_TEAM1} wird nicht mehr durch Bodyguard beschützt!"),
    [STRINGID_PKMNWENTTOSLEEP]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist eingeschlafen!"), //not in gen 5+
    [STRINGID_PKMNSLEPTHEALTHY]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} schläft und erholt sich!"),
    [STRINGID_PKMNWHIPPEDWHIRLWIND]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entfacht einen Wirbelwind!"),
    [STRINGID_PKMNTOOKSUNLIGHT]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} absorbiert Sonnenlicht!"),
    [STRINGID_PKMNLOWEREDHEAD]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} zieht seinen Kopf ein!"),
    [STRINGID_PKMNFLEWHIGH]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} fliegt hoch empor!"),
    [STRINGID_PKMNDUGHOLE]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} gräbt sich ein!"),
    [STRINGID_PKMNSQUEEZEDBYBIND]                   = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wird gequetscht von {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNTRAPPEDINVORTEX]                  = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde in einem Strudel gefangen!"),
    [STRINGID_PKMNWRAPPEDBY]                        = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde von {B_SCR_NAME_WITH_PREFIX2} umwickelt!"),
    [STRINGID_PKMNCLAMPED]                          = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX2} wurde von {B_SCR_NAME_WITH_PREFIX} geschnappt!"),
    [STRINGID_PKMNHURTBY]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch {B_BUFF1} verletzt!"),
    [STRINGID_PKMNFREEDFROM]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde von {B_BUFF1} befreit!"),
    [STRINGID_PKMNCRASHED]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} macht weiter und bricht zusammen!"),
    [STRINGID_PKMNSHROUDEDINMIST]                   = gText_PkmnShroudedInMist,
    [STRINGID_PKMNPROTECTEDBYMIST]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wird durch Nebel geschützt!"),
    [STRINGID_PKMNGETTINGPUMPED]                    = gText_PkmnGettingPumped,
    [STRINGID_PKMNHITWITHRECOIL]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde vom Rückstoß verletzt!"),
    [STRINGID_PKMNPROTECTEDITSELF2]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} beschützt sich selbst!"),
    [STRINGID_PKMNBUFFETEDBYSANDSTORM]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wird vom Sandsturm getroffen!"),
    [STRINGID_PKMNPELTEDBYHAIL]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wird vom Hagelsturm getroffen!"),
    [STRINGID_PKMNSEEDED]                           = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde bepflanzt!"),
    [STRINGID_PKMNAVOIDEDATTACK]                    = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wich dem Angriff aus!"),
    [STRINGID_BATTLERAVOIDEDATTACK]                 = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wich dem Angriff aus!"),
    [STRINGID_PKMNSAPPEDBYLEECHSEED]                = COMPOUND_STRING("Egelsamen schadet {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNFASTASLEEP]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} schläft tief und fest."),
    [STRINGID_PKMNWOKEUP]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist aufgewacht!"),
    [STRINGID_PKMNWOKEUPINUPROAR]                   = COMPOUND_STRING("Aufruhr von {B_EFF_NAME_WITH_PREFIX2} hält es wach!"),
    [STRINGID_PKMNCAUSEDUPROAR]                     = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} verursacht einen Aufruhr!"),
    [STRINGID_PKMNMAKINGUPROAR]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} macht einen Aufruhr!"),
    [STRINGID_PKMNCALMEDDOWN]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} beruhigt sich."),
    [STRINGID_PKMNSTOCKPILED]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hortet {B_BUFF1}!"),
    [STRINGID_PKMNCANTSLEEPINUPROAR2]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX2} kann bei dem Aufruhr nicht schlafen!"),
    [STRINGID_UPROARKEPTPKMNAWAKE]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX2} kann bei dem Aufruhr nicht schlafen!"),
    [STRINGID_PKMNSTAYEDAWAKEUSING]                 = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hält sich mit {B_DEF_ABILITY} wach!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSTORINGENERGY]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} speichert Energie!"),
    [STRINGID_PKMNUNLEASHEDENERGY]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erzeugt Energie!"),
    [STRINGID_PKMNFATIGUECONFUSION]                 = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist vor Erschöpfung verwirrt!"),
    [STRINGID_PLAYERPICKEDUPMONEY]                  = COMPOUND_STRING("{B_PLAYER_NAME} hebt ¥{B_BUFF1} auf!\p"),
    [STRINGID_PKMNUNAFFECTED]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ist unversehrt!"),
    [STRINGID_PKMNTRANSFORMEDINTO]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verwandelt sich in {B_BUFF1}!"),
    [STRINGID_PKMNMADESUBSTITUTE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} setzt einen Delegator ein!"),
    [STRINGID_PKMNHASSUBSTITUTE]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat bereits einen Delegator!"),
    [STRINGID_SUBSTITUTEDAMAGED]                    = COMPOUND_STRING("Der Delegator steckt den Schlag für {B_DEF_NAME_WITH_PREFIX2} ein!\p"),
    [STRINGID_PKMNSUBSTITUTEFADED]                  = COMPOUND_STRING("Delegator von {B_SCR_NAME_WITH_PREFIX} lässt nach!\p"),
    [STRINGID_PKMNMUSTRECHARGE]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} muss sich wieder aufladen!"),
    [STRINGID_PKMNRAGEBUILDING]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} verfällt in Raserei!"),
    [STRINGID_PKMNMOVEWASDISABLED]                  = COMPOUND_STRING("{B_BUFF1} von {B_DEF_NAME_WITH_PREFIX} wurde blockiert!"),
    [STRINGID_PKMNMOVEISDISABLED]                   = COMPOUND_STRING("{B_CURRENT_MOVE} von {B_ATK_NAME_WITH_PREFIX} ist blockiert!\p"),
    [STRINGID_PKMNMOVEDISABLEDNOMORE]               = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist nicht mehr blockiert!"),
    [STRINGID_PKMNGOTENCORE]                        = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} gibt eine Zugabe!"),
    [STRINGID_PKMNGOTENCOREDMOVE]                   = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} kann nur {B_CURRENT_MOVE} einsetzen!\p"),
    [STRINGID_PKMNENCOREENDED]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat die Zugabe beendet!"),
    [STRINGID_PKMNTOOKAIM]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} zielt auf {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNSKETCHEDMOVE]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} setzt Nachahmer bei {B_BUFF1} ein!"),
    [STRINGID_PKMNTRYINGTOTAKEFOE]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} versucht, den Gegner mit sich zu nehmen!"),
    [STRINGID_PKMNTOOKFOE]                          = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} nimmt {B_ATK_NAME_WITH_PREFIX} mit sich!"),
    [STRINGID_PKMNREDUCEDPP]                        = COMPOUND_STRING("{B_BUFF1} von {B_DEF_NAME_WITH_PREFIX} wird um {B_BUFF2} reduziert!"),
    [STRINGID_PKMNSTOLEITEM]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} stiehlt {B_LAST_ITEM} von {B_EFF_NAME_WITH_PREFIX2}!"),
    [STRINGID_TARGETCANTESCAPENOW]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} kann nicht fliehen!"),
    [STRINGID_PKMNFELLINTONIGHTMARE]                = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} bekommt einen Albtraum!"),
    [STRINGID_PKMNLOCKEDINNIGHTMARE]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist in einem Albtraum gefangen!"),
    [STRINGID_PKMNLAIDCURSE]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} nimmt einen Teil seiner KP und legt einen Fluch auf {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNAFFLICTEDBYCURSE]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch den Fluch verletzt!"),
    [STRINGID_SPIKESSCATTERED]                      = COMPOUND_STRING("Team von {B_DEF_TEAM2} hat Stacheln um sich herum!"),
    [STRINGID_PKMNHURTBYSPIKES]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde durch die Stacheln verletzt!"),
    [STRINGID_PKMNIDENTIFIED]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde identifiziert!"),
    [STRINGID_PKMNPERISHCOUNTFELL]                  = COMPOUND_STRING("Abgesang von {B_ATK_NAME_WITH_PREFIX} steht bei {B_BUFF1}!"),
    [STRINGID_PKMNBRACEDITSELF]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} macht sich bereit!"),
    [STRINGID_PKMNENDUREDHIT]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} übersteht die Attacke!"),
    [STRINGID_MAGNITUDESTRENGTH]                    = COMPOUND_STRING("Intensität {B_BUFF1}!"),
    [STRINGID_PKMNCUTHPMAXEDATTACK]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} nutzt seine KP und hebt den Angriffswert!"),
    [STRINGID_PKMNCOPIEDSTATCHANGES]                = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} kopiert die Statusveränderungen von {B_EFF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNGOTFREE]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} befreit sich von {B_BUFF1}!"), //not in gen 5+, generic rapid spin?
    [STRINGID_PKMNSHEDLEECHSEED]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} befreit sich von Egelsamen!"), //not in gen 5+, generic rapid spin?
    [STRINGID_PKMNBLEWAWAYSPIKES]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} bläst die Stacheln weg!"), //not in gen 5+, generic rapid spin?
    [STRINGID_PKMNFLEDFROMBATTLE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} flieht vom Kampf!"),
    [STRINGID_PKMNFORESAWATTACK]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} sah eine Attacke voraus!"),
    [STRINGID_PKMNTOOKATTACK]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde von Attacke {B_BUFF1} getroffen!"),
    [STRINGID_PKMNATTACK]                           = COMPOUND_STRING("Angriff von {B_BUFF1}!"), //not in gen 5+
    [STRINGID_PKMNCENTERATTENTION]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} zieht alle Aufmerksamkeit auf sich!"),
    [STRINGID_PKMNCHARGINGPOWER]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} lädt sich auf!"),
    [STRINGID_NATUREPOWERTURNEDINTO]                = COMPOUND_STRING("Natur-Kraft wurde zu {B_CURRENT_MOVE}!"),
    [STRINGID_PKMNSTATUSNORMAL]                     = COMPOUND_STRING("Status von {B_ATK_NAME_WITH_PREFIX} wird normal!"),
    [STRINGID_PKMNHASNOMOVESLEFT]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat keine Attacken mehr übrig!\p"),
    [STRINGID_PKMNSUBJECTEDTOTORMENT]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wird von Folterknecht unterworfen!"),
    [STRINGID_PKMNCANTUSEMOVETORMENT]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann aufgrund von Folterknecht die Attacke nicht 2-mal hintereinander einsetzen!\p"),
    [STRINGID_PKMNTIGHTENINGFOCUS]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verstärkt seinen Fokus!"),
    [STRINGID_PKMNFELLFORTAUNT]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} fällt auf Verhöhner herein!"),
    [STRINGID_PKMNCANTUSEMOVETAUNT]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann {B_CURRENT_MOVE} nach Verhöhner nicht einsetzen!\p"),
    [STRINGID_PKMNREADYTOHELP]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} will {B_DEF_NAME_WITH_PREFIX2} helfen!"),
    [STRINGID_PKMNSWITCHEDITEMS]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} tauscht Items mit dem Gegner!"),
    [STRINGID_PKMNCOPIEDFOE]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kopiert Fähigkeit von {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNWISHCAMETRUE]                     = COMPOUND_STRING("Wunschtraum von {B_BUFF1} erfüllt sich!"),
    [STRINGID_PKMNPLANTEDROOTS]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} pflanzt Wurzeln!"),
    [STRINGID_PKMNABSORBEDNUTRIENTS]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} nimmt Nährstoffe über die Wurzeln auf!"),
    [STRINGID_PKMNANCHOREDITSELF]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} verankert sich mit seinen Wurzeln!"),
    [STRINGID_PKMNWASMADEDROWSY]                    = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde schläfrig!"),
    [STRINGID_PKMNKNOCKEDOFF]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entreißt {B_LAST_ITEM} von {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNSWAPPEDABILITIES]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} tauscht Fähigkeit mit dem Gegnert!"),
    [STRINGID_PKMNSEALEDOPPONENTMOVE]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} versiegelt die Attacke/n des Gegners!"),
    [STRINGID_PKMNCANTUSEMOVESEALED]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann versiegelte Attacke {B_CURRENT_MOVE} nicht einsetzen!\p"),
    [STRINGID_PKMNWANTSGRUDGE]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} möchte, dass der Gegner ein Nachspiel erträgt!"),
    [STRINGID_PKMNLOSTPPGRUDGE]                     = COMPOUND_STRING("{B_BUFF1} von {B_ATK_NAME_WITH_PREFIX} hat aufgrund von Nachspiel alle AP verloren!"),
    [STRINGID_PKMNSHROUDEDITSELF]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hüllt sich selbst in Magiemantel!"),
    [STRINGID_PKMNMOVEBOUNCED]                      = COMPOUND_STRING("{B_CURRENT_MOVE} von {B_ATK_NAME_WITH_PREFIX} prallte am Magiemantel ab!"),
    [STRINGID_PKMNWAITSFORTARGET]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wartet auf eine gegnerische Attacke!"),
    [STRINGID_PKMNSNATCHEDMOVE]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} übernahm Attacke von {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNMADEITRAIN]                       = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} lässt es regnen!"), //not in gen 5+, ability popup
    [STRINGID_PKMNPROTECTEDBY]                      = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde durch {B_DEF_ABILITY} geschützt!"), //not in gen 5+, ability popup
    [STRINGID_PKMNPREVENTSUSAGE]                    = COMPOUND_STRING("{B_DEF_ABILITY} von {B_DEF_NAME_WITH_PREFIX} hindert {B_ATK_NAME_WITH_PREFIX2} daran, {B_CURRENT_MOVE} einzusetzen!"), //I don't see this in SV text
    [STRINGID_PKMNRESTOREDHPUSING]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} füllt einige KP auf!"), //not in gen 5+, ability popup
    [STRINGID_PKMNCHANGEDTYPEWITH]                  = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wird zu einem {B_BUFF1}-Typ!"), //not in gen 5+, ability popup
    [STRINGID_PKMNPREVENTSROMANCEWITH]              = COMPOUND_STRING("{B_DEF_ABILITY} von {B_DEF_NAME_WITH_PREFIX} verhindert eine Romanze!"), //not in gen 5+, ability popup
    [STRINGID_PKMNPREVENTSCONFUSIONWITH]            = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} verhindert Verwirrung!"), //not in gen 5+, ability popup
    [STRINGID_PKMNRAISEDFIREPOWERWITH]              = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erhöht die Kraft des Feuers!"), //not in gen 5+, ability popup
    [STRINGID_PKMNANCHORSITSELFWITH]                = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} haftet mit seinen Saugnäpfen fest am Boden!"), //not in gen 5+, ability popup
    [STRINGID_PKMNPREVENTSSTATLOSSWITH]             = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} verhindert Statusveränderungen!"), //not in gen 5+, ability popup
    [STRINGID_PKMNHURTSWITH]                        = COMPOUND_STRING("{B_BUFF1} von {B_DEF_NAME_WITH_PREFIX2} verletzt {B_ATK_NAME_WITH_PREFIX}!"),
    [STRINGID_PKMNTRACED]                           = COMPOUND_STRING("Fährte erkennt {B_BUFF2} von {B_BUFF1}!"),
    [STRINGID_STATSHARPLY]                          = gText_StatSharply,
    [STRINGID_STATHARSHLY]                          = COMPOUND_STRING(" stark"),
    [STRINGID_STATROSE]                             = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} steigt{B_BUFF2}."),
    [STRINGID_STATFELL]                             = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} sinkt{B_BUFF2}."),
    [STRINGID_CRITICALHIT]                          = COMPOUND_STRING("Ein Volltreffer!"),
    [STRINGID_ONEHITKO]                             = COMPOUND_STRING("Ein K.O.-Treffer!"),
    [STRINGID_123POOF]                              = COMPOUND_STRING("Eins… {PAUSE 10}zwei… {PAUSE 10}und… {PAUSE 10}{PAUSE 20}{PLAY_SE SE_BALL_BOUNCE_1}ta-da!\p"),
    [STRINGID_ANDELLIPSIS]                          = COMPOUND_STRING("Und…\p"),
    [STRINGID_NOTVERYEFFECTIVE]                     = COMPOUND_STRING("Das ist nicht sehr effektiv…"),
    [STRINGID_SUPEREFFECTIVE]                       = COMPOUND_STRING("Das ist sehr effektiv!"),
    [STRINGID_GOTAWAYSAFELY]                        = sText_GotAwaySafely,
    [STRINGID_WILDPKMNFLED]                         = COMPOUND_STRING("{PLAY_SE SE_FLEE}Wildes {B_BUFF1} floh!"),
    [STRINGID_NORUNNINGFROMTRAINERS]                = COMPOUND_STRING("Du kannst aus Trainerkämpfen nicht fliehen!\p"),
    [STRINGID_CANTESCAPE]                           = COMPOUND_STRING("Du kannst nicht fliehen!\p"),
    [STRINGID_DONTLEAVEBIRCH]                       = COMPOUND_STRING("Prof. Birch: Lass mich nicht im Stich!\p"), //no decapitalize until it is everywhere
    [STRINGID_BUTNOTHINGHAPPENED]                   = COMPOUND_STRING("Nichts geschieht!"),
    [STRINGID_BUTITFAILED]                          = COMPOUND_STRING("Es schlug fehl!"),
    [STRINGID_ITHURTCONFUSION]                      = COMPOUND_STRING("Es hat sich vor Verwirrung selbst verletzt!"),
    [STRINGID_STARTEDTORAIN]                        = COMPOUND_STRING("Es beginnt zu regnen!"),
    [STRINGID_DOWNPOURSTARTED]                      = COMPOUND_STRING("Ein Wolkenbruch!"), // corresponds to DownpourText in pokegold and pokecrystal and is used by Rain Dance in GSC
    [STRINGID_RAINCONTINUES]                        = COMPOUND_STRING("Es regnet weiter."), //not in gen 5+
    [STRINGID_DOWNPOURCONTINUES]                    = COMPOUND_STRING("The downpour continues."), // unused
    [STRINGID_RAINSTOPPED]                          = COMPOUND_STRING("Es hat aufgehört zu regnen."),
    [STRINGID_SANDSTORMBREWED]                      = COMPOUND_STRING("Ein Sandsturm kommt auf!"),
    [STRINGID_SANDSTORMRAGES]                       = COMPOUND_STRING("Der Sandsturm tobt."),
    [STRINGID_SANDSTORMSUBSIDED]                    = COMPOUND_STRING("Der Sandsturm legt sich."),
    [STRINGID_SUNLIGHTGOTBRIGHT]                    = COMPOUND_STRING("Das Sonnenlicht wird stärker!"),
    [STRINGID_SUNLIGHTSTRONG]                       = COMPOUND_STRING("Gleißendes Sonnenlicht."), //not in gen 5+
    [STRINGID_SUNLIGHTFADED]                        = COMPOUND_STRING("Das Sonnenlicht lässt nach."),
    [STRINGID_STARTEDHAIL]                          = COMPOUND_STRING("Es fängt an zu hageln!"),
    [STRINGID_HAILCONTINUES]                        = COMPOUND_STRING("Es hagelt."),
    [STRINGID_HAILSTOPPED]                          = COMPOUND_STRING("Es hat aufgehört zu hageln."),
    [STRINGID_STATCHANGESGONE]                      = COMPOUND_STRING("Alle Statusveränderungen wurden entfernt!"),
    [STRINGID_COINSSCATTERED]                       = COMPOUND_STRING("Es sind überall Münzen verstreut!"),
    [STRINGID_TOOWEAKFORSUBSTITUTE]                 = COMPOUND_STRING("Zu wenig KP um einen Delegator einzusetzen!"),
    [STRINGID_SHAREDPAIN]                           = COMPOUND_STRING("Die Kontrahenten teilen ihr Leid!"),
    [STRINGID_BELLCHIMED]                           = COMPOUND_STRING("Eine Glocke läutet!"),
    [STRINGID_FAINTINTHREE]                         = COMPOUND_STRING("Alle betroffen Pokémon werden in 3 Runden K.O. gehen!"),
    [STRINGID_NOPPLEFT]                             = COMPOUND_STRING("Es sind keine AP mehr für diese Attacke übrig!\p"), //not in gen 5+
    [STRINGID_BUTNOPPLEFT]                          = COMPOUND_STRING("Aber es waren keine AP mehr für diese Attacke übrig!"),
    [STRINGID_PLAYERUSEDITEM]                       = COMPOUND_STRING("{B_PLAYER_NAME} setzt {B_LAST_ITEM} ein!"),
    [STRINGID_WALLYUSEDITEM]                        = COMPOUND_STRING("Wally setzt {B_LAST_ITEM} ein!"), //no decapitalize until it is everywhere
    [STRINGID_TRAINERBLOCKEDBALL]                   = COMPOUND_STRING("Der Trainer hat den Ball abgeblockt!"),
    [STRINGID_DONTBEATHIEF]                         = COMPOUND_STRING("Sei kein Dieb!"),
    [STRINGID_ITDODGEDBALL]                         = COMPOUND_STRING("Es ist dem Ball ausgewichen! Dieses Pokémon kann nicht gefangen werden!"),
    [STRINGID_PKMNBROKEFREE]                        = COMPOUND_STRING("Schade! Das Pokémon hat sich befreit!"),
    [STRINGID_ITAPPEAREDCAUGHT]                     = COMPOUND_STRING("Oh! Fast hätte es geklappt!"),
    [STRINGID_AARGHALMOSTHADIT]                     = COMPOUND_STRING("Schade! Das war knapp!"),
    [STRINGID_SHOOTSOCLOSE]                         = COMPOUND_STRING("Verflixt! Es hätte beinahe geklappt!"),
    [STRINGID_GOTCHAPKMNCAUGHTPLAYER]               = COMPOUND_STRING("Toll! {B_DEF_NAME} wurde gefangen!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}\p"),
    [STRINGID_GOTCHAPKMNCAUGHTWALLY]                = COMPOUND_STRING("Toll! {B_DEF_NAME} wurde gefangen!{WAIT_SE}{PLAY_BGM MUS_CAUGHT}{PAUSE 127}"),
    [STRINGID_GIVENICKNAMECAPTURED]                 = COMPOUND_STRING("Möchtest du dem {B_DEF_NAME} einen Spitznamen geben?"),
    [STRINGID_PKMNDATAADDEDTODEX]                   = COMPOUND_STRING("Für {B_DEF_NAME} wurde ein Eintrag im Pokédex angelegt!\p"),
    [STRINGID_ITISRAINING]                          = COMPOUND_STRING("Es regnet!"),
    [STRINGID_SANDSTORMISRAGING]                    = COMPOUND_STRING("Der Sandsturm tobt!"),
    [STRINGID_CANTESCAPE2]                          = COMPOUND_STRING("Flucht unmöglich!\p"),
    [STRINGID_PKMNIGNORESASLEEP]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ignoriert die Befehle und schläft!"),
    [STRINGID_PKMNIGNOREDORDERS]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ignoriert die Befehle!"),
    [STRINGID_PKMNBEGANTONAP]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} macht ein Nickerchen!"),
    [STRINGID_PKMNLOAFING]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} faulenzt!"),
    [STRINGID_PKMNWONTOBEY]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist ungehorsam!"),
    [STRINGID_PKMNTURNEDAWAY]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wendet sich ab!"),
    [STRINGID_PKMNPRETENDNOTNOTICE]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} gibt vor, nichts zu bemerken!"),
    [STRINGID_ENEMYABOUTTOSWITCHPKMN]               = COMPOUND_STRING("Als Nächstes wird {B_BUFF2} von {B_TRAINER1_NAME_WITH_CLASS} eingesetzt.\pWillst du dein Pokémon wechseln?"),
    [STRINGID_CREPTCLOSER]                          = COMPOUND_STRING("{B_PLAYER_NAME} schleicht sich näher an {B_OPPONENT_MON1_NAME} heran!"), //safari
    [STRINGID_CANTGETCLOSER]                        = COMPOUND_STRING("{B_PLAYER_NAME} kann nicht näher herangehen!"), //safari
    [STRINGID_PKMNWATCHINGCAREFULLY]                = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} beobachtet alles aufmerksam!"), //safari
    [STRINGID_PKMNCURIOUSABOUTX]                    = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} ist neugierig auf {B_BUFF1}!"), //safari
    [STRINGID_PKMNENTHRALLEDBYX]                    = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} ist begeistert von {B_BUFF1}!"), //safari
    [STRINGID_PKMNIGNOREDX]                         = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} ignoriert {B_BUFF1} völlig!"), //safari
    [STRINGID_THREWPOKEBLOCKATPKMN]                 = COMPOUND_STRING("{B_PLAYER_NAME} wirft {B_OPPONENT_MON1_NAME} einen {POKEBLOCK} zu!"), //safari
    [STRINGID_OUTOFSAFARIBALLS]                     = COMPOUND_STRING("{PLAY_SE SE_DING_DONG}Ansage: Du hast keine Safaribälle mehr! Game over!\p"), //safari
    [STRINGID_PKMNSITEMCUREDPARALYSIS]              = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} heilte die Paralyse!"),
    [STRINGID_PKMNSITEMCUREDPOISON]                 = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} heilte die Vergiftung!"),
    [STRINGID_PKMNSITEMHEALEDBURN]                  = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} heilte die Verbrennung!"),
    [STRINGID_PKMNSITEMDEFROSTEDIT]                 = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} taute es auf!"),
    [STRINGID_PKMNSITEMWOKEIT]                      = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} weckte es auf!"),
    [STRINGID_PKMNSITEMSNAPPEDOUT]                  = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} hebt die Verwirrung auf!"),
    [STRINGID_PKMNSITEMCUREDPROBLEM]                = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} heilt sein Problem mit {B_BUFF1}!"),
    [STRINGID_PKMNSITEMRESTOREDHEALTH]              = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} füllte seine KP auf!"),
    [STRINGID_PKMNSITEMRESTOREDPP]                  = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} füllte AP von {B_BUFF1} auf!"),
    [STRINGID_PKMNSITEMRESTOREDSTATUS]              = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} normalisierte seine Statuswerte!"),
    [STRINGID_PKMNSITEMRESTOREDHPALITTLE]           = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} füllt einige KP auf!"),
    [STRINGID_ITEMALLOWSONLYYMOVE]                  = COMPOUND_STRING("{B_LAST_ITEM} erlaubt nur den Einsatz von {B_CURRENT_MOVE}!\p"),
    [STRINGID_PKMNHUNGONWITHX]                      = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hält mit Hilfe von {B_LAST_ITEM} durch!"),
    [STRINGID_EMPTYSTRING3]                         = gText_EmptyString3,
    [STRINGID_PKMNSXRESTOREDHPALITTLE2]             = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} füllt einige KP auf!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSXWHIPPEDUPSANDSTORM]             = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} entfacht einen Sandsturm!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSXPREVENTSYLOSS]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} verhindert den Verlust von {B_BUFF1}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSXINFATUATEDY]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX2} ist verliebt!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSXMADEYINEFFECTIVE]               = COMPOUND_STRING("Item vob {B_SCR_NAME_WITH_PREFIX} kann nicht entfernt werden!"), //not in gen 5+, ability popup
    [STRINGID_ITSUCKEDLIQUIDOOZE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} saugt Kloakensoße auf!"),
    [STRINGID_PKMNTRANSFORMED]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} verwandelt sich!"),
    [STRINGID_ELECTRICITYWEAKENED]                  = COMPOUND_STRING("Die Stärke der Elektrizität wurde geschwächt!"),
    [STRINGID_FIREWEAKENED]                         = COMPOUND_STRING("Die Stärke des Feuers wurde geschwächt!"),
    [STRINGID_PKMNHIDUNDERWATER]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} taucht unter!"),
    [STRINGID_PKMNSPRANGUP]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} springt hoch!"),
    [STRINGID_HMMOVESCANTBEFORGOTTEN]               = COMPOUND_STRING("VM-Attacken können jetzt nicht vergessen werden.\p"),
    [STRINGID_XFOUNDONEY]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat ein {B_LAST_ITEM} gefunden!"),
    [STRINGID_PLAYERDEFEATEDTRAINER1]               = sText_PlayerDefeatedLinkTrainerTrainer1,
    [STRINGID_SOOTHINGAROMA]                        = COMPOUND_STRING("Ein wohltuendes Aroma breitet sich aus!"),
    [STRINGID_ITEMSCANTBEUSEDNOW]                   = COMPOUND_STRING("Hier können Items nicht eingesetzt werden.{PAUSE 64}"), //not in gen 5+, i think
    [STRINGID_USINGITEMSTATOFPKMNROSE]              = COMPOUND_STRING("{B_LAST_ITEM}: {B_BUFF1} von {B_SCR_NAME_WITH_PREFIX2} wird {B_BUFF2} erhöht!"), //todo: update this, will require code changes
    [STRINGID_USINGITEMSTATOFPKMNFELL]              = COMPOUND_STRING("{B_LAST_ITEM}: {B_BUFF1} von {B_SCR_NAME_WITH_PREFIX2} wird {B_BUFF2} gesenkt!"),
    [STRINGID_PKMNUSEDXTOGETPUMPED]                 = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} setzt {B_LAST_ITEM} ein, um sich aufzupumpen!"),
    [STRINGID_PKMNSXMADEYUSELESS]                   = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} macht {B_CURRENT_MOVE} wirkungslos!"), //not in gen 5+, ability popup
    [STRINGID_PKMNTRAPPEDBYSANDTOMB]                = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde durch Sandgrab gefangen!"),
    [STRINGID_EMPTYSTRING4]                         = COMPOUND_STRING(""),
    [STRINGID_ABOOSTED]                             = COMPOUND_STRING(" spezielle"),
    [STRINGID_PKMNSXINTENSIFIEDSUN]                 = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} intensiviert die Sonnenstrahlen!"), //not in gen 5+, ability popup
    [STRINGID_YOUTHROWABALLNOWRIGHT]                = COMPOUND_STRING("Nun muss man einen Ball werfen, oder? Ich… Ich werde mein Bestes geben!"),
    [STRINGID_PKMNSXTOOKATTACK]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} übernimmt den Angriff!"), //In gen 5+ but without naming the ability
    [STRINGID_PKMNCHOSEXASDESTINY]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wählte {B_CURRENT_MOVE} als Vorhersehung aus!"),
    [STRINGID_PKMNLOSTFOCUS]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat seinen Fokus verloren und kann nicht angreifen!"),
    [STRINGID_USENEXTPKMN]                          = COMPOUND_STRING("Nächstes Pokémon einsetzen?"),
    [STRINGID_PKMNFLEDUSINGITS]                     = COMPOUND_STRING("{PLAY_SE SE_FLEE}{B_ATK_NAME_WITH_PREFIX} flieht durch Einsatz von {B_LAST_ITEM}!\p"),
    [STRINGID_PKMNFLEDUSING]                        = COMPOUND_STRING("{PLAY_SE SE_FLEE}{B_ATK_NAME_WITH_PREFIX} flieht durch Einsatz von {B_ATK_ABILITY}!\p"), //not in gen 5+
    [STRINGID_PKMNWASDRAGGEDOUT]                    = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde auserwählt!\p"),
    [STRINGID_PKMNSITEMNORMALIZEDSTATUS]            = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} normalisierte seine Statuswerte!"),
    [STRINGID_TRAINER1USEDITEM]                     = COMPOUND_STRING("{B_LAST_ITEM} wird von {B_ATK_TRAINER_NAME_WITH_CLASS} eingesetzt!"),
    [STRINGID_BOXISFULL]                            = COMPOUND_STRING("Die Box ist voll! Du kannst nichts mehr fangen!\p"),
    [STRINGID_PKMNSXMADEITINEFFECTIVE]              = COMPOUND_STRING("Item von {B_SCR_NAME_WITH_PREFIX} kann nicht entfernt werden!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSXPREVENTSFLINCHING]              = COMPOUND_STRING("{B_EFF_ABILITY} von {B_EFF_NAME_WITH_PREFIX} verhindert Zurückschrecken!"), //not in gen 5+, ability popup
    [STRINGID_PKMNALREADYHASBURN]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} brennt bereits!"),
    [STRINGID_PKMNSXBLOCKSY]                        = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} blockiert {B_CURRENT_MOVE}!"), //not in gen 5+, ability popup
    [STRINGID_PKMNSXWOREOFF]                        = COMPOUND_STRING("{B_BUFF1} von {B_ATK_TEAM1}lässt nach!"),
    [STRINGID_THEWALLSHATTERED]                     = COMPOUND_STRING("Die Mauer brach zusammen!"), //not in gen5+, uses "your teams light screen wore off!" etc instead
    [STRINGID_PKMNSXCUREDITSYPROBLEM]               = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} heilt sein Problem mit {B_BUFF1}!"), //not in gen 5+, ability popup
    [STRINGID_ATTACKERCANTESCAPE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann nicht fliehen!"),
    [STRINGID_PKMNOBTAINEDX]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erhält {B_BUFF1}."),
    [STRINGID_PKMNOBTAINEDX2]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} erhält {B_BUFF2}."),
    [STRINGID_PKMNOBTAINEDXYOBTAINEDZ]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erhält {B_BUFF1}.\p{B_DEF_NAME_WITH_PREFIX} erhält {B_BUFF2}."),
    [STRINGID_BUTNOEFFECT]                          = COMPOUND_STRING("Es ist wirkungslos!"),
    [STRINGID_TWOENEMIESDEFEATED]                   = sText_TwoInGameTrainersDefeated,
    [STRINGID_TRAINER2LOSETEXT]                     = COMPOUND_STRING("{B_TRAINER2_LOSE_TEXT}"),
    [STRINGID_PKMNINCAPABLEOFPOWER]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann seine Kraft nicht einsetzen!"),
    [STRINGID_GLINTAPPEARSINEYE]                    = COMPOUND_STRING("Die Augen von {B_SCR_NAME_WITH_PREFIX2} funkeln!"),
    [STRINGID_PKMNGETTINGINTOPOSITION]              = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} bringt sich in Position!"),
    [STRINGID_PKMNBEGANGROWLINGDEEPLY]              = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} knurrt bedrohlich!"),
    [STRINGID_PKMNEAGERFORMORE]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} will noch mehr!"),
    [STRINGID_DEFEATEDOPPONENTBYREFEREE]            = COMPOUND_STRING("Der Ringrichter entscheidet, dass{B_PLAYER_MON1_NAME} {B_OPPONENT_MON1_NAME} schlägt!"),
    [STRINGID_LOSTTOOPPONENTBYREFEREE]              = COMPOUND_STRING("Der Ringrichter entscheidet, dass{B_PLAYER_MON1_NAME} {B_OPPONENT_MON1_NAME} unterliegt!"),
    [STRINGID_TIEDOPPONENTBYREFEREE]                = COMPOUND_STRING("Der Ringrichter entscheidet, bei {B_PLAYER_MON1_NAME} und {B_OPPONENT_MON1_NAME} auf Remis!"),
    [STRINGID_QUESTIONFORFEITMATCH]                 = COMPOUND_STRING("Möchtest du den Kampf jetzt aufgeben??"),
    [STRINGID_FORFEITEDMATCH]                       = COMPOUND_STRING("Der Kampf wurde aufgegeben."),
    [STRINGID_PKMNTRANSFERREDSOMEONESPC]            = gText_PkmnTransferredSomeonesPC,
    [STRINGID_PKMNTRANSFERREDLANETTESPC]            = gText_PkmnTransferredLanettesPC,
    [STRINGID_PKMNBOXSOMEONESPCFULL]                = gText_PkmnTransferredSomeonesPCBoxFull,
    [STRINGID_PKMNBOXLANETTESPCFULL]                = gText_PkmnTransferredLanettesPCBoxFull,
    [STRINGID_TRAINER1WINTEXT]                      = COMPOUND_STRING("{B_TRAINER1_WIN_TEXT}"),
    [STRINGID_TRAINER2WINTEXT]                      = COMPOUND_STRING("{B_TRAINER2_WIN_TEXT}"),
    [STRINGID_ENDUREDSTURDY]                        = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} übersteht die Attacke dank {B_DEF_ABILITY}!"),
    [STRINGID_POWERHERB]                            = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch {B_LAST_ITEM} vollständig aufgeladen!"),
    [STRINGID_HURTBYITEM]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch {B_LAST_ITEM} verletzt!"),
    [STRINGID_GRAVITYINTENSIFIED]                   = COMPOUND_STRING("Schwerkraft intensiviert!"),
    [STRINGID_TARGETWOKEUP]                         = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ist aufgewacht!"),
    [STRINGID_TAILWINDBLEW]                         = COMPOUND_STRING("Das Team von {B_ATK_TEAM2} wird von Rückenwind erfasst!"),
    [STRINGID_PKMNWENTBACK]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kehrte zurück zu {B_ATK_TRAINER_NAME}!"),
    [STRINGID_PKMNCANTUSEITEMSANYMORE]              = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} kann keine Items mehr einsetzen!"),
    [STRINGID_PKMNFLUNG]                            = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} schleudert sein Item {B_LAST_ITEM}!"),
    [STRINGID_PKMNPREVENTEDFROMHEALING]             = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} konnte sich nicht heilen!"),
    [STRINGID_PKMNSWITCHEDATKANDDEF]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} tauscht Angriff und Verteidigung!"),
    [STRINGID_PKMNSABILITYSUPPRESSED]               = COMPOUND_STRING("Fähigkeit von {B_DEF_NAME_WITH_PREFIX} wird unterdrückt!"),
    [STRINGID_SHIELDEDFROMCRITICALHITS]             = COMPOUND_STRING("Beschwörung schützt das Team von {B_ATK_TEAM2} vor kritischen Treffern!"),
    [STRINGID_PKMNACQUIREDABILITY]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} erhielt {B_DEF_ABILITY}!"),
    [STRINGID_POISONSPIKESSCATTERED]                = COMPOUND_STRING("Team von {B_DEF_TEAM2} hat Giftstacheln um sich herum!"),
    [STRINGID_PKMNSWITCHEDSTATCHANGES]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} tauscht Statusveränderungen mit dem Ziel!"),
    [STRINGID_PKMNSURROUNDEDWITHVEILOFWATER]        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} umgibt sich mit einem Schleier aus Wasser!"),
    [STRINGID_PKMNLEVITATEDONELECTROMAGNETISM]      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} schwebt durch Elektromagnetismus!"),
    [STRINGID_PKMNTWISTEDDIMENSIONS]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verdreht die Dimensionen!"),
    [STRINGID_POINTEDSTONESFLOAT]                   = COMPOUND_STRING("Spitze Steine umgeben das Team von {B_DEF_TEAM2}!"),
    [STRINGID_TRAPPEDBYSWIRLINGMAGMA]               = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde in wirbelndem Magma gefangen!"),
    [STRINGID_VANISHEDINSTANTLY]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verschwand sofort!"),
    [STRINGID_PROTECTEDTEAM]                        = COMPOUND_STRING("{B_CURRENT_MOVE} schützt das Team von {B_ATK_TEAM2}!"),
    [STRINGID_SHAREDITSGUARD]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} teilt Schutzkräfte auf!"),
    [STRINGID_SHAREDITSPOWER]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} teilt Kräfte auf!"),
    [STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON]         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} tauscht Veränderungen an Verteidigung und Spezialverteidigung mit dem Ziel!"),
    [STRINGID_BECAMENIMBLE]                         = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde flink!"),
    [STRINGID_HURLEDINTOTHEAIR]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde in die Luft geschleudert!"),
    [STRINGID_HELDITEMSLOSEEFFECTS]                 = COMPOUND_STRING("Es entsteht ein Raum, in dem getragene Items ihre Wirkung verlieren!"),
    [STRINGID_FELLSTRAIGHTDOWN]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ist herabgestürzt!"),
    [STRINGID_TARGETCHANGEDTYPE]                    = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} verwandelte sich in einen {B_BUFF1}-Typ!"),
    [STRINGID_KINDOFFER]                            = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} nahm das Angebot an!"),
    [STRINGID_RESETSTARGETSSTATLEVELS]              = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} Statusveränderungen wurden entfernt!"),
    [STRINGID_ALLYSWITCHPOSITION]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} und {B_SCR_NAME_WITH_PREFIX2} haben Plätze getauscht!"),
    [STRINGID_REFLECTTARGETSTYPE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde zum gleichen Typ wie {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_EMBARGOENDS]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann Items wieder benutzen!"),
    [STRINGID_ELECTROMAGNETISM]                     = COMPOUND_STRING("Elektromagnetismus"),
    [STRINGID_BUFFERENDS]                           = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} lässt nach!"),
    [STRINGID_TELEKINESISENDS]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde von der Telekinese befreit!"),
    [STRINGID_TAILWINDENDS]                         = COMPOUND_STRING("Rückenwind von {B_ATK_TEAM1} lässt nach!"),
    [STRINGID_LUCKYCHANTENDS]                       = COMPOUND_STRING("Beschwörung von {B_ATK_TEAM1} lässt nach!"),
    [STRINGID_TRICKROOMENDS]                        = COMPOUND_STRING("Die verdrehten Dimensionen sind wieder normal!"),
    [STRINGID_WONDERROOMENDS]                       = COMPOUND_STRING("Wunderraum lässt nach, Verteidigung und Spezialverteidigung normailisieren sich!"),
    [STRINGID_MAGICROOMENDS]                        = COMPOUND_STRING("Magieraum lässt nach, getragene Items funktionieren wieder!"),
    [STRINGID_MUDSPORTENDS]                         = COMPOUND_STRING("Der Effekt von Lehmsuhler lässt nach."),
    [STRINGID_WATERSPORTENDS]                       = COMPOUND_STRING("Der Effekt von Nassmacher lässt nach."),
    [STRINGID_GRAVITYENDS]                          = COMPOUND_STRING("Die Schwerkraft ist wieder normal!"),
    [STRINGID_AQUARINGHEAL]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX2} füllt wenige KP auf!"),
    [STRINGID_ELECTRICTERRAINENDS]                  = COMPOUND_STRING("Die Elektrizität lässt nach."),
    [STRINGID_MISTYTERRAINENDS]                     = COMPOUND_STRING("Der Nebel lässt nach."),
    [STRINGID_PSYCHICTERRAINENDS]                   = COMPOUND_STRING("Das Psychofeld lässt nach!"),
    [STRINGID_GRASSYTERRAINENDS]                    = COMPOUND_STRING("Das Gras verschwindet."),
    [STRINGID_TARGETABILITYSTATRAISE]               = COMPOUND_STRING("{B_DEF_ABILITY} von {B_DEF_NAME_WITH_PREFIX} erhöht {B_BUFF1} {B_BUFF2}!"),
    [STRINGID_STATWASMAXEDOUT]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} maximiert {B_BUFF1}!"),
    [STRINGID_ATTACKERABILITYSTATRAISE]             = COMPOUND_STRING("{B_ATK_ABILITY} von {B_ATK_NAME_WITH_PREFIX} erhöht {B_BUFF1} {B_BUFF2}!"),
    [STRINGID_POISONHEALHPUP]                       = COMPOUND_STRING("Die Vergiftung heilt {B_ATK_NAME_WITH_PREFIX2} ein wenig!"), //don't think this message is displayed anymore
    [STRINGID_BADDREAMSDMG]                         = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wird von Folterknecht unterworfen!"),
    [STRINGID_MOLDBREAKERENTERS]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} überbrückt die Fähigkeit!"),
    [STRINGID_TERAVOLTENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} strahlt eine knisternde Aura aus!"),
    [STRINGID_TURBOBLAZEENTERS]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} strahlt eine lodernde Aura aus!"),
    [STRINGID_SLOWSTARTENTERS]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist langsam am Anfang!"),
    [STRINGID_SLOWSTARTEND]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat endlich Fahrt aufgenommen!"),
    [STRINGID_SOLARPOWERHPDROP]                     = COMPOUND_STRING("{B_ATK_ABILITY} von {B_ATK_NAME_WITH_PREFIX} schadet!"), //don't think this message is displayed anymore
    [STRINGID_AFTERMATHDMG]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde verletzt!"),
    [STRINGID_ANTICIPATIONACTIVATES]                = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erzitterte!"),
    [STRINGID_FOREWARNACTIVATES]                    = COMPOUND_STRING("{B_SCR_ABILITY} warnt {B_SCR_NAME_WITH_PREFIX2} vor {B_EFF_NAME_WITH_PREFIX2} {B_BUFF1} vor!"),
    [STRINGID_ICEBODYHPGAIN]                        = COMPOUND_STRING("{B_ATK_ABILITY} von {B_ATK_NAME_WITH_PREFIX} füllt wenige KP auf!"), //don't think this message is displayed anymore
    [STRINGID_SNOWWARNINGHAIL]                      = COMPOUND_STRING("Es fängt an zu hageln!"),
    [STRINGID_FRISKACTIVATES]                       = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} durchsuchte {B_SCR_NAME_WITH_PREFIX2} und fand {B_LAST_ITEM}!"),
    [STRINGID_UNNERVEENTERS]                        = COMPOUND_STRING("Das Team von {B_EFF_TEAM1} ist zu nervös um Beeren zu essen!"),
    [STRINGID_HARVESTBERRY]                         = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erntet {B_LAST_ITEM}!"),
    [STRINGID_PROTEANTYPECHANGE]                    = COMPOUND_STRING("{B_ATK_ABILITY} von {B_ATK_NAME_WITH_PREFIX} verwandelte es in einen {B_BUFF1}-Typ!"),
    [STRINGID_SYMBIOSISITEMPASS]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} gibt {B_LAST_ITEM} an {B_EFF_NAME_WITH_PREFIX2} weiter, durch {B_LAST_ABILITY}!"),
    [STRINGID_STEALTHROCKDMG]                       = COMPOUND_STRING("Spitze Steine verletzten {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_TOXICSPIKESABSORBED]                  = COMPOUND_STRING("Die Giftstacheln um das Team von {B_EFF_TEAM2} verschwanden!"),
    [STRINGID_TOXICSPIKESPOISONED]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde vergiftet!"),
    [STRINGID_TOXICSPIKESBADLYPOISONED]             = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde schwer vergiftet!"),
    [STRINGID_STICKYWEBSWITCHIN]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde in einem Klebenetz gefangen!"),
    [STRINGID_HEALINGWISHCAMETRUE]                  = COMPOUND_STRING("Das Heilopfer erreicht {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_HEALINGWISHHEALED]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erholt sich!"),
    [STRINGID_LUNARDANCECAMETRUE]                   = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde in mysteriöses Mondlicht getaucht!"),
    [STRINGID_CURSEDBODYDISABLED]                   = COMPOUND_STRING("{B_BUFF1} von {B_ATK_NAME_WITH_PREFIX} wurde deaktiviert!"),
    [STRINGID_ATTACKERACQUIREDABILITY]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erhält {B_ATK_ABILITY}!"),
    [STRINGID_TARGETABILITYSTATLOWER]               = COMPOUND_STRING("{B_DEF_ABILITY} von {B_DEF_NAME_WITH_PREFIX} senkt seine {B_BUFF1} {B_BUFF2}!"),
    [STRINGID_TARGETSTATWONTGOHIGHER]               = COMPOUND_STRING("{B_BUFF1} von {B_DEF_NAME_WITH_PREFIX} kann nicht weiter erhöht werden!"),
    [STRINGID_PKMNMOVEBOUNCEDABILITY]               = COMPOUND_STRING("{B_CURRENT_MOVE} von {B_DEF_NAME_WITH_PREFIX} ist abgeprallt!"),
    [STRINGID_IMPOSTERTRANSFORM]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verwandelte sich in {B_DEF_NAME_WITH_PREFIX2} durch {B_LAST_ABILITY}!"),
    [STRINGID_ASSAULTVESTDOESNTALLOW]               = COMPOUND_STRING("Der Effekt von {B_LAST_ITEM} verhindert den Einsatz von Statusattacken!\p"),
    [STRINGID_GRAVITYPREVENTSUSAGE]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann {B_CURRENT_MOVE} nicht einsetzen aufgrund der Schwerkraft!\p"),
    [STRINGID_HEALBLOCKPREVENTSUSAGE]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} konnte sich nicht heilen!\p"),
    [STRINGID_NOTDONEYET]                           = COMPOUND_STRING("Der Effekt ist noch nicht vorbei!\p"),
    [STRINGID_STICKYWEBUSED]                        = COMPOUND_STRING("Ein Klebenetz wurde um das Team von {B_DEF_TEAM2} gelegt!"),
    [STRINGID_QUASHSUCCESS]                         = COMPOUND_STRING("Attacke von {B_DEF_NAME_WITH_PREFIX} wird verschoben!"),
    [STRINGID_PKMNBLEWAWAYTOXICSPIKES]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entfernt die Giftstacheln!"),
    [STRINGID_PKMNBLEWAWAYSTICKYWEB]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entfernt das Klebenetz!"),
    [STRINGID_PKMNBLEWAWAYSTEALTHROCK]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entfernt die spitzen Steine!"),
    [STRINGID_IONDELUGEON]                          = COMPOUND_STRING("Ein Ionensturm zieht auf!"),
    [STRINGID_TOPSYTURVYSWITCHEDSTATS]              = COMPOUND_STRING("Alle Statusveränderung von {B_DEF_NAME_WITH_PREFIX2} wurden umgekehrt!"),
    [STRINGID_TERRAINBECOMESMISTY]                  = COMPOUND_STRING("Nebel zieht auf!"),
    [STRINGID_TERRAINBECOMESGRASSY]                 = COMPOUND_STRING("Gras wächst überall!"),
    [STRINGID_TERRAINBECOMESELECTRIC]               = COMPOUND_STRING("Eine elektrische Spannung entsteht!"),
    [STRINGID_TERRAINBECOMESPSYCHIC]                = COMPOUND_STRING("Das Kampffeld wird sonderbar!"),
    [STRINGID_TARGETELECTRIFIED]                    = COMPOUND_STRING("Attacken von {B_DEF_NAME_WITH_PREFIX} wurden elektrifiziert!"),
    [STRINGID_MEGAEVOREACTING]                      = COMPOUND_STRING("{B_LAST_ITEM} von {B_ATK_NAME_WITH_PREFIX} reagiert auf {B_ATK_TRAINER_NAME}'s Mega Ring!"), //actually displays the type of mega ring in inventory, but we didnt implement them :(
    [STRINGID_MEGAEVOEVOLVED]                       = COMPOUND_STRING("Mega-Entwicklung von {B_ATK_NAME_WITH_PREFIX} in Mega {B_BUFF1}!"),
    [STRINGID_DRASTICALLY]                          = gText_drastically,
    [STRINGID_SEVERELY]                             = gText_severely,
    [STRINGID_INFESTATION]                          = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde von einer Plage von {B_SCR_NAME_WITH_PREFIX2} befallen!"),
    [STRINGID_NOEFFECTONTARGET]                     = COMPOUND_STRING("Das hat keinen Effekt auf {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_BURSTINGFLAMESHIT]                    = COMPOUND_STRING("Die knisternden Flammen treffen {B_EFF_NAME_WITH_PREFIX2}!"),
    [STRINGID_BESTOWITEMGIVING]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} erhält {B_LAST_ITEM} von {B_ATK_NAME_WITH_PREFIX2}!"),
    [STRINGID_THIRDTYPEADDED]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX2} erhält zusätzlich den {B_BUFF1}-Typ!"),
    [STRINGID_FELLFORFEINT]                         = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} fiel auf die Finte herein!"),
    [STRINGID_POKEMONCANNOTUSEMOVE]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann {B_CURRENT_MOVE} nicht einsetzen!"),
    [STRINGID_COVEREDINPOWDER]                      = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ist mit Puder bedeckt!"),
    [STRINGID_POWDEREXPLODES]                       = COMPOUND_STRING("Als die Flamme das Puder berührte, gab es eine Explosion!"),
    [STRINGID_BELCHCANTSELECT]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat keine Beeren gegessen und kann daher nicht rülpsen!\p"),
    [STRINGID_SPECTRALTHIEFSTEAL]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat erhöhte Statuswerte gestohlen!"),
    [STRINGID_GRAVITYGROUNDING]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} fiel aus dem Himmel aufgrund der Schwerkraft!"),
    [STRINGID_MISTYTERRAINPREVENTS]                 = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} umhüllt sich mit einem schützenden Nebel!"),
    [STRINGID_GRASSYTERRAINHEALS]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wird vom Gras geheilt!"),
    [STRINGID_ELECTRICTERRAINPREVENTS]              = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} umgibt sich mit elektrischer Spannung!"),
    [STRINGID_PSYCHICTERRAINPREVENTS]               = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wird vom Psychofeld geschützt!"),
    [STRINGID_SAFETYGOGGLESPROTECTED]               = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist nicht betroffen, aufgrund seines {B_LAST_ITEM}!"),
    [STRINGID_FLOWERVEILPROTECTED]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} umgibt sich mit einem Schleier aus Blütenblättern!"),
    [STRINGID_FLOWERVEILPROTECTEDTARGET]            = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} umgibt sich mit einem Schleier aus Blütenblättern!"),   
    [STRINGID_AROMAVEILPROTECTED]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wird von einer Aromahülle geschützt!"),
    [STRINGID_CELEBRATEMESSAGE]                     = COMPOUND_STRING("Glückwunsch, {B_PLAYER_NAME}!"),
    [STRINGID_USEDINSTRUCTEDMOVE]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} folgt {B_ATK_NAME_WITH_PREFIX2}'s Anweisung!"),
    [STRINGID_THROATCHOPENDS]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann Schall-Attacken mit  wieder einsetzen!"),
    [STRINGID_PKMNCANTUSEMOVETHROATCHOP]            = COMPOUND_STRING("Der Effekt von Neck Stricke hindert {B_ATK_NAME_WITH_PREFIX2} daran Schall-Attacken zeinzusetzen!\p"),
    [STRINGID_LASERFOCUS]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} konzentriert sich!"),
    [STRINGID_GEMACTIVATES]                         = COMPOUND_STRING("{B_LAST_ITEM} erhöht die Kraft von {B_ATK_NAME_WITH_PREFIX2}!"),
    [STRINGID_BERRYDMGREDUCES]                      = COMPOUND_STRING("{B_LAST_ITEM} verringert den Schaden für {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_AIRBALLOONFLOAT]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} schwebt mithilfe des Luftballons!"),
    [STRINGID_AIRBALLOONPOP]                        = COMPOUND_STRING("Der Luftballon von {B_DEF_NAME_WITH_PREFIX} ist geplatzt!"),
    [STRINGID_INCINERATEBURN]                       = COMPOUND_STRING("{B_LAST_ITEM} von {B_EFF_NAME_WITH_PREFIX} ist verbrannt!"),
    [STRINGID_BUGBITE]                              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat dem Ziel seine {B_LAST_ITEM} weggefuttert!"),
    [STRINGID_ILLUSIONWOREOFF]                      = COMPOUND_STRING("Illusion von {B_SCR_NAME_WITH_PREFIX} lässt nach!"),
    [STRINGID_ATTACKERCUREDTARGETSTATUS]            = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} heilt das Problem von {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_ATTACKERLOSTFIRETYPE]                 = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} hat sich selbst ausgebrannt!"),
    [STRINGID_HEALERCURE]                           = COMPOUND_STRING("{B_LAST_ABILITY} von {B_ATK_NAME_WITH_PREFIX} heilt das Problem von {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_SCRIPTINGABILITYSTATRAISE]            = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} erhöht {B_BUFF1} {B_BUFF2}!"),
    [STRINGID_RECEIVERABILITYTAKEOVER]              = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} wurde übernommen!"),
    [STRINGID_PKNMABSORBINGPOWER]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} absorbiert die Kraft!"),
    [STRINGID_NOONEWILLBEABLETORUNAWAY]             = COMPOUND_STRING("Niemand kann während der nächsten Runde fliehen!"),
    [STRINGID_DESTINYKNOTACTIVATES]                 = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} verliebte sich wegen des {B_LAST_ITEM}!"),
    [STRINGID_CLOAKEDINAFREEZINGLIGHT]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hüllte sich in eisiges Licht!"),
    [STRINGID_CLEARAMULETWONTLOWERSTATS]            = COMPOUND_STRING("Der Effekt von {B_LAST_ITEM} verhindert das Absinken der Statuswerte von {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_FERVENTWISHREACHED]                   = COMPOUND_STRING("{B_ATK_TRAINER_NAME}s inniger Wunsch hat {B_ATK_NAME_WITH_PREFIX2} erreicht!"),
    [STRINGID_AIRLOCKACTIVATES]                     = COMPOUND_STRING("Das Wetter normalisiert sich."),
    [STRINGID_PRESSUREENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erhöht den Druck!"),
    [STRINGID_DARKAURAENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} umgibt sich mit einer dunklen Aura!"),
    [STRINGID_FAIRYAURAENTERS]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} umgibt sich mit einer Feenaura!"),
    [STRINGID_AURABREAKENTERS]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} deaktivierte alle Auren anderer Pokémon!"),
    [STRINGID_COMATOSEENTERS]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} döst vor sich hin!"),
    [STRINGID_SCREENCLEANERENTERS]                  = COMPOUND_STRING("Alle Schilde wurden aufgelöst!"),
    [STRINGID_FETCHEDPOKEBALL]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat ein {B_LAST_ITEM} gefunden!"),
    [STRINGID_ASANDSTORMKICKEDUP]                   = COMPOUND_STRING("Ein Sandsturm brach los!"),
    [STRINGID_PKMNSWILLPERISHIN3TURNS]              = COMPOUND_STRING("Beide Pokémon vergehen in 3 Runden!"),  //don't think this message is displayed anymore
    [STRINGID_AURAFLAREDTOLIFE]                     = COMPOUND_STRING("Aura von {B_DEF_NAME_WITH_PREFIX} flammt auf!"),
    [STRINGID_ASONEENTERS]                          = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat 2 Fähigkeiten!"),
    [STRINGID_CURIOUSMEDICINEENTERS]                = COMPOUND_STRING("Statusveränderungen von {B_EFF_NAME_WITH_PREFIX} wurden deaktiviert!"),
    [STRINGID_CANACTFASTERTHANKSTO]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann dank seines {B_BUFF1} schneller agieren!"),
    [STRINGID_MICLEBERRYACTIVATES]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erhöhte die Genauigkeit seiner Attacke dank des {B_LAST_ITEM}s!"),
    [STRINGID_PKMNSHOOKOFFTHETAUNT]                 = COMPOUND_STRING("Provokation von {B_SCR_NAME_WITH_PREFIX} lässt nach!"),
    [STRINGID_PKMNGOTOVERITSINFATUATION]            = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist nicht mehr verliebt!"),
    [STRINGID_ITEMCANNOTBEREMOVED]                  = COMPOUND_STRING("Item von {B_ATK_NAME_WITH_PREFIX} kann nicht entfernt werden!"),
    [STRINGID_STICKYBARBTRANSFER]                   = COMPOUND_STRING("Das Item {B_LAST_ITEM} hat sich an {B_ATK_NAME_WITH_PREFIX2} angeheftet!"),
    [STRINGID_PKMNBURNHEALED]                       = COMPOUND_STRING("Verbrennung von {B_DEF_NAME_WITH_PREFIX} wurde geheilt!"),
    [STRINGID_REDCARDACTIVATE]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} zeigt {B_ATK_NAME_WITH_PREFIX2} die Rote Karte!"),
    [STRINGID_EJECTBUTTONACTIVATE]                  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wird mit {B_LAST_ITEM} getauscht!"),
    [STRINGID_ATKGOTOVERINFATUATION]                = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist nicht mehr verliebt!"),
    [STRINGID_TORMENTEDNOMORE]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wird nicht mehr von Folterknecht unterworfen!"),
    [STRINGID_HEALBLOCKEDNOMORE]                    = COMPOUND_STRING("Heilblockade von {B_SCR_NAME_WITH_PREFIX} lässt nach!"),
    [STRINGID_ATTACKERBECAMEFULLYCHARGED]           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} lädt sich dank seiner innigen Verbindung komplett auf!\p"),
    [STRINGID_ATTACKERBECAMEASHSPECIES]             = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde zu Ash-Greninja!\p"),
    [STRINGID_EXTREMELYHARSHSUNLIGHT]               = COMPOUND_STRING("Das Sonnenlicht wurde extrem grell!"),
    [STRINGID_EXTREMESUNLIGHTFADED]                 = COMPOUND_STRING("Das extreme Sonnenlicht lässt nach!"),
    [STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT]     = COMPOUND_STRING("Die Wasser-Attacke verdampft in dem extremen Sonnenlicht!"),
    [STRINGID_EXTREMELYHARSHSUNLIGHTWASNOTLESSENED] = COMPOUND_STRING("Das extreme Sonnenlicht lässt nicht nach!"),
    [STRINGID_HEAVYRAIN]                            = COMPOUND_STRING("Ein Starkregen setzt ein!"),
    [STRINGID_HEAVYRAINLIFTED]                      = COMPOUND_STRING("Der Starkregen lässt nach!"),
    [STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN]         = COMPOUND_STRING("Die Feuer-Attacke wird in diesem Starkregen gelöscht!"),
    [STRINGID_NORELIEFROMHEAVYRAIN]                 = COMPOUND_STRING("Der Starkregen lässt nicht nach!"),
    [STRINGID_MYSTERIOUSAIRCURRENT]                 = COMPOUND_STRING("Mysteriöse Winde schützen Flug-Pokémon!"),
    [STRINGID_STRONGWINDSDISSIPATED]                = COMPOUND_STRING("Die mysteriösen Winde lassen nach!"),
    [STRINGID_MYSTERIOUSAIRCURRENTBLOWSON]          = COMPOUND_STRING("Die mysteriösen Winde lassen nicht nach!"),
    [STRINGID_ATTACKWEAKENEDBSTRONGWINDS]           = COMPOUND_STRING("Die mysteriösen Winde schwächen die Attacke!"),
    [STRINGID_STUFFCHEEKSCANTSELECT]                = COMPOUND_STRING("Es kann die Attacke nicht einsetzen, da es keine Beere hat!\p"),
    [STRINGID_PKMNREVERTEDTOPRIMAL]                 = COMPOUND_STRING("Primal-Regression von {B_SCR_NAME_WITH_PREFIX}! Es kehrte in seine Urform zurück!"),
    [STRINGID_BUTPOKEMONCANTUSETHEMOVE]             = COMPOUND_STRING("Aber {B_ATK_NAME_WITH_PREFIX2} kann die Attacke nicht einsetzen!"),
    [STRINGID_BUTHOOPACANTUSEIT]                    = COMPOUND_STRING("Aber {B_ATK_NAME_WITH_PREFIX2} kann es so nicht einsetzen!"),
    [STRINGID_BROKETHROUGHPROTECTION]               = COMPOUND_STRING("Es hat die Verteidigung von {B_EFF_NAME_WITH_PREFIX2} durchbrochen!"),
    [STRINGID_ABILITYALLOWSONLYMOVE]                = COMPOUND_STRING("{B_ATK_ABILITY} kann nur {B_CURRENT_MOVE} einsetzen!\p"),
    [STRINGID_SWAPPEDABILITIES]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hat seine Fähigkeit mit dem Ziel getauscht!"),
    [STRINGID_PKMNHEALEDPOISON]                     = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hat seine Vergiftung geheilt!"),
    [STRINGID_BATTLERTYPECHANGEDTO]                 = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} verwandelte sich in einen {B_BUFF1}-Typ!"),
    [STRINGID_BOTHCANNOLONGERESCAPE]                = COMPOUND_STRING("Keines der Pokémon kann fliehen!"),
    [STRINGID_CANTESCAPEDUETOUSEDMOVE]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} kann nicht mehr fliehen aufgrund von Finalformation!"),
    [STRINGID_PKMNBECAMEWEAKERTOFIRE]               = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hat eine erhöhte Schwäche gegen Feuer!"),
    [STRINGID_ABOUTTOUSEPOLTERGEIST]                = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wird demnächst von {B_LAST_ITEM} angegriffen!"),
    [STRINGID_CANTESCAPEBECAUSEOFCURRENTMOVE]       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} kann nicht mehr fliehen aufgrund von Octoklammer!"),
    [STRINGID_NEUTRALIZINGGASENTERS]                = COMPOUND_STRING("Neutralisierendes Gas strömt aus!"),
    [STRINGID_NEUTRALIZINGGASOVER]                  = COMPOUND_STRING("Das neutralisierende Gas lässt nach!"),
    [STRINGID_TARGETTOOHEAVY]                       = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ist zu schwer um angehoben zu werden!"),
    [STRINGID_PKMNTOOKTARGETHIGH]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} nahm {B_DEF_NAME_WITH_PREFIX2} mit in den Himmel!"),
    [STRINGID_PKMNINSNAPTRAP]                       = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde vom Fangeisen erwischt!"),
    [STRINGID_METEORBEAMCHARGING]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist voller Weltraumkraft!"),
    [STRINGID_HEATUPBEAK]                           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erhitzt seinen Schnabel!"),
    [STRINGID_COURTCHANGE]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} tauscht die Kampfeffekte der beiden Seiten!"),
    [STRINGID_ZPOWERSURROUNDS]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} umgibt sich mit Z-Kraft!"),
    [STRINGID_ZMOVEUNLEASHED]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entfesselt seine volle Z-Kraft!"),
    [STRINGID_ZMOVERESETSSTATS]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat seine abgesenkten Statuswerte dank der Z-Kraft wieder normalisiert!"),
    [STRINGID_ZMOVEALLSTATSUP]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat seine Statuswerte dank der Z-Kraft erhöht!"),
    [STRINGID_ZMOVEZBOOSTCRIT]                      = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat seine kritische Chance dank der Z-Kraft erhöht!"),
    [STRINGID_ZMOVERESTOREHP]                       = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erholt sich dank der Z-Kraft!"),
    [STRINGID_ZMOVESTATUP]                          = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat seine Statuswerte dank der Z-Kraft erhöht!"),
    [STRINGID_ZMOVEHPTRAP]                          = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} erholt sich dank der Z-Kraft!"),
    [STRINGID_ATTACKEREXPELLEDTHEPOISON]            = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat das Gift ausgeschieden, damit du dir keine Sorgen machst!"),
    [STRINGID_ATTACKERSHOOKITSELFAWAKE]             = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} schüttelte sich wach, damit du dir keine Sorgen machst!"),
    [STRINGID_ATTACKERBROKETHROUGHPARALYSIS]        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat all seine Energie gesammelt, um die Lähmung zu durchbrechen, damit du dir keine Sorgen machst!"),
    [STRINGID_ATTACKERHEALEDITSBURN]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat die Verbrennung durch reine Willenskraft geheilt, damit du dir keine Sorgen machst!"),
    [STRINGID_ATTACKERMELTEDTHEICE]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat das Eis mit seiner glühenden Entschlossenheit geschmolzen, damit du dir keine Sorgen machst!"),
    [STRINGID_TARGETTOUGHEDITOUT]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} hat durchgehalten um dir keine Sorgen zu bereiten!"),
    [STRINGID_ATTACKERLOSTELECTRICTYPE]             = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} hat seine Elektrizität aufgebraucht!"),
    [STRINGID_ATTACKERSWITCHEDSTATWITHTARGET]       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat {B_BUFF1} mit seinem Ziel getauscht!"),
    [STRINGID_BEINGHITCHARGEDPKMNWITHPOWER]         = COMPOUND_STRING("Die Attacke {B_CURRENT_MOVE} hat {B_EFF_NAME_WITH_PREFIX2} aufgeladen!"),
    [STRINGID_SUNLIGHTACTIVATEDABILITY]             = COMPOUND_STRING("Das grelle Sonnenlicht hat Paläosynthese von {B_SCR_NAME_WITH_PREFIX2} aktiviert!"),
    [STRINGID_STATWASHEIGHTENED]                    = COMPOUND_STRING("{B_BUFF1} von {B_SCR_NAME_WITH_PREFIX} wurde erhöht!"),
    [STRINGID_ELECTRICTERRAINACTIVATEDABILITY]      = COMPOUND_STRING("Das elektrische Terrain hat den Quantenantrieb von {B_SCR_NAME_WITH_PREFIX2} aktiviert!"),
    [STRINGID_ABILITYWEAKENEDSURROUNDINGMONSSTAT]   = COMPOUND_STRING("von {B_SCR_NAME_WITH_PREFIX} schwächt {B_BUFF1} von allen Pokémon in der Nähe!\p"),
    [STRINGID_ATTACKERGAINEDSTRENGTHFROMTHEFALLEN]  = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat Kraft von den Gefallenen geschöpft!"),
    [STRINGID_PKMNSABILITYPREVENTSABILITY]          = COMPOUND_STRING("{B_SCR_ABILITY} von {B_SCR_NAME_WITH_PREFIX} hindert {B_DEF_NAME_WITH_PREFIX2} daran, seine {B_DEF_ABILITY} einzusetzen!"), //not in gen 5+, ability popup
    [STRINGID_PREPARESHELLTRAP]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat eine Panzerfalle gelegt!"),
    [STRINGID_SHELLTRAPDIDNTWORK]                   = COMPOUND_STRING("Panzerfalle von {B_ATK_NAME_WITH_PREFIX} funktionierte nicht!"),
    [STRINGID_SPIKESDISAPPEAREDFROMTEAM]            = COMPOUND_STRING("Die Stacheln um das Team von {B_ATK_TEAM2} verschwanden!"),
    [STRINGID_TOXICSPIKESDISAPPEAREDFROMTEAM]       = COMPOUND_STRING("Die Giftstacheln um das Team von {B_ATK_TEAM2} verschwanden!"),
    [STRINGID_STICKYWEBDISAPPEAREDFROMTEAM]         = COMPOUND_STRING("Das Klebenetz um das Team von {B_ATK_TEAM2} verschwand!"),
    [STRINGID_STEALTHROCKDISAPPEAREDFROMTEAM]       = COMPOUND_STRING("Die spitzen Steine um das Team von {B_ATK_TEAM2} verschwanden!"),
    [STRINGID_COULDNTFULLYPROTECT]                  = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} konnte sich nicht vollständig schützen und hat sich verletzt!"),
    [STRINGID_STOCKPILEDEFFECTWOREOFF]              = COMPOUND_STRING("Horter von {B_ATK_NAME_WITH_PREFIX} lässt nach!"),
    [STRINGID_PKMNREVIVEDREADYTOFIGHT]              = COMPOUND_STRING("{B_BUFF1} wurde wiederbelebt und ist bereit, weiterzukämpfen!"),
    [STRINGID_ITEMRESTOREDSPECIESHEALTH]            = COMPOUND_STRING("{B_BUFF1} hat sich erholt."),
    [STRINGID_ITEMCUREDSPECIESSTATUS]               = COMPOUND_STRING("Statusproblem von {B_BUFF1} wurde geheilt!"),
    [STRINGID_ITEMRESTOREDSPECIESPP]                = COMPOUND_STRING("AP von {B_BUFF1} wurden aufgefüllt!"),
    [STRINGID_THUNDERCAGETRAPPED]                   = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat {B_EFF_NAME_WITH_PREFIX2} gefangen!"),
    [STRINGID_PKMNHURTBYFROSTBITE]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch die Erfrierung verletzt!"),
    [STRINGID_PKMNGOTFROSTBITE]                     = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} hat eine Erfrierung!"),
    [STRINGID_PKMNSITEMHEALEDFROSTBITE]             = COMPOUND_STRING("{B_LAST_ITEM} von {B_SCR_NAME_WITH_PREFIX} heilt die Erfrierung!"),
    [STRINGID_ATTACKERHEALEDITSFROSTBITE]           = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat die Erfrierung durch reine Willenskraft geheilt, damit du dir keine Sorgen machst!"),
    [STRINGID_PKMNFROSTBITEHEALED]                  = COMPOUND_STRING("Erfrierung von {B_SCR_NAME_WITH_PREFIX} wurde geheilt!"),
    [STRINGID_PKMNFROSTBITEHEALEDBY]                = COMPOUND_STRING("{B_CURRENT_MOVE} von {B_SCR_NAME_WITH_PREFIX} heilte die Erfrierung!"),
    [STRINGID_MIRRORHERBCOPIED]                     = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} hat die Statuswert-Steigerung mitgekriegt!"),
    [STRINGID_STARTEDSNOW]                          = COMPOUND_STRING("Es fängt an zu schneien!"),
    [STRINGID_SNOWCONTINUES]                        = COMPOUND_STRING("Es schneit."), //not in gen 5+ (lol)
    [STRINGID_SNOWSTOPPED]                          = COMPOUND_STRING("Es hört auf zu schneien."),
    [STRINGID_SNOWWARNINGSNOW]                      = COMPOUND_STRING("Es fängt an zu schneien!"),
    [STRINGID_PKMNITEMMELTED]                       = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat das Item {B_LAST_ITEM} von {B_DEF_NAME_WITH_PREFIX2} geschmolzen!"),
    [STRINGID_ULTRABURSTREACTING]                   = COMPOUND_STRING("Gleißendes Licht wird von {B_ATK_NAME_WITH_PREFIX2} ausgestoßen!"),
    [STRINGID_ULTRABURSTCOMPLETED]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} erlangte durch den Ultra-Burst seine wahre Kraft zurück!"),
    [STRINGID_TEAMGAINEDEXP]                        = COMPOUND_STRING("Dank des EP-Teilers erhält dein ganzes Team Erfahrungspunkte!\p"),
    [STRINGID_CURRENTMOVECANTSELECT]                = COMPOUND_STRING("{B_BUFF1} kann nicht eingesetzt werden!\p"),
    [STRINGID_TARGETISBEINGSALTCURED]               = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} wurde eingepökelt!"),
    [STRINGID_TARGETISHURTBYSALTCURE]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch {B_BUFF1} verletzt!"),
    [STRINGID_TARGETCOVEREDINSTICKYCANDYSYRUP]      = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} wurde in Sirup gehüllt!"),
    [STRINGID_SHARPSTEELFLOATS]                     = COMPOUND_STRING("Scharfes Schrapnel umgibt das Team von {B_DEF_TEAM2}!"),
    [STRINGID_SHARPSTEELDMG]                        = COMPOUND_STRING("Das Schrapnel verletzt {B_DEF_NAME_WITH_PREFIX2}!"),
    [STRINGID_PKMNBLEWAWAYSHARPSTEEL]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} entfernte das Schrapnel!"),
    [STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM]        = COMPOUND_STRING("Das Schrapnel um das Team von {B_ATK_TEAM2} ist verschwunden!"),
    [STRINGID_TEAMTRAPPEDWITHVINES]                 = COMPOUND_STRING("Das Team von {B_EFF_TEAM1} ist von Ranken gefangen!"),
    [STRINGID_PKMNHURTBYVINES]                      = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wird von der wilden Attacke Gigantamax-Rebenpeitsche verletzt!"),
    [STRINGID_TEAMCAUGHTINVORTEX]                   = COMPOUND_STRING("Das Team von {B_EFF_TEAM1} wird in einem Wasserwirbel gefangen!"),
    [STRINGID_PKMNHURTBYVORTEX]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wird vom Wirbel der Gigantamax-Kanonenattacke verletzt!"),
    [STRINGID_TEAMSURROUNDEDBYFIRE]                 = COMPOUND_STRING("Das Team von {B_EFF_TEAM1} wird von Feuer umgeben!"),
    [STRINGID_PKMNBURNINGUP]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verbrennt in den Flammen von Gigantamax-Feuerflug!"),
    [STRINGID_TEAMSURROUNDEDBYROCKS]                = COMPOUND_STRING("Das Team von {B_EFF_TEAM1} wird von Steinen umgeben!"),
    [STRINGID_PKMNHURTBYROCKSTHROWN]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wird von den Steinen der Gigantamax-Vulkanstein-Attacke verletzt!"),
    [STRINGID_MOVEBLOCKEDBYDYNAMAX]                 = COMPOUND_STRING("Die Attacke wurde durch die Kraft von Dynamax blockiert!"),
    [STRINGID_ZEROTOHEROTRANSFORMATION]             = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} durchlief eine heldenhafte Verwandlung!"),
    [STRINGID_THETWOMOVESBECOMEONE]                 = COMPOUND_STRING("Die beiden Attacken wurden zu einer vereint! Eine Kombi-Attacke!{PAUSE 16}"),
    [STRINGID_ARAINBOWAPPEAREDONSIDE]               = COMPOUND_STRING("Ein Regenbogen erschien im Himmel auf der Seite von {B_ATK_TEAM2}!"),
    [STRINGID_THERAINBOWDISAPPEARED]                = COMPOUND_STRING("Der Regenbogen auf der Seite von {B_ATK_TEAM2} ist verschwunden!"),
    [STRINGID_WAITINGFORPARTNERSMOVE]               = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wartet auf die Attacke von {B_ATK_PARTNER_NAME}…{PAUSE 16}"),
    [STRINGID_SEAOFFIREENVELOPEDSIDE]               = COMPOUND_STRING("Ein See aus Feuer umgibt das Team von {B_DEF_TEAM2}!"),
    [STRINGID_HURTBYTHESEAOFFIRE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wurde durch den Feuersee verletzt!"),
    [STRINGID_THESEAOFFIREDISAPPEARED]              = COMPOUND_STRING("Der See aus Feuer um das Team von {B_EFF_TEAM2} ist verschwunden!"),
    [STRINGID_SWAMPENVELOPEDSIDE]                   = COMPOUND_STRING("Ein Sumpf umhüllt das Team von {B_EFF_TEAM2}!"),
    [STRINGID_THESWAMPDISAPPEARED]                  = COMPOUND_STRING("Der Sumpf um das Team von {B_EFF_TEAM2} ist verschwunden!"),
    [STRINGID_PKMNTELLCHILLINGRECEPTIONJOKE]        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} will einen eiskalten Witz erzählen!"),
    [STRINGID_HOSPITALITYRESTORATION]               = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} trank den gesamten Matcha von {B_SCR_NAME_WITH_PREFIX2}!"),
    [STRINGID_ELECTROSHOTCHARGING]                  = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} absorbiert Elektrizität!"),
    [STRINGID_ITEMWASUSEDUP]                        = COMPOUND_STRING("Das Item {B_LAST_ITEM} wurde verbraucht…"),
    [STRINGID_ATTACKERLOSTITSTYPE]                  = COMPOUND_STRING("{B_EFF_NAME_WITH_PREFIX} verlor seinen {B_BUFF1}-Typ!"),
    [STRINGID_SHEDITSTAIL]                          = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} wirft seinen Schweif ab und erzeugt einen Köder!"),
    [STRINGID_CLOAKEDINAHARSHLIGHT]                 = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} umhüllt sich mit blendendem Licht!"),
    [STRINGID_SUPERSWEETAROMAWAFTS]                 = COMPOUND_STRING("Ein supersüßer Duft steigt von dem Sirup auf, der {B_EFF_NAME_WITH_PREFIX2} bedeckt!"),
    [STRINGID_DIMENSIONSWERETWISTED]                = COMPOUND_STRING("Die Dimensionen haben sich verzerrt!"),
    [STRINGID_BIZARREARENACREATED]                  = COMPOUND_STRING("Ein bizarrer Bereich wurde erzeugt, in dem getragene Items ihre Wirkung verlieren!"),
    [STRINGID_BIZARREAREACREATED]                   = COMPOUND_STRING("Ein bizarrer Bereich wurde erzeugt, in dem Verteidigung und Sp. Ver. getauscht sind!"),
    [STRINGID_TIDYINGUPCOMPLETE]                    = COMPOUND_STRING("Aufräumen beendet!"),
    [STRINGID_PKMNTERASTALLIZEDINTO]                = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} hat sich in den Typ {B_BUFF1} terastallisiert!"),
    [STRINGID_BOOSTERENERGYACTIVATES]               = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} benutzte sein {B_LAST_ITEM} um {B_SCR_ABILITY} zu aktivieren!"),
    [STRINGID_FOGCREPTUP]                           = COMPOUND_STRING("Dichter Nebel zieht auf!"),
    [STRINGID_FOGISDEEP]                            = COMPOUND_STRING("Der Nebel ist dicht…"),
    [STRINGID_FOGLIFTED]                            = COMPOUND_STRING("Der Nebel legt sich."),
    [STRINGID_PKMNMADESHELLGLEAM]                   = COMPOUND_STRING("{B_DEF_NAME_WITH_PREFIX} ließ seine Schale erstrahlen! Es verzerrt die Typenmatchups!"),
    [STRINGID_FICKLEBEAMDOUBLED]                    = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} gibt alles für diesen Angriff!"),
    [STRINGID_COMMANDERACTIVATES]                   = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} wurde von Wadgura verschluckt und ist zu Wadguras Kommandanten geworden!"),
    [STRINGID_POKEFLUTECATCHY]                      = COMPOUND_STRING("{B_PLAYER_NAME} spielte die {B_LAST_ITEM}.\pEine schöne Melodie!"),
    [STRINGID_POKEFLUTE]                            = COMPOUND_STRING("{B_PLAYER_NAME} spielte die {B_LAST_ITEM}."),
    [STRINGID_MONHEARINGFLUTEAWOKE]                 = COMPOUND_STRING("Die Pokéflöte weckt alle auf!"),
    [STRINGID_SUNLIGHTISHARSH]                      = COMPOUND_STRING("Das Sonnenlicht ist stark!"),
    [STRINGID_ITISHAILING]                          = COMPOUND_STRING("Es hagelt!"),
    [STRINGID_ITISSNOWING]                          = COMPOUND_STRING("Es schneit!"),
    [STRINGID_ISCOVEREDWITHGRASS]                   = COMPOUND_STRING("Überall wächst Gras!"),
    [STRINGID_MISTSWIRLSAROUND]                     = COMPOUND_STRING("Nebel wirbelt über das Feld!"),
    [STRINGID_ELECTRICCURRENTISRUNNING]             = COMPOUND_STRING("Eine elektrische Spannung entsteht!"),
    [STRINGID_SEEMSWEIRD]                           = COMPOUND_STRING("Das Feld scheint seltsam zu sein!"),
    [STRINGID_WAGGLINGAFINGER]                      = COMPOUND_STRING("Es wedelte mit dem Finger und ließ {B_CURRENT_MOVE} folgen!"),
    [STRINGID_BLOCKEDBYSLEEPCLAUSE]                 = COMPOUND_STRING("Die Schlafklausel hielt {B_DEF_NAME_WITH_PREFIX2} wach!"),
    [STRINGID_SUPEREFFECTIVETWOFOES]                = COMPOUND_STRING("Es ist sehr effektiv gegen {B_DEF_NAME_WITH_PREFIX2} und {B_DEF_PARTNER_NAME}!"),
    [STRINGID_NOTVERYEFFECTIVETWOFOES]              = COMPOUND_STRING("Es ist nicht sehr effektiv gegen {B_DEF_NAME_WITH_PREFIX2} und {B_DEF_PARTNER_NAME}!"),
    [STRINGID_ITDOESNTAFFECTTWOFOES]                = COMPOUND_STRING("Keine Wirkung auf {B_DEF_NAME_WITH_PREFIX2} und {B_DEF_PARTNER_NAME}…"),
    [STRINGID_SENDCAUGHTMONPARTYORBOX]              = COMPOUND_STRING("Möchtest du {B_DEF_NAME} in dein Team aufnehmen?"),
    [STRINGID_PKMNSENTTOPCAFTERCATCH]               = gText_PkmnSentToPCAfterCatch,
    [STRINGID_PKMNDYNAMAXED]                        = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist zu seiner riesigen Dynamax-Form gewachsen!"),
    [STRINGID_PKMNGIGANTAMAXED]                     = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist zu seiner riesigen Gigantamax-Form gewachsen!"),
    [STRINGID_TIMETODYNAMAX]                        = COMPOUND_STRING("Zeit für Dynamax!"),
    [STRINGID_TIMETOGIGANTAMAX]                     = COMPOUND_STRING("Zeit für Gigantamax!"),
    [STRINGID_QUESTIONFORFEITBATTLE]                = COMPOUND_STRING("Möchtest du diesen Kampf aufgeben?"),
    [STRINGID_POWERCONSTRUCTPRESENCEOFMANY]         = COMPOUND_STRING("Du spürst die Anwesenheit von vielen!"),
    [STRINGID_POWERCONSTRUCTTRANSFORM]              = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} verwandelte sich in seine Finale Form!"),   //tm
    [STRINGID_ABILITYSHIELDPROTECTS]                = COMPOUND_STRING("Fähigkeit von {B_ATK_NAME_WITH_PREFIX} wird durch {B_LAST_ITEM} beschützt!"),
    [STRINGID_MONTOOSCAREDTOMOVE]                   = COMPOUND_STRING("{B_ATK_NAME_WITH_PREFIX} ist starr vor Angst!"),
    [STRINGID_GHOSTGETOUTGETOUT]                    = COMPOUND_STRING("Geist: Verschwinde…… Verschwinde……"),
    [STRINGID_SILPHSCOPEUNVEILED]                   = COMPOUND_STRING("Das Silph Scope enthüllt die\nIdentität des Geistes!"),
    [STRINGID_GHOSTWASMAROWAK]                      = COMPOUND_STRING("Der Geist war Knogga!\p\n"),
    [STRINGID_TRAINER1MON1COMEBACK]                 = COMPOUND_STRING("{B_TRAINER1_NAME}: {B_OPPONENT_MON1_NAME}, komm zurück!"),
    [STRINGID_THREWROCK]                            = COMPOUND_STRING("{B_PLAYER_NAME} wirft einen Stein\nauf {B_OPPONENT_MON1_NAME}!"),
    [STRINGID_THREWBAIT]                            = COMPOUND_STRING("{B_PLAYER_NAME} wirft einen Köder\nauf {B_OPPONENT_MON1_NAME}!"),
    [STRINGID_PKMNANGRY]                            = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} ist wütend!"),
    [STRINGID_PKMNEATING]                           = COMPOUND_STRING("{B_OPPONENT_MON1_NAME} isst!"),
    [STRINGID_PKMNDISGUISEWASBUSTED]                = COMPOUND_STRING("Trugbild von {B_SCR_NAME_WITH_PREFIX} wurde zerstört!"),
    [STRINGID_ZENMODETRIGGERED]                     = COMPOUND_STRING("{B_SCR_ABILITY} löst aus!"),
    [STRINGID_ZENMODEENDED]                         = COMPOUND_STRING("{B_SCR_ABILITY} endet!"),
    [STRINGID_SCRCUREDPARALYSIS]                    = COMPOUND_STRING("Paralyse von {B_SCR_NAME_WITH_PREFIX} wurde geheilt!"),
    [STRINGID_SCRCUREDPOISON]                       = COMPOUND_STRING("Vergiftung von {B_SCR_NAME_WITH_PREFIX} wurde geheilt!"),
    [STRINGID_SCRCUREDBURN]                         = COMPOUND_STRING("Verbrennung von {B_SCR_NAME_WITH_PREFIX} wurde geheilt!"),
    [STRINGID_SCRCUREDSLEEP]                        = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist aufgewacht!"),
    [STRINGID_SCRCUREDCONFUSION]                    = COMPOUND_STRING("{B_SCR_NAME_WITH_PREFIX} ist nicht mehr verirrt!"),
    [STRINGID_PARTYCUREDPARALYSIS]                  = COMPOUND_STRING("Paralyse von {B_BUFF1} wurde geheilt!"),
    [STRINGID_PARTYCUREDPOISON]                     = COMPOUND_STRING("Vergiftung von {B_BUFF1} wurde geheilt!"),
    [STRINGID_PARTYCUREDBURN]                       = COMPOUND_STRING("Verbrennung von {B_BUFF1} wurde geheilt!"),
    [STRINGID_PARTYCUREDSLEEP]                      = COMPOUND_STRING("{B_BUFF1} ist aufgewacht!"),
    [STRINGID_PARTYCUREDFREEZE]                     = COMPOUND_STRING("{B_BUFF1} ist aufgetaut!"),
    [STRINGID_PARTYCUREDFROSTBITE]                  = COMPOUND_STRING("Erfrierung von {B_BUFF1} wurde geheilt!"),
    [STRINGID_PKMNATKNOTLOWERED]                    = COMPOUND_STRING("Angriff von {B_SCR_NAME_WITH_PREFIX} wurde nicht gesenkt!"),
    [STRINGID_REFLECTWOREOFF]                       = COMPOUND_STRING("Reflektor von {B_DEF_TEAM1} lässt nach!"),
    [STRINGID_LIGHTSCREENWOREOFF]                   = COMPOUND_STRING("Lichtschild von {B_DEF_TEAM1} lässt nach!"),
    [STRINGID_AURORAVEILWOREOFF]                    = COMPOUND_STRING("Auroraschleier von {B_DEF_TEAM1} lässt nach!"),
    [STRINGID_STICKYWEBDISAPPEAREDFROMYOU]          = COMPOUND_STRING("Das Klebenetz um dein Team verschwindet!"),
};

const u16 gTrainerUsedItemStringIds[] =
{
    STRINGID_PLAYERUSEDITEM, STRINGID_TRAINER1USEDITEM
};

const u16 gZEffectStringIds[] =
{
    [B_MSG_Z_RESET_STATS] = STRINGID_ZMOVERESETSSTATS,
    [B_MSG_Z_ALL_STATS_UP]= STRINGID_ZMOVEALLSTATSUP,
    [B_MSG_Z_BOOST_CRITS] = STRINGID_ZMOVEZBOOSTCRIT,
    [B_MSG_Z_FOLLOW_ME]   = STRINGID_PKMNCENTERATTENTION,
    [B_MSG_Z_RECOVER_HP]  = STRINGID_ZMOVERESTOREHP,
    [B_MSG_Z_STAT_UP]     = STRINGID_ZMOVESTATUP,
    [B_MSG_Z_HP_TRAP]     = STRINGID_ZMOVEHPTRAP,
};

const u16 gMentalHerbCureStringIds[] =
{
    [B_MSG_MENTALHERBCURE_INFATUATION] = STRINGID_ATKGOTOVERINFATUATION,
    [B_MSG_MENTALHERBCURE_TORMENT]     = STRINGID_TORMENTEDNOMORE,
    [B_MSG_MENTALHERBCURE_DISABLE]     = STRINGID_PKMNMOVEDISABLEDNOMORE,
    [B_MSG_MENTALHERBCURE_HEALBLOCK]   = STRINGID_HEALBLOCKEDNOMORE,
    [B_MSG_MENTALHERBCURE_ENCORE]      = STRINGID_PKMNENCOREENDED,
    [B_MSG_MENTALHERBCURE_TAUNT]       = STRINGID_PKMNSHOOKOFFTHETAUNT,
};

const u16 gStartingStatusStringIds[B_MSG_STARTING_STATUS_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY]    = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC]  = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY]   = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_SET_TRICK_ROOM]       = STRINGID_DIMENSIONSWERETWISTED,
    [B_MSG_SET_MAGIC_ROOM]       = STRINGID_BIZARREARENACREATED,
    [B_MSG_SET_WONDER_ROOM]      = STRINGID_BIZARREAREACREATED,
    [B_MSG_SET_TAILWIND]         = STRINGID_TAILWINDBLEW,
    [B_MSG_SET_RAINBOW]          = STRINGID_ARAINBOWAPPEAREDONSIDE,
    [B_MSG_SET_SEA_OF_FIRE]      = STRINGID_SEAOFFIREENVELOPEDSIDE,
    [B_MSG_SET_SWAMP]            = STRINGID_SWAMPENVELOPEDSIDE,
    [B_MSG_SET_SPIKES]           = STRINGID_SPIKESSCATTERED,
    [B_MSG_SET_POISON_SPIKES]    = STRINGID_POISONSPIKESSCATTERED,
    [B_MSG_SET_STICKY_WEB]       = STRINGID_STICKYWEBUSED,
    [B_MSG_SET_STEALTH_ROCK]     = STRINGID_POINTEDSTONESFLOAT,
    [B_MSG_SET_SHARP_STEEL]      = STRINGID_SHARPSTEELFLOATS,
};

const u16 gTerrainStringIds[B_MSG_TERRAIN_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY] = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC] = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY] = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_TERRAIN_END_MISTY] = STRINGID_MISTYTERRAINENDS,
    [B_MSG_TERRAIN_END_ELECTRIC] = STRINGID_ELECTRICTERRAINENDS,
    [B_MSG_TERRAIN_END_PSYCHIC] = STRINGID_PSYCHICTERRAINENDS,
    [B_MSG_TERRAIN_END_GRASSY] = STRINGID_GRASSYTERRAINENDS,
};

const u16 gTerrainPreventsStringIds[] =
{
    [B_MSG_TERRAINPREVENTS_MISTY]    = STRINGID_MISTYTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_ELECTRIC] = STRINGID_ELECTRICTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_PSYCHIC]  = STRINGID_PSYCHICTERRAINPREVENTS
};

const u16 gHealingWishStringIds[] =
{
    STRINGID_HEALINGWISHCAMETRUE,
    STRINGID_LUNARDANCECAMETRUE
};

const u16 gDmgHazardsStringIds[] =
{
    [B_MSG_PKMNHURTBYSPIKES]   = STRINGID_PKMNHURTBYSPIKES,
    [B_MSG_STEALTHROCKDMG]     = STRINGID_STEALTHROCKDMG,
    [B_MSG_SHARPSTEELDMG]      = STRINGID_SHARPSTEELDMG,
    [B_MSG_POINTEDSTONESFLOAT] = STRINGID_POINTEDSTONESFLOAT,
    [B_MSG_SPIKESSCATTERED]    = STRINGID_SPIKESSCATTERED,
    [B_MSG_SHARPSTEELFLOATS]   = STRINGID_SHARPSTEELFLOATS,
};

const u16 gSwitchInAbilityStringIds[] =
{
    [B_MSG_SWITCHIN_MOLDBREAKER] = STRINGID_MOLDBREAKERENTERS,
    [B_MSG_SWITCHIN_TERAVOLT] = STRINGID_TERAVOLTENTERS,
    [B_MSG_SWITCHIN_TURBOBLAZE] = STRINGID_TURBOBLAZEENTERS,
    [B_MSG_SWITCHIN_SLOWSTART] = STRINGID_SLOWSTARTENTERS,
    [B_MSG_SWITCHIN_UNNERVE] = STRINGID_UNNERVEENTERS,
    [B_MSG_SWITCHIN_ANTICIPATION] = STRINGID_ANTICIPATIONACTIVATES,
    [B_MSG_SWITCHIN_FOREWARN] = STRINGID_FOREWARNACTIVATES,
    [B_MSG_SWITCHIN_PRESSURE] = STRINGID_PRESSUREENTERS,
    [B_MSG_SWITCHIN_DARKAURA] = STRINGID_DARKAURAENTERS,
    [B_MSG_SWITCHIN_FAIRYAURA] = STRINGID_FAIRYAURAENTERS,
    [B_MSG_SWITCHIN_AURABREAK] = STRINGID_AURABREAKENTERS,
    [B_MSG_SWITCHIN_COMATOSE] = STRINGID_COMATOSEENTERS,
    [B_MSG_SWITCHIN_SCREENCLEANER] = STRINGID_SCREENCLEANERENTERS,
    [B_MSG_SWITCHIN_ASONE] = STRINGID_ASONEENTERS,
    [B_MSG_SWITCHIN_CURIOUS_MEDICINE] = STRINGID_CURIOUSMEDICINEENTERS,
    [B_MSG_SWITCHIN_PASTEL_VEIL] = STRINGID_PKMNHEALEDPOISON,
    [B_MSG_SWITCHIN_NEUTRALIZING_GAS] = STRINGID_NEUTRALIZINGGASENTERS,
};

const u16 gNoEscapeStringIds[] =
{
    [B_MSG_CANT_ESCAPE]          = STRINGID_CANTESCAPE,
    [B_MSG_DONT_LEAVE_BIRCH]     = STRINGID_DONTLEAVEBIRCH,
    [B_MSG_PREVENTS_ESCAPE]      = STRINGID_PREVENTSESCAPE,
    [B_MSG_CANT_ESCAPE_2]        = STRINGID_CANTESCAPE2,
    [B_MSG_ATTACKER_CANT_ESCAPE] = STRINGID_ATTACKERCANTESCAPE
};

const u16 gMoveWeatherChangeStringIds[] =
{
    [B_MSG_STARTED_RAIN]      = STRINGID_STARTEDTORAIN,
    [B_MSG_STARTED_DOWNPOUR]  = STRINGID_DOWNPOURSTARTED, // Unused
    [B_MSG_WEATHER_FAILED]    = STRINGID_BUTITFAILED,
    [B_MSG_STARTED_SANDSTORM] = STRINGID_SANDSTORMBREWED,
    [B_MSG_STARTED_SUNLIGHT]  = STRINGID_SUNLIGHTGOTBRIGHT,
    [B_MSG_STARTED_HAIL]      = STRINGID_STARTEDHAIL,
    [B_MSG_STARTED_SNOW]      = STRINGID_STARTEDSNOW,
    [B_MSG_STARTED_FOG]       = STRINGID_FOGCREPTUP, // Unused, can use for custom moves that set fog
};

const u16 gAbilityWeatherChangeStringId[] =
{
    [B_MSG_STARTED_DRIZZLE]        = STRINGID_STARTEDTORAIN,
    [B_MSG_STARTED_SAND_STREAM]    = STRINGID_SANDSTORMBREWED,
    [B_MSG_STARTED_DROUGHT]        = STRINGID_SUNLIGHTGOTBRIGHT,
    [B_MSG_STARTED_HAIL_WARNING]   = STRINGID_STARTEDHAIL,
    [B_MSG_STARTED_SNOW_WARNING]   = STRINGID_STARTEDSNOW,
    [B_MSG_STARTED_DESOLATE_LAND]  = STRINGID_EXTREMELYHARSHSUNLIGHT,
    [B_MSG_STARTED_PRIMORDIAL_SEA] = STRINGID_HEAVYRAIN,
    [B_MSG_STARTED_STRONG_WINDS]   = STRINGID_MYSTERIOUSAIRCURRENT,
};

const u16 gWeatherEndsStringIds[B_MSG_WEATHER_END_COUNT] =
{
    [B_MSG_WEATHER_END_RAIN]                       = STRINGID_RAINSTOPPED,
    [B_MSG_WEATHER_END_SUN]                        = STRINGID_SUNLIGHTFADED,
    [B_MSG_WEATHER_END_SANDSTORM]                  = STRINGID_SANDSTORMSUBSIDED,
    [B_MSG_WEATHER_END_HAIL]                       = STRINGID_HAILSTOPPED,
    [B_MSG_WEATHER_END_SNOW]                       = STRINGID_SNOWSTOPPED,
    [B_MSG_WEATHER_END_FOG]                        = STRINGID_FOGLIFTED,
    [B_MSG_WEATHER_END_EXTREMELY_HARSH_SUNLIGHT]   = STRINGID_EXTREMESUNLIGHTFADED,
    [B_MSG_WEATHER_END_HEAVY_RAIN]                 = STRINGID_HEAVYRAINLIFTED,
    [B_MSG_WEATHER_END_STRONG_WINDS]               = STRINGID_STRONGWINDSDISSIPATED,
};

const u16 gWeatherTurnStringIds[] =
{
    [B_MSG_WEATHER_TURN_RAIN]         = STRINGID_RAINCONTINUES,
    [B_MSG_WEATHER_TURN_DOWNPOUR]     = STRINGID_DOWNPOURCONTINUES,
    [B_MSG_WEATHER_TURN_SUN]          = STRINGID_SUNLIGHTSTRONG,
    [B_MSG_WEATHER_TURN_SANDSTORM]    = STRINGID_SANDSTORMRAGES,
    [B_MSG_WEATHER_TURN_HAIL]         = STRINGID_HAILCONTINUES,
    [B_MSG_WEATHER_TURN_SNOW]         = STRINGID_SNOWCONTINUES,
    [B_MSG_WEATHER_TURN_FOG]          = STRINGID_FOGISDEEP,
    [B_MSG_WEATHER_TURN_STRONG_WINDS] = STRINGID_MYSTERIOUSAIRCURRENTBLOWSON,
};

const u16 gSandStormHailDmgStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_PKMNBUFFETEDBYSANDSTORM,
    [B_MSG_HAIL]      = STRINGID_PKMNPELTEDBYHAIL
};

const u16 gProtectLikeUsedStringIds[] =
{
    [B_MSG_PROTECTED_ITSELF] = STRINGID_PKMNPROTECTEDITSELF2,
    [B_MSG_BRACED_ITSELF]    = STRINGID_PKMNBRACEDITSELF,
    [B_MSG_PROTECTED_TEAM]   = STRINGID_PROTECTEDTEAM,
};

const u16 gBrokeProtectionStringIds[] =
{
    [B_MSG_FEINT]           = STRINGID_FELLFORFEINT,
    [B_MSG_HYPERSPACE_FURY] = STRINGID_BROKETHROUGHPROTECTION,
};

const u16 gReflectLightScreenSafeguardStringIds[] =
{
    [B_MSG_SIDE_STATUS_FAILED]     = STRINGID_BUTITFAILED,
    [B_MSG_SET_REFLECT_SINGLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_REFLECT_DOUBLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_LIGHTSCREEN_SINGLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_LIGHTSCREEN_DOUBLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_SAFEGUARD]          = STRINGID_PKMNCOVEREDBYVEIL,
    [B_MSG_SET_AURORA_VEIL]        = STRINGID_PKMNAURORAVEIL,
};

const u16 gLeechSeedStringIds[] =
{
    [B_MSG_LEECH_SEED_SET]   = STRINGID_PKMNSEEDED,
    [B_MSG_LEECH_SEED_MISS]  = STRINGID_PKMNAVOIDEDATTACK,
    [B_MSG_LEECH_SEED_FAIL]  = STRINGID_ITDOESNTAFFECT,
    [B_MSG_LEECH_SEED_DRAIN] = STRINGID_PKMNSAPPEDBYLEECHSEED,
    [B_MSG_LEECH_SEED_OOZE]  = STRINGID_ITSUCKEDLIQUIDOOZE,
};

const u16 gRestUsedStringIds[] =
{
    [B_MSG_REST]          = STRINGID_PKMNWENTTOSLEEP,
    [B_MSG_REST_STATUSED] = STRINGID_PKMNSLEPTHEALTHY
};

const u16 gUproarOverTurnStringIds[] =
{
    [B_MSG_UPROAR_CONTINUES] = STRINGID_PKMNMAKINGUPROAR,
    [B_MSG_UPROAR_ENDS]      = STRINGID_PKMNCALMEDDOWN
};

const u16 gWokeUpStringIds[] =
{
    [B_MSG_WOKE_UP]        = STRINGID_PKMNWOKEUP,
    [B_MSG_WOKE_UP_UPROAR] = STRINGID_PKMNWOKEUPINUPROAR
};

const u16 gUproarAwakeStringIds[] =
{
    [B_MSG_CANT_SLEEP_UPROAR]  = STRINGID_PKMNCANTSLEEPINUPROAR2,
    [B_MSG_UPROAR_KEPT_AWAKE]  = STRINGID_UPROARKEPTPKMNAWAKE,
};

const u16 gStatUpStringIds[] =
{
    [B_MSG_STAT_CHANGED]            = STRINGID_STATROSE,
    [B_MSG_STAT_WONT_CHANGE]        = STRINGID_STATSWONTINCREASE,
    [B_MSG_STAT_MAXED]              = STRINGID_STATWASMAXEDOUT,
    [B_MSG_STAT_CHANGE_EMPTY]       = STRINGID_EMPTYSTRING3,
    [B_MSG_STAT_CHANGED_ITEM]       = STRINGID_USINGITEMSTATOFPKMNROSE,
    [B_MSG_STAT_CHANGED_BELLY_DRUM] = STRINGID_PKMNCUTHPMAXEDATTACK,
    [B_MSG_USED_DIRE_HIT]           = STRINGID_PKMNUSEDXTOGETPUMPED,
};

// Mostly redundant, combine with above in a future pr
const u16 gStatDownStringIds[] =
{
    [B_MSG_STAT_CHANGED]            = STRINGID_STATFELL,
    [B_MSG_STAT_WONT_CHANGE]        = STRINGID_STATSWONTDECREASE,
    [B_MSG_STAT_CHANGE_EMPTY]       = STRINGID_EMPTYSTRING3,
    [B_MSG_STAT_CHANGED_ITEM]       = STRINGID_USINGITEMSTATOFPKMNFELL,
    [B_MSG_STAT_CHANGED_BELLY_DRUM] = STRINGID_PKMNCUTHPMAXEDATTACK, // Message for contrary is still printed
};

// Index copied from move's index in sTrappingMoves
const u16 gWrappedStringIds[NUM_TRAPPING_MOVES] =
{
    [B_MSG_WRAPPED_BIND]        = STRINGID_PKMNSQUEEZEDBYBIND,     // MOVE_BIND
    [B_MSG_WRAPPED_WRAP]        = STRINGID_PKMNWRAPPEDBY,          // MOVE_WRAP
    [B_MSG_WRAPPED_FIRE_SPIN]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_FIRE_SPIN
    [B_MSG_WRAPPED_CLAMP]       = STRINGID_PKMNCLAMPED,            // MOVE_CLAMP
    [B_MSG_WRAPPED_WHIRLPOOL]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_WHIRLPOOL
    [B_MSG_WRAPPED_SAND_TOMB]   = STRINGID_PKMNTRAPPEDBYSANDTOMB,  // MOVE_SAND_TOMB
    [B_MSG_WRAPPED_MAGMA_STORM] = STRINGID_TRAPPEDBYSWIRLINGMAGMA, // MOVE_MAGMA_STORM
    [B_MSG_WRAPPED_INFESTATION] = STRINGID_INFESTATION,            // MOVE_INFESTATION
    [B_MSG_WRAPPED_SNAP_TRAP]   = STRINGID_PKMNINSNAPTRAP,         // MOVE_SNAP_TRAP
    [B_MSG_WRAPPED_THUNDER_CAGE]= STRINGID_THUNDERCAGETRAPPED,     // MOVE_THUNDER_CAGE
};

const u16 gMistUsedStringIds[] =
{
    [B_MSG_SET_MIST]    = STRINGID_PKMNSHROUDEDINMIST,
    [B_MSG_MIST_FAILED] = STRINGID_BUTITFAILED
};

const u16 gFocusEnergyUsedStringIds[] =
{
    [B_MSG_GETTING_PUMPED]      = STRINGID_PKMNGETTINGPUMPED,
    [B_MSG_FOCUS_ENERGY_FAILED] = STRINGID_BUTITFAILED
};

const u16 gTransformUsedStringIds[] =
{
    [B_MSG_TRANSFORMED]      = STRINGID_PKMNTRANSFORMEDINTO,
    [B_MSG_TRANSFORM_FAILED] = STRINGID_BUTITFAILED
};

const u16 gSubstituteUsedStringIds[] =
{
    [B_MSG_SET_SUBSTITUTE]    = STRINGID_PKMNMADESUBSTITUTE,
    [B_MSG_SUBSTITUTE_FAILED] = STRINGID_TOOWEAKFORSUBSTITUTE
};

const u16 gGotPoisonedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPOISONED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNPOISONEDBY
};

const u16 gGotParalyzedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPARALYZED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASPARALYZEDBY
};

const u16 gFellAsleepStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLASLEEP,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNMADESLEEP,
};

const u16 gGotBurnedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASBURNED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNBURNEDBY
};

const u16 gGotFrostbiteStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNGOTFROSTBITE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNGOTFROSTBITE,
};

const u16 gFrostbiteHealedStringIds[] =
{
    [B_MSG_FROSTBITE_HEALED]         = STRINGID_PKMNFROSTBITEHEALED,
    [B_MSG_FROSTBITE_HEALED_BY_MOVE] = STRINGID_PKMNFROSTBITEHEALEDBY
};

const u16 gGotFrozenStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASFROZEN,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNFROZENBY
};

const u16 gGotDefrostedStringIds[] =
{
    [B_MSG_DEFROSTED]         = STRINGID_PKMNWASDEFROSTED,
    [B_MSG_DEFROSTED_BY_MOVE] = STRINGID_PKMNWASDEFROSTEDBY
};

const u16 gKOFailedStringIds[] =
{
    [B_MSG_KO_MISS]       = STRINGID_PKMNAVOIDEDATTACK,
    [B_MSG_KO_UNAFFECTED] = STRINGID_PKMNUNAFFECTED
};

const u16 gAttractUsedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLINLOVE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNSXINFATUATEDY
};

const u16 gAbsorbDrainStringIds[] =
{
    [B_MSG_ABSORB]      = STRINGID_PKMNENERGYDRAINED,
    [B_MSG_ABSORB_OOZE] = STRINGID_ITSUCKEDLIQUIDOOZE
};

const u16 gSportsUsedStringIds[] =
{
    [B_MSG_WEAKEN_ELECTRIC] = STRINGID_ELECTRICITYWEAKENED,
    [B_MSG_WEAKEN_FIRE]     = STRINGID_FIREWEAKENED
};

const u16 gPartyStatusHealStringIds[] =
{
    [B_MSG_BELL]                     = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_ATTACKER] = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_PARTNER]  = STRINGID_BELLCHIMED,
    [B_MSG_BELL_BOTH_SOUNDPROOF]     = STRINGID_BELLCHIMED,
    [B_MSG_SOOTHING_AROMA]           = STRINGID_SOOTHINGAROMA
};

const u16 gFutureMoveUsedStringIds[] =
{
    [B_MSG_FUTURE_SIGHT] = STRINGID_PKMNFORESAWATTACK,
    [B_MSG_DOOM_DESIRE]  = STRINGID_PKMNCHOSEXASDESTINY
};

const u16 gBallEscapeStringIds[] =
{
    [BALL_NO_SHAKES]     = STRINGID_PKMNBROKEFREE,
    [BALL_1_SHAKE]       = STRINGID_ITAPPEAREDCAUGHT,
    [BALL_2_SHAKES]      = STRINGID_AARGHALMOSTHADIT,
    [BALL_3_SHAKES_FAIL] = STRINGID_SHOOTSOCLOSE
};

// Overworld weathers that don't have an associated battle weather default to "It is raining."
const u16 gWeatherStartsStringIds[] =
{
    [WEATHER_NONE]               = STRINGID_ITISRAINING,
    [WEATHER_SUNNY_CLOUDS]       = STRINGID_ITISRAINING,
    [WEATHER_SUNNY]              = STRINGID_ITISRAINING,
    [WEATHER_RAIN]               = STRINGID_ITISRAINING,
    [WEATHER_SNOW]               = (B_OVERWORLD_SNOW >= GEN_9 ? STRINGID_ITISSNOWING : STRINGID_ITISHAILING),
    [WEATHER_RAIN_THUNDERSTORM]  = STRINGID_ITISRAINING,
    [WEATHER_FOG_HORIZONTAL]     = STRINGID_FOGISDEEP,
    [WEATHER_VOLCANIC_ASH]       = STRINGID_ITISRAINING,
    [WEATHER_SANDSTORM]          = STRINGID_SANDSTORMISRAGING,
    [WEATHER_FOG_DIAGONAL]       = STRINGID_FOGISDEEP,
    [WEATHER_UNDERWATER]         = STRINGID_ITISRAINING,
    [WEATHER_SHADE]              = STRINGID_ITISRAINING,
    [WEATHER_DROUGHT]            = STRINGID_SUNLIGHTISHARSH,
    [WEATHER_DOWNPOUR]           = STRINGID_ITISRAINING,
    [WEATHER_UNDERWATER_BUBBLES] = STRINGID_ITISRAINING,
    [WEATHER_ABNORMAL]           = STRINGID_ITISRAINING
};

const u16 gTerrainStartsStringIds[] =
{
    [B_MSG_TERRAIN_SET_MISTY]    = STRINGID_MISTSWIRLSAROUND,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_ELECTRICCURRENTISRUNNING,
    [B_MSG_TERRAIN_SET_PSYCHIC]  = STRINGID_SEEMSWEIRD,
    [B_MSG_TERRAIN_SET_GRASSY]   = STRINGID_ISCOVEREDWITHGRASS,
};

const u16 gPrimalWeatherBlocksStringIds[] =
{
    [B_MSG_PRIMAL_WEATHER_FIZZLED_BY_RAIN]      = STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN,
    [B_MSG_PRIMAL_WEATHER_EVAPORATED_IN_SUN]    = STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT,
};

const u16 gInobedientStringIds[] =
{
    [B_MSG_LOAFING]            = STRINGID_PKMNLOAFING,
    [B_MSG_WONT_OBEY]          = STRINGID_PKMNWONTOBEY,
    [B_MSG_TURNED_AWAY]        = STRINGID_PKMNTURNEDAWAY,
    [B_MSG_PRETEND_NOT_NOTICE] = STRINGID_PKMNPRETENDNOTNOTICE,
    [B_MSG_INCAPABLE_OF_POWER] = STRINGID_PKMNINCAPABLEOFPOWER
};

const u16 gSafariReactionStringIds[NUM_SAFARI_REACTIONS] =
{
    [B_MSG_MON_WATCHING] = STRINGID_PKMNWATCHINGCAREFULLY,
    [B_MSG_MON_ANGRY]    = STRINGID_PKMNANGRY,
    [B_MSG_MON_EATING]   = STRINGID_PKMNEATING
};

const u16 gSafariGetNearStringIds[] =
{
    [B_MSG_CREPT_CLOSER]    = STRINGID_CREPTCLOSER,
    [B_MSG_CANT_GET_CLOSER] = STRINGID_CANTGETCLOSER
};

const u16 gSafariPokeblockResultStringIds[] =
{
    [B_MSG_MON_CURIOUS]    = STRINGID_PKMNCURIOUSABOUTX,
    [B_MSG_MON_ENTHRALLED] = STRINGID_PKMNENTHRALLEDBYX,
    [B_MSG_MON_IGNORED]    = STRINGID_PKMNIGNOREDX
};

const u16 CureStatusBerryEffectStringID[] =
{
    [B_MSG_CURED_PARALYSIS] = STRINGID_PKMNSITEMCUREDPARALYSIS,
    [B_MSG_CURED_POISON] = STRINGID_PKMNSITEMCUREDPOISON,
    [B_MSG_CURED_BURN] = STRINGID_PKMNSITEMHEALEDBURN,
    [B_MSG_CURED_FREEZE] = STRINGID_PKMNSITEMDEFROSTEDIT,
    [B_MSG_CURED_FROSTBITE] = STRINGID_PKMNSITEMHEALEDFROSTBITE,
    [B_MSG_CURED_SLEEP] = STRINGID_PKMNSITEMWOKEIT,
    [B_MSG_CURED_CONFUSION] = STRINGID_PKMNSITEMSNAPPEDOUT,
};

const u16 gItemSwapStringIds[] =
{
    [B_MSG_ITEM_SWAP_TAKEN] = STRINGID_PKMNOBTAINEDX,
    [B_MSG_ITEM_SWAP_GIVEN] = STRINGID_PKMNOBTAINEDX2,
    [B_MSG_ITEM_SWAP_BOTH]  = STRINGID_PKMNOBTAINEDXYOBTAINEDZ
};

const u16 gFlashFireStringIds[] =
{
    [B_MSG_FLASH_FIRE_BOOST]    = STRINGID_PKMNRAISEDFIREPOWERWITH,
    [B_MSG_FLASH_FIRE_NO_BOOST] = STRINGID_PKMNSXMADEITINEFFECTIVE
};

const u16 gCaughtMonStringIds[] =
{
    [B_MSG_SENT_SOMEONES_PC]   = STRINGID_PKMNTRANSFERREDSOMEONESPC,
    [B_MSG_SENT_LANETTES_PC]   = STRINGID_PKMNTRANSFERREDLANETTESPC,
    [B_MSG_SOMEONES_BOX_FULL]  = STRINGID_PKMNBOXSOMEONESPCFULL,
    [B_MSG_LANETTES_BOX_FULL]  = STRINGID_PKMNBOXLANETTESPCFULL,
    [B_MSG_SWAPPED_INTO_PARTY] = STRINGID_PKMNSENTTOPCAFTERCATCH,
};

const u16 gRoomsStringIds[] =
{
    STRINGID_PKMNTWISTEDDIMENSIONS, STRINGID_TRICKROOMENDS,
    STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON, STRINGID_WONDERROOMENDS,
    STRINGID_HELDITEMSLOSEEFFECTS, STRINGID_MAGICROOMENDS,
    STRINGID_EMPTYSTRING3
};

const u16 gStatusConditionsStringIds[] =
{
    STRINGID_PKMNWASPOISONED, STRINGID_PKMNBADLYPOISONED, STRINGID_PKMNWASBURNED, STRINGID_PKMNWASPARALYZED, STRINGID_PKMNFELLASLEEP, STRINGID_PKMNGOTFROSTBITE
};

const u16 gDamageNonTypesStartStringIds[] =
{
    [B_MSG_TRAPPED_WITH_VINES]  = STRINGID_TEAMTRAPPEDWITHVINES,
    [B_MSG_CAUGHT_IN_VORTEX]    = STRINGID_TEAMCAUGHTINVORTEX,
    [B_MSG_SURROUNDED_BY_FIRE]  = STRINGID_TEAMSURROUNDEDBYFIRE,
    [B_MSG_SURROUNDED_BY_ROCKS] = STRINGID_TEAMSURROUNDEDBYROCKS,
};

const u16 gDamageNonTypesDmgStringIds[] =
{
    [B_MSG_HURT_BY_VINES]        = STRINGID_PKMNHURTBYVINES,
    [B_MSG_HURT_BY_VORTEX]       = STRINGID_PKMNHURTBYVORTEX,
    [B_MSG_BURNING_UP]           = STRINGID_PKMNBURNINGUP,
    [B_MSG_HURT_BY_ROCKS_THROWN] = STRINGID_PKMNHURTBYROCKSTHROWN,
};

const u16 gRemoveHazardsStringIds[] =
{
    [HAZARDS_SPIKES] = STRINGID_SPIKESDISAPPEAREDFROMTEAM,
    [HAZARDS_STICKY_WEB] = STRINGID_STICKYWEBDISAPPEAREDFROMTEAM,
    [HAZARDS_TOXIC_SPIKES] = STRINGID_TOXICSPIKESDISAPPEAREDFROMTEAM,
    [HAZARDS_STEALTH_ROCK] = STRINGID_STEALTHROCKDISAPPEAREDFROMTEAM,
    [HAZARDS_STEELSURGE] = STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM,
};

const u16 gZenModeStringIds[] =
{
    [B_MSG_ZEN_MODE_TRIGGERED] = STRINGID_ZENMODETRIGGERED,
    [B_MSG_ZEN_MODE_ENDED] = STRINGID_ZENMODEENDED
};

const u16 gCureStatusStringIds[] =
{
    [B_MSG_CURED_PARALYSIS] = STRINGID_SCRCUREDPARALYSIS,
    [B_MSG_CURED_POISON] = STRINGID_SCRCUREDPOISON,
    [B_MSG_CURED_BURN] = STRINGID_SCRCUREDBURN,
    [B_MSG_CURED_SLEEP] = STRINGID_SCRCUREDSLEEP,
    [B_MSG_CURED_FREEZE] = STRINGID_PKMNWASDEFROSTED,
    [B_MSG_CURED_FROSTBITE] = STRINGID_PKMNFROSTBITEHEALED,
    [B_MSG_CURED_CONFUSION] = STRINGID_SCRCUREDCONFUSION,
    [B_MSG_CURED_INFATUATION] = STRINGID_PKMNGOTOVERITSINFATUATION,
    [B_MSG_CURED_TAUNT] = STRINGID_PKMNSHOOKOFFTHETAUNT,
};

const u16 gPartyCureStatusStringIds[] =
{
    [B_MSG_CURED_PARALYSIS] = STRINGID_PARTYCUREDPARALYSIS,
    [B_MSG_CURED_POISON] = STRINGID_PARTYCUREDPOISON,
    [B_MSG_CURED_BURN] = STRINGID_PARTYCUREDBURN,
    [B_MSG_CURED_SLEEP] = STRINGID_PARTYCUREDSLEEP,
    [B_MSG_CURED_FREEZE] = STRINGID_PARTYCUREDFREEZE,
    [B_MSG_CURED_FROSTBITE] = STRINGID_PARTYCUREDFROSTBITE,
    [B_MSG_CURED_CONFUSION] = STRINGID_SCRCUREDCONFUSION,
    [B_MSG_CURED_INFATUATION] = STRINGID_PKMNGOTOVERITSINFATUATION,
    [B_MSG_CURED_TAUNT] = STRINGID_PKMNSHOOKOFFTHETAUNT,
};

const u16 gHurtByStringIds[] =
{
    [B_MSG_HURT] = STRINGID_AFTERMATHDMG,
    [B_MSG_HURT_BY_ITEM] = STRINGID_PKMNHURTSWITH,
};

const u16 gBreakScreensStringIds[] =
{
    [B_MSG_BREAK_REFLECT] = STRINGID_REFLECTWOREOFF,
    [B_MSG_BREAK_LIGHT_SCREEN] = STRINGID_LIGHTSCREENWOREOFF,
    [B_MSG_BREAK_AURORA_VEIL] = STRINGID_AURORAVEILWOREOFF,
};

const u8 gText_PkmnIsEvolving[] = _("Oh?\n{STR_VAR_1} entwickelt sich!");
const u8 gText_CongratsPkmnEvolved[] = _("Glückwunsch! Dein {STR_VAR_1}\nwurde zu {STR_VAR_2}!{WAIT_SE}\p");
const u8 gText_PkmnStoppedEvolving[] = _("Hm? Die Entwicklung\nwurde abgebrochen!\p");
const u8 gText_EllipsisQuestionMark[] = _("……?\p");
const u8 gText_WhatWillPkmnDo[] = _("Was soll\n{B_BUFF1} tun?");
const u8 gText_WhatWillPkmnDo2[] = _("Was soll\n{B_PLAYER_NAME} tun?");
const u8 gText_WhatWillWallyDo[] = _("Was soll\nWally tun?");
const u8 gText_LinkStandby[] = _("{PAUSE 16}Verbindung…");
const u8 gText_BattleMenu[] = _("Kampf{CLEAR_TO 56}Beutel\nPokémon{CLEAR_TO 56}Flucht");
const u8 gText_SafariZoneMenu[] = _("Ball{CLEAR_TO 56}{POKEBLOCK}\nNäher gehen{CLEAR_TO 56}Flucht");
const u8 gText_SafariZoneMenuFrlg[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}Ball{CLEAR_TO 56}Köder\nStein{CLEAR_TO 56}Flucht");
const u8 gText_MoveInterfacePP[] = _("AP ");
const u8 gText_MoveInterfaceType[] = _("TYP/");
const u8 gText_MoveInterfacePpType[] = _("{PALETTE 5}{BACKGROUND DYNAMIC_COLOR5}{TEXT_COLORS DYNAMIC_COLOR4 DYNAMIC_COLOR6 DYNAMIC_COLOR5}AP\nTYP/");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{BACKGROUND DYNAMIC_COLOR5}{TEXT_COLORS DYNAMIC_COLOR4 DYNAMIC_COLOR6 DYNAMIC_COLOR5}");
const u8 gText_WhichMoveToForget4[] = _("{PALETTE 5}{BACKGROUND DYNAMIC_COLOR5}{TEXT_COLORS DYNAMIC_COLOR4 DYNAMIC_COLOR6 DYNAMIC_COLOR5}Welche Attacke soll\nvergessen werden?");
const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{BACKGROUND DYNAMIC_COLOR5}{TEXT_COLORS DYNAMIC_COLOR4 DYNAMIC_COLOR6 DYNAMIC_COLOR5}Ja\nNein");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{BACKGROUND DYNAMIC_COLOR5}{TEXT_COLORS DYNAMIC_COLOR4 DYNAMIC_COLOR6 DYNAMIC_COLOR5}Welches\ntauschen?");
const u8 gText_BattleSwitchWhich2[] = _("{PALETTE 5}{BACKGROUND DYNAMIC_COLOR5}{TEXT_COLORS DYNAMIC_COLOR4 DYNAMIC_COLOR6 DYNAMIC_COLOR5}");
const u8 gText_BattleSwitchWhich3[] = _("{UP_ARROW}");
const u8 gText_BattleSwitchWhich4[] = _("{ESCAPE 4}");
const u8 gText_BattleSwitchWhich5[] = _("-");
const u8 gText_SafariBalls[] = _("Safari Bälle");
const u8 gText_SafariBallLeft[] = _("Übrig: $");
const u8 gText_Sleep[] = _("Schlaf");
const u8 gText_Poison[] = _("Gift");
const u8 gText_Burn[] = _("Verbrennung");
const u8 gText_Paralysis[] = _("Paralyse");
const u8 gText_Ice[] = _("Eis");
const u8 gText_Confusion[] = _("Verwirrung");
const u8 gText_Love[] = _("Liebe");
const u8 gText_SpaceAndSpace[] = _(" und ");
const u8 gText_CommaSpace[] = _(", ");
const u8 gText_Space2[] = _(" ");
const u8 gText_LineBreak[] = _("\l");
const u8 gText_NewLine[] = _("\n");
const u8 gText_Are[] = _("sind");
const u8 gText_Are2[] = _("sind");
const u8 gText_BadEgg[] = _("Bad Egg");
const u8 gText_BattleWallyName[] = _("Wally");
const u8 gText_Win[] = _("{BACKGROUND TRANSPARENT}{ACCENT TRANSPARENT}Siege");
const u8 gText_Loss[] = _("{BACKGROUND TRANSPARENT}{ACCENT TRANSPARENT}Niederlagen");
const u8 gText_Draw[] = _("{BACKGROUND TRANSPARENT}{ACCENT TRANSPARENT}Unentschieden");
static const u8 sText_SpaceIs[] = _(" ist");
static const u8 sText_ApostropheS[] = _("'s");
const u8 gText_BattleTourney[] = _("BATTLE TOURNEY");

const u8 *const gRoundsStringTable[DOME_ROUNDS_COUNT] =
{
    [DOME_ROUND1]    = COMPOUND_STRING("Runde 1"),
    [DOME_ROUND2]    = COMPOUND_STRING("Runde 2"),
    [DOME_SEMIFINAL] = COMPOUND_STRING("Halbfinale"),
    [DOME_FINAL]     = COMPOUND_STRING("Finale"),
};

const u8 gText_TheGreatNewHope[] = _("Die neue Hoffnung!\p");
const u8 gText_WillChampionshipDreamComeTrue[] = _("Wird der Traum zum Champion wahr werden?!\p");
const u8 gText_AFormerChampion[] = _("Ein ehemaliger Champion!\p");
const u8 gText_ThePreviousChampion[] = _("Der vorherige Champion!\p");
const u8 gText_TheUnbeatenChampion[] = _("Der ungeschlagene Champion!\p");
const u8 gText_PlayerMon1Name[] = _("{B_PLAYER_MON1_NAME}");
const u8 gText_Vs[] = _("vs");
const u8 gText_OpponentMon1Name[] = _("{B_OPPONENT_MON1_NAME}");
const u8 gText_Mind[] = _("Verstand");
const u8 gText_Skill[] = _("Geschick");
const u8 gText_Body[] = _("Körper");
const u8 gText_Judgment[] = _("{B_BUFF1}{CLEAR 13}Bewertung{CLEAR 13}{B_BUFF2}");
static const u8 sText_TwoTrainersSentPkmn[] = _("{B_OPPONENT_MON1_NAME} wird von {B_TRAINER1_NAME_WITH_CLASS} in den Kampf geschickt!\p{B_OPPONENT_MON2_NAME} wird von {B_TRAINER2_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_Trainer2SentOutPkmn[] = _("{B_BUFF1} wird von {B_TRAINER2_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_TwoTrainersWantToBattle[] = _("Eine Herausforderung von {B_TRAINER1_NAME_WITH_CLASS} und {B_TRAINER2_NAME_WITH_CLASS}!\p");
static const u8 sText_InGamePartnerSentOutZGoN[] = _("{B_PLAYER_MON2_NAME} wird von {B_PARTNER_NAME_WITH_CLASS} in den Kampf geschickt! Los, {B_PLAYER_MON1_NAME}!");
static const u8 sText_InGamePartnerSentOutNGoZ[] = _("{B_PLAYER_MON1_NAME} wird von {B_PARTNER_NAME_WITH_CLASS} in den Kampf geschickt! Los, {B_PLAYER_MON2_NAME}!");
static const u8 sText_InGamePartnerSentOutPkmn1[] = _("{B_PLAYER_MON1_NAME} wird von {B_PARTNER_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_InGamePartnerSentOutPkmn2[] = _("{B_PLAYER_MON2_NAME} wird von {B_PARTNER_NAME_WITH_CLASS} in den Kampf geschickt!");
static const u8 sText_InGamePartnerWithdrewPkmn1[] = _("{B_PARTNER_NAME_WITH_CLASS} ruft {B_PLAYER_MON1_NAME} zurück!");
static const u8 sText_InGamePartnerWithdrewPkmn2[] = _("{B_PARTNER_NAME_WITH_CLASS} ruft {B_PLAYER_MON2_NAME} zurück!");

const u16 gBattlePalaceFlavorTextTable[] =
{
    [B_MSG_GLINT_IN_EYE]   = STRINGID_GLINTAPPEARSINEYE,
    [B_MSG_GETTING_IN_POS] = STRINGID_PKMNGETTINGINTOPOSITION,
    [B_MSG_GROWL_DEEPLY]   = STRINGID_PKMNBEGANGROWLINGDEEPLY,
    [B_MSG_EAGER_FOR_MORE] = STRINGID_PKMNEAGERFORMORE,
};

const u8 *const gRefereeStringsTable[] =
{
    [B_MSG_REF_NOTHING_IS_DECIDED] = COMPOUND_STRING("Ringrichter: Gibt es in 3 Runden keine Entscheidung, werden wir bewerten!"),
    [B_MSG_REF_THATS_IT]           = COMPOUND_STRING("Ringrichter: O.K.! Die Bewertung wird den Sieger bestimmen.!"),
    [B_MSG_REF_JUDGE_MIND]         = COMPOUND_STRING("Ringrichter: 1. Kategorie: Verstand! Das mutigste Pokémon wird gekürt!\p"),
    [B_MSG_REF_JUDGE_SKILL]        = COMPOUND_STRING("Ringrichter: 2. Kategorie: Geschick! Bester Attackeneinsatz wird gekürt!\p"),
    [B_MSG_REF_JUDGE_BODY]         = COMPOUND_STRING("Ringrichter: 3. Kategorie: Körper! Das vitalste Pokémon wird gekürt!\p"),
    [B_MSG_REF_PLAYER_WON]         = COMPOUND_STRING("Ringrichter: Bewertung: {B_BUFF1} zu {B_BUFF2}! Sieger ist {B_PLAYER_MON1_NAME} von {B_PLAYER_NAME}!\p"),
    [B_MSG_REF_OPPONENT_WON]       = COMPOUND_STRING("Ringrichter: Bewertung: {B_BUFF1} zu {B_BUFF2}! Sieger ist {B_OPPONENT_MON1_NAME} von {B_TRAINER1_NAME}!\p"),
    [B_MSG_REF_DRAW]               = COMPOUND_STRING("Ringrichter: Bewertung: 3 zu 3! Unentschieden!\p"),
    [B_MSG_REF_COMMENCE_BATTLE]    = COMPOUND_STRING("Ringrichter: {B_PLAYER_MON1_NAME} vs {B_OPPONENT_MON1_NAME}! Los geht's!"),
};

static const u8 sText_Trainer1Fled[] = _( "{PLAY_SE SE_FLEE}{B_TRAINER1_NAME_WITH_CLASS} flieht!");
static const u8 sText_PlayerLostAgainstTrainer1[] = _("Spieler verlor gegen {B_TRAINER1_NAME_WITH_CLASS}!");
static const u8 sText_PlayerBattledToDrawTrainer1[] = _("Patt zwischen Spieler und {B_TRAINER1_NAME_WITH_CLASS}!");
const u8 gText_RecordBattleToPass[] = _("Soll der Kampf auf deinem Kampf-\nZonenpass dokumentiert werden?");
const u8 gText_BattleRecordedOnPass[] = _("Das Ergebnis von {B_PLAYER_NAME} wurde auf dem\nKampfzonenpass festgehalten.");
static const u8 sText_LinkTrainerWantsToBattlePause[] = _("Eine Herausforderung von {B_LINK_OPPONENT1_NAME}!\p");
static const u8 sText_TwoLinkTrainersWantToBattlePause[] = _("Eine Herausforderung von {B_LINK_OPPONENT1_NAME} und {B_LINK_OPPONENT2_NAME}!\p");
static const u8 sText_Your1[] = _("Dein");
static const u8 sText_Opposing1[] = _("Das gegnerische");
static const u8 sText_Your2[] = _("dein");
static const u8 sText_Opposing2[] = _("das gegnerische");
static const u8 sText_EmptyStatus[] = _("$$$$$$$");

static const struct BattleWindowText sTextOnWindowsInfo_Normal[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .color.foreground = 1,
        .color.background = 15,
        .color.accent = 15,
        .color.shadow = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.background = 15,
        .color.accent = 15,
        .color.shadow = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 13 : 12,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 15 : 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .color.foreground = 12,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 2,
    },
    [B_WIN_VS_PLAYER] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_OPPONENT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_OUTCOME_DRAW] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 6,
    },
    [B_WIN_VS_OUTCOME_LEFT] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 6,
    },
    [B_WIN_VS_OUTCOME_RIGHT] = {
        .fillValue = PIXEL_FILL(0x0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 6,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .color.foreground = TEXT_DYNAMIC_COLOR_4,
        .color.background = TEXT_DYNAMIC_COLOR_5,
        .color.accent = TEXT_DYNAMIC_COLOR_5,
        .color.shadow = TEXT_DYNAMIC_COLOR_6,
    },
};

static const struct BattleWindowText sTextOnWindowsInfo_KantoTutorial[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .color.foreground = 1,
        .color.background = 15,
        .color.accent = 15,
        .color.shadow = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.background = 15,
        .color.accent = 15,
        .color.shadow = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 13 : 12,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 15 : 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .color.foreground = 12,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 2,
    },
    [B_WIN_VS_PLAYER] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_OPPONENT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_VS_OUTCOME_DRAW] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 6,
    },
    [B_WIN_VS_OUTCOME_LEFT] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 6,
    },
    [B_WIN_VS_OUTCOME_RIGHT] = {
        .fillValue = PIXEL_FILL(0x0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 6,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .color.foreground = TEXT_DYNAMIC_COLOR_4,
        .color.background = TEXT_DYNAMIC_COLOR_5,
        .color.accent = TEXT_DYNAMIC_COLOR_5,
        .color.shadow = TEXT_DYNAMIC_COLOR_6,
    },
    [B_WIN_OAK_OLD_MAN] = {
        .fillValue = PIXEL_FILL(0x1),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 1,
        .speed = 1,
        .fgColor = 2,
        .bgColor = 1,
        .shadowColor = 3,
    },
};

static const struct BattleWindowText sTextOnWindowsInfo_Arena[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .color.foreground = 1,
        .color.background = 15,
        .color.accent = 15,
        .color.shadow = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.background = 15,
        .color.accent = 15,
        .color.shadow = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 13 : 12,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = B_SHOW_EFFECTIVENESS != SHOW_EFFECTIVENESS_NEVER ? 15 : 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .color.foreground = 12,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.shadow = 2,
    },
    [ARENA_WIN_PLAYER_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 1,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_VS] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_OPPONENT_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_MIND] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_SKILL] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_BODY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_JUDGMENT_TITLE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .color.foreground = 13,
        .color.background = 14,
        .color.accent = 14,
        .color.shadow = 15,
    },
    [ARENA_WIN_JUDGMENT_TEXT] = {
        .fillValue = PIXEL_FILL(0x1),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .color.foreground = 2,
        .color.background = 1,
        .color.accent = 1,
        .color.shadow = 3,
    },
    [B_WIN_MOVE_DESCRIPTION] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .letterSpacing = 0,
        .lineSpacing = 0,
        .speed = 0,
        .color.foreground = TEXT_DYNAMIC_COLOR_4,
        .color.background = TEXT_DYNAMIC_COLOR_5,
        .color.accent = TEXT_DYNAMIC_COLOR_5,
        .color.shadow = TEXT_DYNAMIC_COLOR_6,
    },
};

static const struct BattleWindowText *const sBattleTextOnWindowsInfo[] =
{
    [B_WIN_TYPE_NORMAL] = sTextOnWindowsInfo_Normal,
    [B_WIN_TYPE_ARENA]  = sTextOnWindowsInfo_Arena,
    [B_WIN_TYPE_KANTO_TUTORIAL] = sTextOnWindowsInfo_KantoTutorial,
};

static const u8 sRecordedBattleTextSpeeds[] = {8, 4, 1, 0};

void BufferStringBattle(enum StringID stringID, enum BattlerId battler)
{
    s32 i;
    const u8 *stringPtr = NULL;

    gBattleMsgDataPtr = (struct BattleMsgData *)(&gBattleResources->bufferA[battler][4]);
    gLastUsedItem = gBattleMsgDataPtr->lastItem;
    gLastUsedAbility = gBattleMsgDataPtr->lastAbility;
    gBattleScripting.battler = gBattleMsgDataPtr->scrActive;
    gBattleStruct->scriptPartyIdx = gBattleMsgDataPtr->bakScriptPartyIdx;
    gBattleStruct->hpScale = gBattleMsgDataPtr->hpScale;
    gPotentialItemEffectBattler = gBattleMsgDataPtr->itemEffectBattler;
    gBattleStruct->stringMoveType = gBattleMsgDataPtr->moveType;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        sBattlerAbilities[i] = gBattleMsgDataPtr->abilities[i];
    }
    for (i = 0; i < TEXT_BUFF_ARRAY_COUNT; i++)
    {
        gBattleTextBuff1[i] = gBattleMsgDataPtr->textBuffs[0][i];
        gBattleTextBuff2[i] = gBattleMsgDataPtr->textBuffs[1][i];
        gBattleTextBuff3[i] = gBattleMsgDataPtr->textBuffs[2][i];
    }

    switch (stringID)
    {
    case STRINGID_INTROMSG: // first battle msg
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    stringPtr = sText_TwoTrainersWantToBattle;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                {
                    stringPtr = sText_TwoLinkTrainersWantToBattle;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                    {
                        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
                            stringPtr = sText_LinkTrainerWantsToBattle;
                        else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                            stringPtr = sText_TwoTrainersWantToBattle;
                        else if (!(gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS))
                            stringPtr = sText_LinkTrainerWantsToBattlePause;
                        else
                            stringPtr = sText_TwoLinkTrainersWantToBattlePause;
                    }
                    else
                    {
                        stringPtr = sText_TwoLinkTrainersWantToBattle;
                    }
                }
                else
                {
                    if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1WantsToBattle;
                    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_LinkTrainerWantsToBattlePause;
                    else
                        stringPtr = sText_LinkTrainerWantsToBattle;
                }
            }
            else
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1WantsToBattle;
                else if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER))
                    stringPtr = sText_TwoTrainersWantToBattle;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersWantToBattle;
                else
                    stringPtr = sText_Trainer1WantsToBattle;
            }
        }
        else
        {
            if (IsGhostBattleWithoutScope())
                stringPtr = sText_GhostAppearedCantId;
            else if (gBattleTypeFlags & BATTLE_TYPE_GHOST)
                stringPtr = sText_TheGhostAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_LEGENDARY)
                stringPtr = sText_LegendaryPkmnAppeared;
            else if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT))))
                stringPtr = sText_TwoWildPkmnAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_CATCH_TUTORIAL)
                stringPtr = sText_WildPkmnAppearedPause;
            else
                stringPtr = sText_WildPkmnAppeared;
        }
        break;
    case STRINGID_INTROSENDOUT: // poke first send-out
        if (BattlerIsPlayer(battler) || BattlerIsPlayer(BATTLE_PARTNER(battler))
         || BattlerIsWally(battler) || BattlerIsWally(BATTLE_PARTNER(battler)))
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(BATTLE_PARTNER(battler))))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_MULTI && (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK || gBattleTypeFlags & BATTLE_TYPE_LINK))
                {
                    if (BattlerIsPlayer(battler))
                        stringPtr = sText_LinkPartnerSentOutPkmn2GoPkmn; // Player is on left
                    else
                        stringPtr = sText_LinkPartnerSentOutPkmn1GoPkmn; // Link Partner on left
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                {
                    if (BattlerIsPlayer(battler) && (battler & BIT_FLANK) == B_FLANK_LEFT)
                        stringPtr = sText_InGamePartnerSentOutZGoN; // Player is on left
                    else
                        stringPtr = sText_InGamePartnerSentOutNGoZ; // Partner on left
                }
                else
                {
                    stringPtr = sText_GoTwoPkmn;
                }
            }
            else
            {
                stringPtr = sText_GoPkmn;
            }
        }
        else
        {
            if (IsDoubleBattle() && IsValidForBattle(GetBattlerMon(BATTLE_PARTNER(battler))))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_LinkTrainerSentOutTwoPkmn;
                else if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
                else if ((gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK && gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) || (gBattleTypeFlags & BATTLE_TYPE_MULTI && (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK || gBattleTypeFlags & BATTLE_TYPE_LINK)))
                    stringPtr = sText_TwoLinkTrainersIntroSendOutPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS || gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (BattlerIsLink(battler) || (BattlerIsRecorded(battler) && BattlerIsOpponent(battler))) // Link Opponent doubles and test opponent
                    stringPtr = sText_LinkTrainerSentOutTwoPkmn;
                else
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
            }
            else if (BattlerIsLink(battler) || (BattlerIsRecorded(battler) && BattlerIsOpponent(battler)))
            {
                if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
                    stringPtr = sText_Trainer1SentOutPkmn;
                else
                    stringPtr = sText_LinkTrainerIntroSendOutPkmn;
            }
            else
            {
                stringPtr = sText_Trainer1SentOutPkmn;
            }
        }
        break;
    case STRINGID_RETURNMON: // sending poke to ball msg
        if ((GetBattlerPosition(battler) & BIT_FLANK) == B_FLANK_LEFT) // battler 0 and 1
        {
            if (BattlerIsPlayer(battler) || BattlerIsWally(battler)) // Player
            {
                if (*(&gBattleStruct->hpScale) == 0)
                    stringPtr = sText_PkmnThatsEnough;
                else if (*(&gBattleStruct->hpScale) == 1 || IsDoubleBattle())
                    stringPtr = sText_PkmnComeBack;
                else if (*(&gBattleStruct->hpScale) == 2)
                    stringPtr = sText_PkmnOkComeBack;
                else
                    stringPtr = sText_PkmnGoodComeBack;
            }
            else if (BattlerIsPartner(battler)) // Link or Ingame Partner
            {
                if (BattlerIsLink(battler) || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
                    stringPtr = sText_LinkPartnerWithdrewPkmn1;
                else
                    stringPtr = sText_InGamePartnerWithdrewPkmn1;
            }
            else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_LINK_OPPONENT
             || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK) // Link Opponent A and test opponent
            {
                stringPtr = sText_LinkTrainer1WithdrewPkmn;
            }
            else // Opponent A
            {
                stringPtr = sText_Trainer1WithdrewPkmn;
            }
        }
        else // battler 2 and 3
        {
            if (BattlerIsPlayer(battler)) // Player
            {
                if (*(&gBattleStruct->hpScale) == 0)
                    stringPtr = sText_PkmnThatsEnough;
                else if (*(&gBattleStruct->hpScale) == 1 || IsDoubleBattle())
                    stringPtr = sText_PkmnComeBack;
                else if (*(&gBattleStruct->hpScale) == 2)
                    stringPtr = sText_PkmnOkComeBack;
                else
                    stringPtr = sText_PkmnGoodComeBack;
            }
            else if (BattlerIsPartner(battler)) // Link or Ingame Partner
            {
                if (BattlerIsLink(battler) || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
                    stringPtr = sText_LinkPartnerWithdrewPkmn2;
                else
                    stringPtr = sText_InGamePartnerWithdrewPkmn2;
            }
            else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_LINK_OPPONENT
             || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK) // Link Opponent B and test opponent
            {
                if (BattleSideHasTwoTrainers(B_SIDE_OPPONENT))
                    stringPtr = sText_LinkTrainer2WithdrewPkmn;
                else
                    stringPtr = sText_LinkTrainer1WithdrewPkmn;
            }
            else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) // Opponent B
            {
                stringPtr = sText_Trainer2WithdrewPkmn;
            }
            else // Opponent A
            {
                stringPtr = sText_Trainer1WithdrewPkmn;
            }
        }
        break;
    case STRINGID_SWITCHINMON: // switch-in msg
        if ((GetBattlerPosition(gBattleScripting.battler) & BIT_FLANK) == B_FLANK_LEFT) // battler 0 and 1
        {
            if (BattlerIsPlayer(gBattleScripting.battler)) // Player
            {
                if (*(&gBattleStruct->hpScale) == 0)
                    stringPtr = sText_GoPkmn2;
                else if (*(&gBattleStruct->hpScale) == 1 || IsDoubleBattle())
                    stringPtr = sText_DoItPkmn;
                else if (*(&gBattleStruct->hpScale) == 2)
                    stringPtr = sText_GoForItPkmn;
                else
                    stringPtr = sText_YourFoesWeakGetEmPkmn;
            }
            else if (BattlerIsPartner(gBattleScripting.battler)) // Link or Ingame Partner
            {
                if (BattlerIsLink(gBattleScripting.battler) || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
                    stringPtr = sText_LinkPartnerSentOutPkmn1;
                else
                    stringPtr = sText_InGamePartnerSentOutPkmn1;
            }
            else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_LINK_OPPONENT
             || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK) // Link Opponent A and test opponent
            {
                stringPtr = sText_LinkTrainerSentOutPkmn;
            }
            else // Opponent A
            {
                stringPtr = sText_Trainer1SentOutPkmn;
            }
        }
        else // battler 2 and 3
        {
            if (BattlerIsPlayer(gBattleScripting.battler)) // Player
            {
                if (*(&gBattleStruct->hpScale) == 0)
                    stringPtr = sText_GoPkmn2;
                else if (*(&gBattleStruct->hpScale) == 1 || IsDoubleBattle())
                    stringPtr = sText_DoItPkmn;
                else if (*(&gBattleStruct->hpScale) == 2)
                    stringPtr = sText_GoForItPkmn;
                else
                    stringPtr = sText_YourFoesWeakGetEmPkmn;
            }
            else if (BattlerIsPartner(gBattleScripting.battler)) // Link or Ingame Partner
            {
                if (BattlerIsLink(gBattleScripting.battler) || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
                    stringPtr = sText_LinkPartnerSentOutPkmn2;
                else
                    stringPtr = sText_InGamePartnerSentOutPkmn2;
            }
            else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_LINK_OPPONENT
             || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK) // Link Opponent B and test opponent
            {
                if (BattleSideHasTwoTrainers(B_SIDE_OPPONENT))
                    stringPtr = sText_LinkTrainer2SentOutPkmn2;
                else
                    stringPtr = sText_LinkTrainerSentOutPkmn2;
            }
            else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) // Opponent B
            {
                stringPtr = sText_Trainer2SentOutPkmn;
            }
            else // Single trainer double Opponent A
            {
                stringPtr = sText_Trainer1SentOutPkmn2;
            }
        }
        break;
    case STRINGID_USEDMOVE: // Pokémon used a move msg
        if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT
         && !IsZMove(gBattleMsgDataPtr->currentMove)
         && !IsMaxMove(gBattleMsgDataPtr->currentMove))
            StringCopy(gBattleTextBuff3, gTypesInfo[*(&gBattleStruct->stringMoveType)].generic);
        else
            StringCopy(gBattleTextBuff3, GetMoveName(gBattleMsgDataPtr->currentMove));
        stringPtr = sText_AttackerUsedX;
        break;
    case STRINGID_BATTLEEND: // battle end
        if (gBattleTextBuff1[0] & B_OUTCOME_LINK_BATTLE_RAN)
        {
            gBattleTextBuff1[0] &= ~(B_OUTCOME_LINK_BATTLE_RAN);
            if (!(BattlerIsPlayer(battler) || BattlerIsPlayer(BATTLE_PARTNER(battler))) && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTextBuff1[0] == B_OUTCOME_LOST || gBattleTextBuff1[0] == B_OUTCOME_DREW)
                stringPtr = sText_GotAwaySafely;
            else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                stringPtr = sText_TwoWildFled;
            else
                stringPtr = sText_WildFled;
        }
        else
        {
            if (!(BattlerIsPlayer(battler) || BattlerIsPlayer(BATTLE_PARTNER(battler))) && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                        stringPtr = sText_TwoInGameTrainersDefeated;
                    else
                        stringPtr = sText_TwoLinkTrainersDefeated;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostToTwo;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawVsTwo;
                    break;
                }
            }
            else if (TRAINER_BATTLE_PARAM.opponentA == TRAINER_UNION_ROOM)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainerTrainer1;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstTrainer1;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawTrainer1;
                    break;
                }
            }
            else
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainer;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstLinkTrainer;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawLinkTrainer;
                    break;
                }
            }
        }
        break;
    case STRINGID_TRAINERSLIDE:
        stringPtr = gBattleStruct->trainerSlideMsg;
        break;
    default: // load a string from the table
        if (stringID >= STRINGID_COUNT)
        {
            gDisplayedStringBattle[0] = EOS;
            return;
        }
        else
        {
            stringPtr = gBattleStringsTable[stringID];
        }
        break;
    }

    BattleStringExpandPlaceholdersToDisplayedString(stringPtr);
}

u32 BattleStringExpandPlaceholdersToDisplayedString(const u8 *src)
{
#ifndef NDEBUG
    u32 j, strWidth;
    u32 dstID = BattleStringExpandPlaceholders(src, gDisplayedStringBattle, sizeof(gDisplayedStringBattle));
    for (j = 1;; j++)
    {
        strWidth = GetStringLineWidth(0, gDisplayedStringBattle, 0, j, sizeof(gDisplayedStringBattle));
        if (strWidth == 0)
            break;
    }
    return dstID;
#else
    return BattleStringExpandPlaceholders(src, gDisplayedStringBattle, sizeof(gDisplayedStringBattle));
#endif
}

static const u8 *TryGetStatusString(u8 *src)
{
    u32 i;
    u8 status[8];
    u32 chars1, chars2;
    u8 *statusPtr;

    memcpy(status, sText_EmptyStatus, min(ARRAY_COUNT(status), ARRAY_COUNT(sText_EmptyStatus)));

    statusPtr = status;
    for (i = 0; i < ARRAY_COUNT(status); i++)
    {
        if (*src == EOS) break; // one line required to match -g
        *statusPtr = *src;
        src++;
        statusPtr++;
    }

    chars1 = *(u32 *)(&status[0]);
    chars2 = *(u32 *)(&status[4]);

    for (i = 0; i < ARRAY_COUNT(gStatusConditionStringsTable); i++)
    {
        if (chars1 == *(u32 *)(&gStatusConditionStringsTable[i][0][0])
            && chars2 == *(u32 *)(&gStatusConditionStringsTable[i][0][4]))
            return gStatusConditionStringsTable[i][1];
    }
    return NULL;
}

static void GetBattlerNick(enum BattlerId battler, u8 *dst)
{
    struct Pokemon *illusionMon = GetIllusionMonPtr(battler);
    struct Pokemon *mon = GetBattlerMon(battler);

    if (illusionMon != NULL)
        mon = illusionMon;
    GetMonData(mon, MON_DATA_NICKNAME, dst);
    StringGet_Nickname(dst);
}

#define HANDLE_NICKNAME_STRING_CASE(battler)                            \
    GetBattlerNick(battler, text);                                      \
    StringGet_Nickname(text);                                           \
    if (!IsOnPlayerSide(battler))                                       \
    {                                                                   \
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)                     \
            toCpy = sText_FoePkmnPrefix;                                \
        else                                                            \
            toCpy = sText_WildPkmnPrefix;                               \
        StringAppend(text, toCpy);                                      \
    }                                                                   \
    toCpy = text;                                                                    


#define HANDLE_NICKNAME_STRING_LOWERCASE(battler)                       \
    GetBattlerNick(battler, text);                                      \
    StringGet_Nickname(text);                                           \
    if (!IsOnPlayerSide(battler))                                       \
    {                                                                   \
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)                     \
            toCpy = sText_FoePkmnPrefixLower;                           \
        else                                                            \
            toCpy = sText_WildPkmnPrefixLower;                          \
        StringAppend(text, toCpy);                                      \
    }                                                                   \
    toCpy = text;   

static const u8 *BattleStringGetOpponentNameByTrainerId(u16 trainerId, u8 *text, u8 multiplayerId, enum BattlerId battler)
{
    const u8 *toCpy = NULL;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
        u32 i;
        for (i = 0; i < ARRAY_COUNT(gBattleResources->secretBase->trainerName); i++)
            text[i] = gBattleResources->secretBase->trainerName[i];
        text[i] = EOS;
        ConvertInternationalString(text, gBattleResources->secretBase->language);
        toCpy = text;
    }
    else if (trainerId == TRAINER_UNION_ROOM)
    {
        toCpy = gLinkPlayers[multiplayerId ^ BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_LINK_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler)].name;
        else
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler) & BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
    {
        CopyFrontierBrainTrainerName(text);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        GetFrontierTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER && gMapHeader.regionMapSectionId == MAPSEC_TRAINER_TOWER_2)
    {
        GetTrainerTowerOpponentName(text);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        GetTrainerHillTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
    {
        GetEreaderTrainerName(text);
        toCpy = text;
    }
    else
    {
        enum TrainerClassID trainerClass = GetTrainerClassFromId(TRAINER_BATTLE_PARAM.opponentA);

        if (trainerClass == TRAINER_CLASS_RIVAL_EARLY_FRLG || trainerClass == TRAINER_CLASS_RIVAL_LATE_FRLG || trainerClass == TRAINER_CLASS_CHAMPION_FRLG)
            toCpy = GetExpandedPlaceholder(PLACEHOLDER_ID_RIVAL);
        else
            toCpy = GetTrainerNameFromId(trainerId);
    }

    assertf(DoesStringProperlyTerminate(toCpy, TRAINER_NAME_LENGTH + 1),"Opponent needs a valid name")
    {
        return sText_EmptyString4;
    }

    return toCpy;
}

static const u8 *BattleStringGetOpponentName(u8 *text, u8 multiplayerId, enum BattlerId battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_OPPONENT_LEFT:
        toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, battler);
        break;
    case B_POSITION_OPPONENT_RIGHT:
        if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_MULTI) && !BATTLE_TWO_VS_ONE_OPPONENT)
            toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, text, multiplayerId, battler);
        else
            toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, battler);
        break;
    default:
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetPlayerName(u8 *text, enum BattlerId battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_PLAYER_LEFT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            toCpy = gLinkPlayers[0].name;
        else
            toCpy = gSaveBlock2Ptr->playerName;
        break;
    case B_POSITION_PLAYER_RIGHT:
        if (((gBattleTypeFlags & BATTLE_TYPE_RECORDED) && !(gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER)))
            || gTestRunnerEnabled)
        {
            toCpy = gLinkPlayers[0].name;
        }
        else if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_MULTI))
        {
            toCpy = gLinkPlayers[2].name;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        {
            GetFrontierTrainerName(text, gPartnerTrainerId);
            toCpy = text;
        }
        else
        {
            toCpy = gSaveBlock2Ptr->playerName;
        }
        break;
    default:
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetTrainerName(u8 *text, u8 multiplayerId, enum BattlerId battler)
{
    if (IsOnPlayerSide(battler))
        return BattleStringGetPlayerName(text, battler);
    else
        return BattleStringGetOpponentName(text, multiplayerId, battler);
}

static const u8 *BattleStringGetOpponentClassByTrainerId(u16 trainerId)
{
    const u8 *toCpy;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
        toCpy = gTrainerClasses[GetSecretBaseTrainerClass()].name;
    else if (trainerId == TRAINER_UNION_ROOM)
        toCpy = gTrainerClasses[GetUnionRoomTrainerClass()].name;
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
        toCpy = gTrainerClasses[GetFrontierBrainTrainerClass()].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        toCpy = gTrainerClasses[GetFrontierOpponentClass(trainerId)].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER && gMapHeader.regionMapSectionId == MAPSEC_TRAINER_TOWER_2)
        toCpy = gTrainerClasses[GetTrainerTowerOpponentClass()].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        toCpy = gTrainerClasses[GetTrainerHillOpponentClass(trainerId)].name;
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
        toCpy = gTrainerClasses[GetEreaderTrainerClassId()].name;
    else if (trainerId == TRAINER_LINK_OPPONENT)
        toCpy = gTrainerClasses[TRAINER_NONE].name;
    else
        toCpy = gTrainerClasses[GetTrainerClassFromId(trainerId)].name;

    return toCpy;
}

// Ensure the defined length for an item name can contain the full defined length of a berry name.
// This ensures that custom Enigma Berry names will fit in the text buffer at the top of BattleStringExpandPlaceholders.
STATIC_ASSERT(BERRY_NAME_LENGTH + ARRAY_COUNT(sText_BerrySuffix) <= ITEM_NAME_LENGTH, BerryNameTooLong);

u32 BattleStringExpandPlaceholders(const u8 *src, u8 *dst, u32 dstSize)
{
    u32 dstID = 0; // if they used dstID, why not use srcID as well?
    const u8 *toCpy = NULL;
    u8 text[max(max(max(32, TRAINER_NAME_LENGTH + 1), POKEMON_NAME_LENGTH + 1), ITEM_NAME_LENGTH)];
    u8 *textStart = &text[0];
    u8 multiplayerId;
    u8 fontId = FONT_NORMAL;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        multiplayerId = gRecordedBattleMultiplayerId;
    else
        multiplayerId = GetMultiplayerId();

    // Clear destination first
    while (dstID < dstSize)
    {
        dst[dstID] = EOS;
        dstID++;
    }

    dstID = 0;
    while (*src != EOS)
    {
        toCpy = NULL;

        if (*src == PLACEHOLDER_BEGIN)
        {
            src++;
            u32 classLength = 0;
            u32 nameLength = 0;
            const u8 *classString;
            const u8 *nameString;
            switch (*src)
            {
            case B_TXT_BUFF1:
                if (gBattleTextBuff1[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff1, gStringVar1);
                    toCpy = gStringVar1;
                }
                else
                {
                    toCpy = TryGetStatusString(gBattleTextBuff1);
                    if (toCpy == NULL)
                        toCpy = gBattleTextBuff1;
                }
                break;
            case B_TXT_BUFF2:
                if (gBattleTextBuff2[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff2, gStringVar2);
                    toCpy = gStringVar2;
                }
                else
                {
                    toCpy = gBattleTextBuff2;
                }
                break;
            case B_TXT_BUFF3:
                if (gBattleTextBuff3[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff3, gStringVar3);
                    toCpy = gStringVar3;
                }
                else
                {
                    toCpy = gBattleTextBuff3;
                }
                break;
            case B_TXT_COPY_VAR_1:
                toCpy = gStringVar1;
                break;
            case B_TXT_COPY_VAR_2:
                toCpy = gStringVar2;
                break;
            case B_TXT_COPY_VAR_3:
                toCpy = gStringVar3;
                break;
            case B_TXT_PLAYER_MON1_NAME: // first player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON1_NAME: // first enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_PLAYER_MON2_NAME: // second player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON2_NAME: // second enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON1_NAME: // link first player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON1_NAME: // link first opponent poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON2_NAME: // link second player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON2_NAME: // link second opponent poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX_MON1: // Unused, to change into sth else.
                break;
            case B_TXT_ATK_PARTNER_NAME: // attacker partner name
                GetBattlerNick(BATTLE_PARTNER(gBattlerAttacker), text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX: // attacker name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerAttacker)
                break;
            case B_TXT_DEF_NAME_WITH_PREFIX: // target name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerTarget)
                break;
            case B_TXT_DEF_NAME: // target name
                GetBattlerNick(gBattlerTarget, text);
                toCpy = text;
                break;
            case B_TXT_DEF_PARTNER_NAME: // partner target name
                GetBattlerNick(BATTLE_PARTNER(gBattlerTarget), text);
                toCpy = text;
                break;
            case B_TXT_EFF_NAME_WITH_PREFIX: // effect battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gEffectBattler)
                break;
            case B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX: // scripting active battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattleScripting.battler)
                break;
            case B_TXT_CURRENT_MOVE: // current move name
                if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT
                 && !IsZMove(gBattleMsgDataPtr->currentMove)
                 && !IsMaxMove(gBattleMsgDataPtr->currentMove))
                    toCpy = gTypesInfo[gBattleStruct->stringMoveType].generic;
                else
                    toCpy = GetMoveName(gBattleMsgDataPtr->currentMove);
                break;
            case B_TXT_LAST_MOVE: // originally used move name
                if (gBattleMsgDataPtr->originallyUsedMove >= MOVES_COUNT
                 && !IsZMove(gBattleMsgDataPtr->currentMove)
                 && !IsMaxMove(gBattleMsgDataPtr->currentMove))
                    toCpy = gTypesInfo[gBattleStruct->stringMoveType].generic;
                else
                    toCpy = GetMoveName(gBattleMsgDataPtr->originallyUsedMove);
                break;
            case B_TXT_LAST_ITEM: // last used item
                if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                {
                    if (gLastUsedItem == ITEM_ENIGMA_BERRY_E_READER)
                    {
                        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        {
                            if ((gBattleScripting.multiplayerId != 0 && (gPotentialItemEffectBattler & BIT_SIDE))
                                || (gBattleScripting.multiplayerId == 0 && !(gPotentialItemEffectBattler & BIT_SIDE)))
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = sText_EnigmaBerry;
                            }
                        }
                        else
                        {
                            if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = sText_EnigmaBerry;
                            }
                        }
                    }
                    else
                    {
                        CopyItemName(gLastUsedItem, text);
                        toCpy = text;
                    }
                }
                else
                {
                    CopyItemName(gLastUsedItem, text);
                    toCpy = text;
                }
                break;
            case B_TXT_LAST_ABILITY: // last used ability
                toCpy = gAbilitiesInfo[gLastUsedAbility].name;
                break;
            case B_TXT_ATK_ABILITY: // attacker ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattlerAttacker]].name;
                break;
            case B_TXT_DEF_ABILITY: // target ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattlerTarget]].name;
                break;
            case B_TXT_SCR_ACTIVE_ABILITY: // scripting active ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gBattleScripting.battler]].name;
                break;
            case B_TXT_EFF_ABILITY: // effect battler ability
                toCpy = gAbilitiesInfo[sBattlerAbilities[gEffectBattler]].name;
                break;
            case B_TXT_TRAINER1_CLASS: // trainer class name
                toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                break;
            case B_TXT_TRAINER1_NAME: // trainer1 name
                toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                break;
            case B_TXT_TRAINER1_NAME_WITH_CLASS: // trainer1 name with trainer class
                toCpy = textStart;
                classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentA, textStart, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_LINK_PLAYER_NAME: // link player name
                toCpy = gLinkPlayers[multiplayerId].name;
                break;
            case B_TXT_LINK_PARTNER_NAME: // link partner name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT1_NAME: // link opponent 1 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(LEFT_FOE(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT2_NAME: // link opponent 2 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(RIGHT_FOE(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_SCR_TRAINER_NAME: // link scripting active name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(gBattleScripting.battler)].name;
                break;
            case B_TXT_PLAYER_NAME: // player name
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
                break;
            case B_TXT_TRAINER1_LOSE_TEXT: // trainerA lose text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER && gMapHeader.regionMapSectionId == MAPSEC_TRAINER_TOWER_2)
                {
                    GetTrainerTowerOpponentLoseText(gStringVar4, 0);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerALoseText();
                }
                break;
            case B_TXT_TRAINER1_WIN_TEXT: // trainerA win text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER && gMapHeader.regionMapSectionId == MAPSEC_TRAINER_TOWER_2)
                {
                    GetTrainerTowerOpponentWinText(gStringVar4, 0);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, TRAINER_BATTLE_PARAM.opponentA);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerWonSpeech();
                }
                break;
            case B_TXT_26: // ?
                if (!IsOnPlayerSide(gBattleScripting.battler))
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        toCpy = sText_FoePkmnPrefix;
                    else
                        toCpy = sText_WildPkmnPrefix;
                    while (*toCpy != EOS)
                    {
                        dst[dstID] = *toCpy;
                        dstID++;
                        toCpy++;
                    }
                }
                GetMonData(&GetBattlerParty(gBattleScripting.battler)[gBattleStruct->scriptPartyIdx], MON_DATA_NICKNAME, text);
                StringGet_Nickname(text);
                toCpy = text;
                break;
            case B_TXT_PC_CREATOR_NAME: // lanette pc
                if (FlagGet(FLAG_SYS_PC_LANETTE))
                    toCpy = IS_FRLG ? sText_Bills : sText_Lanettes;
                else
                    toCpy = sText_Someones;
                break;
            case B_TXT_ATK_PREFIX2:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_DEF_PREFIX2:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_ATK_PREFIX1:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_DEF_PREFIX1:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_ATK_PREFIX3:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_DEF_PREFIX3:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_TRAINER2_CLASS:
                toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                break;
            case B_TXT_TRAINER2_NAME:
                toCpy = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                break;
            case B_TXT_TRAINER2_NAME_WITH_CLASS:
                toCpy = textStart;
                classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetOpponentNameByTrainerId(TRAINER_BATTLE_PARAM.opponentB, textStart, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_TRAINER2_LOSE_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER && gMapHeader.regionMapSectionId == MAPSEC_TRAINER_TOWER_2)
                {
                    GetTrainerTowerOpponentLoseText(gStringVar4, 1);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerBLoseText();
                }
                break;
            case B_TXT_TRAINER2_WIN_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_TOWER && gMapHeader.regionMapSectionId == MAPSEC_TRAINER_TOWER_2)
                {
                    GetTrainerTowerOpponentWinText(gStringVar4, 1);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, TRAINER_BATTLE_PARAM.opponentB);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_PARTNER_CLASS:
                toCpy = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                break;
            case B_TXT_PARTNER_NAME:
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                break;
            case B_TXT_PARTNER_NAME_WITH_CLASS:
                toCpy = textStart;
                classString = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                while (classString[classLength] != EOS)
                {
                    textStart[classLength] = classString[classLength];
                    classLength++;
                }
                textStart[classLength] = CHAR_SPACE;
                textStart += classLength + 1;
                nameString = BattleStringGetPlayerName(textStart, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                if (nameString != textStart)
                {
                    while (nameString[nameLength] != EOS)
                    {
                        textStart[nameLength] = nameString[nameLength];
                        nameLength++;
                    }
                    textStart[nameLength] = EOS;
                }
                break;
            case B_TXT_ATK_TRAINER_NAME:
                toCpy = BattleStringGetTrainerName(text, multiplayerId, gBattlerAttacker);
                break;
            case B_TXT_ATK_TRAINER_CLASS:
                switch (GetBattlerPosition(gBattlerAttacker))
                {
                case B_POSITION_PLAYER_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                        toCpy = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                    break;
                case B_POSITION_OPPONENT_LEFT:
                    toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                    break;
                case B_POSITION_OPPONENT_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                        toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                    else
                        toCpy = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                    break;
                default:
                    break;
                }
                break;
            case B_TXT_ATK_TRAINER_NAME_WITH_CLASS:
                toCpy = textStart;
                if (GetBattlerPosition(gBattlerAttacker) == B_POSITION_PLAYER_LEFT)
                {
                    textStart = StringCopy(textStart, BattleStringGetTrainerName(textStart, multiplayerId, gBattlerAttacker));
                }
                else
                {
                    classString = NULL;
                    switch (GetBattlerPosition(gBattlerAttacker))
                    {
                    case B_POSITION_PLAYER_RIGHT:
                        if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                            classString = gTrainerClasses[GetFrontierOpponentClass(gPartnerTrainerId)].name;
                        break;
                    case B_POSITION_OPPONENT_LEFT:
                        classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                        break;
                    case B_POSITION_OPPONENT_RIGHT:
                        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                            classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentB);
                        else
                            classString = BattleStringGetOpponentClassByTrainerId(TRAINER_BATTLE_PARAM.opponentA);
                        break;
                    default:
                        break;
                    }
                    classLength = 0;
                    nameLength = 0;
                    while (classString[classLength] != EOS)
                    {
                        textStart[classLength] = classString[classLength];
                        classLength++;
                    }
                    textStart[classLength] = CHAR_SPACE;
                    textStart += 1 + classLength;
                    nameString = BattleStringGetTrainerName(textStart, multiplayerId, gBattlerAttacker);
                    if (nameString != textStart)
                    {
                        while (nameString[nameLength] != EOS)
                        {
                            textStart[nameLength] = nameString[nameLength];
                            nameLength++;
                        }
                        textStart[nameLength] = EOS;
                    }
                }
                break;
            case B_TXT_ATK_TEAM1:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_ATK_TEAM2:
                if (IsOnPlayerSide(gBattlerAttacker))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_DEF_TEAM1:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_DEF_TEAM2:
                if (IsOnPlayerSide(gBattlerTarget))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_EFF_TEAM1:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_EFF_TEAM2:
                if (IsOnPlayerSide(gEffectBattler))
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX2:
                HANDLE_NICKNAME_STRING_LOWERCASE(gBattlerAttacker)
                break;
            case B_TXT_DEF_NAME_WITH_PREFIX2:
                HANDLE_NICKNAME_STRING_LOWERCASE(gBattlerTarget)
                break;
            case B_TXT_EFF_NAME_WITH_PREFIX2:
                HANDLE_NICKNAME_STRING_LOWERCASE(gEffectBattler)
                break;
            case B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX2:
                HANDLE_NICKNAME_STRING_LOWERCASE(gBattleScripting.battler)
                break;
            }

            if (toCpy != NULL)
            {
                while (*toCpy != EOS)
                {
                    if (*toCpy == CHAR_SPACE)
                        dst[dstID] = CHAR_NBSP;
                    else
                        dst[dstID] = *toCpy;
                    dstID++;
                    toCpy++;
                }
            }

            if (*src == B_TXT_TRAINER1_LOSE_TEXT || *src == B_TXT_TRAINER2_LOSE_TEXT
                || *src == B_TXT_TRAINER1_WIN_TEXT || *src == B_TXT_TRAINER2_WIN_TEXT)
            {
                dst[dstID] = EXT_CTRL_CODE_BEGIN;
                dstID++;
                dst[dstID] = EXT_CTRL_CODE_PAUSE_UNTIL_PRESS;
                dstID++;
            }
        }
        else
        {
            dst[dstID] = *src;
            dstID++;
        }
        src++;
    }

    dst[dstID] = *src;
    dstID++;

    BreakStringAutomatic(dst, BATTLE_MSG_MAX_WIDTH, BATTLE_MSG_MAX_LINES, fontId, SHOW_SCROLL_PROMPT);

    return dstID;
}

static void IllusionNickHack(enum BattlerId battler, u32 partyId, u8 *dst)
{
    u32 id = PARTY_SIZE;
    struct Pokemon *party = GetBattlerParty(battler);
    struct Pokemon *mon = &party[partyId], *partnerMon;

    if (GetMonAbility(mon) == ABILITY_ILLUSION)
    {
        if (IsBattlerAlive(BATTLE_PARTNER(battler)))
            partnerMon = GetBattlerMon(BATTLE_PARTNER(battler));
        else
            partnerMon = mon;

        id = GetIllusionMonPartyId(party, mon, partnerMon, battler);
    }

    if (id != PARTY_SIZE)
        GetMonData(&party[id], MON_DATA_NICKNAME, dst);
    else
        GetMonData(mon, MON_DATA_NICKNAME, dst);
}

void ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst)
{
    u32 srcID = 1;
    u32 value = 0;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u16 hword;

    *dst = EOS;
    while (src[srcID] != B_BUFF_EOS)
    {
        switch (src[srcID])
        {
        case B_BUFF_STRING: // battle string
            hword = T1_READ_16(&src[srcID + 1]);
            StringAppend(dst, gBattleStringsTable[hword]);
            srcID += 3;
            break;
        case B_BUFF_NUMBER: // int to string
            switch (src[srcID + 1])
            {
            case 1:
                value = src[srcID + 3];
                break;
            case 2:
                value = T1_READ_16(&src[srcID + 3]);
                break;
            case 4:
                value = T1_READ_32(&src[srcID + 3]);
                break;
            }
            ConvertIntToDecimalStringN(dst, value, STR_CONV_MODE_LEFT_ALIGN, src[srcID + 2]);
            srcID += src[srcID + 1] + 3;
            break;
        case B_BUFF_MOVE: // move name
            StringAppend(dst, GetMoveName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_TYPE: // type name
            StringAppend(dst, gTypesInfo[src[srcID + 1]].name);
            srcID += 2;
            break;
        case B_BUFF_MON_NICK_WITH_PREFIX: // poke nick with prefix
        case B_BUFF_MON_NICK_WITH_PREFIX_LOWER: // poke nick with lowercase prefix
            if (!IsOnPlayerSide(src[srcID + 1]))
            {
                if (src[srcID] == B_BUFF_MON_NICK_WITH_PREFIX_LOWER)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        StringAppend(dst, sText_FoePkmnPrefixLower);
                    else
                        StringAppend(dst, sText_WildPkmnPrefixLower);
                }
                else
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        StringAppend(dst, sText_FoePkmnPrefix);
                    else
                        StringAppend(dst, sText_WildPkmnPrefix);
                }
            }
            GetMonData(&GetBattlerParty(src[srcID + 1])[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            StringGet_Nickname(nickname);
            StringAppend(dst, nickname);
            srcID += 3;
            break;
        case B_BUFF_STAT: // stats
            StringAppend(dst, gStatNamesTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_SPECIES: // species name
            StringCopy(dst, GetSpeciesName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_MON_NICK: // poke nick without prefix
            if (src[srcID + 2] == gBattlerPartyIndexes[src[srcID + 1]])
            {
                GetBattlerNick(src[srcID + 1], dst);
            }
            else if (gBattleScripting.illusionNickHack) // for STRINGID_ENEMYABOUTTOSWITCHPKMN
            {
                gBattleScripting.illusionNickHack = 0;
                IllusionNickHack(src[srcID + 1], src[srcID + 2], dst);
                StringGet_Nickname(dst);
            }
            else
            {
                GetMonData(&GetBattlerParty(src[srcID + 1])[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                StringGet_Nickname(dst);
            }
            srcID += 3;
            break;
        case B_BUFF_NEGATIVE_FLAVOR: // flavor table
            StringAppend(dst, gPokeblockWasTooXStringTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_ABILITY: // ability names
            StringAppend(dst, gAbilitiesInfo[T1_READ_16(&src[srcID + 1])].name);
            srcID += 3;
            break;
        case B_BUFF_ITEM: // item name
            hword = T1_READ_16(&src[srcID + 1]);
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (hword == ITEM_ENIGMA_BERRY_E_READER)
                {
                    if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                    {
                        StringCopy(dst, gEnigmaBerries[gPotentialItemEffectBattler].name);
                        StringAppend(dst, sText_BerrySuffix);
                    }
                    else
                    {
                        StringAppend(dst, sText_EnigmaBerry);
                    }
                }
                else
                {
                    CopyItemName(hword, dst);
                }
            }
            else
            {
                CopyItemName(hword, dst);
            }
            srcID += 3;
            break;
        }
    }
}

void BattlePutTextOnWindow(const u8 *text, u8 windowId)
{
    const struct BattleWindowText *textInfo = sBattleTextOnWindowsInfo[gBattleScripting.windowsType];
    bool32 copyToVram;
    struct TextPrinterTemplate printerTemplate;
    u8 speed;

    if (windowId & B_WIN_COPYTOVRAM)
    {
        windowId &= ~B_WIN_COPYTOVRAM;
        copyToVram = FALSE;
    }
    else
    {
        FillWindowPixelBuffer(windowId, textInfo[windowId].fillValue);
        copyToVram = TRUE;
    }

    printerTemplate.currentChar = text;
    printerTemplate.type = WINDOW_TEXT_PRINTER;
    printerTemplate.windowId = windowId;
    printerTemplate.fontId = textInfo[windowId].fontId;
    printerTemplate.x = textInfo[windowId].x;
    printerTemplate.y = textInfo[windowId].y;
    printerTemplate.currentX = printerTemplate.x;
    printerTemplate.currentY = printerTemplate.y;
    printerTemplate.letterSpacing = textInfo[windowId].letterSpacing;
    printerTemplate.lineSpacing = textInfo[windowId].lineSpacing;
    printerTemplate.color = textInfo[windowId].color;

    if (B_WIN_MOVE_NAME_1 <= windowId && windowId <= B_WIN_MOVE_NAME_4)
    {
        // We cannot check the actual width of the window because
        // B_WIN_MOVE_NAME_1 and B_WIN_MOVE_NAME_3 are 16 wide for
        // Z-move details.
        if (gBattleStruct->zmove.viewing && windowId == B_WIN_MOVE_NAME_1)
            printerTemplate.fontId = GetFontIdToFit(text, printerTemplate.fontId, printerTemplate.letterSpacing, 16 * TILE_WIDTH);
        else
            printerTemplate.fontId = GetFontIdToFit(text, printerTemplate.fontId, printerTemplate.letterSpacing, 8 * TILE_WIDTH);
    }

    if (printerTemplate.x == 0xFF)
    {
        u32 width = GetBattleWindowTemplatePixelWidth(gBattleScripting.windowsType, windowId);
        s32 alignX = GetStringCenterAlignXOffsetWithLetterSpacing(printerTemplate.fontId, printerTemplate.currentChar, width, printerTemplate.letterSpacing);
        printerTemplate.x = printerTemplate.currentX = alignX;
    }

    if (windowId == ARENA_WIN_JUDGMENT_TEXT || windowId == B_WIN_OAK_OLD_MAN)
        gTextFlags.useAlternateDownArrow = FALSE;
    else
        gTextFlags.useAlternateDownArrow = TRUE;

    if ((gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)) || gTestRunnerEnabled || ((gBattleTypeFlags & BATTLE_TYPE_POKEDUDE) && windowId != B_WIN_OAK_OLD_MAN))
        gTextFlags.autoScroll = TRUE;
    else
        gTextFlags.autoScroll = FALSE;

    if (windowId == B_WIN_MSG || windowId == ARENA_WIN_JUDGMENT_TEXT || windowId == B_WIN_OAK_OLD_MAN)
    {
        if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            speed = 1;
        else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            speed = sRecordedBattleTextSpeeds[GetTextSpeedInRecordedBattle()];
        else
            speed = GetPlayerTextSpeedDelay();

        gTextFlags.canABSpeedUpPrint = 1;
    }
    else
    {
        speed = textInfo[windowId].speed;
        gTextFlags.canABSpeedUpPrint = 0;
    }

    AddTextPrinter(&printerTemplate, speed, NULL);

    if (copyToVram)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

void SetPpNumbersPaletteInMoveSelection(enum BattlerId battler)
{
    struct ChooseMoveStruct *chooseMoveStruct = (struct ChooseMoveStruct *)(&gBattleResources->bufferA[battler][4]);
    const u16 *palPtr = gPPTextPalette;
    u8 var;

    if (!gBattleStruct->zmove.viewing)
        var = GetCurrentPpToMaxPpState(chooseMoveStruct->currentPp[gMoveSelectionCursor[battler]],
                         chooseMoveStruct->maxPp[gMoveSelectionCursor[battler]]);
    else
        var = 3;

    gPlttBufferUnfaded[BG_PLTT_ID(5) + 12] = palPtr[(var * 2) + 0];
    gPlttBufferUnfaded[BG_PLTT_ID(5) + 11] = palPtr[(var * 2) + 1];

    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 12], &gPlttBufferFaded[BG_PLTT_ID(5) + 12], PLTT_SIZEOF(1));
    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 11], &gPlttBufferFaded[BG_PLTT_ID(5) + 11], PLTT_SIZEOF(1));
}

u8 GetCurrentPpToMaxPpState(u8 currentPp, u8 maxPp)
{
    if (maxPp == currentPp)
    {
        return 3;
    }
    else if (maxPp <= 2)
    {
        if (currentPp > 1)
            return 3;
        else
            return 2 - currentPp;
    }
    else if (maxPp <= 7)
    {
        if (currentPp > 2)
            return 3;
        else
            return 2 - currentPp;
    }
    else
    {
        if (currentPp == 0)
            return 2;
        if (currentPp <= maxPp / 4)
            return 1;
        if (currentPp > maxPp / 2)
            return 3;
    }

    return 0;
}
