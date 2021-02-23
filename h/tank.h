#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <math.h>

#define RAIO 50
#define VEL_TANK 2.5

#ifndef PONTO
  #define PONTO

  typedef struct Point {  
    float x;
    float y;
  } Point;
#endif

#ifndef TANQUE
  #define TANQUE

  typedef struct Tank {
    float alpha;
    float vel;
    Point center;
    Point A;
    Point B;
    Point C;
    ALLEGRO_COLOR color;
  } Tank;
#endif

void initTank (Tank* tank);
void drawTank (Tank* tank);
void updateTank (Tank* tank);