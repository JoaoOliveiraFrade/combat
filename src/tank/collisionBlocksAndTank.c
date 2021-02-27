#include <math.h>
#include "../../h/block.h"
#include "../../h/tank.h"

bool collisionBlocksAndTank (Block* block, Tank* tank) {
  float testX = tank->pCenterTank.x;
  float testY = tank->pCenterTank.y;

  if (tank->pCenterTank.x < block->pA.x) {
    testX = block->pA.x;                    // test left edge      
  } else if (tank->pCenterTank.x > block->pA.x + BLOCK_WIDTH) {
    testX = block->pA.x + BLOCK_WIDTH;     // right edge
  } 

  if (tank->pCenterTank.y < block->pA.y) {
    testY = block->pA.y;                    // top edge      
  } else if (tank->pCenterTank.y > block->pA.y + BLOCK_HEIGHT) {
    testY = block->pA.y + BLOCK_HEIGHT;    // bottom edge
  }

  float distX = tank->pCenterTank.x - testX;
  float distY = tank->pCenterTank.y - testY;

  distX += (tank->speed * tank->xComp);
  distY += (tank->speed * tank->yComp);
  
  float distance = sqrt( (distX * distX) + (distY * distY) );

  return (distance <= TANK_RADIUS);
}

