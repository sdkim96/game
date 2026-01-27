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

#endif /* WORLD_MAP_H */ 
