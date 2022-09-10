//finding whether a triangle is valid or not

#include<stdio.h>

int main()
{
    float angle_1, angle_2, angle_3;

    printf("Enter the 3 angles to check whether the triangle\n");
    scanf("%f %f %f", &angle_1, &angle_2, &angle_3);

    if(angle_1 + angle_2 + angle_3 == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }

    return 0;

}
