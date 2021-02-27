#include "../../h/shot.h"
#include "../../h/tank.h"

void drawShot (Shot* shot) {
    al_draw_filled_circle(shot->pCenter.x, shot->pCenter.y, SHOT_RADIUS, shot->color);
}