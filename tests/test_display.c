#include <stdio.h>
#include <stdlib.h>

/* module includes */
#include "world/map.h"
#include "world/world.h"
#include "display/display.h"
#include "entity/entity.h"
#include "entity/entity_view.h"

/*
TODO: migrate to makefile later.
sungdongkim@Sungdongui-Macmini game % clang -std=c89 -Wall -Wextra \
    -Isrc \
    tests/test_display.c \
    src/world/map.c src/world/world.c \
    src/display/display.c src/display/view.c src/display/console.c \
    -o test_display.out
*/
int main(void)
{
    Map map;
    World world;
    EntityView player;

    /* initialize world */
    world.map = &map;
    initialize_map(&map);

    /* initialize player entity */
    player.type = ENTITY_PLAYER;
    player.x_pos = 10;
    player.y_pos = 10;

    /* render test */
    printf("=== DISPLAY TEST START ===\n");
    render_display(&world, &player, 1);
    printf("=== DISPLAY TEST END ===\n");

    return 0;
}