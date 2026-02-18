#include <stdio.h>
#include "core/map.h"

void initialize_map(Map* m)
{
    int y;
    int x;
    for (y = 0; y < MAP_H; y++)
    {
        for (x = 0; x < MAP_W; x++)
        {
            if (IS_BORDER(x, y))
            {
                m->tiles[y][x] = TILE_WALL;
            }
            else
            {
                m->tiles[y][x] = TILE_EMPTY;
            }
        }
    }
}


int draw_map(Map* m, int y, int x, TileType t)
{
    if (IS_BORDER(x, y))
    {
        return -2; /* out of bounds */
    }
    if (m->tiles[y][x] == TILE_EMPTY)
    {
        m->tiles[y][x] = t;
        return 0; /* success */
    }
    return -1; /* position occupied */ 
}
