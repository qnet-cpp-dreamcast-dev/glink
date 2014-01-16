
#include "glink_main.h"

GLINK_PLATFORM platform;

void set_glink_platform(GLINK_PLATFORM p) {
	platform = p;
} 


void glink_setup(unsigned int w, unsigned int h) {

	if (platform == PC) {
		glink_pc_setup(w, h);
	}
	else if (platform == DREAMCAST) {
		// dc
	}
	else {
		exit(1);
	}
}

void glink_quit() {

	if (platform == PC) {
		glink_pc_quit();
	}
	else if (platform == DREAMCAST) {
		// dc
	}
	else {
		exit(1);
	}
}


int check_for_exit() {
	if (platform == PC) {
		return pc_check_for_exit(); 
	}
	else if (platform == DREAMCAST) {
		// return check for exit();
	}
	else {
		exit(1);
	}
}

/*

void render_rect_r(glink_rect r, unsigned int color) {

	if (platform == PC) {
		//pc_render_rect_r(r, color);
	}
	else if (platform == DREAMCAST) {
		//dc_render_rect_r(r, color);
	}
	else {
		exit(1);
	}
}


void blank_video_buffer() {
	if (platform == PC) {
		pc_blank_video_buffer();
	}
	else if (platform == DREAMCAST) {
		//dc_blank_video_buffer();
	}
	else {
		exit(1);
	}
}

void update_video() {
	if (platform == PC) {
		pc_update_video();
	}
	else if (platform == DREAMCAST) {
		//dc_update_video();
	}
	else {
		exit(1);
	}
}

*/