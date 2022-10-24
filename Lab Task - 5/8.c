#include<stdio.h>

int main()
{
    int i,n,sum = 0;

    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=9; i<=n; i=i+4)
    {
        sum=sum+i;
    }
    printf("Sum of the series is = %d",sum);

    return 0;
}
