//finding youngest among both

#include<stdio.h>

int main()
{
    int arif_age, joy_age;

    printf("Enter Arif's age\n");
    scanf("%d", &arif_age);

    printf("Enter Joy's age\n");
    scanf("%d", &joy_age);

    if(arif_age > joy_age)
    {
        printf("Joy is younger\n");
    }
    else
    {
        printf("Arif is younger\n");
    }

    return 0;

}
