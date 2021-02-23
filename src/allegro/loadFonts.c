#include "../../h/combat.h"

void loadFonts (ALLEGRO_FONT* size_32) {
    al_init_ttf_addon();
    size_32 = al_load_font("arial.ttf", 32, 1);
    
    if(size_32 == NULL) {
		  fprintf(stderr, "font file does not exist or cannot be accessed!\n");
	  }		
}
