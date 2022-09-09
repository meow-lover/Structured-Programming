//determining whether a program is odd or even

#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number to check whether it is odd or even\n");
    scanf("%d", &number);

    if(number%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;

}
