#include "../../h/block.h"
#include "../../h/tank.h"
#include <stdio.h>

// bool tankInBlockIntervalY (Block* block, Tank* tank) {
//     return (block->pA.y >= (tank->pCenter.y - RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS)) 
//     && (block->pB.y <= (tank->pCenter.y + RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS));
// }


// bool tankInBlockIntervalX (Block* block, Tank* tank) {
//     return (block->pB.x >= (tank->pCenter.x - RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS)) 
//     && (block->pA.x <= (tank->pCenter.x + RADIUS + (tank->speed * tank->xComp) + CIRCLE_THICKNESS));
// }


// bool tankInBlock (Block* block, Tank* tank) {
//     return tankInBlockIntervalY(block, tank) && tankInBlockIntervalX(block, tank);
// }

// bool topCollision (Block* block, Tank* tank) {
//     return (tank->pCenter.y + RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS)
//             <= block->pA.y ; 
//             // && tankInBlockIntervalX(block, tank);
// }

// bool bottomCollision (Block* block, Tank* tank) {
//     return  (tank->pCenter.y - RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS)
//             <= block->pB.y;
//             // && tankInBlockIntervalX(block, tank);
// }

// bool rightCollision (Block* block, Tank* tank) {
//     return (tank->pCenter.x - RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS)
//             <= block->pB.x;
// //             && tankInBlockIntervalY(block, tank);
// }

// bool leftCollision (Block* block, Tank* tank) {
//     return  (tank->pCenter.x + RADIUS + (tank->speed * tank->xComp) + CIRCLE_THICKNESS) 
//             >= block->pA.x;
//             // && tankInBlockIntervalY(block, tank);
// }

bool tankInBlockIntervalY (Block* block, Tank* tank) {
    return (block->pB.y >= (tank->pCenter.y - RADIUS + (tank->speed * tank->yComp) - CIRCLE_THICKNESS)) 
    && (block->pA.y <= (tank->pCenter.y + RADIUS + (tank->speed * tank->yComp) + CIRCLE_THICKNESS));
}


bool tankInBlockIntervalX (Block* block, Tank* tank) {
    return (block->pB.x <= (tank->pCenter.x - RADIUS + (tank->speed * tank->xComp) - CIRCLE_THICKNESS)) 
    && (block->pA.x >= (tank->pCenter.x + RADIUS + (tank->speed * tank->xComp) + CIRCLE_THICKNESS));
}


bool tankInBlock (Block* block, Tank* tank) {
    return tankInBlockIntervalY(block, tank) && tankInBlockIntervalX(block, tank);
}

bool collisionBlocksAndTank (Block* block, Tank* tank) {
    // return (leftCollision(block, tank) && bottomCollision(block, tank) &&
    //         rightCollision(block, tank) && topCollision(block, tank));
    if (tankInBlock(block, tank)) {
        printf("no intervalo\n");
    }
    if (tankInBlockIntervalY(block, tank)) {
        printf("no intervalo y\n");
    }
    if (tankInBlockIntervalX(block, tank)) {
        printf("no intervalo x\n");
    }
   
    return tankInBlock(block, tank);

}
