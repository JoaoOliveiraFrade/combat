#include "../../h/combat.h"
#include "../../h/ship.h"

void drawShip (Ship* ship) {
  float yBase = SCREEN_H - SHIP_H / 2;

	al_draw_filled_triangle(
    ship->x , SCREEN_H - GRASS_H - SHIP_H / 2,
    ship->x - SHIP_W / 2, yBase,
    ship->x + SHIP_W / 2, yBase,
    ship->color
    );  
  
}
