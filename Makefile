

CC 		   = gcc
CFLAGS = -Wall -std=c99 -c
LFLAGS = -Wall
LIBS	  = -lSDL
DEBUG  = -g
OBJS 	  =  glink_main.o glink_util.o pc_input.o pc_time.o render_pc.o sdl_init.o main_gte_test.o

glink : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o glink $(LIBS)

main_gte_test.c : sdl_init.h pc_input.h render_pc.h pc_time.h
	$(CC) $(CFLAGS) main_gte_test.c $(LIBS)

glink_main.c : glink_main.h glink_types.h glink_util.h
	$(CC) $(CFLAGS) glink_main.c $(LIBS)

glink_util.c : glink_util.h glink_types.h
	$(CC) $(CFLAGS) glink_main.c $(LIBS)

pc_input.c : pc_input.h input_main.h
	$(CC) $(CFLAGS) pc_input.c $(LIBS)

pc_time.c : pc_time.h
	$(CC) $(CFLAGS) pc_time.c $(LIBS)

render_pc.c : render_pc.h glink_types.h
	$(CC) $(CFLAGS) render_pc.c $(LIBS)

sdl_init.c : sdl_init.h input_main.h
	$(CC) $(CFLAGS) sdl_init.c $(LIBS)

clean :
	rm -rf *.o