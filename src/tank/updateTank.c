#include "../../h/tank.h"
#include "../../h/combat.h"
#include "../../h/block.h"

void updateTank (Tank* tank, Block* block) {
  rotate(&tank->pA, tank->angularSpeed);
  rotate(&tank->pB, tank->angularSpeed);
  rotate(&tank->pC, tank->angularSpeed);

  rotatesTank(tank);
  
  if (tankOnDisplayLimit(tank) && !collisionBlocksAndTank(block, tank)) { 
    tank->pCenterTank.x += (tank->speed * tank->xComp);
    tank->pCenterTank.y += (tank->speed * tank->yComp);
  }
}