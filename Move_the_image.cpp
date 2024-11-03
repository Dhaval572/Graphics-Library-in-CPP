// Move rectangle using wasd keys
#include <graphics.h>
#include <windows.h> // To use all Keyboard button in GetAsyncKeyState()

int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);  // Gives width of display
    int height = GetSystemMetrics(SM_CYSCREEN); // Gives height of display

    initwindow(width, height, "Moving the image"); // Setting size and name of graphics window

    int x = 0, y = 200; // image's x1 and y1 positions
    int width = 200;    // Setting width of image
    int height = 200;   // Setting height of image
    int page = 0;       // Initialize page variable for double buffering
    while (true)
    {
        setactivepage(page);     // Set the active page for drawing
        setvisualpage(1 - page); // Set the visual page to the other one

        cleardevice(); // Preparing graphics windows to display new graphs

        readimagefile("Logo.jpg", x, y, x + width, y + height); // Load the image

        // Check if the image is still within the right boundary of the window
        if (x + width < getmaxx())
        {
            x += 25; // Move the image to the right by 25 pixels
        }
        else
        {
            x = 0; // Reset the position to the left side if it goes off screen
        }

        delay(10);       // To control the speed of animation
        page = 1 - page; // Toggle pages for double buffering

        // Exit from infinite loop
        if (GetAsyncKeyState(VK_ESCAPE))
            break;
    }

    getch();
    closegraph();
    return 0;
}
/*
Explaination

    In this program we are used new three function which is getmaxx(), setactivepage() and setvisualpage()

    getmaxx()
   
        This function is used to find maximum x potision of graphics windows.

    setactivepage()

        This function tells the program which drawing surface to use right now.

        It lets you choose where to draw before showing it on the screen, helping to avoid flickering.

    setvisualpage()

        This function tells the program which drawing surface should be shown on the screen.

    So, if you want to know more about flickering than explore this video:

        "https://www.youtube.com/watch?v=V24zK_s1Opk&list=PLMclp-q8OPhnBqdI6DAIhsHX6RvVD5nha&index=17"

    In this video you can understand flickering easily.

    I hope you are enjoing coding! 
*/
