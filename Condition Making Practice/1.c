//determine whether seller made profit or loss

#include<stdio.h>

int main()
{
    float cost_price, selling_price, profit, loss;

    printf("Enter the cost price of the item\n");
    scanf("%f", &cost_price);

    printf("Enter the selling price of the item\n");
    scanf("%f", &selling_price);

    if(selling_price > cost_price)
    {
        printf("The seller made a profit of %.2f $\n", selling_price - cost_price);
    }
    else
    {
        printf("The seller made a loss of %.2f $\n", cost_price - selling_price);
    }

    return 0;
}
