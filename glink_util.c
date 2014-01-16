

#include "glink_util.h"

void glink_rect_init(glink_rect* r, const int x, const int y, const unsigned int w, const unsigned int h) {

	r->x = x;
	r->y = y;
	r->w = w;
	r->h = h;
}