#include <stdio.h>
#include "../../h/tank.h"
#include "../../h/combat.h"
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

void updateTank (Tank* tank, Block* block) {
  rotate(&tank->pA, tank->angularSpeed);
  rotate(&tank->pB, tank->angularSpeed);
  rotate(&tank->pC, tank->angularSpeed);

  rotatesTank(tank);
  
  if (tankOnDisplayLimit(tank) && !collisionBlocksAndTank(block, tank)) { 
    tank->pCenter.x += (tank->speed * tank->xComp);
    tank->pCenter.y += (tank->speed * tank->yComp);
  }

  // if (collisionBlocksAndTank(block, tank)) {
  //   printf("\nupdateTank - colidiu");
  // }

}