// Rainning animation in graphics lib
#include <graphics.h>
#include <time.h> // For use srand funcion
#define MAX_DROPS 100 // Maximum number of raindrops

// Raindrop structure
struct Raindrop
{
    int x, y;  // Position of the raindrop
    int speed; // Speed at which the raindrop falls
};

// Function to draw a raindrop
void drawRaindrop(const Raindrop &drop)
{
    line(drop.x, drop.y, drop.x, drop.y + 5); // Draw a small vertical line for a raindrop
}

// Function to update the position of each raindrop
void updateRaindrop(Raindrop &drop, int height)
{
    drop.y += drop.speed; // Move the raindrop downwards

    // If rain is gone last y position of screen 
    if (drop.y > height)
    { 
        drop.y = 0;                  // Reset the raindrop when it reaches the bottom
        drop.x = rand() % getmaxx(); // Randomize the horizontal position
        drop.speed = rand() % 5 + 3; // Randomize the speed (between 2 and 6)
    }
}

int main()
{
    int width = 640, height = 480;               
    initwindow(width, height, "Rain Animation"); 

    // Array to hold raindrops
    Raindrop raindrops[MAX_DROPS]; // ( Note: This is array of structure's variable )

    // Initialize random number generator
    srand(time(0));

    // Randomize initial positions and speeds of raindrops
    for (int i = 0; i < MAX_DROPS; i++)
    {
        raindrops[i].x = rand() % getmaxx(); // Random horizontal position
        raindrops[i].y = rand() % height;    // Random vertical position
        raindrops[i].speed = rand() % 5 + 2; // Random speed ( up to 6 )
    }

    // Main animation loop
    while (true)
    {
        cleardevice(); // Clear the screen

        // Update and draw each raindrop
        for (int i = 0; i < MAX_DROPS; i++)
        {
            updateRaindrop(raindrops[i], height); // Update raindrop position
            drawRaindrop(raindrops[i]);           // Draw raindrop
        }

        delay(10); // Delay to control animation speed

        // Exit the program if 'Esc' key is pressed
        if (kbhit())
        {
            if (GetAsyncKeyState(VK_ESCAPE)) 
            {
                break; // Exit the animation loop
            }
        }
    }

    closegraph(); // Close the graphics window
    return 0;
}
/*
Explaination of logic:

    make a structure for rain drops. ( Line no. 7 to 11 )

    make function which draws rain drops. ( Line no. 14 to 17 )

    make function which updates postitions of each rain drops.( Line no. 20 to 31 )

    In main function: 

        Setting the potitions and speeds of each rain drops. ( Line no. 45 to 50 )

    In game Loop:

        Update each raindrop's potitions. ( Line no. 58 to 62 ) 

    
    So, this was only main logics to make Rain animation


    I hope you understand everything.
*/
