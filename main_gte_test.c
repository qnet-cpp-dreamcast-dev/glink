
#include "glink_main.h"

#include <stdio.h>

#define SCREEN_W 1280
#define SCREEN_H 960

void move_rect(glink_rect* r, int delta_x, int delta_y) {

	r->x += delta_x;
	r->y += delta_y;
}

void rect_screen_collision(glink_rect* r) {

	if (r->x + r->w > SCREEN_W) {
		r->x = 0;
	}
}

int main(int argv, char** args) {


	set_glink_platform(PC);

	glink_screen_setup(SCREEN_W, SCREEN_H);

	int done = 0;

	glink_rect r;
	glink_rect_init(&r, 250, 300, 128, 128);

	glink_event e;

	while (!done) {

		fprintf(stdout, "%i\n", glink_get_ticks());

		if (check_for_exit() > 0) {
			done = 1;
		}

		move_rect(&r, 1, 0);
		rect_screen_collision(&r);

		blank_video_buffer();

		//render_rect(200, 200, 64, 64, 0x0000FF);
		render_rect_r(r, 0xFF0000);



		update_video();

	}


	glink_shutdown();

}