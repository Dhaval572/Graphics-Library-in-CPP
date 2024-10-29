// Last part of color functions in graphics lib
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(600, 500, "Color"); // Initializing windows with size and name

    circle(100, 100, 100);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(100,100,WHITE);
    getch();
    closegraph();
}
/*
To be continue from last ended:

    6) setfillstyle() ( Line no. 11 )

        This function is used to select pattern and color which you want to fill in shapes.

        This function takes two arguments first is pattern ( style to fill color ) and second is color.

        Here are  types of patterns:

            EMPTY_FILL, SOLID_FILL, LINE_FILL, LTSLASH_FILL, SLASH_FILL, BKSLASH_FILL, LTBKSLASH_FILL, HATCH_FILL, XHATCH_FILL, INTERLEAVE_FILL, WIDE_DOT_FILL, CLOSE_DOT_FILL, USER_FILL 

        and types of color is:

            BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGREY, LIGHTBLUE, RIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMEGENTA, YELLO, WHITE

    Syntax: 

        setfillstyle(Pattern, color);

    7) floodfill() ( Line no. 12 )

        This functions is used to `fill` the color in shape.


    So, this functions are used to fill color in given style and given color.

    So, this is a last part of color function in graphics lib.

    I hope you understand everything.
*/
