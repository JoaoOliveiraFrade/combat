#include <allegro5/allegro.h>

#define SHIP_W 100
#define SHIP_H 50

#ifndef SHIP
  #define SHIP

  typedef struct Ship {
    float x;
    float vel;
    int esq, dir;
    ALLEGRO_COLOR color;
  } Ship;
#endif

void initShip (Ship* ship);
void drawShip (Ship* ship);
void updateShip (Ship* ship);

