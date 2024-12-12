// display variable in graphics lib
#include <graphics.h>
#include <sstream>

int main()
{
    initwindow(600, 600, "Count number: ");

    int count;
    for (count = 0; count < 100; count++)
    {
        setcolor(WHITE); // Setting the color of battery percentage information
        std::stringstream s;
        s << count;   // Insert the value of count into the stringstream
        char ch[100]; // Declare a character array to store the converted string
        s >> ch;      // Extract the string from the stringstream and store it in the character array

        settextstyle(0, HORIZ_DIR, 3); // Setting font style
        outtextxy(300, 300, ch);       // Displaying variable values in screen

        delay(100);
    }

    getch();
    closegraph();
    return 0;
}
