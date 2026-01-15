#ifndef DISPLAY_CONSOLE_H
#define DISPLAY_CONSOLE_H

typedef struct Point {
    int x_pos;
    int y_pos;
    char symbol;
} Point;

/* 
Prints the points to the console. 

A point denotes a symbol to be printed at specific coordinates.
This function prints the symbol(s) to the console in sequence. 
*/
void display_to_console(
    const Point* points, 
    const int max_h,
    const int max_w
);

#endif /* DISPLAY_CONSOLE_H */ 
