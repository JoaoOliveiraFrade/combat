#include "../../h/combat.h"

void initAllegro () {

	if (!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		exit(1);
	}

}