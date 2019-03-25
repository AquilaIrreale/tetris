#include <config.h>

#include "gameover.h"

int gameover_screen(unsigned int p)
{
    nl();

    char score[16];
    sprintf(score, "<%08d>", p);

    attrset(COLOR_PAIR(COLOR_GAMEOVER));
    draw_block(GAMEOVER_X, GAMEOVER_Y, GAMEOVER_X+GAMEOVER_W-1, GAMEOVER_Y+GAMEOVER_H-1, ' ');
    draw_box(GAMEOVER_X, GAMEOVER_Y, GAMEOVER_X+GAMEOVER_W-1, GAMEOVER_Y+GAMEOVER_H-1, '#');

    mvaddstr(GAMEOVER_Y+2, GAMEOVER_X+6, "GAME OVER");
    mvaddstr(GAMEOVER_Y+4, GAMEOVER_X+5, "Your score:");
    mvaddstr(GAMEOVER_Y+5, GAMEOVER_X+5, score);

    getch();
    nonl();
    return 0;
}
