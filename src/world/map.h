// must go to src/entity/map.h
#define WALL '#'
#define EMPTY ' '
#define PLAYER '@'
// until here

#define MAP_H 80
#define MAP_W 20

#define IS_BORDER(x, y) ((x) == 0 || (x) == MAP_W - 1 || (y) == 0 || (y) == MAP_H - 1)

typedef struct Map {
    char cells[MAP_H][MAP_W];
} Map;

void initialize_map(Map* m);
int draw_player(Map* m, int y, int x);
void render(Map* m);