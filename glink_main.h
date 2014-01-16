
#ifndef GLINK_MAIN_H
#define GLINK_MAIN_H

#include "glink_types.h"
#include "glink_util.h"

#include "glink_pc_main.h"

//#include "render_pc.h"
//#include "pc_input.h"



typedef enum { PC, DREAMCAST } GLINK_PLATFORM ;

extern GLINK_PLATFORM platform;

/// SETUP
extern void set_glink_platform(GLINK_PLATFORM);

extern void glink_setup(unsigned int, unsigned int);

extern void glink_quit();

//// INPUT

extern int check_for_exit();

/// RENDERING

extern void render_rect_r(glink_rect, unsigned int);
extern void blank_video_buffer();
extern void update_video();


#endif