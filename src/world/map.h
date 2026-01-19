#ifndef WORLD_MAP_H
#define WORLD_MAP_H

#define MAP_H 20
#define MAP_W 80

#define IS_BORDER(x, y) ((x) == 0 || (x) == MAP_W - 1 || (y) == 0 || (y) == MAP_H - 1)

typedef enum {
    TILE_WALL,
    TILE_EMPTY,
    TILE_THORN
} TileType;      

typedef struct Map {
    TileType tiles[MAP_H][MAP_W];
} Map;

/*
Initializes the map buffer with symbolic letters 
representing walls and empty spaces.

This function populates the map buffer with:
    - wall enum (TILE_WALL) on the borders.
    - empty enum (TILE_EMPTY) on the inner area.

Note that the main purpose is not printing; preparing draw functions to populate the map buffer.
*/
void initialize_map(Map* m);

/* Fills the map buffer with the tiles at the given coordinates.

Parameters:
    m - pointer to map buffer
    y - vertical coordinate
    x - horizontal coordinate
    t - tile type to draw.

Returns:
    0 on success,
   -1 if the position is already occupied (not TILE_EMPTY),
   -2 if the coordinates are out of bounds.

You must note that this function could be malfunctioning if you don't call the draw_background function first,
as this function assumes the boundary and empty spaces are already set up in the map buffer.

*/
int draw_map(Map* m, int y, int x, TileType t);

#endif /* WORLD_MAP_H */ 
