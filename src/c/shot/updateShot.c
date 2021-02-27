#include "../../h/shot.h"
#include "../../h/tank.h"
#include "../../h/block.h"

void updateShot (Shot* shot, Tank* tank, Block* block) {
    shot->pCenter.x = tank->pCenter.x + tank->pA.x;
    shot->pCenter.y = tank->pCenter.y + tank->pA.y;
}