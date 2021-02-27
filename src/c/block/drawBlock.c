#include "../../h/block.h"

void drawBlock (Block* block) {

	al_draw_filled_rectangle(
    block->pA.x, block->pA.y,
    block->pA.x + BLOCK_WIDTH, block->pA.y + BLOCK_HEIGHT,
    block->color
    );

}