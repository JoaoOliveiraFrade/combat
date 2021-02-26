#include <stdio.h>

#include "../../h/combat.h"
#include "../../h/block.h"
#include "../../h/tank.h"

void timeEvent (ALLEGRO_TIMER* timer, Block* block, Tank* tank) {
	// al_clear_to_color(al_map_rgb(0, 0, 0));

	// updateTank(&tank, &block);

	al_flip_display();

	if (spentASecond(timer)) {
		if (collisionBlocksAndTank(block, tank)) {
			printf("\nupdateTank - colidiu");
		} else {
			printf("\n---");
		}

		// al_draw_text(size_32, al_map_rgb(0, 200, 30), 10, 10, 0, "timeString");
		// printf("\n%d segundos se passaram...", (int)(al_get_timer_count(timer) / FPS));
	}	
}