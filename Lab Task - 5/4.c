#include<stdio.h>

int main()
{
    int i, num, fac = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    for(i = 1; i<=num; i++)
    {
        fac = fac * i;
    }

    printf("The factorial of %d is : %d", num, fac);

    return 0;
}

