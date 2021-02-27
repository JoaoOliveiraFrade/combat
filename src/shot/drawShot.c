#include "../../h/shot.h"
#include "../../h/tank.h"
#include "../../h/combat.h"

void drawShot (Shot* shot) {
    al_draw_filled_circle(30, 30, SHOT_RADIUS, shot->color);
}