// Solve the problem of flickering
#include <graphics.h>

int main()
{
    // Initialize the graphics window
    initwindow(600, 600, "Active and Visual Pages Example");

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

        // Swap the active page and visual page
        swapbuffers();

        // Pause to let the user see the effect
        delay(100);
    }

    // Wait for a key press to exit the program
    getch();
    closegraph();
    return 0;
}
/*
Explanation:

    If you have checked my previous file which name is about_flickering than you are know that what is flickering. if you don't know that check my previous file.

    So, in this i will knowing about flickering resolation function which is swapbuffers():

    swapbuffers() is a function used in graphics programming to smoothly switch between two buffers (memory areas). One buffer is used for drawing (inactive), while the other is displayed on the screen (active)
    
    In shortly, this function is used to remove flickering.

    So, this function is very usefull instead of manually solving flickering problem.

    So, i hope you understand everything!!

*/
