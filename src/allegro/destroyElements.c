#include "../../h/combat.h"

void destroyElements (
	ALLEGRO_DISPLAY* display,
 	ALLEGRO_TIMER* timer,
  	ALLEGRO_EVENT_QUEUE* event_queue) {

	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

}