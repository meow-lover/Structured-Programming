//Determine whether a number is positive or not

#include<stdio.h>

int main()
{
    float number;

    printf("Enter a number to check whether it is positive or not\n");
    scanf("%f", &number);

    if(number > 0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is not positive");
    }

    return 0;
}
