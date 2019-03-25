#include <config.h>

#include "game.h"

void terminate(int sig);

bool tetr_O_0[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_O_1[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_O_2[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_O_3[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_I_0[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0}
};

bool tetr_I_1[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_I_2[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0}
};

bool tetr_I_3[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_S_0[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {1, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_S_1[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_S_2[4][4] = {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {1, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_S_3[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_Z_0[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_Z_1[4][4] = {
    {0, 1, 0, 0},
    {1, 1, 0, 0},
    {1, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_Z_2[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_Z_3[4][4] = {
    {0, 1, 0, 0},
    {1, 1, 0, 0},
    {1, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_L_0[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_L_1[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {1, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_L_2[4][4] = {
    {1, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_L_3[4][4] = {
    {0, 0, 1, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_J_0[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {1, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_J_1[4][4] = {
    {1, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_J_2[4][4] = {
    {0, 1, 1, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_J_3[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0}
};

bool tetr_T_0[4][4] = {
    {0, 1, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_T_1[4][4] = {
    {0, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_T_2[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_T_3[4][4] = {
    {0, 1, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 0, 0}
};

bool tetr_matr(int t, int r, int x, int y)
{
    switch (t) {
    case TETR_O: {
        switch (r) {
        case 0: {
            return tetr_O_0[y][x];
        }
        case 1: {
            return tetr_O_1[y][x];
        }
        case 2: {
            return tetr_O_2[y][x];
        }
        case 3: {
            return tetr_O_3[y][x];
        }
        }
    } break;
    case TETR_I: {
        switch (r) {
        case 0: {
            return tetr_I_0[y][x];
        }
        case 1: {
            return tetr_I_1[y][x];
        }
        case 2: {
            return tetr_I_2[y][x];
        }
        case 3: {
            return tetr_I_3[y][x];
        }
        }
    } break;
    case TETR_S: {
        switch (r) {
        case 0: {
            return tetr_S_0[y][x];
        }
        case 1: {
            return tetr_S_1[y][x];
        }
        case 2: {
            return tetr_S_2[y][x];
        }
        case 3: {
            return tetr_S_3[y][x];
        }
        }
    } break;
    case TETR_Z: {
        switch (r) {
        case 0: {
            return tetr_Z_0[y][x];
        }
        case 1: {
            return tetr_Z_1[y][x];
        }
        case 2: {
            return tetr_Z_2[y][x];
        }
        case 3: {
            return tetr_Z_3[y][x];
        }
        }
    } break;
    case TETR_L: {
        switch (r) {
        case 0: {
            return tetr_L_0[y][x];
        }
        case 1: {
            return tetr_L_1[y][x];
        }
        case 2: {
            return tetr_L_2[y][x];
        }
        case 3: {
            return tetr_L_3[y][x];
        }
        }
    } break;
    case TETR_J: {
        switch (r) {
        case 0: {
            return tetr_J_0[y][x];
        }
        case 1: {
            return tetr_J_1[y][x];
        }
        case 2: {
            return tetr_J_2[y][x];
        }
        case 3: {
            return tetr_J_3[y][x];
        }
        }
    } break;
    case TETR_T: {
        switch (r) {
        case 0: {
            return tetr_T_0[y][x];
        }
        case 1: {
            return tetr_T_1[y][x];
        }
        case 2: {
            return tetr_T_2[y][x];
        }
        case 3: {
            return tetr_T_3[y][x];
        }
        }
    } break;
    default: break;
    }
    return 0;
}

int color[] = {1, 3, 5, 2, 4, 6, 7};
unsigned int modl[] = {0, 1, 3, 5, 7};

unsigned int tetr_move_time(struct state *state)
{
    if (state->fast) {
        return 30;
    } else {
        return (2700/(state->lv+3));
    }
}

int gen_rand_prev(struct state *state)
{
    int type;
    do {
        type = rand() % 7;
    } while (type == state->lastt && state->lastc >= 2);

    if (state->lastt == type) {
        state->lastc++;
    } else {
        state->lastt = type;
        state->lastc = 1;
    }

    state->prev.type = type;
    state->prev.x = 3;
    state->prev.y = 0;
    state->prev.rotation = 0;
    state->prev.lastmove = 0;
    int x, y;
    for (y = 0; y < 4; y++) {
        for (x = 0; x < 4; x++) {
            if (tetr_matr(type, 0, x, y)) {
                state->prev.grid[x][y] = color[type];
            } else {
                state->prev.grid[x][y] = -1;
            }
        }
    }
    return 0;
}

int prev_to_tetr(struct state *state)
{
    memcpy(&state->tetr, &state->prev, sizeof(struct tetr));
    state->tetr.lastmove = millis();
    return 0;
}

int testposvalid(struct state *state)
{
    int x, y;
    for (y = 0; y < 4; y++) {
        for (x = 0; x < 4; x++) {
            if (state->test.grid[x][y] < 0) continue;

            int bx, by;
            bx = state->test.x + x;
            by = state->test.y + y;
            if (bx >= 10 || bx < 0) return 0;
            if (by >= 20 || by < 0) return 0;
            if (state->grid[bx][by] >= 0) return 0;
        }
    }

    return 1;
}

int tetr_to_grid(struct state *state)
{
    int x, y;
    for (y = 0; y < 4; y++) {
        for (x = 0; x < 4; x++) {
            if (state->tetr.grid[x][y] < 0) continue;

            int bx, by;
            bx = state->tetr.x + x;
            by = state->tetr.y + y;
            state->grid[bx][by] = state->tetr.grid[x][y];
        }
    }

    return 0;
}

int draw_hud()
{
    int sx, sy, ex, ey;
    sx = GAME_X;
    sy = GAME_Y;
    ex = sx + GAME_W - 1;
    ey = sy + GAME_H - 1;
    draw_block(sx, sy, ex, ey, '#');
    sx = GRID_X;
    sy = GRID_Y;
    ex = sx + GRID_W - 1;
    ey = sy + GRID_H - 1;
    draw_block(sx, sy, ex, ey, ' ');
    sx = PREV_X;
    sy = PREV_Y;
    ex = sx + PREV_W - 1;
    ey = sy + PREV_H - 1;
    draw_block(sx, sy, ex, ey, ' ');
    sx = SCOR_X;
    sy = SCOR_Y;
    ex = sx + SCOR_W - 1;
    ey = sy + SCOR_H - 1;
    draw_block(sx, sy, ex, ey, ' ');
    return 0;
}

int game()
{
    nodelay(stdscr, TRUE);
    srand(time(NULL));

    struct state *state;
    if ((state = (struct state *)malloc(sizeof(struct state))) == NULL) {
        return -1;
    }

    game_oninit(state, 0);

    while (!state->defeat) {
        game_oninput(state);
        game_onrefresh(state);
        game_ondraw(state);
    }

    gameover_screen(state->score);

    game_onclean(state);
    nodelay(stdscr, FALSE);

    return 0;
}

int game_oninit(struct state *state, int lv)
{
    srand(time(NULL));
    memset(state->grid, -1, sizeof(state->grid));
    state->defeat = false;
    state->lv = lv;
    state->lastt = -1;
    gen_rand_prev(state);
    prev_to_tetr(state);
    gen_rand_prev(state);
    return 0;
}

int game_oninput(struct state *state)
{
    int c;
    while ((c = getch()) != EOF) {
        switch (c) {
        case KEY_LEFT: {
            state->left = true;
            state->right = false;
        } break;
        case KEY_RIGHT: {
            state->right = true;
            state->left = false;
        } break;
        case KEY_UP: {
            state->rotate = true;
        } break;
        case KEY_DOWN: {
            state->fast = true;
        } break;
        case 'p': {
            unsigned int starttime = millis();
            if (pause_menu()) {
                terminate(0);
            }
            unsigned int menutime = millis() - starttime;
            game_update_lastmoves(state, menutime);
        } break;
        }
    }
    return 0;
}

int game_onrefresh(struct state *state)
{
    if (state->right || state->left) {
        memcpy(&state->test, &state->tetr, sizeof(state->tetr));
        state->test.x += (state->right ? 1 : -1);
        state->right = state->left = false;
        if (testposvalid(state)) {
            memcpy(&state->tetr, &state->test, sizeof(state->tetr));
        }
    }

    if (state->rotate) {
        state->rotate = false;
        memcpy(&state->test, &state->tetr, sizeof(state->tetr));
        state->test.rotation++;
        state->test.rotation %= 4;
        int x, y;
        for (y = 0; y < 4; y++) {
            for (x = 0; x < 4; x++) {
                if (tetr_matr(state->test.type, state->test.rotation, x, y)) {
                    state->test.grid[x][y] = color[state->test.type];
                } else {
                    state->test.grid[x][y] = -1;
                }
            }
        }

        if (testposvalid(state)) {
            memcpy(&state->tetr, &state->test, sizeof(state->tetr));
        }
    }

    if (millis() - state->tetr.lastmove >= tetr_move_time(state)) {
        state->tetr.lastmove = millis();
        if (state->fast) {
            state->score += 2;
        }
        state->fast = false;

        memcpy(&state->test, &state->tetr, sizeof(state->tetr));
        state->test.y++;
        if (testposvalid(state)) {
            memcpy(&state->tetr, &state->test, sizeof(state->tetr));
        } else {
            tetr_to_grid(state);
            prev_to_tetr(state);
            memcpy(&state->test, &state->tetr, sizeof(state->tetr));
            if (!testposvalid(state)) {
                state->defeat = true;
            }
            gen_rand_prev(state);
        }
    }

    int x, y, n, l;
    l = 0;
    for (y = 19; y >= 0;) {
        n = 0;
        for (x = 0; x < 10; x++) {
            if (state->grid[x][y] >= 0) {
                n++;
            }
        }

        if (n < 10) {
            y--;
            continue;
        }

        l++;

        int ty;
        for (ty = y; ty > 0; ty--) {
            for (x = 0; x < 10; x++) {
                state->grid[x][ty] = state->grid[x][ty-1];
            }
        }
        for (x = 0; x < 10; x++) {
            state->grid[x][0] = -1;
        }
    }

    state->score += 50 * modl[l] * (state->lv+1);
    state->lines += l;
    state->lv = state->lines / 10;

    return 0;
}

void setcol(int c)
{
    if (c == 7) {
        attrset(COLOR_PAIR(3) | A_BOLD);
    } else {
        attrset(COLOR_PAIR(c));
    }
}

int game_ondraw(struct state *state)
{
    /* Clean the screen */
    attrset(COLOR_PAIR(4));
    draw_hud();

    int x, y;
    for (y = 0; y < 20; y++) {
        for (x = 0; x < 10; x++) {
            if (state->grid[x][y] < 0) continue;

            setcol(state->grid[x][y]);
            mvaddstr(GRID_Y+y, GRID_X+2*x, "[]");
        }
    }

    for (y = 0; y < 4; y++) {
        for (x = 0; x < 4; x++) {
            if (state->prev.grid[x][y] < 0) continue;

            setcol(state->prev.grid[x][y]);
            mvaddstr(PREV_Y+1+y, PREV_X+2+2*x, "[]");
        }
    }

    for (y = 0; y < 4; y++) {
        for (x = 0; x < 4; x++) {
            if (state->tetr.grid[x][y] < 0) continue;

            setcol(state->tetr.grid[x][y]);
            mvaddstr(GRID_Y+state->tetr.y+y, GRID_X+2*(state->tetr.x+x), "[]");
        }
    }

    attrset(COLOR_PAIR(0));

    char sscore[32], slv[32];
    sprintf(sscore, "%08d", state->score);
    sprintf(slv, "%2d", state->lv);

    mvaddstr(SCOR_Y+1, SCOR_X+2, "Score:");
    mvaddstr(SCOR_Y+2, SCOR_X+2, sscore);
    mvaddstr(SCOR_Y+4, SCOR_X+2, "Level:");
    addstr(slv);

    return 0;
}

int game_onclean(struct state *state)
{
    free(state);
    return 0;
}

int game_update_lastmoves(struct state *state, unsigned int deltat)
{
    state->tetr.lastmove += deltat;
    return 0;
}

