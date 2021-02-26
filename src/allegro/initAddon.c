#include "../../h/combat.h"

void initAddon () {

	if(!al_init_ttf_addon()) {
		fprintf(stderr, "failed to load tff font module!\n");
		exit(1);
	}
  
}