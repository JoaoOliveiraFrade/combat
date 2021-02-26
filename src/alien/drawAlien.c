#include "../../h/alien.h"

void drawAlien (Alien* alien) {

  al_draw_filled_rectangle(
    alien->x, alien->y,
    alien->x + ALIEN_W, alien->y + ALIEN_H,
    alien->color
  );
 
}