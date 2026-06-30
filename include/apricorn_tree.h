#ifndef GUARD_APRICORN_TREE_H
#define GUARD_APRICORN_TREE_H

#include "constants/apricorn_tree.h"

struct ApricornTreeSave
{
    u8 stage;
    u8 count;
};

u8 GetApricornTreeStage(u32 id);
void SetApricornTreeStage(u32 id, u8 stage);
void AdvanceApricornTrees(void);

void ObjectEventInteractionGetApricornTreeData(void);
void ObjectEventInteractionPickApricornTree(void);
enum ApricornType GetApricornTypeByApricornTreeId(u32 id);
u8 GetApricornCountByApricornTreeId(u32 id);

#endif //GUARD_APRICORN_TREE_H
