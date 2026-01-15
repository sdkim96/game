#include "display.h"
#define NULL ((void*)0)

void render_display(
    const World* world, 
    const EntityView* entities,
    const int entity_count
)
{
    int x, y, i;
    Point buffer[MAP_H][MAP_W];

    if (entities == NULL)
    {
        return;
    }

    for (y=0; y < MAP_H; y++)
    {
        for (x=0; x <MAP_W; x++)
        {
            Point point = {
                x, 
                y, 
                view_tile(world->map->tiles[y][x])
            };
            buffer[y][x] = point;
        }
    }

    for (i=0; i < entity_count; i++)
    {
        Point point = {
            entities[i].x_pos, 
            entities[i].y_pos, 
            view_entity(entities[i].type)
        };
        buffer[entities[i].y_pos][entities[i].x_pos] = point;
    }

    display_to_console(&buffer[0][0], MAP_H, MAP_W);
}
