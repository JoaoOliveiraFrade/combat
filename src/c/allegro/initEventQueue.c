#include "../../h/combat.h"

ALLEGRO_EVENT_QUEUE* initEventQueue (ALLEGRO_DISPLAY* display) {
	ALLEGRO_EVENT_QUEUE* event_queue = al_create_event_queue();

	if(!event_queue) {
		fprintf(stderr, "failed to create event_queue!\n");
		al_destroy_display(display);
	}
  
	return event_queue;
}