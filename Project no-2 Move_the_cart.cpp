// Making cart which can move left and right
#include <graphics.h>

int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);  // Gives width of display
    int height = GetSystemMetrics(SM_CYSCREEN); // Gives height of display

    initwindow(width, height, "Move the cart"); // Setting size and name of graphics window

    // Initial positions
    int cartX = 100;      // X position of the cart
    int cartY = 300;      // Y position of the cart
    int wheelY = 420;     // Y position of the wheels
    int wheelRadius = 20; // Radius of the wheels
    int cartWidth = 100;  // Width of the cart

    // Infinite loop which can stop when break statement execute
    while(true)
    {
        cleardevice(); // Clearing graphic window

        // Draw the cart
        rectangle(cartX, cartY, cartX + cartWidth, cartY + 100); // Adjust height as needed

        // Draw the wheels
        circle(cartX + 20, wheelY, wheelRadius); // Left wheel
        circle(cartX + 80, wheelY, wheelRadius); // Right wheel

        // Check for key presses
        if(GetAsyncKeyState(VK_LEFT)) // Checking that left key is pressed
        {
            // Move cart left, ensuring it doesn't go out of the screen
            if(cartX > 0)
            {
                cartX -= 10; // Move cart left
            }
        }

        if(GetAsyncKeyState(VK_RIGHT)) // Checking that Right key is pressed
        {
            // Move cart right, ensuring it doesn't go out of the screen
            if(cartX + cartWidth < width)
            {
                cartX += 10; // Move cart right
            }
        }

        if(GetAsyncKeyState(VK_ESCAPE)) // Checking that Escape key is pressed
        {
            break; // Exit the loop on escape
        }

        delay(20); // Control the speed of movement
    }

    getch();
    closegraph();
    return 0;
}
/*
Explaination:

    There are simple concept of moving cart which is below:

    1) Move left:

        Decrement the x coordinate of cart

    2) Move right 

        Increment the x coordinate of cart

    And ensuring that the cart is doesn't going out of the screen

    Otherwise cart will disappear

    So, this was mini project of the graphics lib.

    I hope you understand everything!
*/
