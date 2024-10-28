// Drawing simple circle shape
#include <graphics.h>
#include <conio.h>

int main()
{
    // Initialize graphics mode

    int gd = DETECT, gm;     // Variables to hold graphics driver and graphics mode
    initgraph(&gd, &gm, ""); // Initialize the graphics system; empty string uses default path

    // Set the drawing color to white
    setcolor(WHITE); // This will set the color for any shapes drawn afterwards

    circle(300, 200, 50); // Draw circle with 50 radius and at center possition(300, 200)

    getch(); // This function pauses the program until a key is pressed, allowing the user to see the circle

    closegraph(); // Close the graphics window
}
/*
Explaination of drawing shapes in graphics.h:

    To draw shape, you have first specify the color of shapes. This will done by graphics.h in-built function 'setcolor()'

    setcolor():

        This will take one parameter which is color

        Syntax:

            setcolor(color_name);

    shapes:

        After choosing color you can draw shape which you want.

        For example circle:

        Syntax of circle:

            circle(x_coordinate, y_coordinate, radius);

        here, you have to enter two parameter x coordinate, y coordinate and radius
        ( Note: The coordinates are measured in pixels )

        Example: circle(300,200,50); ( line no. 15 )

    So, this was basic information of drawing shapes in c++ using graphics.h library
*/
