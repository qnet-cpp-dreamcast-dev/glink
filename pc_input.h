
#ifndef PC_INPUT_H
#define PC_INPUT_H

#include "SDL/SDL.h"
#include "input_main.h"

extern void glink_poll_event(glink_event*);
extern void pc_pump_events();
extern unsigned char* pc_get_key_state();
extern int pc_check_for_exit();

#endif