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

    // You can also use this rgb function for get other color 

    int rgbColor = COLOR(49, 8, 64);
    clearviewport(); // To apply background color

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
        DARKGRAY, LIGHTBLUE, LIGHTGREEN, 
        LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, 
        YELLOW, WHITE     
    };

    This all color has own index cause of enum.

    If you are want to add another colors than you can use COLOR() which is uses rgb colors.

    Syntax:

        COLOR( value_for_red, Value_for_green, Value_for_blue );

        Example: COLOR(49, 8, 64);

    Functions of colors in graphics lib:

        1) getmaxcolor()

            This function returns last color's index.

        2) getbkcolor()

            This function returns current background color's index

        3) setbkcolor()

            This function is used to set background color.
            It takes one argument which is name of color. 

            After use this you must have to call this function also `clearviewport()` or `cleardevice()` if you don't use this than background color will not visible.

    So, this was some color functions which is used in graphics library
    ( Note: this is part 1 so part 2 is also available check in my repo )

    I hope you understand!
*/
