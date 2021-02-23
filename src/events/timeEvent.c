#include "../../h/combat.h"

void timeEvent (ALLEGRO_TIMER* timer) {
	// al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	if (spentASecond(timer)) {

		// al_draw_text(size_32, al_map_rgb(0, 200, 30), 10, 10, 0, "timeString");
		// printf("\n%d segundos se passaram...", (int)(al_get_timer_count(timer) / FPS));
	}	
}