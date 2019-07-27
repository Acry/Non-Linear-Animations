/* 
 * Linear slope
 */
#include <math.h>
#include "helper.h"

struct vec2{
	float x;
	float y;
};

struct rect{
	struct vec2 pos;
	struct vec2 size;
};

void init_rect	(SDL_Rect, struct rect *);

int main(int argc, char *argv[])
{

(void)argc;
(void)argv;

init();
assets_in();
SDL_SetWindowTitle(Window, "Impulse");
logo_dst.h /= 4;
logo_dst.w /= 4;
logo_dst.x = 0;
logo_dst.y = wh-logo_dst.h;
struct rect logo_fdst;
init_rect(logo_dst, &logo_fdst);
SDL_Log("x: %.2f",logo_fdst.pos.x);
running = 1;

float time_akku = 0;
float max_t = 5000;
float time_step = 1000 / 60;
float max_time_steps = max_t/time_step;
float max_x = ww-logo_dst.w;
float x_steps = max_x/max_time_steps;

float y = logo_fdst.pos.y;

float max_h = y;

while(running){
	get_events();

	// Update rect
	// With vsync the function is called 60 times per second
	if (time_akku <= max_t){
		time_akku += time_step;
		SDL_Log("at: %.2f",time_akku);
		logo_fdst.pos.x += x_steps;
		logo_dst.x = ceil(logo_fdst.pos.x);
		y = (1/max_t)*time_akku;
		SDL_Log("normalized t %.2f",y);
		SDL_Log("y: %.2f",y);
		SDL_Log("y in %%: %.2f",y*100);
		y *= max_h;
		SDL_Log("cur: %.2f",y);
		logo_fdst.pos.y = ceil(max_h-y);
		logo_dst.y = roundf(logo_fdst.pos.y);
		SDL_Log("int height: %d",logo_dst.y);
	}

	draw();

}
assets_out();
exit_();
return EXIT_SUCCESS;
}

void init_rect(SDL_Rect a, struct rect *b)
{

b->pos.x = roundf(a.x);
b->pos.y = roundf(a.y);
b->size.x = roundf(a.w);
b->size.y = roundf(a.h);

}
