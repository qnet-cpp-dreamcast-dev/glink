

#ifndef RENDER_PC_H
#define RENDER_PC_H

#include "SDL/SDL.h"
#include "glink_types.h"


typedef _glink_sprite {

	const char* name;		// sprite name or id
	SDL_Surface* surface;	// surface of the sprite
	glink_rect box;  		// bounding box of the sprite
	unsigned char alpha;	// alpha value of the sprite

} glink_sprite;


extern void pc_render_sprite(const glink_sprite, const glink_rect, const int, const int);
extern void pc_render_rect(const int, const int, const int, const int, const unsigned int);
extern void pc_render_rect_r(const glink_rect, const unsigned int);
extern void pc_blank_video_buffer();
extern void pc_update_video();


#endif