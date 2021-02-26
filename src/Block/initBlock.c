#include "../../h/combat.h"
#include "../../h/block.h"

void initBlock (Block* block) {

    block->pA.x = SCREEN_W / 2;
    block->pA.y = SCREEN_H / 2;

    block->pB.x = SCREEN_W / 3;
    block->pB.y = SCREEN_H / 3;

    block->width = abs(block->pB.x - block->pA.x);
    block->height = abs(block->pB.y - block->pA.y);

    block->color = al_map_rgb(0,0,0);
}