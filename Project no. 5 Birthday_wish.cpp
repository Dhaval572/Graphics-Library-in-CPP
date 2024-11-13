// Making happy birthday wishes
#include <graphics.h>

int main()
{
    initwindow(600, 500, "Happy Birthday", 150, 50);

    // Third layer
    for (int i = 0; i <= 300; i++)
    {
        setcolor(LIGHTMAGENTA);
        line(150 + i, 370, 150 + i, 430);
        delay(10);
    }
    // Second layer
    for (int i = 260; i >= 0; i--)
    {
        setcolor(YELLOW);
        line(170 + i, 310, 170 + i, 370 - 2);
        delay(10);
    }

    // first layer
    for (int i = 0; i <= 220; i++)
    {
        setcolor(WHITE);
        line(190 + i, 250, 190 + i, 310 - 2);
        delay(10);
    }

    // candles
    for (int i = 0; i <= 70; i++)
    {
        setcolor(LIGHTRED);
        line(210 + 25, 250 - 2 - i, 210 + 25 + 10, 250 - 2 - i);
        line(210 + 85, 250 - 2 - i, 210 + 85 + 10, 250 - 2 - i);
        line(210 + 145, 250 - 2 - i, 210 + 145 + 10, 250 - 2 - i);

        delay(10);
    }
    setcolor(LIGHTGREEN);
    settextstyle(1, HORIZ_DIR, 3);
    outtextxy(140, 50, "Happy Birthday Dear ");

    getch();
    closegraph();
}
