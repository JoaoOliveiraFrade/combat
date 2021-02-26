#include "../../h/combat.h"
#include "../../h/ship.h"
#include "../../h/tank.h"

void eventDispatch (
			ALLEGRO_TIMER* timer,
			ALLEGRO_EVENT* ev,
			int* playing,
			Ship* ship,
			Block* block,
			Tank* tank) {

	switch (ev->type) {
		case ALLEGRO_EVENT_TIMER:
			timeEvent(timer, block, tank);
		break;

		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			*playing = 0;		
		break;

		case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:
			mouseEvent(ev);
		break;

		case ALLEGRO_EVENT_KEY_DOWN:
			keyDownEvent(ev, ship, tank);
		break;

		case ALLEGRO_EVENT_KEY_UP:
			keyUpEvent(ev, ship, tank);
		break;
	}

}