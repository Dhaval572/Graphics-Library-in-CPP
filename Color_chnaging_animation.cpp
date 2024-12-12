// Color changing animation in graphics window
#include <graphics.h>
#include <time.h>

int setRangeOfRandomNumber(int min, int max)
{
    int randomNumber = min + rand() % (max - min + 1);
    return randomNumber;
}

int main()
{
    initwindow(600, 500, "Color changes");

    srand(time(0));

    while (!kbhit())
    {
        cleardevice();
        setbkcolor(COLOR(setRangeOfRandomNumber(0, 255), setRangeOfRandomNumber(0, 255), setRangeOfRandomNumber(0, 255)));
        delay(500);
    }

    getch();
    closegraph();
    return 0;
}