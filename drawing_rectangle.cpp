// Drawing simple rectangle shape
#include <graphics.h>
#include <conio.h>

int main()
{
    // Initialize graphics mode

    int gd = DETECT, gm;     // Variables to hold graphics driver and graphics mode
    initgraph(&gd, &gm, ""); // Initialize the graphics system; empty string uses default path

    // Set the drawing color to white
    setcolor(WHITE); // This will set the color for any shapes drawn afterwards

    // Define the rectangle's corners
    int left = 100;   // x1
    int top = 100;    // y1
    int right = 200;  // x2
    int bottom = 200; // y2

    rectangle(left, top, right, bottom); 

    getch(); // This function pauses the program until a key is pressed, allowing the user to see the circle

    closegraph(); // Close the graphics window
}
/*
Explaination to draw rectangle:

    Syntax of drawing rectangle:

        rectangle(x1,y1,x2,y2);

    Here, 

    x1: The x-coordinate of the left side of the rectangle. ( line no. 16 )

    x2: The y-coordinate of the top side of the rectangle. ( line no. 17 )

    x3: The x-coordinate of the right side of the rectangle. ( line no. 18 )

    x4: The y-coordinate of the bottom side of the rectangle. ( line no. 19 )

*/
