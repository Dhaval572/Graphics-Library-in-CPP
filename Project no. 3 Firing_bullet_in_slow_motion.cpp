// Bullet firing in slow motion
#include <graphics.h>

int main()
{
    initwindow(600, 500, "Gun Animation");

    // Head of man
    circle(350, 300, 25);

    // Neck of man
    line(350, 325, 350, 350); // x1 = circle.x postiion and y1 is circle.y + radius and x2 = circle.x potition + radius + some other_pixels.

    // Hands of man
    line(325, 350, 375, 350); // x1 = circle.x - 25, y1 = circle.y + 50, x2 = Neck line.x2 + 25, y2 = Neck line.y2

    // Leg1 of man
    line(350, 350, 325, 400); // x1 = circle.x, y1 = hands line.y2, x2 = hands line.x1, y2 = Length of leg.

    // Leg2 of man
    line(350, 350, 375, 400); // x1 = leg1 line.x1, y1 = leg1 line.y1, x2 = hand line.x2, y2 = leg1 line.y2

    // Gun handle
    line(330, 340, 330, 360); // x1 = hand line.x1 + 5, y1 = hand line.y1 - 10, x2 = Gun handle line.x1, y2 = hands line.y1 + 10

    // Gun upper-part
    line(320, 340, 330, 340); // x1 = hands line.x1 - 20, y1 = Gun handle line.y1, x2 = Gun handle line.x2 and y2 = Gun handle line.y2

    // Defining bullet positions
    int bulletX1 = 320, bulletY1 = 340, bulletX2 = 330, bulletY2 = 340;

    // Provide message to user
    outtextxy(0,0, "Press space key to see firing animation: ");

    // Infinite loop which can stop when breck statement execute
    while (true)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            // Move bullet left to right while bullet is not out of the screen
            while (bulletX1 != 0)
            {
                cleardevice(); // Preparing graphics windows for new graphcs

                // Re draw man
                circle(350, 300, 25);     // Head
                line(350, 325, 350, 350); // Neck
                line(325, 350, 375, 350); // Hands
                line(350, 350, 325, 400); // Leg1
                line(350, 350, 375, 400); // Leg2
                line(330, 340, 330, 360); // Gun parts
                line(320, 340, 330, 340); // Gun parts

                // Update bullet position 
                bulletX1 -= 10; 
                bulletX2 -= 10;

                // Draw the bullet in its new position 
                line(bulletX1, bulletY1, bulletX2, bulletY2);

                delay(50); // For controll firing bullet animation
            }

            // If bullet go out of screen than output will terminate
            if(bulletX1 == 0)
                break;
        }

        // To quit from infinite bullet ( Not compalsary but it is best practice)
        if (GetAsyncKeyState(VK_ESCAPE))
            break;

    }

    getch();
    closegraph();
    return 0;
}
