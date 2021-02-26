#include "../../h/alien.h"

void initAlien (Alien* alien) {
  alien->x = 0.0; 
  alien->y = 0.0; 
  alien->xSpeed = 1.0;
  alien->ySpeed = ALIEN_H;
  alien->color = al_map_rgb(50, 50, 200);
 
}