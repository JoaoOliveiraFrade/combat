#include "../../h/combat.h"

void drawGrass () {

	al_draw_filled_rectangle(
    0, SCREEN_H - GRASS_H,
    SCREEN_W, SCREEN_H,
    
    al_map_rgb(0, 255, 0)
  );

}
