// Creating view port
#include <graphics.h>

int main()
{
    initwindow(600, 600, "View port");

    setviewport(100, 100, 500, 500, true);
    setbkcolor(BLUE); // Setting the color for view port
    clearviewport();  // Clearing previous graphs of view port

    getch();
    closegraph();
    return 0;
}
/*
Explanation:

    The view port is a square area in which you can draw specific graphs instead of whole graphic window.

    So to create view port there are function available in graphics.h:

    setviewport():

        Syntax:

            void setviewport(int left, int top, int right, int bottom, bool clip);

        In which, 
        
        left: The x-coordinate of the left boundary of the viewport.

        top: The y-coordinate of the top boundary of the viewport.

        right: The x-coordinate of the right boundary of the viewport.
        
        bottom: The y-coordinate of the bottom boundary of the viewport.
        
        clip (optional): If set to 1 (or true), any drawing outside the defined viewport area will be clipped (not drawn). If set to 0 (or false), drawing can extend outside the viewport, but anything outside won't be visible.

    clearviewport()

        Syntax:

            clearviewport();

        This function is used to delete previous graphs of viewport.

    So, this was viewport explanation

    I hope you understand!!
*/
