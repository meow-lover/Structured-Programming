//Finding Area and Perimeter of rectangle & Area and circumference of a circle

#include<stdio.h>
#define PI 3.142857

int main()
{
    float length, breadth, radius, rectangle_area, rectangle_perimeter, circle_area, circle_circumference;

    printf("Enter the length & breadth of the rectangle\n");
    scanf("%f", &length);
    scanf("%f", &breadth);

    rectangle_area = length * breadth;
    rectangle_perimeter = 2 * (length + breadth);
    printf("The area of the rectangle is %.2f square unit\n", rectangle_area);
    printf("The perimeter of the rectangle is %.2f unit length\n\n", rectangle_perimeter);

    printf("Enter the radius of circle\n");
    scanf("%f", &radius);

    circle_area = PI * (radius * radius);
    circle_circumference = 2 * PI * radius;
    printf("The area of the circle is %.2f square unit\n", circle_area);
    printf("The circumference of the circle is %.2f unit length\n", circle_circumference);

    return 0;

}
