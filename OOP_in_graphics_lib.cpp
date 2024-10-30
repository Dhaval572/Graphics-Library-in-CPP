// Object Oriendted Programming In Graphics Library
#include <graphics.h>

// class to make circle
class Circle
{
    int x, y, radius;
    int color, outLineColor;

public: 

    // Constructor
    Circle(int x, int y, int radius, int color, int outLineColor)
    {
        // Setting the Characteristics of circle like position, radius, colors etc.
        this->x = x;
        this->y = y;
        this->radius = radius;
        this->color = color;
        this->outLineColor = outLineColor;
    }

    void drawCircle()
    {
        setcolor(outLineColor); // Setting the outline color of circle
        circle(x, y, radius); // Drawing the circle
        setfillstyle(SOLID_FILL, color); // Filling color in given style and given color
        floodfill(x, y, outLineColor); // Filling the color at given position
    }
};

int main()
{
    initwindow(600, 500);

    // Creating object of class `Circle`
    Circle c1(100, 100, 50, LIGHTBLUE, WHITE), c2(200, 200, 50, RED, YELLOW), c3(300, 300, 50, CYAN, LIGHTBLUE);

    c1.drawCircle(); // Drawing first circle `c1`
    c2.drawCircle(); // Drawing first circle `c2`
    c3.drawCircle(); // Drawing first circle `c3`

    getch();
    closegraph();
    return 0;
}
/*
Object Oriented Programming:

    If you are learning graphics lib than i hope you already know Object Oriented Programming.

    If you don't know that what is OOP than it's ok!

    I will explain you OOP in very short and basic term

    So, here are very basic explaination of OOP 

    So, in short oop is a concept in which you can store data( variable ) and methods( function ) in single unit

    And you can use this using object of particular task 

    Syntax of class declaration:

    class class_name
    {
        // variable

        data_type1 variable_name1;
        data_type2 variable_name2;
        data_type3 variable_name3;

        // Functions

        return_type function_name(argu_1, argu_2, ... , argu_n)
        {
            // Task to do
        }
    } 

    Syntax of make objects: 

    class_name object_name;
    object_name.function_name();

    So, if you can't understand class and object than you need to see tutorial of c++ language with oop concept 

    Here, is link to learn c++ with oop 
    ( press ctrl + mouse-right button to visit link )

    "https://www.youtube.com/watch?v=j8nAHeVKL08&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL"

    So, class is very usefull in all programming including graphics programming

    So, if you don't have learned Object Oriented Programming than please learn it because it is very usefull in all programming.

    I hope you understand and enjoying coding!!

*/
