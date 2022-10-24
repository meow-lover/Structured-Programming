#include<stdio.h>
int main()
{
    int i,num,isPrime = 1;

    printf("Enter the number: ");
    scanf("%d",&num);

    if (num>0)
    {
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==0)
        {
            printf("%d is not prime number",num);
        }
        else
        {
            printf("%d is prime number",num);
        }
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
