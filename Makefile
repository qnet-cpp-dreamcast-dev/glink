

CC 		   = gcc
CFLAGS = -Wall -std=c99 -c
LFLAGS = -Wall
LIBS	  = -lSDL
DEBUG  = -g
OBJS 	  =  glink_main.o glink_util.o pc_input.o pc_time.o render_pc.o sdl_init.o main_gte_test.o

glink : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o glink $(LIBS)

%.o : %.c
	$(CC) $(CFLAGS) $<

clean :
	rm -rf *.o
