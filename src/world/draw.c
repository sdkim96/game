#include <stdio.h>

#define SCREEN_W 80
#define SCREEN_H 20
#define BG_WALL '#'
#define BG_EMPTY ' '
#define PLAYER '@'

typedef struct Screen {
    char cells[SCREEN_H][SCREEN_W];
} Screen;

/*
Fills the screen buffer with symbolic letters representing walls and empty spaces.

This function populates the screen buffer with:
    - wall characters (#) on the borders.
    - empty character ( ) on the inner area.

Note that the main purpose is not printing; it is to prepare the buffer for rendering.
*/
void draw_background(Screen* s)
{
    for (int y=0; y < SCREEN_H; y++)
    {
        for (int x=0; x < SCREEN_W; x++)
        {
            if (x == 0 || x == SCREEN_W - 1 || y == 0 || y == SCREEN_H - 1)
            {
                s->cells[y][x] = BG_WALL;
            }
            else
            {
                s->cells[y][x] = BG_EMPTY;
            }
        }
    }
}

/* Fills the screen buffer at given coordinates with the player character.

Parameters:
    s - pointer to Screen buffer
    y - vertical coordinate
    x - horizontal coordinate

Returns:
    0 on success,
   -1 if the position is already occupied (not BG_EMPTY),
   -2 if the coordinates are out of bounds.

You must note that this function could be malfunctioning if you don't call the draw_background function first,
as this function assumes the boundary and empty spaces are already set up in the screen buffer.

*/
int draw_player(Screen* s, int y, int x)
{
    if (x >= 0 && x < SCREEN_W && y >= 0 && y < SCREEN_H)
    {
        if (s->cells[y][x] != BG_EMPTY)
        {
            return -1; // cannot draw player here
        }
        s->cells[y][x] = PLAYER;
        return 0; // success
    }
    return -2; // out of bounds
}


/* 
Prints the screen buffer to the console. 

Screen buffer should be pre-filled with some background data.
You should call drawing functions prefixed with \"draw\", to ensure the buffer is populated correctly before rendering.
In other words, call this function only after calling draw_* functions.
*/
void render(Screen* s)
{
    for (int y=0; y < SCREEN_H; y++)
    {
        for (int x=0; x < SCREEN_W; x++)
        {
            putchar(s->cells[y][x]);
        }
        putchar('\n');
    }
}

int main(void)
{
    Screen screen;
    int draw_status;
    draw_background(&screen);
    
    draw_status = draw_player(&screen, 19, 1);
    if (draw_status != 0)
    {
        fprintf(stderr, "Failed to draw player at given position. err code: %d\n", draw_status);
        return 1;
    }

    render(&screen);
    return 0;
}