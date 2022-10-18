#include<stdio.h>

int main()
{
    int choice;
    float num1, num2;

    printf("Please enter your choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    printf("Please Enter the 2 numbers you want to calculate:\n");
    scanf("%f %f", &num1, &num2);

    if(choice == 1)
    {
        printf("The sum of %.2f & %.2f is %.2f", num1, num2, num1+num2);
    }
    else if(choice == 2)
    {
        printf("The difference of %.2f from %.2f is %.2f", num2, num1, num1-num2);
    }
    else if(choice == 3)
    {
        printf("The product of %.2f & %.2f is %.2f", num1, num2, num1*num2);
    }
    else if(choice == 4)
    {
        printf("%.2f divide by %.2f is %.2f", num1, num2, num1/num2);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
