#include "../../h/combat.h"

ALLEGRO_TIMER* initTime () {
	ALLEGRO_TIMER* timer = al_create_timer(1.0 / FPS);
    if (!timer) {
		fprintf(stderr, "failed to create timer!\n");
		exit(1);
	}
	return timer;
}