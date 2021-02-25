#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

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
        Point pTopLeft;
        Point pBottomRight;
        ALLEGRO_COLOR color;
    } Block;
#endif

void drawBlock (Block* obstacle);
void initBlock (Block* obstacle);