//Determine whether a number is negative or not

#include<stdio.h>

int main()
{
    float number;

    printf("Enter a number to check whether it is negative or not\n");
    scanf("%f", &number);

    if(number < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is not negative");
    }

    return 0;
}


