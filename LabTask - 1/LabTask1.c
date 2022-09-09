#include<stdio.h>

int main()
{
    float basicSalary;
    float gross_salary;
    float allowance;
    float rent;
    float grossSalary;


    printf("Enter basic salary");
    scanf("%f", &basicSalary);
    allowance = 0.4 * basicSalary;
    rent = 0.2 * basicSalary;
    grossSalary = basicSalary + allowance + rent;

    printf("Gross Salary: %.2f", grossSalary);

    return 0;
}
