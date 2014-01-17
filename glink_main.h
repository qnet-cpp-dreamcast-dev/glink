
#ifndef GLINK_MAIN_H
#define GLINK_MAIN_H

#include "glink_types.h"
#include "glink_util.h"

#include "glink_pc_main.h"




typedef enum { PC, DREAMCAST } GLINK_PLATFORM;

extern GLINK_PLATFORM platform;

/// SETUP
extern void set_glink_platform(GLINK_PLATFORM);

extern void glink_screen_setup(unsigned int, unsigned int);

extern void glink_quit();

//// INPUT

extern int check_for_exit();


///// TIME

extern unsigned int glink_get_ticks();


/// RENDERING

extern void render_rect(const int, const int, const unsigned int, const unsigned int, const unsigned int);
extern void render_rect_r(const glink_rect, const unsigned int);
extern void blank_video_buffer();
extern void update_video();


#endif