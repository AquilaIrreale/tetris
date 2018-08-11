#ifndef _GRAPHICS_H_
	#define _GRAPHICS_H_

#include <config.h>

#include <curses.h>

#define GAME_W	35
#define GAME_H	22
#define GAME_X	((COLS - GAME_W) / 2)
#define GAME_Y	((LINES - GAME_H) / 2)
#define GRID_X	(GAME_X+1)
#define GRID_Y	(GAME_Y+1)
#define GRID_W	20
#define GRID_H	20
#define PREV_X	(GAME_X+22)
#define PREV_Y	(GRID_Y)
#define PREV_W	12
#define PREV_H	6
#define SCOR_X	(PREV_X)
#define SCOR_Y	(GAME_Y+8)
#define SCOR_W	(PREV_W)
#define SCOR_H	6

enum {
	DEFAULT = 0,
	RED_BLACK,
	GREEN_BLACK,
	YELLOW_BLACK,
	BLUE_BLACK,
	CYAN_BLACK,
	MAGENTA_BLACK,
	WHITE_BLACK
};

#define COLOR_I				RED_BLACK
#define COLOR_O				BLUE_BLACK
#define COLOR_T				GREEN_BLACK
#define COLOR_Z				WHITE_BLACK
#define COLOR_S				CYAN_BLACK
#define COLOR_L				MAGENTA_BLACK
#define COLOR_J				YELLOW_BLACK

#define COLOR_TITLE			WHITE_BLACK
#define COLOR_OPTION		WHITE_BLACK
#define COLOR_SELECTED		GREEN_BLACK
#define COLOR_MENUBOX		BLUE_BLACK
#define COLOR_GAMEOVER		RED_BLACK
#define COLOR_FRAME			BLUE_BLACK

int graphics_init();

int draw_clearscreen();
int draw_box(int sx, int sy, int ex, int ey, char c);
int draw_block(int sx, int sy, int ex, int ey, char c);

#endif /* _GRAPHICS_H_ */


