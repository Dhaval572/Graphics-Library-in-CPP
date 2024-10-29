// Move objects through mouse pointer
#include <graphics.h>

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN); // Finds height of display 
    int width = GetSystemMetrics(SM_CXSCREEN);  // Finds width of display

    initwindow(width, height, "Move object"); // Setting windows size and name

    POINT cursorPos; // creating variable of POINT structure 

    // Infinite loop which can stop using break statement
    while(1)
    {
        cleardevice(); // Preparing display for new graphics or drawing
        
        GetCursorPos(&cursorPos); // It will gives you mouse cursor's coordinates
        
        circle(cursorPos.x, cursorPos.y, 50); // Object to move

        if(GetAsyncKeyState(VK_LBUTTON)) // Checks that mouse left button is pressed 
        {
            break; // To exit from infinite loop
        }

        delay(20); // For control animaion speed
    }

    getch();
    return 0;
}
/*
Explaination: 

    To use mouse as interect in graphics program we have to know three thing 
    1. Mouse cursor position, 2. Mouse left button, 3. Mouse right button 

    Point:

        Point is a structure which stores the x and y coordinate of mouse.

    GetCursorPos(&POINT) :

        This function can give you mouse coordinates.

    Key codes of mouse button:

        VK_LBUTTON => this is a mouse left button 
        VK_RBUTTON => this is a mouse right button 

        This key codes are used as parameter in GetAsyncKeystate() to check that mouse left button is pressed or not; similarlly for mouse right button.

    So, this program is moves object using mouse.

    So, this was basic functions and methods of mouse in graphics lib.

    I hope you understand everything!
*/
