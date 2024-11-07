// Animation of bouncing ball
#include <graphics.h>

// To draw ball and his design
void drawBall(int x, int y)
{
    setcolor(WHITE);        // Ball color
    circle(x, y, 20);       // Draw ball with radius 20
    floodfill(x, y, WHITE); // Fill ball with color
}

int main()
{
    initwindow(600, 500, "Bouncing Ball Animation"); // Setting windows size and name

    int x = 200, y = 200;       // Initial position of the ball
    int xSpeed = 5, ySpeed = 5; // Speed of the ball in x and y direction

    // Main animation loop
    while (!kbhit()) // checking whether a key has been pressed
    {
        cleardevice(); // Preparing windows to new graphs

        drawBall(x, y); // Draw the ball at the new position

        x += xSpeed; // Update x position
        y += ySpeed; // Update y position

        // Bounce off the walls
        if (x > getmaxx() - 20 || x < 20) // getmaxx() returns maximum x position 
        {
            xSpeed = -xSpeed; // Reverse direction on x-axis
        }
        if (y > getmaxy() - 20 || y < 20) // getmaxy() returns maximum y position 
        {
            ySpeed = -ySpeed; // Reverse direction on y-axis
        }

        delay(30); // Delay to control the speed of the animation
    }

    closegraph();
    return 0;
}
/*
Explainaion:

    In this animation first we have to draw the circle and visible it in screen,
    Here i made the function for draw the circle with proper radius and color. (Line no. 5)
    
    Then, after I set the speed of the ball to move in a particular direction, it will start moving. (Line no. 26, 27)

    Than after i made two conditions:

    1) (x > getmaxx() - 20 || x < 20) ( Line no. 30 )

        If the ball's x-coordinate goes beyond the screen's right edge (getmaxx() is the screen width) or gets too close to the left edge (x < 20), it reverses the ball's horizontal direction (xSpeed = -xSpeed)

    2) (y > getmaxy() - 20 || y < 20) ( Line no. 34 )

        If the ball's y-coordinate goes beyond the bottom edge (getmaxy() is the screen height) or gets too close to the top (y < 20), it reverses the ball's vertical direction (ySpeed = -ySpeed).

    Than after i set delay to control the speed of animation.

    So, this was simple animation of ball bouncing.

    This can also help you in micro-projects or mini-projects.

    So, i hope you understand everything.

*/
