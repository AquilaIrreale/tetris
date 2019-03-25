#include <config.h>

#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <signal.h>

#include "graphics.h"
#include "game.h"

void terminate(int sig);

int main(int argc, char *argv[])
{
    signal(SIGINT, terminate);

    initscr();
    if (LINES < GAME_H || COLS < GAME_W) {
        endwin();
        printf(    "ERROR: Your console's size is smaller than %dx%d.\n"
                "If you are using a terminal emulator, please resize your window.\n"
                "If you are running this game in a virtual terminal (tty) and you\n"
                "really should, please check your graphic card driver.",
                GAME_W, GAME_H);

        terminate(0);
    }

    graphics_init();
    nonl();
    cbreak();
    keypad(stdscr, TRUE);
    nodelay(stdscr, FALSE);

    game();
    terminate(0);
    return 0;
}

void terminate(int sig)
{
    endwin();

    /* Cleanup here ... */

    exit(0);
}
