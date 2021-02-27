#include "../../h/combat.h"
#include "../../h/shot.h"
#include "../../h/tank.h"

bool shotOnDisplayTopLimit (Shot* shot, Tank* tank) {
  return (shot->pCenter.y - SHOT_RADIUS + (tank->speed * tank->yComp)) >= 0;
}

bool shotOnDisplayBottomLimit (Shot* shot, Tank* tank) {
  return (shot->pCenter.y + SHOT_RADIUS + (tank->speed * tank->yComp)) <= SCREEN_H;
}

bool shotOnDisplayRightLimit (Shot* shot, Tank* tank) {
  return (shot->pCenter.x + SHOT_RADIUS + (tank->speed * tank->xComp)) <= SCREEN_W;
}

bool shotDisplayOnLeftLimit (Shot* shot, Tank* tank) {
  return (shot->pCenter.x - SHOT_RADIUS + (tank->speed * tank->xComp)) >= 0;
}

bool shotOnDisplayLimit (Shot* shot, Tank* tank) {
  return (shotOnDisplayTopLimit(shot, tank) && shotOnDisplayBottomLimit(shot, tank)
          && shotOnDisplayRightLimit(shot, tank) && shotDisplayOnLeftLimit(shot, tank));
}