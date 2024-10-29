// Open graphic window in fullscreen of your system
#include <graphics.h>

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN); // Finds height of display 
    int width = GetSystemMetrics(SM_CXSCREEN);  // Finds width of display

    initwindow(width, height, "Full Screen"); // Setting windows size and name

    getch();
    closegraph();
    return 0;
}
/*
Explaination:

    To open graphics windows in full screen, you should know width and hight of your system or device screen

    To find width and heigh of your system there is one function available in graphics lib.

    Below is the function which returns system width and height.

    GetSystemMetrics();

    This funtion takes one parameter which is `SM_CYSCREEN` for find height of system and 
    `SM_CXSCREEN` for find width of system.

    Always remember this that GetSystemMetrics() doesn't take two arguments it only takes one arguments

    1) SM_CYSCREEN:

        It provides the height, in pixels, of the primary display screen.

    2) SM_CXSCREEN:

        It provides the width, in pixels, of the primary display screen.

    I hope you understand!!
*/
