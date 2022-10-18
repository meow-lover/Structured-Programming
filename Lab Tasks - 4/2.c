#include<stdio.h>

int main()
{
    float x, y;

    printf("Please enter the value of X coordinate point: \nPlease enter the value of Y coordinate point: \n");
    scanf("%f%f",&x, &y);

    if(x > 0 && y > 0)
    {
        printf("Inputted coordinate (%.2f , %.2f) lies in 1st Quadrant", x, y);
    }
    else if(x < 0 && y > 0)
    {
        printf("Inputted coordinate (%.2f , %.2f) lies in 2nd Quadrant", x, y);
    }
    else if(x < 0 && y < 0)
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in 3rd Quadrant", x, y);
    }
    else if(x > 0 && y < 0)
    {
        printf("Inputted coordinate (%.2f, %.2f) lies in 4th Quadrant", x, y);
    }
    else
    {
        printf("Invalid!");
    }

    return 0;
}
