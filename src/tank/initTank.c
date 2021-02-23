#include "../../h/tank.h"
#include "../../h/combat.h"

void initTank (Tank* tank) {
  double pi = atan(1)*4;
  tank->alpha = (pi/3);

  tank->vel = 0;
  
  float theta = pi/2 - tank->alpha;

  float w = RAIO * sin(theta);
  float h = RAIO * sin(tank->alpha);

  tank->center.x = SCREEN_W / 4;
  tank->center.y = SCREEN_H / 2;

  tank->A.x = 0.0;
  tank->A.y = -RAIO;

  tank->B.x = -w;
  tank->B.y = h;

  tank->C.x = w;
  tank->C.y = h;

  tank->color = al_map_rgb(150, 150 , 50);
}