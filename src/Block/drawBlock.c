#include "../../h/block.h"

void drawBlock (Block block) {

	al_draw_filled_rectangle(
    block.pA.x, block.pA.y,
    block.pB.x, block.pB.y,
    block.color
    );

}