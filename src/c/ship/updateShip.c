#include "../../h/combat.h"
#include "../../h/ship.h"

bool shipOnRightLimit (Ship* ship) {
  return (ship->x + ship->speed) <= SCREEN_W;
}
bool shipOnLeftLimit (Ship* ship) {
  return (ship->x - ship->speed) >= 0;
}

void updateShip (Ship* ship) {
  if (ship->left && shipOnLeftLimit(ship)) {
    ship->x -= ship->speed;
  }
  if (ship->right && shipOnRightLimit(ship)) {
    ship->x += ship->speed;
  }
}
