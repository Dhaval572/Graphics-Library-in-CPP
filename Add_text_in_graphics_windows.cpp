// Add text in graphic windows using graphics lib in c++
#include <graphics.h>

int main()
{
    initwindow(600, 500, "Inserting image"); // Setting windows size and name
    
    settextstyle(SCRIPT_FONT, HORIZ_DIR, 8);
    outtextxy(50, 50, "How are you!"); // Providing text position where generate text.

    getch();
    closegraph();
    return 0;
}
/*
Explaination: 

    There are two function is used to add text in graphic window:

    1) outtextxy()

        Syntax:

            outtextxy(x-coordinate, y-coordinate, "Text");

        This function takes three arguments x and y coordinates and text which you want to add in graphics windows

    2) settextstyle()

        Syntax:

            settextstyle(font_style, font_direction, character_size);

        This function is used to give style to font which is `font style`, `font direction`, and `font size`.

        This function is not compalsary.
        
        so if you want to give style to font than use it.

        If you don't use this function than text will takes default text styles.

    Below is the font style which we can use in graphic windows:

        DEFAULT_FONT, TRIPLEX_FONT, SMALL_FONT, SANS_SERIF_FONT, GOTHIC_FONT, SCRIPT_FONT, SIMPLEX_FONT, TRIPLEX_SRC_FONT, COMPLEX_FONT, EUROPEAN_FONT, BOLD_FONT

    Below is the font directions 

        HORIZ_DIR, VERT_DIR

    So, this was graphics lib functions which are used to add text in graphic window.

    So, i hope you understand
*/
