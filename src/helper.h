#ifndef _HELPER_H_
#define _HELPER_H_

#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#define WHITE 255,255,255,255
#define BLACK 0,0,0,255
#define RED   255,0,0,255
#define WW 550
#define WH (WW/16)*9

int ww;
int wh;
int running;
SDL_Window	*Window;
SDL_Renderer	*Renderer;
SDL_Event	event;
SDL_Surface	*temp_surface;
SDL_Texture	*logo;
SDL_Rect 	logo_dst;
SDL_Point	mouse;

void assets_in	(void);
void assets_out	(void);
void init 	(void);
void get_events	(void);
void draw	(void);
void exit_	(void);
#endif
