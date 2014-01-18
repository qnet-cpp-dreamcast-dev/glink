
#ifndef PC_INPUT_H
#define PC_INPUT_H

#include "SDL/SDL.h"

typedef struct _glink_quit {
	unsigned char type;
} glink_quit;

typedef struct _glink_event {
	unsigned char 	type;
	glink_quit 		quit;
} glink_event;

extern void glink_poll_event(glink_event*);
extern int pc_check_for_exit();

#endif