#include <stdio.h>

#define SCREEN_W 80
#define SCREEN_H 20
#define BG_WALL '#'
#define BG_EMPTY ' '

typedef struct Screen {
    char cells[SCREEN_H][SCREEN_W];
} Screen;

/*
Fills the screen buffer with symbolic letters representing walls and empty spaces.

This function populates the screen buffer with:
    - wall characters (#) on the borders.
    - empty character ( ) on the inner area.

Note that this task is not printing; it only fills the screen buffer.
The render function actually prints the buffer to the console.
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
    draw_background(&screen);
    render(&screen);
    return 0;
}