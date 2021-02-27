#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <math.h>
#include "block.h"

#define TANK_RADIUS 25
#define TANK_SPEED 1.5
#define CIRCLE_THICKNESS 1.5

#ifndef TANQUE
  #define TANQUE

  typedef struct Tank {
    float angle;
    float angularSpeed;
    float constAngularSpeed;
    float alpha;
    float speed;
    float xComp, yComp;
    Point pCenterTank;
    Point pA;
    Point pB;
    Point pC;
    ALLEGRO_COLOR color;
  } Tank;
#endif

void initTank (Tank* tank);
void drawTank (Tank* tank);
void updateTank (Tank* tank, Block* block);
bool collisionBlocksAndTank (Block* block, Tank* tank);
bool tankOnDisplayLimit (Tank* tank);
void rotate (Point* P, float angle);
void rotatesTank (Tank* tank);
