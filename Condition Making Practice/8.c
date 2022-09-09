//Determine whether a number is zero or not

#include<stdio.h>

int main()
{
    float number;

    printf("Enter a number to check whether it is zero or not\n");
    scanf("%f", &number);

    if(number == 0)
    {
        printf("The number is Zero");
    }
    else
    {
        printf("The number is not Zero");
    }

    return 0;
}



