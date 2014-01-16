

#include "render_pc.h"


void render_sprite(const int x, const int y) {

}
void render_rect(const int x, const int y, const int w, const int h, const unsigned int color) {

	SDL_Rect r;
	r.x = x;
	r.y = y; 
	r.w = w;
	r.h = h;

	SDL_FillRect(SDL_GetVideoSurface(), &r, color);
}

void render_rect_r(const glink_rect r, const unsigned int color) {

	SDL_Rect out_r;
	out_r.x = r.x;
	out_r.y = r.y;
	out_r.w = r.w;
	out_r.h = r.h;

	SDL_FillRect(SDL_GetVideoSurface(), &out_r, color);

}

void blank_video_buffer() {
	SDL_FillRect(SDL_GetVideoSurface(), NULL, 0x0);
}

void update_video() {

	SDL_Flip(SDL_GetVideoSurface());
}