// Colors in graphics.h 
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(600, 500, "Color");

    int currBackGroundColor = getbkcolor();
    cout << currBackGroundColor; // It will gives 0 because by default backgraound color is black and it's index is 0

    setbkcolor(MAGENTA); // Setting given color to background
    cleardevice();       // Don't forget this other wise background color changes will not visible 

    getch();
    closegraph();
}
/*
Color:

    Colors are defined as enum in graphic.h

    enum colors
    { 
        BLACK, BLUE, GREEN, CYAN, RED,
        MAGENTA, BROWN, LIGHTGRAY, 
        DARKGREY, LIGHTBKUE, RIGHTGREEN, 
        LIGHTCYAN, LIGHTRED, LIGHTMEGENTA, 
        YELLO, WHITE     
    };

    This all color has own index cause of enum.

    Functions of colors in graphics lib:

        1) getmaxcolor()

            This function returns last color's index.

        2) getbkcolor()

            This function returns current background color's index

        3) setbkcolor()

            This function is used to set background color.
            It takes one argument which is name of color. 

            After use this you must have to call this function also `cleardevice()` if you don't use this than background color will not visible.

    So, this was some color functions which is used in graphics library

    I hope you understand!
*/
