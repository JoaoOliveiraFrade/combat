#include <allegro5/allegro.h>
#include "point.h"
#include "tank.h"
#include "block.h"

#define SHOT_RADIUS 5
#define SHOT_SPEED TANK_SPEED

#ifndef SHOT
    #define SHOT
    
    typedef struct Shot {
        Point pCenter;
        float dx;
        float dy;
        float speed;
        float angularSpeed;
        float constAngularSpeed;
        ALLEGRO_COLOR color;
    } Shot;
#endif

void drawShot (Shot* shot);
void initShot (Shot* shot, Tank* tank);
void updateShot (Shot* shot, Tank* tank, Block* block);
bool shotOnDisplayLimit (Shot* shot, Tank* tank);