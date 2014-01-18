

#include "pc_input.h"


void glink_poll_event(glink_event* event) {

	SDL_Event e;

	while (SDL_PollEvent(&e)) {
		if(e.type == SDL_QUIT) {
			//event->type = GLINK_QUIT;
		}
	}
}


int pc_check_for_exit() {


	SDL_PumpEvents();
	unsigned char* ks = SDL_GetKeyState(NULL);
	if (ks[SDLK_ESCAPE]) {
		return 1;
	}
	else {
		return 0;
	}

	/*

	SDL_Event e;

	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) {
			return 1;
		}
		else {
			return 0;
		}
	}

	*/
}