#include "../../h/tank.h"
#include "../../h/combat.h"

void drawTank (Tank* tank) {
  al_draw_circle(tank->center.x, tank->center.y, RADIUS, tank->color, 1.5);

 	al_draw_filled_triangle(
    tank->center.x + tank->A.x, tank->center.y + tank->A.y,
    tank->center.x + tank->B.x, tank->center.y + tank->B.y,
    tank->center.x + tank->C.x, tank->center.y + tank->C.y,
    tank->color);  
}