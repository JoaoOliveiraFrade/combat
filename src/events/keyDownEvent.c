#include <stdio.h>
#include "../../h/combat.h"
#include "../../h/ship.h"
#include "../../h/tank.h"

void keyDownEvent (ALLEGRO_EVENT* ev, Ship* ship, Tank* tank) {
		// printf("\ncodigo tecla: %d", ev->keyboard.keycode);

		switch (ev->keyboard.keycode) {
			case ALLEGRO_KEY_LEFT:
				ship->esq = 1;
			break;
			
			case ALLEGRO_KEY_RIGHT:
				ship->dir = 1;
			break;

			case ALLEGRO_KEY_W:
				tank->center.y -= 20;
				// tank->vel -= VEL_TANK;
			break;
			
			case ALLEGRO_KEY_S:
				tank->center.y += 20;
				// tank->vel += VEL_TANK;
			break;
		}

}