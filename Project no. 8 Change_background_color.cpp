// Change background colors
#include <graphics.h>

int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);  // Finds width of display
    int height = GetSystemMetrics(SM_CYSCREEN); // Finds height of display
    initwindow(width, height, "Change Background");

    int numberOfColor = 7; // Number of colors in graphics.h

    // Define colors in array
    int backGroundColors[] = {RED, GREEN, BLUE, LIGHTRED, LIGHTMAGENTA, LIGHTGREEN, LIGHTBLUE};

    while (true)
    {
        for (int i = 0; i < numberOfColor; i++)
        {
            if (GetAsyncKeyState(VK_SPACE))
                setbkcolor(backGroundColors[i]);

            clearviewport(); // Apply background color to the screen
            delay(500);      // For smoothness
        }

        if (GetAsyncKeyState(VK_ESCAPE))
            break; // To exit from program

        delay(10);
    }

    closegraph();
    return 0;
}
/*
Explaination:

    I made first array of colors. ( Line no. 13 )

    then after i used for loop in game loop to change color if space pressed. ( Line no. 22 to 29 )
*/
