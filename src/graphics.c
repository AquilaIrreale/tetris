#include "graphics.h"

int graphics_init() {
	scrollok(stdscr, FALSE);
	noecho();
	curs_set(0);

	if (has_colors()) {
		start_color();

		init_pair(1, COLOR_RED,		COLOR_BLACK);
		init_pair(2, COLOR_GREEN,	COLOR_BLACK);
		init_pair(3, COLOR_YELLOW,	COLOR_BLACK);
		init_pair(4, COLOR_BLUE,	COLOR_BLACK);
		init_pair(5, COLOR_CYAN,	COLOR_BLACK);
		init_pair(6, COLOR_MAGENTA,	COLOR_BLACK);
		init_pair(7, COLOR_WHITE,	COLOR_BLACK);
	}

	return 0;
}

int draw_clearscreen()
{
	int x, y;
	for (x = GAME_X; x < GAME_X + GAME_W; x++) {
		for (y = GAME_Y; y < GAME_Y + GAME_H; y++) {
			mvaddch(y, x, ' ');
		}
	}

	return 0;
}

int draw_box(int sx, int sy, int ex, int ey, char c)
{
	int i;
	for (i = sx; i <= ex; i++) {
		mvaddch(sy, i, c);
		mvaddch(ey, i, c);
	}
	for (i = sy; i <= ey; i++) {
		mvaddch(i, sx, c);
		mvaddch(i, ex, c);
	}

	return 0;
}

int draw_block(int sx, int sy, int ex, int ey, char c)
{
	int x, y;
	for (x = sx; x <= ex; x++) {
		for (y = sy; y <= ey; y++) {
			mvaddch(y, x, c);
		}
	}

	return 0;
}

