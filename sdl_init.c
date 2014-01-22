

#include "sdl_init.h"

SDL_Surface* screen = NULL;

// keystates - from *_input.h
unsigned char keystates[0xFF];


void glink_pc_setup(unsigned int w, unsigned int h) {

	screen = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);

	memset(keystates, 0x00, sizeof(unsigned char) * 0xFF);
}

void glink_pc_shutdown() {

	//free(keystates);

	SDL_Quit();
}

