#ifndef _GAME_H_
	#define _GAME_H_

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <curses.h>

#include "graphics.h"
#include "timing.h"
#include "pause.h"
#include "gameover.h"

enum {
	TETR_O = 0,
	TETR_I,
	TETR_S,
	TETR_Z,
	TETR_L,
	TETR_J,
	TETR_T
};

struct state {
	bool defeat;
	bool fast;
	bool rotate;
	bool left;
	bool right;
	unsigned int lv;
	unsigned int lines;
	unsigned int score;
	unsigned int delay;
	int grid[10][20];
	struct tetr {
		int x, y;
		int type;
		int grid[4][4];
		int rotation;
		unsigned int lastmove;
	} tetr, prev, test;
	int lastt;
	int lastc;
};

int game();
int game_oninit(struct state *state, int lv);
int game_oninput(struct state *state);
int game_onrefresh(struct state *state);
int game_ondraw(struct state *state);
int game_onclean(struct state *state);
int game_update_lastmoves(struct state *state, unsigned int deltat);

#endif /* _GAME_H_ */
