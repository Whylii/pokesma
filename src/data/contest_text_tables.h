#include "global.h"

// sAppealResultTexts
extern const u8 gText_JudgeLookedAtMonExpectantly[];
extern const u8 gText_AppealComboWentOverWell[];
extern const u8 gText_AppealComboWentOverVeryWell[];
extern const u8 gText_AppealComboWentOverExcellently[];

static const u8 *const sAppealResultTexts[] =
{
    [CONTEST_STRING_MORE_CONSCIOUS] = COMPOUND_STRING(
    "Es wird sich der anderen\n"
    "Pokémon mehr bewusst.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_NO_APPEAL] = COMPOUND_STRING(
    "{STR_VAR_1} kann danach\n"
    "keinen Ausdruck zeigen.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_SETTLE_DOWN] = COMPOUND_STRING(
    "Es kommt ein wenig\n"
    "zur Ruhe.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_OBLIVIOUS_TO_OTHERS] = COMPOUND_STRING(
    "Die anderen Pokémon nehmen\n"
    "es überhaupt nicht wahr.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_LESS_AWARE] = COMPOUND_STRING(
    "Es ist sich der anderen\n"
    "Pokémon kaum bewusst.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_STOPPED_CARING] = COMPOUND_STRING(
    "Es kümmert sich nicht\n"
    "mehr viel um andere Pokémon.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_STARTLE_ATTEMPT] = COMPOUND_STRING(
    "Es versucht, die anderen\n"
    "Pokémon zu erschrecken.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_DAZZLE_ATTEMPT] = COMPOUND_STRING(
    "Es versucht, die anderen\n"
    "Pokémon zu blenden.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_JUDGE_LOOK_AWAY2] = COMPOUND_STRING(
    "Der Juror schaut\n"
    "{STR_VAR_1} nicht mehr an.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_UNNERVE_ATTEMPT] = COMPOUND_STRING(
    "Es versucht, d. folgenden\n"
    "Pokémon zu entnerven.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_NERVOUS] = COMPOUND_STRING(
    "{STR_VAR_1} wird\n"
    "nervös.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_UNNERVE_WAITING] = COMPOUND_STRING(
    "Dieser Ausdruck soll die\n"
    "anderen Pokémon entnerven.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_TAUNT_WELL] = COMPOUND_STRING(
    "Es verhöhnt die\n"
    "besseren Pokémon.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_REGAINED_FORM] = COMPOUND_STRING(
    "{STR_VAR_1} findet zu\n"
    "seiner Form zurück.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_JAM_WELL] = COMPOUND_STRING(
    "Es versucht, die besseren\n"
    "Pokémon zu beeindrucken.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_HUSTLE_STANDOUT] = COMPOUND_STRING(
    "{STR_VAR_1} an der Spitze\n"
    "engagiert sich noch mehr.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_WORK_HARD_UNNOTICED] = COMPOUND_STRING(
    "Das bisher unauffällige\n"
    "{STR_VAR_1} gibt alles.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_WORK_BEFORE] = COMPOUND_STRING(
    "Es strengt sich genauso\n"
    "an wie die Pokémon vor ihm.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_NOT_WELL] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Kam nicht gut an.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_WORK_PRECEDING] = COMPOUND_STRING(
    "Es strengt sich an wie die\n"
    "vorangegangenen Pokémon.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_NOT_WELL2] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Verlief nicht so gut.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_NOT_SHOWN_WELL] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Verlief nicht so gut.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_SLIGHTLY_WELL] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Verlief ganz gut.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_PRETTY_WELL] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Kam ganz gut an.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_EXCELLENTLY] = COMPOUND_STRING(
    "{STR_VAR_1} führte seinen\n"
    "Ausdruck exzellent vor.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_DUD] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Er war absolut mies.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_NOT_VERY_WELL] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Er war nicht so gut.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_SLIGHTLY_WELL2] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Verlief ganz gut.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_PRETTY_WELL2] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Kam ganz gut an.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_VERY_WELL] = COMPOUND_STRING(
    "Ausdruck von {STR_VAR_1}:\n"
    "Er war sehr gut.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_APPEAL_EXCELLENTLY2] = COMPOUND_STRING(
    "{STR_VAR_1} führte seinen\n"
    "Ausdruck exzellent vor.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_SAME_TYPE_GOOD] = COMPOUND_STRING(
    "Der gleiche Typ wie das\n"
    "vorhergehende Pokémon. Gut!{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_DIFF_TYPE_GOOD] = COMPOUND_STRING(
    "Nicht der gleiche Typ wie\n"
    "das vorherige Pokémon - gut!{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_STOOD_OUT_AS_MUCH] = COMPOUND_STRING(
    "Es ist viel besser als die\n"
    "vorhergehenden Pokémon.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_NOT_AS_WELL] = COMPOUND_STRING(
    "Es war nicht so gut wie\n"
    "das Pokémon vor ihm.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_CONDITION_ROSE] = COMPOUND_STRING(
    "Die Kondition von\n"
    "{STR_VAR_1} stieg.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_HOT_STATUS] = COMPOUND_STRING(
    "Status von {STR_VAR_1}:\n"
    "Bewirkt guten Ausdruck!{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_MOVE_UP_LINE] = COMPOUND_STRING(
    "Es steigt in der Reihen-\n"
    "folge auf.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_MOVE_BACK_LINE] = COMPOUND_STRING(
    "Es fällt in der Reihen-\n"
    "folge zurück.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_SCRAMBLE_ORDER] = COMPOUND_STRING(
    "Es bringt die Reihenfolge\n"
    "durcheinander.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_JUDGE_EXPECTANTLY2]        = gText_JudgeLookedAtMonExpectantly,
    [CONTEST_STRING_WENT_OVER_WELL]            = gText_AppealComboWentOverWell,
    [CONTEST_STRING_WENT_OVER_VERY_WELL]       = gText_AppealComboWentOverVeryWell,
    [CONTEST_STRING_APPEAL_COMBO_EXCELLENTLY]  = gText_AppealComboWentOverExcellently,
    [CONTEST_STRING_AVERT_GAZE] = COMPOUND_STRING(
    "{STR_VAR_1} gelingt es,\n"
    "den Blick abzuwenden.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_AVOID_SEEING] = COMPOUND_STRING(
    "{STR_VAR_1} wandte den\n"
    "Blick erfolgreich ab.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_NOT_FAZED] = COMPOUND_STRING(
    "{STR_VAR_1} lässt sich\n"
    "davon nicht ablenken.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_LITTLE_DISTRACTED] = COMPOUND_STRING(
    "{STR_VAR_1} wurde etwas\n"
    "unruhig.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_ATTEMPT_STARTLE] = COMPOUND_STRING(
    "Es versucht, die anderen\n"
    "Pokémon zu erschrecken.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_LOOKED_DOWN] = COMPOUND_STRING(
    "{STR_VAR_1} blickt\n"
    "irritiert zu Boden.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_TURNED_BACK] = COMPOUND_STRING(
    "{STR_VAR_1} dreht sich\n"
    "irritiert um.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_UTTER_CRY] = COMPOUND_STRING(
    "{STR_VAR_1} kann einen \n"
    "Laut nicht unterdrücken.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_LEAPT_UP] = COMPOUND_STRING(
    "{STR_VAR_1} kann nicht\n"
    "anders und springt auf.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_TRIPPED_OVER] = COMPOUND_STRING(
    "{STR_VAR_1} ist so irri-\n"
    "tiert, dass es stolpert.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_MESSED_UP2] = COMPOUND_STRING("Es hatte keinen Erfolg.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_FAILED_TARGET_NERVOUS] = COMPOUND_STRING(
    "Es konnte keine\n"
    "Nervosität erzeugen.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_FAILED_ANYONE_NERVOUS] = COMPOUND_STRING(
    "Aber es konnte niemanden\n"
    "nervös machen.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_IGNORED] = COMPOUND_STRING("Es wurde ignoriert…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_NO_CONDITION_IMPROVE] = COMPOUND_STRING(
    "Es konnte seinen Aus-\n"
    "druck nicht verstärken…{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_BAD_CONDITION_WEAK_APPEAL] = COMPOUND_STRING(
    "Schwacher Ausdruck we-\n"
    "gen schlechter Kondition.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_UNAFFECTED] = COMPOUND_STRING(
    "{STR_VAR_1} blieb\n"
    "unbeeindruckt.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}"),
    [CONTEST_STRING_ATTRACTED_ATTENTION] = COMPOUND_STRING(
    "Die Aufmerksamkeit des\n"
    "Publikums liegt auf ihm.{PAUSE 15}{PAUSE 15}{PAUSE 15}{PAUSE 15}")
};
