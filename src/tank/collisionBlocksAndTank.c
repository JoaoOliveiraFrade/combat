#include <math.h>
#include "../../h/block.h"
#include "../../h/tank.h"

bool collisionBlocksAndTank (Block* block, Tank* tank) {
  float testX = tank->pCenter.x;
  float testY = tank->pCenter.y;

  if (tank->pCenter.x < block->pA.x) {
    testX = block->pA.x;                    // test left edge      
  } else if (tank->pCenter.x > block->pA.x + BLOCK_WIDTH) {
    testX = block->pA.x + BLOCK_WIDTH;     // right edge
  } 

  if (tank->pCenter.y < block->pA.y) {
    testY = block->pA.y;                    // top edge      
  } else if (tank->pCenter.y > block->pA.y + BLOCK_HEIGHT) {
    testY = block->pA.y + BLOCK_HEIGHT;    // bottom edge
  }

  float distX = tank->pCenter.x - testX;
  float distY = tank->pCenter.y - testY;

  distX += (tank->speed * tank->xComp);
  distY += (tank->speed * tank->yComp);
  
  float distance = sqrt( (distX * distX) + (distY * distY) );

  return (distance <= TANK_RADIUS);
}

