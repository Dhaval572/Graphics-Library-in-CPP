// Animation of drawing katana
#include <graphics.h>

int main()
{
    initwindow(600, 500, "Drawing katana animation");

    while(true)
    {
        line(100, 100, 100, 400);
        delay(999); // Delay for gap between all line draw

        line(75, 350, 140, 350);
        delay(999); // Delay for gap between all line draw

        line(100, 400, 110, 400);
        delay(999); // Delay for gap between all line draw

        line(110, 400, 110, 100);
        delay(999); // Delay for gap between all line draw

        line(100, 100, 105, 95);
        delay(999); // Delay for gap between all line draw

        line(105, 95, 110, 100);
        delay(999); // Delay for gap between all line draw

        line(75, 350, 75, 360);
        delay(999); // Delay for gap between all line draw

        line(75, 360, 140, 360);
        delay(999); // Delay for gap between all line draw

        line(140, 360, 140, 350);
        delay(999); // Delay for gap between all line draw

        if(GetAsyncKeyState(VK_ESCAPE))
            break;
    }

    closegraph();
    return 0;
}

/*
Explaination:

    This is very hard to draw katana in graphics library cause of checking one by one x and y coordinates.

    So, Please check and run my code and see how i started drawing katana.

    I hope you understand.
*/
