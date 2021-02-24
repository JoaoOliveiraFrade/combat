#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include "ship.h"
#include "tank.h"

/* 960 540 */
#define SCREEN_W 960
#define SCREEN_H 540
#define MAX_COLOR 256
#define FPS 256

#define GRASS_H 60

void initAllegro ();
ALLEGRO_DISPLAY* initDisplay ();
ALLEGRO_EVENT_QUEUE* initEventQueue (ALLEGRO_DISPLAY* display);
void initKeyboard ();
ALLEGRO_TIMER* initTime ();
void initAddon ();
void initPrimitivesAddon ();

void loadFonts (ALLEGRO_FONT* size_32);

void registerEvents (ALLEGRO_EVENT_QUEUE* event_queue,
										 ALLEGRO_DISPLAY* display,
										 ALLEGRO_TIMER* timer);

bool spentASecond (ALLEGRO_TIMER* timer);

void timeEvent (ALLEGRO_TIMER* timer);

void mouseEvent (ALLEGRO_EVENT* ev);

void keyDownEvent (ALLEGRO_EVENT* ev, Ship* ship, Tank* tank);
void keyUpEvent (ALLEGRO_EVENT* ev, Ship* ship, Tank* tank);

void eventDispatch (
			ALLEGRO_TIMER* timer,
			ALLEGRO_EVENT* ev,
			int* playing,
			Ship* ship,
			Tank* tank);

void destroyElements (
	ALLEGRO_DISPLAY* display,
 	ALLEGRO_TIMER* timer,
	ALLEGRO_EVENT_QUEUE* event_queue);

void drawScenery ();

void drawGrass ();
