#include "../../h/tank.h"
#include "../../h/combat.h"

void drawTank (Tank* tank) {
  al_draw_circle(tank->pCenter.x, tank->pCenter.y, RADIUS, tank->color, CIRCLE_THICKNESS);

 	al_draw_filled_triangle(
    tank->pCenter.x + tank->pA.x, tank->pCenter.y + tank->pA.y,
    tank->pCenter.x + tank->pB.x, tank->pCenter.y + tank->pB.y,
    tank->pCenter.x + tank->pC.x, tank->pCenter.y + tank->pC.y,
    tank->color);  
}