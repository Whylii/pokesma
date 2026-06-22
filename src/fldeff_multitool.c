#include "global.h"
#include "event_object_lock.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_camera.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "fldeff.h"
#include "malloc.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "trig.h"
#include "constants/abilities.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/songs.h"
#include "constants/metatile_labels.h"

extern struct MapPosition gPlayerFacingPosition;

// static functions
static void FieldCallback_Multitool(void);
static void StartMultitoolFieldEffect(void);

bool32 SetUpFieldMove_Multitool(void)
{
    gSpecialVar_Result = GetCursorSelectionMonId();
    gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
    gPostMenuFieldCallback = FieldCallback_Multitool;
    return TRUE;
}

static void FieldCallback_Multitool(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_UseMultitool);
}

bool8 FldEff_UseMultitool(void)
{
    u8 taskId = CreateFieldMoveTask();

    gTasks[taskId].data[8] = (u32)StartMultitoolFieldEffect >> 16;
    gTasks[taskId].data[9] = (u32)StartMultitoolFieldEffect;
    IncrementGameStat(GAME_STAT_USED_MULTITOOL);
    return FALSE;
}

// Just passes control back to EventScript_UseMultitool
static void StartMultitoolFieldEffect(void)
{
    FieldEffectActiveListRemove(FLDEFF_USE_MULTITOOL);
    ScriptContext_Enable();
}
