#include "../../h/combat.h"

void initKeyboard () {

	if(!al_install_keyboard()) {
		fprintf(stderr, "failed to install keyboard!\n");
		exit(1);
	}
	
}