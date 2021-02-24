#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <math.h>

#define RADIUS 50
#define TANK_SPEED 2.5
#define CIRCLE_THICKNESS 1.5

#ifndef POINT
  #define POINT

  typedef struct Point {  
    float x;
    float y;
  } Point;
#endif

#ifndef TANQUE
  #define TANQUE

  typedef struct Tank {
    float angle;
    float angularSpeed;
    float constAngularSpeed;
    float alpha;
    float speed;
    float up, down;
    float xComp, yComp;
    Point pCenter;
    Point pA;
    Point pB;
    Point pC;
    ALLEGRO_COLOR color;
  } Tank;
#endif

void initTank (Tank* tank);
void drawTank (Tank* tank);
void updateTank (Tank* tank);