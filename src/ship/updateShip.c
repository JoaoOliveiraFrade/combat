#include "../../h/combat.h"
#include "../../h/ship.h"

bool onRightLimit (Ship* ship) {
  return (ship->x + ship->vel) <= SCREEN_W;
}
bool onLeftLimit (Ship* ship) {
  return (ship->x - ship->vel) >= 0;
}

void updateShip (Ship* ship) {
  if (ship->esq && onLeftLimit(ship)) {
    ship->x -= ship->vel;
  }
  if (ship->dir && onRightLimit(ship)) {
    ship->x += ship->vel;
  }
}
