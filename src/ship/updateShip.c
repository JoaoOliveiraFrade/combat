#include "../../h/combat.h"
#include "../../h/ship.h"

bool onRightLimit (Ship* ship) {
  return (ship->x + ship->speed) <= SCREEN_W;
}
bool onLeftLimit (Ship* ship) {
  return (ship->x - ship->speed) >= 0;
}

void updateShip (Ship* ship) {
  if (ship->left && onLeftLimit(ship)) {
    ship->x -= ship->speed;
  }
  if (ship->right && onRightLimit(ship)) {
    ship->x += ship->speed;
  }
}
