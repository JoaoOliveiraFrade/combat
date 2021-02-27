#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include "point.h"

#define BLOCK_WIDTH 100
#define BLOCK_HEIGHT 100

#ifndef BLOCK
  #define BLOCK

  typedef struct Block {
    Point pA;
    ALLEGRO_COLOR color;
  } Block;
#endif

void drawBlock (Block* block);
void initBlock (Block* block);