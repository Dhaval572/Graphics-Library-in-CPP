// More color funtions in graphics library
#include <iostream>
#include <graphics.h>
using namespace std;

int main()
{
    initwindow(600, 500, "Color"); // Initializing windows with size and name

    int currentPalleteColor = getcolor();
    cout << getcolor(); // Gives 15 because default Pallete color is white

    setcolor(MAGENTA);      // Setting Pallete color 
    circle(200,200,100);    // Drawing circle

    getch();
    closegraph();
}
/*
To be continue from last ended:

    Pallete color:

        In short and very straight forword, we can say that pallete color is outline color of shapes

    Here are functions for pallete colors:

    4) getcolor()

        It will return index of current pallete color, in shortly it returns current outline color's index.
        
        ( Note: Default pallete color is WHITE in graphics library )

    5) setcolor()

        This function is used to set pallete color.
        It takes one argument which is name of color. 

    So, this functions is specially for Pallete Colors.

    So, this is a second part of color functions in graphic lib.

    next part is also available (Part - 3) So check that.

    I hope you understand everything!
*/
