#ifndef _PAUSE_H_
#define _PAUSE_H_

#include <config.h>

#include <curses.h>
#include "graphics.h"

#define PAUSE_W 20
#define PAUSE_H 8
#define PAUSE_X ((COLS-PAUSE_W)/2)
#define PAUSE_Y ((LINES-PAUSE_H)/2)

enum {
    PAUSE_VAL_CONTINUE = 0,
    PAUSE_VAL_QUIT
};

int pause_menu();

#endif /* _PAUSE_H_ */

