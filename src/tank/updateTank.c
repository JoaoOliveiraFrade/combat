#include "../../h/tank.h"
#include "../../h/combat.h"

bool tankOnUpLimit (Tank* tank) {
  return (tank->pCenter.y - RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS) > 0;
}

bool tankOnDownLimit (Tank* tank) {
  return (tank->pCenter.y + RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS) <= SCREEN_H;
}

bool tankOnRightLimit (Tank* tank) {
  return (tank->pCenter.x + RADIUS + + (tank->speed * tank->xComp) + CIRCLE_THICKNESS) <= SCREEN_W;
}

bool tankOnLeftLimit (Tank* tank) {
  return (tank->pCenter.x - RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS) >= 0;
}

bool tankOnLimit (Tank* tank) {
  return (tankOnUpLimit(tank) && tankOnDownLimit(tank) && tankOnRightLimit(tank) && tankOnLeftLimit(tank));
}

void rotate (Point* P, float angle) {
  float x = P->x;
  float y = P->y;
  P->x = (x * cos(angle)) - (y * sin(angle));
  P->y = (y * cos(angle)) + (x * sin(angle));
}

void rotatesTank (Tank* tank) {
  tank->angle += tank->angularSpeed;
  tank->xComp = cos(tank->angle);
  tank->yComp = sin(tank->angle);
}

void updateTank (Tank* tank) {
 
  rotate(&tank->pA, tank->angularSpeed);
  rotate(&tank->pB, tank->angularSpeed);
  rotate(&tank->pC, tank->angularSpeed);

  rotatesTank(tank);
  
  if (tankOnLimit(tank)) { 
    tank->pCenter.x += (tank->speed * tank->xComp);
    tank->pCenter.y += (tank->speed * tank->yComp);
  }

}