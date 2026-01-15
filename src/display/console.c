#include "console.h"

void display_to_console(const Point* points, const int point_count)
{
    for (int i = 0; i < point_count; i++)
    {
        putchar(points[i].symbol);
    }
}
