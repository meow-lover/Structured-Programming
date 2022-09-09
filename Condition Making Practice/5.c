//checking whether the area of a triangle is greater than the perimeter of the triangle

#include<stdio.h>

int main()
{
    float side1, base, side2, height, area, perimeter;
    printf("Enter the base and height of the triangle\n");
    scanf("%f %f", &base, &height);

    printf("Enter the other 2 sides of the triangle\n");
    scanf("%f %f", &side1, &side2);

    area = 0.5 * base * height;
    perimeter = side1 + base + side2;

    if(area > perimeter)
    {
        printf("Area of the triangle is greater than the perimter of the triangle\n");
    }
    else
    {
        printf("Perimeter of the triangle is greater than area of the triangle\n");
    }

    return 0;

}
