#include <stdio.h>
#include "console.h"

void display_to_console(
    const Point* points, 
    const int max_h,
    const int max_w
)
{
    int y;
    int x;
    for (y = 0; y < max_h; y++)
    {
        for (x = 0; x < max_w; x++)
        {
            putchar(points[y * max_w + x].symbol);
        }
        putchar('\n');
    }
}
