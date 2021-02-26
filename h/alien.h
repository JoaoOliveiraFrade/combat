#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

#define ALIEN_W 100
#define ALIEN_H 50

#ifndef ALIEN
  #define ALIEN

  typedef struct Alien {
    float x, y;
    float xSpeed, ySpeed;
    ALLEGRO_COLOR color;
  } Alien;
#endif

void initAlien (Alien* alien);
void drawAlien (Alien* alien);
void updateAlien (Alien* alien);
int colisaoAlienSolo (Alien* alien);
