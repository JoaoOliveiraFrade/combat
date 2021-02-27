#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

#define BLOCK_WIDTH 100
#define BLOCK_HEIGHT 100

#ifndef POINT
  #define POINT

  typedef struct Point {  
    float x;
    float y;
  } Point;
#endif

#ifndef BLOCK
  #define BLOCK

  typedef struct Block {
    Point pA;
    ALLEGRO_COLOR color;
  } Block;
#endif

void drawBlock (Block* block);
void initBlock (Block* block);