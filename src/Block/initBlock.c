#include "../../h/combat.h"
#include "../../h/block.h"

void initBlock (Block* obstacle) {

    obstacle->pTopLeft.x = SCREEN_W/2;
    obstacle->pTopLeft.y = SCREEN_H/4;

    obstacle->pBottomRight.x = SCREEN_W/3;
    obstacle->pBottomRight.y = SCREEN_H/3;

    obstacle->color = al_map_rgb(0,0,0);
}