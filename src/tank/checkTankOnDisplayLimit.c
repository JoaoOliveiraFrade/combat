#include "../../h/combat.h"
#include "../../h/tank.h"

bool tankOnDisplayTopLimit (Tank* tank) {
  return (tank->pCenterTank.y - TANK_RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS) >= 0;
}

bool tankOnDisplayBottomLimit (Tank* tank) {
  return (tank->pCenterTank.y + TANK_RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS) <= SCREEN_H;
}

bool tankOnDisplayRightLimit (Tank* tank) {
  return (tank->pCenterTank.x + TANK_RADIUS + (tank->speed * tank->xComp) + CIRCLE_THICKNESS) <= SCREEN_W;
}

bool tankDisplayOnLeftLimit (Tank* tank) {
  return (tank->pCenterTank.x - TANK_RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS) >= 0;
}

bool tankOnDisplayLimit (Tank* tank) {
  return (tankOnDisplayTopLimit(tank) && tankOnDisplayBottomLimit(tank)
          && tankOnDisplayRightLimit(tank) && tankDisplayOnLeftLimit(tank));
}