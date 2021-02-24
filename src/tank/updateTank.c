#include "../../h/tank.h"
#include "../../h/combat.h"

bool onUpLimit (Tank* tank) {
  return (tank->center.y - RADIUS + tank->speed) >= 0;
}

bool onDownLimit (Tank* tank) {
  return (tank->center.y + RADIUS + tank->speed) >= SCREEN_H;
}

bool onLImit (Tank* tank) {
  return (onUpLimit(tank) && onDownLimit(tank));
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
 
  // if (tank->angularSpeed != 0) {
    rotate(&tank->A, tank->angularSpeed);
    rotate(&tank->B, tank->angularSpeed);
    rotate(&tank->C, tank->angularSpeed);

    rotatesTank(tank);
    
    
    tank->center.y += tank->speed * tank->yComp;
    tank->center.x += tank->speed * tank->xComp;
    
  // }
  

}