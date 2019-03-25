#include <config.h>

#include "pause.h"

int pause_menu()
{
    nl();
    int cur_opt = 0;
    int c;

    do {
        attrset(COLOR_PAIR(5));
        draw_block(PAUSE_X, PAUSE_Y, PAUSE_X+PAUSE_W-1, PAUSE_Y+PAUSE_H-1, ' ');
        draw_box(PAUSE_X, PAUSE_Y, PAUSE_X+PAUSE_W-1, PAUSE_Y+PAUSE_H-1, '#');

        attrset(COLOR_PAIR(COLOR_TITLE));
        mvaddstr(PAUSE_Y+2, PAUSE_X+7, "PAUSE");

        attrset(COLOR_PAIR(COLOR_SELECTED));
        mvaddch(PAUSE_Y+4+cur_opt, PAUSE_X+5, '*');
        mvaddch(PAUSE_Y+4+cur_opt, PAUSE_X+(cur_opt == 0 ? 14 : 12), '*');

        attrset(COLOR_PAIR(cur_opt == 0 ? COLOR_SELECTED : COLOR_OPTION));
        mvaddstr(PAUSE_Y+4, PAUSE_X+7, "Return");

        attrset(COLOR_PAIR(cur_opt == 0 ? COLOR_OPTION : COLOR_SELECTED));
        mvaddstr(PAUSE_Y+5, PAUSE_X+7, "Quit");

        c =    getch();
        if (c == KEY_UP || c == KEY_DOWN) {
            cur_opt = (cur_opt == 0 ? 1 : 0);
        }
    } while (c != '\n');

    nonl();
    return cur_opt;
}
