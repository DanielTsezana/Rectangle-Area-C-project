// Program to print area of rectangle
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables
    double height = 10;
    double width = 20;
    double perimeter = 0.0;
    double area = 0.0;

    // Perimeter calculations
    perimeter = 2.0 * (height + width);
    area = width * height;

    // displaying input
    printf ("height is: %.0f\n", height);
    printf ("width is: %.0f\n", width);
    printf ("Perimeter is: %.0f\n", perimeter);
    printf ("area is: %.0f\n", area);



    return 0;
}
