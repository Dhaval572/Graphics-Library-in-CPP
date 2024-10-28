// Graphics.h basic information
#include <graphics.h>
#include <conio.h> // Include the console input/output library

int main()
{
    // Initialize graphics mode

    int gd = DETECT, gm;     // Variables to hold graphics driver and graphics mode
    initgraph(&gd, &gm, ""); // Initialize the graphics system; empty string uses default path

    getch(); // This function pauses the program until a key is pressed, allowing the user to see the circle

    closegraph(); // Close the graphics window
}
/*
Explaination: 

    the variables gd and gm are used to set up the graphics mode in a C++ program using the graphics.h library. ( line no. 9)

    gd:

        gd is a variable that will hold the graphics driver which is available on your system.

    DETECT:

        By initializing 'gd' variable to DETECT, you're telling the program to automatically detect the available graphics driver on the system.

        The DETECT constant is defined in graphics.h and helps the library determine which graphics hardware is being used.

    gm:

        gm is another variable that will hold the graphics mode.

    initgraph():    ( line no. 10 )

        The initgraph() function detects the driver and mode based on the available hardware.

        using three parameters: (graphics_driver_address, graphic_mode, driver_path)

    Syntax of initgraph: 

        void initgraph(int *gd, int *gm, const char *driverpath);

    getch():       ( line no. 12 )

        It pauses the program until the user presses a key.

    closegraph():  ( line no. 14 )

        closegraph() is a function that:

            1). Closes the Graphics Window: 
                
                It shuts down the graphics system.

            2). Cleans Up Resources: 
                
                It frees memory and resources used for drawing.

    So, it was basics of graphics.h library in c++

    I hope you understand!
*/
