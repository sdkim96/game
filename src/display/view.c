#include <stdio.h>
#include "view.h"

char view_tile(TileType t)
{
    switch (t)
    {
        case TILE_WALL: return VIEW_TILE_WALL;
        case TILE_EMPTY: return VIEW_TILE_EMPTY;
    }
}

char view_entity(EntityType t)
{
    switch (t)
    {
        case ENTITY_PLAYER: return VIEW_ENTITY_PLAYER;
        case ENTITY_ENEMY: return VIEW_ENTITY_ENEMY;
        case ENTITY_DOOR: return VIEW_ENTITY_DOOR;
    }
}