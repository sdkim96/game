#ifndef WORLD_DRAW_C
#define WORLD_DRAW_C

#include <stdio.h>
#include "map.h"

/*
Initializes the map buffer with symbolic letters representing walls and empty spaces.

This function populates the map buffer with:
    - wall characters (#) on the borders.
    - empty character ( ) on the inner area.

Note that the main purpose is not printing; it is to prepare draw functions to populate the map buffer.
*/
void initialize_map(Map* m)
{
    for (int y=0; y < MAP_H; y++)
    {
        for (int x=0; x < MAP_W; x++)
        {
            if (x == 0 || x == MAP_W - 1 || y == 0 || y == MAP_H - 1)
            {
                m->cells[y][x] = WALL;
            }
            else
            {
                m->cells[y][x] = EMPTY;
            }
        }
    }
}


/* Fills the screen buffer at given coordinates with the player character.

Parameters:
    s - pointer to Screen buffer
    y - vertical coordinate
    x - horizontal coordinate
    ch - character to draw.

Returns:
    0 on success,
   -1 if the position is already occupied (not BG_EMPTY),
   -2 if the coordinates are out of bounds.

You must note that this function could be malfunctioning if you don't call the draw_background function first,
as this function assumes the boundary and empty spaces are already set up in the screen buffer.

*/
int draw(Map* m, int y, int x, char ch)
{
    if (IS_BORDER(x, y))
    {
        return -2; // out of bounds
    }
    if (m->cells[y][x] == EMPTY)
    {
        m->cells[y][x] = ch;
        return 0; // success
    }
    return -1; // position occupied
}


/* 
Prints the screen buffer to the console. 

Screen buffer should be pre-filled with some background data.
You should call drawing functions prefixed with \"draw\", to ensure the buffer is populated correctly before rendering.
In other words, call this function only after calling draw_* functions.
*/
void render(Map* m)
{
    for (int y=0; y < MAP_H; y++)
    {
        for (int x=0; x < MAP_W; x++)
        {
            putchar(m->cells[y][x]);
        }
        putchar('\n');
    }
}

#endif // WORLD_DRAW_C
