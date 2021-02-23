#include <stdio.h>
#include "../../h/combat.h"
#include "../../h/ship.h"
#include "../../h/tank.h"

void keyUpEvent (ALLEGRO_EVENT* ev, Ship* ship, Tank* tank) {
		// printf("\ncodigo tecla: %d", ev->keyboard.keycode);

		switch (ev->keyboard.keycode) {
			case ALLEGRO_KEY_LEFT:
				ship->esq = 0;
			break;
			
			case ALLEGRO_KEY_RIGHT:
				ship->dir = 0;
			break;

			case ALLEGRO_KEY_W:
				tank->vel += VEL_TANK;
			break;
			
			case ALLEGRO_KEY_S:
				tank->vel -= VEL_TANK;
			break;
		}

}