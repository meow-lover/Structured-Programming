//Finding Aggregate & percentage

#include<stdio.h>

int main()
{
    int marks;
    float Subject1, Subject2, Subject3, Subject4, Subject5;
    float aggregate;
    float percentage;

    printf("Enter the Numbers for 5 Subjects\n");
    scanf("%f", &Subject1);
    scanf("%f", &Subject2);
    scanf("%f", &Subject3);
    scanf("%f", &Subject4);
    scanf("%f", &Subject5);

    aggregate = (Subject1 + Subject2 + Subject3 + Subject4 + Subject5) * 0.2;
    percentage = (Subject1 + Subject2 + Subject3 + Subject4 + Subject5) * 0.2;

    printf("The Aggregate mark is: %.2f\n", aggregate);
    printf("The percentage mark is: %.2f %% \n", percentage);

    return 0;





}
