#include<stdio.h>

int main()
{
    int choice;
    float celsius, fahrenheit, temperature1, temperature2;

    printf("Please Enter your Choice: \n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter the temperature in Celsius: \n");
        scanf("%f", &temperature1);
        celsius = temperature1 * 9/5 + 32;
        printf("%.2f Celsius is %.2f Fahrenheit", temperature1, celsius);
    }
    else if(choice == 2)
    {
        printf("Enter the temperature in Fahrenheit");
        scanf("%f", &temperature2);
        fahrenheit = temperature2 - 32 * 5/9;
        printf("%.2f Fahrenheit is %.2f Celsius", temperature2, fahrenheit);
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
