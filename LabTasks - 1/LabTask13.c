//adding 1 to all digits of a 5 digit number

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    num = num + 11111;
    printf("The number after increasing each of its digit by 1 is: %d", num);

    return 0;
}

