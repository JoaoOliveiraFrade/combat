#include <stdio.h>
#include "../../h/combat.h"
#include "../../h/ship.h"
#include "../../h/tank.h"

void keyUpEvent (ALLEGRO_EVENT* ev, Ship* ship, Tank* tank) {
		// printf("\ncodigo tecla: %d", ev->keyboard.keycode);

		switch (ev->keyboard.keycode) {
			case ALLEGRO_KEY_LEFT:
				ship->left = 0;
			break;
			
			case ALLEGRO_KEY_RIGHT:
				ship->right = 0;
			break;

			case ALLEGRO_KEY_W:
				tank->speed += TANK_SPEED;
			break;
			
			case ALLEGRO_KEY_S:
				tank->speed -= TANK_SPEED;
			break;

			case ALLEGRO_KEY_D:
				tank->angularSpeed -= tank->constAngularSpeed;
			break;
			
			case ALLEGRO_KEY_A:
				tank->angularSpeed += tank->constAngularSpeed;
			break;
		}

}