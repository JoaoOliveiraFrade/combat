#include "../../h/combat.h"
#include "../../h/block.h"

void initBlock (Block* block) {

    block->pA.x = SCREEN_W / 2;
    block->pA.y = SCREEN_H / 2;
    
    block->color = al_map_rgb(0,0,0);
}