

#include "sdl_init.h"

SDL_Surface* screen = NULL;

void glink_setup(unsigned int w, unsigned int h) {

	screen = SDL_SetVideoMode(w, h, 32, SDL_SWSURFACE);
}

void glink_quit() {

	SDL_Quit();
}

