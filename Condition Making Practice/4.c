//finding whether a triangle is valid or not

#include<stdio.h>

int main()
{
    int angle_1, angle_2, angle_3, sum;

    printf("Enter the 3 angles to check whether the triangle\n");
    scanf("%d %d %d", &angle_1, &angle_2, &angle_3);

    sum = angle_1 + angle_2 + angle_3;

    if(sum == 180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }

    return 0;

}
