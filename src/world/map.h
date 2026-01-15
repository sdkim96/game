#ifndef MAP_H
#define MAP_H

#define MAP_H 80
#define MAP_W 20

#define IS_BORDER(x, y) ((x) == 0 || (x) == MAP_W - 1 || (y) == 0 || (y) == MAP_H - 1)

typedef enum {
    TILE_WALL,
    TILE_EMPTY
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

Note that the main purpose is not printing; 
it is to prepare draw functions to populate the map buffer.
*/
void initialize_map(Map* m);

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
int draw_map(Map* m, int y, int x, char c);

#endif // MAP_H
