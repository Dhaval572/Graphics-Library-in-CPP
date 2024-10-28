// Make Smiley face
#include <graphics.h>

int main()
{
    initwindow(600, 500, "Smile please"); // Setting windows width and hight

    circle(200, 200, 200); // Face
    circle(130, 130, 50);  // Eye 1
    circle(270, 130, 50);  // Eye 2

    arc(200, 200, 240, 300, 150); // Smile on face☺

    getch();                      // Checking that any key is pressed
    closegraph(); 
    return 0;
}
