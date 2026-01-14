#include <stdio.h>

#define SCREEN_W 80
#define SCREEN_H 20
#define BG_WALL '#'
#define BG_ROAD ' '

typedef struct Screen {
    char cells[SCREEN_H][SCREEN_W];
} Screen;

void draw_background(Screen* s)
{
    for (int y=0; y < SCREEN_H; y++)
    {
        for (int x=0; x < SCREEN_W; x++)
        {
            if (x == 0 || x == SCREEN_W - 1 || y == 0 || y == SCREEN_H - 1)
            {
                s->cells[y][x] = BG_WALL;
            }
            else
            {
                s->cells[y][x] = BG_ROAD;
            }
        }
    }
}

void render(Screen* s)
{
    for (int y=0; y < SCREEN_H; y++)
    {
        for (int x=0; x < SCREEN_W; x++)
        {
            putchar(s->cells[y][x]);
        }
        putchar('\n');
    }
}

int main(void)
{
    Screen screen;
    draw_background(&screen);
    render(&screen);
    return 0;
}