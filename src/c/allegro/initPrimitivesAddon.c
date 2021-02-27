#include "../../h/combat.h"

void initPrimitivesAddon () {

	if(!al_init_primitives_addon()) {
		fprintf(stderr, "failed to initialize primitives!\n");
		exit(1);
	}
  
}
