#include "../../h/alien.h"
#include "../../h/combat.h"

void updateAlien (Alien* alien) {
  alien->x += alien->xSpeed;

  if (alien->x + ALIEN_W >= SCREEN_W || alien->x <= 0) {
    alien->y += alien->ySpeed;
    alien->xSpeed *= -1;
  }

}
