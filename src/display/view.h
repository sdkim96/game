#ifndef DISPLAY_VIEW_H
#define DISPLAY_VIEW_H

/*
The following statement intentionally includes world/map.h,
as it defines the tile types needed for rendering the view.
*/ 
#include "world/map.h" 
#include "entity/entity_view.h"

#define VIEW_TILE_WALL '#'
#define VIEW_TILE_EMPTY ' '
#define VIEW_ENTITY_PLAYER '@'
#define VIEW_ENTITY_ENEMY 'E'
#define VIEW_ENTITY_DOOR 'D'

/* Interprets the tile type to a symbolic character for rendering. */
char view_tile(const TileType t);

/* Interprets the entity type to a symbolic character for rendering. */
char view_entity(const EntityType t);

#endif /* DISPLAY_VIEW_H */
