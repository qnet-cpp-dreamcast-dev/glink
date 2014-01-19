
#ifndef SDL_INIT_H
#define SDL_INIT_H

#include "SDL/SDL.h"
#include "input_main.h"

#include <string.h> // for memcpy

extern SDL_Surface* screen;

extern void glink_pc_setup(unsigned int, unsigned int);
extern void glink_pc_shutdown();

#endif