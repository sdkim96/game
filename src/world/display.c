#include <stdio.h>

#define END_KEY 'p'

typedef struct {
    int x;
    int y;
} Position;

typedef struct {
    int max_x;
    int max_y;
    Position player_pos;
} Display;


void move(char key, Display* display)
{
    // TODO: No boundary check for now.
    switch (key)
    {
        case 'w':
            display->player_pos.y -= 1;
            break;
        case 'a':
            display->player_pos.x -= 1;
            break;
        case 's':
            display->player_pos.y += 1;
            break;
        case 'd':
            display->player_pos.x += 1;
            break;
    }
}





int main(void)
{
    Display display = {256, 256, {128, 128}};
    
    while (1)
    {
        printf("Enter move (w/a/s/d) or 'p' to quit: ");

        int input = getchar();
        if (input == END_KEY)
        {
            break;
        }
        move(input, &display);
        printf("Player Position: (%d, %d)\n", display.player_pos.x, display.player_pos.y);
    }
    return 0;
}