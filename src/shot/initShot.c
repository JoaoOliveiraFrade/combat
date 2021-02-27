#include "../../h/combat.h"
#include "../../h/shot.h"
#include "../../h/tank.h"

void initShot (Shot* shot, Tank* tank) {

    shot->dx = cos(tank->angle);
    shot->dy = sin(tank->angle);

    shot->pCenter.x = tank->pB.x;
    shot->pCenter.y = tank->pB.y;

    shot->color = al_map_rgb(230, 5, 5);
}