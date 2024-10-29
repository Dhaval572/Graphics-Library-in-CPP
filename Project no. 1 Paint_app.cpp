// Making Poor paint app
#include <graphics.h>

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN); // Finds height of display
    int width = GetSystemMetrics(SM_CXSCREEN);  // Finds width of display

    initwindow(width, height, "Draw shapes"); // Setting windows size and name

    POINT cursorPos; // creating variable of POINT structure

    // Infinite loop which can stop using break statement
    while (1)
    {
        GetCursorPos(&cursorPos); // It will gives you mouse cursor's coordinates

        // When user pressing left mouse button then drawing starts
        if (GetAsyncKeyState(VK_LBUTTON))
            putpixel(cursorPos.x, cursorPos.y, WHITE); // Drawing through pixels

        // When user press space than drawing will clear
        if (GetAsyncKeyState(VK_SPACE))
            cleardevice(); // Clearing graphics window

        // When user press enter than drawing will save in jpeg format
        if (GetAsyncKeyState(VK_RETURN))
        {
            writeimagefile("Img.jpeg"); // File will save with name 'Img' and in jpeg format
            delay(500);
            cleardevice(); // Clearing device to draw more drawing
        }

        // For exit from infinite loop
        if (GetAsyncKeyState(VK_ESCAPE))
            break;
    }

    getch();
    closegraph();
    return 0;
}
/*
About this project:

    This is simplest painting app.

    So, this is very simple project if you know graphics lib.

    So, program is very simple so not need to more explaination.

    So, i hope you enjoing my github text tutorial.
*/
