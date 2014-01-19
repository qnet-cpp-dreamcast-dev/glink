

#include "sdl_init.h"

SDL_Surface* screen = NULL;

// keystates - from *_input.h
unsigned char keystates[0xFF];

//unsigned char* keystates = NULL;

void glink_pc_setup(unsigned int w, unsigned int h) {

	screen = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);

	for (int i = 0x00; i < 0xFF; ++i) {
		keystates[i] = 0x00;
	}

	//keystates = (unsigned char*)malloc(0xFF * sizeof(unsigned char));
}

void glink_pc_shutdown() {

	//free(keystates);

	SDL_Quit();
}

