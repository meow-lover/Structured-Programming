#include <stdio.h>

int main()
{
    int i, j, k, rows = 5;
    for(i=1; i<=rows; i++)
    {
        k = i;

        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
