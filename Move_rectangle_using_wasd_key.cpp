// Move rectangle using wasd keys
#include <graphics.h>
#include <windows.h> // To use all Keyboard button in GetAsyncKeyState()

int main()
{
    initwindow(500, 500, "Moving Rectangle");

    int x = 100, y = 100; // Rectangle's x1 and y1 positions
    int width = 50;       // Setting width of rectangle
    int height = 50;      // Setting height of rectangle

    while (true)
    {
        cleardevice();
        rectangle(x, y, x + width, y + height);
        if (GetAsyncKeyState('W') && y > 0) // if w key pressed than move upper side
            y -= 10;

        if (GetAsyncKeyState('A') && x > 0) // if a key pressed than move left side
            x -= 10;

        if (GetAsyncKeyState('S') && y + height < getmaxy()) // if s key pressed than move down side
            y += 10;

        if (GetAsyncKeyState('D') && x + width < getmaxx()) // if d key pressed than move right side
            x += 10;

        // To Quit from infinite loop
        if (GetAsyncKeyState(VK_ESCAPE))
            break;

        delay(50); // To control the speed of animation
    }

    getch();
    closegraph();
    return 0;
}
/*
Explaination:

    1) Move up-side

        To move rectangle up-side than you should decrease all ( Here, y1 and y2 ) y posision of rectangle

    2) Move down-side

        To move rectangle down-side than you should increase all ( Here, y1 and y2 ) y posision of rectangle

    3) Move left-side

        To move rectangle left-side than you should decrease all ( Here, x1 and x2 ) x posision of rectangle

    4) Move right-side

        To move rectangle right-side than you should increase all ( Here, x1 and x2 ) x posision of rectangle

    So, this was very simple and straight forward explaination to move square in graphics library

    I hope you understand!!
*/
