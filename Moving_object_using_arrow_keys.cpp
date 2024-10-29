// Move object in graphics lib
#include <graphics.h>

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN); // Finds height of display 
    int width = GetSystemMetrics(SM_CXSCREEN);  // Finds width of display

    initwindow(width, height, "Move object"); // Setting windows size and name
    
    int x = 300, y = 300;   // Circle's x and y coordinates

    // Loop for move object like game loop 
    while(true)
    {
        cleardevice();
        circle(x, y, 50); // Circle has 50 radius
        if(GetAsyncKeyState(VK_RIGHT)) // Checks that Right Arrow key is pressed or not
            x += 10;

        if(GetAsyncKeyState(VK_LEFT)) // Checks that Left Arrow key is pressed or not
            x -= 10;

        if(GetAsyncKeyState(VK_UP)) // Checks that Up Arrow key is pressed or not
            y -= 10;

        if(GetAsyncKeyState(VK_DOWN)) // Checks that Down Arrow key is pressed or not
            y += 10;

        if(GetAsyncKeyState(VK_RETURN)) // Checks that Enter is pressed 
            break;                      // Exiting from loop

        delay(20); // To control animation speed
        
    }

    getch();
    closegraph();
    return 0;
}
/*
Take input through button:

    Here, are function that checks that particuler key is pressed or not.

    if pressed than it will return true else it returns false.

    This function takes argument which is called virtual key code.

    Virtual key codes:

        VK_LEFT, VK_RIGHT, VK_UP, VK_DOWN, VK_ESCAPE, VK_RETURN, VK_SPACE, VK_LBUTTON, VK_RBUTTON, 'X'

    Function is : GetAsyncKeyState()

        This function checks that particular key is pressed or not.

        Syntax:

            if(GetAsyncKeyState(key_code))
            {
                // Statement to do
            }

        This function is used to give specific task for particular key is pressed.

        I mean this function is checks that key is pressed or not.
        if pressed than it will do Particular task which we define.

    So, i hope you understand everything!
*/
