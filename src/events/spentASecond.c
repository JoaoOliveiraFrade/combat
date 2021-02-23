#include "../../h/combat.h"

bool spentASecond (ALLEGRO_TIMER* timer) {
	return (al_get_timer_count(timer) % (int)FPS) == 0;
}