

#ifndef RENDER_PC_H
#define RENDER_PC_H

#include "SDL/SDL.h"
#include "glink_types.h"

extern void pc_render_sprite(const int, const int);
extern void pc_render_rect(const int, const int, const int, const int, const unsigned int);
extern void pc_render_rect_r(const glink_rect, const unsigned int);
extern void pc_blank_video_buffer();
extern void pc_update_video();


#endif