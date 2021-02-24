#include <stdio.h>
#include "../h/combat.h"
#include "../h/ship.h"
#include "../h/alien.h"
#include "../h/tank.h"

// int main(int argc, char **argv) {
int main() {
	ALLEGRO_DISPLAY* display = NULL;
	ALLEGRO_TIMER* timer = NULL;
	ALLEGRO_EVENT_QUEUE* event_queue = NULL;
	ALLEGRO_EVENT ev;
	// ALLEGRO_FONT* size_32 = NULL;

	initAllegro();
	initKeyboard();
  	initAddon();
	initPrimitivesAddon();

	display = initDisplay();
	timer = initTime();
	event_queue = initEventQueue(display);
	
	registerEvents(event_queue, display, timer);
	
	al_start_timer(timer);
	// loadFonts(size_32);

	Ship ship;
	Tank tank; 
	Alien alien;

	initTank(&tank);
	initShip(&ship);
	initAlien(&alien);

	int playing = 1;
	while(playing) {
		al_wait_for_event(event_queue, &ev);
		eventDispatch(timer, &ev, &playing, &ship, &tank);

		drawScenery();
		drawTank(&tank);
		// updateTank(&tank);

		drawAlien(&alien);
		drawShip(&ship);
		
		updateShip(&ship);
		updateAlien(&alien);

		playing = !colisaoAlienSolo(&alien);
	}

	// al_rest(2);

	destroyElements(display, timer, event_queue);

	return 0;
}