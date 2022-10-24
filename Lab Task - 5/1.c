#include<stdio.h>

int main()
{
    int i;
    float num, avg, sum = 0;

    for(i=0; i<10; i++)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        sum+=num;
    }

    printf("Sum is %.2f\n", sum);
    avg = sum/10;
    printf("The average is: %.2f\n", avg);

    return 0;
}

