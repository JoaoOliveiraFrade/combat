#include <math.h>
#include "../../h/block.h"
#include "../../h/tank.h"

bool collisionBlocksAndTank (Block* block, Tank* tank) {
  float testX = tank->pCenter.x;
  float testY = tank->pCenter.y;

  if (tank->pCenter.x < block->pA.x) {
    testX = block->pA.x;                    // test left edge      
  } else if (tank->pCenter.x > block->pA.x + block->width) {
    testX = block->pA.x + block->width;     // right edge
  } 

  if (tank->pCenter.y < block->pA.y) {
    testY = block->pA.y;                    // top edge      
  } else if (tank->pCenter.y > block->pA.y + block->height) {
    testY = block->pA.y + block->height;    // bottom edge
  }

  float distX = tank->pCenter.x - testX;
  float distY = tank->pCenter.y - testY;
  float distance = sqrt( (distX * distX) + (distY * distY) );

  return (distance <= TANK_RADIUS);
}