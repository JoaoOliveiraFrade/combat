#include "../../h/shot.h"
#include "../../h/tank.h"

void initShot (Shot* shot) {

    // shot->dx = cos(tank->angle);
    // shot->dy = sin(tank->angle);

    // shot->pCenterShot.x = tank->pA.x;
    // shot->pCenterShot.y = tank->pA.y;

    shot->color = al_map_rgb(100, 5, 5);
}