//Calculating Sum of the digits of a 5 digit number

#include <stdio.h>

int main()
{
    int a, b, c, d, e, sum;

    printf("Enter a five digit number: ");
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    printf("The Sum of its digits is: %d\n", sum);

    return 0;
}
