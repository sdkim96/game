#include <stdio.h>
#include "map.h"

typedef struct World {
    Map* map;
} World;


void render(void)
{
    Screen screen;
    int draw_status;
    draw_background(&screen);
    
    draw_status = draw_player(&screen, 18, 1);
    if (draw_status != 0)
    {
        fprintf(stderr, "Failed to draw player at given position. err code: %d\n", draw_status);
        return 1;
    }

    render(&screen);
    return 0;
}