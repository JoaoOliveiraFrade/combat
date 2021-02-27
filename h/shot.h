#include "block.h"

#define SHOT_RADIUS

#ifndef SHOT
    #define SHOT
    
    typedef struct Shot {
        Point pCenterShot;
        float dx;
        float dy;
        ALLEGRO_COLOR color;
    } Shot;
#endif