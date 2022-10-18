#include<stdio.h>

int main()
{
    int withdrawal_amount, hundreds, fifties, tens, remaining;

    printf("Enter the amounts to be withdrawn in hundreds\n");
    scanf("%d", &withdrawal_amount);

    hundreds = withdrawal_amount / 100;
    fifties = (withdrawal_amount % 100)/50;
    tens = ((withdrawal_amount % 100)%50)/10;
    remaining = (((withdrawal_amount%100)%50)%10);


    printf("The number of 100 denomination currency notes: %d\n", hundreds);
    printf("The number of 50 denomination currency notes: %d\n", fifties);
    printf("The number of 10 denomination currency notes: %d\n", tens);
    printf("The remaining amount is %d\n", remaining);

    return 0;

}

