//Sum of first and last digit of a 4 digit number

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter a four digit number: ");
    scanf("%1d%1d%1d%1d", &a, &b, &c, &d);

    printf("The sum of first and last digit on the number is: %d", a+d);

    return 0;
}
