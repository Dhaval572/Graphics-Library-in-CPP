// About flickering in graphics.h
#include <graphics.h>
#include <conio.h>

int main()
{
    // Initialize the graphics window
    initwindow(600, 600, "Active and Visual Pages Example");

    // Variable to track the current page (0 or 1)
    int page = 0;

    // Set up the initial drawing properties
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, BLUE);

    // Game loop or drawing loop
    for (int i = 0; i < 50; i++)
    {
        // Clear the active page (for clean drawing)
        cleardevice();

        // Draw a shape on the active page
        fillellipse(300, 300, i * 10, i * 10); // Draw growing circle

        // Set the active page to the other one for the next frame

        setactivepage(1 - page); // Set the opposite page as the active page
        setvisualpage(page);     // Set the current page as the visual page

        // Toggle the page variable to alternate between pages
        page = 1 - page;

        // Pause to let the user see the effect
        delay(100);
    }    

    // Wait for a key press to exit the program
    getch();
    closegraph();
    return 0;
}
/*
Explaination
    
    In this program we are used new two functions which are setactivepage() 
    and setvisualpage(): 

        setactivepage():

            This function tells the program which drawing surface to use right now.
            
            It lets you choose where to draw before showing it on the screen, helping to 
            avoid flickering.

        setvisualpage()

            This function tells the program which drawing surface should be shown on the screen.


        So, if you want to know more about flickering than explore this video:

            "https://www.youtube.com/watch?v=V24zK_s1Opk&list=PLMclp-q8OPhnBqdI6DAIhsHX6RvVD5nha&index=17"

        In this video you can understand flickering easily.

        I hope you are enjoing coding!
*/
