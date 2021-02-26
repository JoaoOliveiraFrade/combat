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
  tank->pCenter.x = SCREEN_W / 4;
  tank->pCenter.y = SCREEN_H / 7;

  // init points triangle
  tank->pA.x = 0.0;
  tank->pA.y = -RADIUS;

  tank->pB.x = -w;
  tank->pB.y = h;

  tank->pC.x = w;
  tank->pC.y = h;

  // init color
  srand(time(NULL));
  tank->color = al_map_rgb(240, 40 , 150);
}