
#ifndef INPUT_MAIN_H
#define INPUT_MAIN_H

// #define KEY_TOTAL ???

#define KEY_ESCAPE 0x1B

#define KEY_a 0x61
#define KEY_b 0x62
#define KEY_c 0x63
#define KEY_d 0x64
#define KEY_e 0x65
#define KEY_f 0x66
#define KEY_g 0x67
#define KEY_h 0x68
#define KEY_i 0x69
#define KEY_j 0x6A
#define KEY_k 0x6B
#define KEY_l 0x6C
#define KEY_m 0x6D
#define KEY_n 0x6E
#define KEY_o 0x6F
#define KEY_p 0x70
#define KEY_q 0x71
#define KEY_r 0x72
#define KEY_s 0x73
#define KEY_t 0x74
#define KEY_u 0x75
#define KEY_v 0x76
#define KEY_w 0x77
#define KEY_x 0x78
#define KEY_y 0x79
#define KEY_z 0x80

/*
#ifdef DREAMCAST
	#define JOYPAD_UP 	 0x
	#define JOYPAD_DOWN  0x
	#define JOYPAD_LEFT  0x
	#define JOYPAD_RIGHT 0x
	#define JOYPAD_A 	 0x
	#define JOYPAD_B 	 0x
	#define JOYPAD_X 	 0x
	#define JOYPAD_Y 	 0x
	#define JOYPAD_L 	 0x
	#define JOYPAD_R
	#define JOYPAD_START
#endif

*/

typedef struct _glink_quit {
	unsigned char type;
} glink_quit;

typedef struct _glink_event {
	unsigned char 	type;
	glink_quit 		quit;
} glink_event;



/* keystates array is a global that is populated each time
   the glink_get_key_state (*_input.h) function is called.
   Before use the event queue must first be pumped.
   The array is initialised in glink_init and remains until
   glink_shutdown is called. */

extern unsigned char keystates[0xFF];  // initialised in glink_init
//extern unsigned char* keystates;

#endif