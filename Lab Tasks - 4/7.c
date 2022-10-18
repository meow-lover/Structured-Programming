#include<stdio.h>

int main()
{
    int unit;
    float BMI, weight, height;

    printf("Select a unit for BMI:\n1. Kilograms & Meters\n2. Pounds & Inches\n");
    scanf("%d", &unit);

    if(unit == 1)
    {
        printf("You have selected Kilograms & Meters unit\n");

        printf("Enter your weight in kilograms and height in metres\n");
        scanf("%f %f", &weight, &height);

        BMI = weight / (height * height);

        printf("The BMI is %.2f\n", BMI);

        if(BMI < 18.5)
        {
            printf("Weight Status: Underweight");
        }
        else if(18.5 < BMI < 24.9)
        {
            printf("Normal or Healthy Weight");
        }
        else if(25.0 < BMI < 29.9)
        {
            printf("Overweight");
        }
        else if(BMI <= 30)
        {
            printf("Obese");
        }
        else
        {
            printf("Invalid");
        }
    }
    else if(unit == 2)
    {
        printf("You have selected Pounds & Inches Unit\n");

        printf("Enter your weight in Pounds and height in Inches\n");
        scanf("%f %f", &weight, &height);

        BMI = (weight / (height * height)) * 703;

        printf("The BMI is %.2f\n", BMI);


        if(BMI <= 124)
        {
            printf("Weight Status: Underweight");
        }
        else if(125 < BMI < 168)
        {
            printf("Normal or Healthy Weight");
        }
        else if(169 < BMI < 202)
        {
            printf("Overweight");
        }
        else if(BMI <= 203)
        {
            printf("Obese");
        }
        else
        {
            printf("Invalid");
        }

    }
    else
    {
        printf("Wrong input\n");
    }

    return 0;
}
