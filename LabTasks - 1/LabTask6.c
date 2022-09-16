//changing content of a variable to another

#include<stdio.h>

int main()
{
    int a, b, x;

    printf("Enter 2 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    x = a;
    a = b;
    b = x;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

}
