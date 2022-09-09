//Finding Cost price of an item

#include<stdio.h>

int main()
{
    float total_selling, total_profit, total_cost, item_cost;

    printf("Enter the total selling price of 15 items\n");
    scanf("%f", &total_selling);

    printf("Enter the total profit of 15 items\n");
    scanf("%f", &total_profit);

    total_cost = total_selling - total_profit;

    item_cost = total_cost/15;
    printf("The cost of an item is %.2f\n", item_cost);

    return 0;
}
