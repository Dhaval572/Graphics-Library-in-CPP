// Insert image using graphics lib in c++
#include <graphics.h>

int main()
{
    initwindow(600, 500, "Inserting image"); // Setting windows size and name
    readimagefile("Logo.jpg", 100, 100, 400, 400); // Insert image function

    getch();
    closegraph();
    return 0;
}
/*
Explaination:

    Using graphics lib, you can insert image easly.

    Synytax of inserting image function:

        readimagefile("file_name.extention", x1, y1, x2, y2);

    In this first argument is file name and After give area to insert image n rectangular shape. which is (x1, y1, x2, y2)

    ( Note : Image which you want to insert should be in same folder in which your program file )

    So, this was very simple function to insert image using graphics lib.

    I hope you understand!!
*/
