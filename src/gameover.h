#ifndef _GAMEOVER_H_
	#define _GAMEOVER_H_

#include <config.h>

#include <curses.h>
#include "graphics.h"

#define GAMEOVER_W	20
#define GAMEOVER_H	8
#define GAMEOVER_X	((COLS-GAMEOVER_W)/2)
#define GAMEOVER_Y	((LINES-GAMEOVER_H)/2)

int gameover_screen(unsigned int p);

#endif /* _GAMEOVER_H_ */

