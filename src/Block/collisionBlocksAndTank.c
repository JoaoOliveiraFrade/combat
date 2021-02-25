#include "../../h/block.h"
#include "../../h/tank.h"


bool tankInBlockIntervalY (Block* obstacle, Tank* tank) {
    return (obstacle->pTopLeft.y <= (tank->pCenter.y - RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS)) 
    && (obstacle->pBottomRight.y >= (tank->pCenter.y + RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS));
}
bool tankInBlockIntervalX (Block* obstacle, Tank* tank) {
    return (obstacle->pTopLeft.x <= (tank->pCenter.x - RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS)) 
    && (obstacle->pBottomRight.x >= (tank->pCenter.x + RADIUS + (tank->speed * tank->xComp) + CIRCLE_THICKNESS));
}

bool tankInBlock (Block* obstacle, Tank* tank) {
    return tankInBlockIntervalY(obstacle, tank) && tankInBlockIntervalX(obstacle, tank);
}


// bool topCollision (Block* obstacle, Tank* tank) {
//     return (tank->pCenter.y + RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS)
//             >= obstacle->pTopLeft.y
//             && tankInBlockIntervalX(obstacle, tank);
// }

// bool bottomCollision (Block* obstacle, Tank* tank) {
//     return  (tank->pCenter.y - RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS)
//             <= obstacle->pBottomRight.y
//             && tankInBlockIntervalX(obstacle, tank);
// }

// bool rightCollision (Block* obstacle, Tank* tank) {
//     return (tank->pCenter.x - RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS)
//             < obstacle->pBottomRight.x
//             && tankInBlockIntervalY(obstacle, tank);
// }

// bool leftCollision (Block* obstacle, Tank* tank) {
//     return  (tank->pCenter.x + RADIUS + (tank->speed * tank->xComp) + CIRCLE_THICKNESS) 
//             > obstacle->pTopLeft.x
//             && tankInBlockIntervalY(obstacle, tank);
// }

bool collisionBlocksAndTank (Block* obstacle, Tank* tank) {
    // return (leftCollision(obstacle, tank) || leftCollision(obstacle, tank) ||
    //         leftCollision(obstacle, tank) || leftCollision(obstacle, tank));
    return tankInBlock(obstacle, tank);
}
