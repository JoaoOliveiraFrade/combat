#include "../../h/tank.h"
#include "../../h/combat.h"

void initTank (Tank* tank) {
  // init internal angle
  double pi = atan(1)*4;
  tank->alpha = (pi/3);
  float theta = pi/2 - tank->alpha;

  // init speed
  tank->speed = 0;
  tank->constAngularSpeed = pi/90;
  tank->angularSpeed = 0;

  // init components
  tank->angle = pi/2;
  tank->xComp = cos(tank->angle);
  tank->yComp = sin(tank->angle);

  // init triangle base(2w) and high of base to center(h)
  float w = RADIUS * sin(theta);
  float h = RADIUS * sin(tank->alpha);

  // init center
  tank->center.x = SCREEN_W / 4;
  tank->center.y = SCREEN_H / 2;

  // init points triangle
  tank->A.x = 0.0;
  tank->A.y = -RADIUS;

  tank->B.x = -w;
  tank->B.y = h;

  tank->C.x = w;
  tank->C.y = h;

  // init color
  srand(time(NULL));
  tank->color = al_map_rgb(rand()%255, rand()%255 , rand()%255);
}