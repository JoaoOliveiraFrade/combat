#include "../../h/shot.h"
#include "../../h/tank.h"

void drawShot (Shot* shot) {
    al_draw_filled_circle(shot->pCenterShot.x, shot->pCenterShot.y, SHOT_RADIUS, shot->color);
}