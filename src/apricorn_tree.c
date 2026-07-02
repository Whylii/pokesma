#include "global.h"
#include "apricorn_tree.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "item.h"
#include "random.h"
#include "string_util.h"
#include "data/apricorns.h"

u8 GetApricornTreeStage(u32 id)
{
    if (id >= APRICORN_TREE_COUNT)
        return APRICORN_STAGE_SAPLING;
#if (APRICORN_TREE_COUNT > 0)
    return gSaveBlock3Ptr->apricornTrees[id].stage;
#else
    return APRICORN_STAGE_SAPLING;
#endif
}

void SetApricornTreeStage(u32 id, u8 stage)
{
    if (id >= APRICORN_TREE_COUNT)
        return;
#if (APRICORN_TREE_COUNT > 0)
    gSaveBlock3Ptr->apricornTrees[id].stage = stage;
    if (stage == APRICORN_STAGE_MATURE && gApricornTrees[id].maximum > gApricornTrees[id].minimum)
        gSaveBlock3Ptr->apricornTrees[id].count = gApricornTrees[id].minimum + Random() % (gApricornTrees[id].maximum - gApricornTrees[id].minimum);
    else if (stage == APRICORN_STAGE_MATURE)
        gSaveBlock3Ptr->apricornTrees[id].count = gApricornTrees[id].minimum;
#endif
}

void AdvanceApricornTrees(void)
{
#if (APRICORN_TREE_COUNT > 0)
    u32 i;
    for (i = 1; i < APRICORN_TREE_COUNT; i++)
    {
        u8 stage = gSaveBlock3Ptr->apricornTrees[i].stage;
        if (stage < APRICORN_STAGE_MATURE || gSaveBlock3Ptr->apricornTrees[i].count == 0)
        {
            gSaveBlock3Ptr->apricornTrees[i].stage = APRICORN_STAGE_MATURE;
            if (gApricornTrees[i].maximum > gApricornTrees[i].minimum)
                gSaveBlock3Ptr->apricornTrees[i].count = gApricornTrees[i].minimum + Random() % (gApricornTrees[i].maximum - gApricornTrees[i].minimum);
            else
                gSaveBlock3Ptr->apricornTrees[i].count = gApricornTrees[i].minimum;
        }
    }
#endif
}

void ObjectEventInteractionGetApricornTreeData(void)
{
    u32 id = GetObjectEventApricornTreeId(gSelectedObjectEvent);
    gSpecialVar_0x8004 = GetApricornTypeByApricornTreeId(id);
    gSpecialVar_0x8005 = GetApricornCountByApricornTreeId(id);
    CopyItemNameHandlePlural(gSpecialVar_0x8004, gStringVar1, gSpecialVar_0x8005);
}

void ObjectEventInteractionPickApricornTree(void)
{
    u32 id = GetObjectEventApricornTreeId(gSelectedObjectEvent);
    enum ApricornType apricorn = GetApricornTypeByApricornTreeId(id);
    gSpecialVar_0x8006 = CheckBagHasSpace((enum Item)apricorn, GetApricornCountByApricornTreeId(id));

    if (gSpecialVar_0x8006)
    {
        AddBagItem((enum Item)apricorn, GetApricornCountByApricornTreeId(id));
        gSaveBlock3Ptr->apricornTrees[id].stage = APRICORN_STAGE_SAPLING;
        gSaveBlock3Ptr->apricornTrees[id].count = 0;
        ApricornTreeResetSprite(gSelectedObjectEvent);
    }
    gSpecialVar_Result = GetItemPocket((enum Item)apricorn);
}

enum ApricornType GetApricornTypeByApricornTreeId(u32 id)
{
    if (APRICORN_TREE_COUNT > 0)
        return gApricornTrees[id].apricornType;
    else
        return 0;
}

u8 GetApricornCountByApricornTreeId(u32 id)
{
#if (APRICORN_TREE_COUNT > 0)
    if (GetApricornTreeStage(id) < APRICORN_STAGE_MATURE)
        return 0;
    return gSaveBlock3Ptr->apricornTrees[id].count;
#else
    return 0;
#endif
}