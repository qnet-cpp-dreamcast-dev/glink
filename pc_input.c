

#include "pc_input.h"


void glink_poll_event(glink_event* event) {

	SDL_Event e;

	while (SDL_PollEvent(&e)) {
		if(e.type == SDL_QUIT) {
			//event->type = GLINK_QUIT;
		}
	}
}

void pc_pump_events() {
	SDL_PumpEvents();
}

unsigned char* pc_get_key_state() {

	Uint8* ks = SDL_GetKeyState(NULL);
	for (int i = 0x00; i < 0xFF; ++i) {
		keystates[i] = ks[i];
	}
	return keystates;
}

int pc_check_for_exit() {

	unsigned char* ks = pc_get_key_state();
	if (ks[KEY_ESCAPE])
		return 1;
	else
		return 0;
	/*
	unsigned char* ks = SDL_GetKeyState(NULL);
	if (ks[SDLK_ESCAPE]) {
		return 1;
	}
	else {
		return 0;
	}
	*/
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