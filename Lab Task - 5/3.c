#include<stdio.h>

int main()
{
    int overtime, overtime_pay, working_hrs, i;

    for(i = 0; i < 10; i++)
    {
        printf("Enter the working hours of the employee: ");
        scanf("%d", &working_hrs);
        overtime = working_hrs - 36;
        if(working_hrs > 36)
        {
            printf("The employee worked %d hours overtime\n", working_hrs - 36);
            printf("His overtime payment is %d BDT\n", overtime * 120);
        }
        else{
            printf("The employee needs to work more than 36 hours per week for overtime payment\n");
        }
    }

    return 0;

}
