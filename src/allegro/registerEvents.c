#include "../../h/combat.h"

void registerEvents (ALLEGRO_EVENT_QUEUE* event_queue,
										 ALLEGRO_DISPLAY* display,
										 ALLEGRO_TIMER* timer) {
											 
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	// al_register_event_source(event_queue, al_get_mouse_event_source());
}
