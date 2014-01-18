
#include "glink_main.h"

GLINK_PLATFORM platform;

void set_glink_platform(GLINK_PLATFORM p) {
	platform = p;
} 


void glink_screen_setup(unsigned int w, unsigned int h) {

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

void glink_shutdown() {

	if (platform == PC) {
		glink_pc_shutdown();
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


//////////// TIME



unsigned int glink_get_ticks() {

	return pc_get_ticks();
}



//////////// RENDERING


void render_rect(const int x, const int y, const unsigned int w, const unsigned int h, const unsigned int color) {

	if (platform == PC) {
		pc_render_rect(x, y, w, h, color);
	}
	else if (platform == DREAMCAST) {
		//dc_render_rect_r(r, color);
	}
	else {
		exit(1);
	}
}


void render_rect_r(const glink_rect r, const unsigned int color) {

	if (platform == PC) {
		pc_render_rect_r(r, color);
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

