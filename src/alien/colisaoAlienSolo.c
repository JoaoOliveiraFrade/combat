#include "../../h/combat.h"
#include "../../h/alien.h"
 
int colisaoAlienSolo (Alien* alien) {
  if (alien->y + ALIEN_H >= SCREEN_H - GRASS_H) {
    return 1;
  }
  return 0;
}