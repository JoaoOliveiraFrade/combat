#include <allegro5/allegro.h>
#include "point.h"
#include "tank.h"

#define SHOT_RADIUS 10

#ifndef SHOT
    #define SHOT
    
    typedef struct Shot {
        Point pCenterShot;
        float dx;
        float dy;
        ALLEGRO_COLOR color;
    } Shot;
#endif

void drawShot (Shot* shot);
void initShot (Shot* shot, Tank* tank);