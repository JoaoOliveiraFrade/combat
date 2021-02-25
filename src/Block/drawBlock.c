#include "../../h/block.h"

void drawBlock (Block* obstacle) {

	al_draw_filled_rectangle(
    obstacle->pTopLeft.x, obstacle->pTopLeft.y,
    obstacle->pBottomRight.x, obstacle->pBottomRight.y,
    obstacle->color
    );

}