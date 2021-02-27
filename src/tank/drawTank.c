#include "../../h/tank.h"
#include "../../h/combat.h"

void drawTank (Tank* tank) {
  al_draw_circle(tank->pCenterTank.x, tank->pCenterTank.y, TANK_RADIUS, tank->color, CIRCLE_THICKNESS);

 	al_draw_filled_triangle(
    tank->pCenterTank.x + tank->pA.x, tank->pCenterTank.y + tank->pA.y,
    tank->pCenterTank.x + tank->pB.x, tank->pCenterTank.y + tank->pB.y,
    tank->pCenterTank.x + tank->pC.x, tank->pCenterTank.y + tank->pC.y,
    tank->color);  
}