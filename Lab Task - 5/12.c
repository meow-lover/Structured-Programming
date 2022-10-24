#include<stdio.h>
int main()
{

int i,rows = 5, j;

    for(i=1; i<=rows; ++i)
    {
        for (j = 5; j>=i; j--)
        {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}

