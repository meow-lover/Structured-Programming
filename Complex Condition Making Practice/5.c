//calculating gross salary of an employee

int main()
{
    float basic_salary, hra, da, gross_salary;

    printf("Enter the employee's basic salary: ");
    scanf("%f", &basic_salary);

    if(basic_salary <= 10000){
        hra = 0.2 * basic_salary;
        da = 0.8 * basic_salary;
    }
    else if(basic_salary <= 20000){
        hra = 0.25 * basic_salary;
        da = 0.9 * basic_salary;
    }
    else if(basic_salary > 20000){
        hra = 0.3 * basic_salary;
        da = 0.95 * basic_salary;
    }
    else{
        printf("Invalid Amount");
    }


    gross_salary = basic_salary + hra + da;
    printf("The Employee's Gross Salary is %.2f", gross_salary);

    return 0;
}
