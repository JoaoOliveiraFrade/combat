#include <string.h>
#include "../../h/combat.h"

ALLEGRO_DISPLAY* initDisplay () {
	ALLEGRO_DISPLAY* display = al_create_display(SCREEN_W, SCREEN_H);

	if (!display) {
		fprintf(stderr, "failed to create display!\n");
		exit(1);
	}	
	
	return display;
}