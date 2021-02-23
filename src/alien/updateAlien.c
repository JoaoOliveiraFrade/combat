#include "../../h/alien.h"
#include "../../h/combat.h"

void updateAlien (Alien* alien) {
  alien->x += alien->xVel;

  if (alien->x + ALIEN_W >= SCREEN_W || alien->x <= 0) {
    alien->y += alien->yVel;
    alien->xVel *= -1;
  }

}
