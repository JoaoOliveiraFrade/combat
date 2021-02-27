#include <math.h>
#include "../../h/tank.h"
#include "../../h/block.h"

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