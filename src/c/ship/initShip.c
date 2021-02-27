#include "../../h/combat.h"
#include "../../h/ship.h"

void initShip (Ship* ship) {
  ship->x = SCREEN_W / 2; 
  ship->speed = 2.0;
  ship->left = 0;
  ship->right = 0;
  ship->color = al_map_rgb(200, 5, 5);
}