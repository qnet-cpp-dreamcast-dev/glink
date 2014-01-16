

#include "pc_input.h"

int pc_check_for_exit() {

	SDL_Event e;

	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) {
			return 1;
		}
		else {
			return 0;
		}
	}
}