#include<stdio.h>

int main()
{
    int father, mother, uncle;

    printf("Enter father, mother & uncle's age: \n");

    scanf("%d %d %d", &father, &mother, &uncle);

    if(father > mother && father > uncle)
    {
        printf("Your father is oldest person\n");
        if(uncle > mother)
        {
            printf("Your mother is youngest\n");
            printf("Your uncle's age is betweeen oldest and youngest\n");
        }
        else
        {
            printf("Your uncle is youngest\n");
            printf("Your mother's age is betweeen oldest and youngest\n");
        }
    }
    else if(uncle > father && uncle > mother)
    {
        printf("Your uncle is the oldest person\n");
        if(father > mother)
        {
            printf("Your mother is youngest\n");
            printf("Your father's age is betweeen oldest and youngest\n");
        }
        else
        {
            printf("Your father is youngest\n");
            printf("Your mother's age is betweeen oldest and youngest\n");
        }

    }
    else
    {
        printf("Your mother is oldest\n");
        if(father > uncle)
        {
            printf("Your uncle is youngest\n");
            printf("Your father's age is betweeen oldest and youngest\n");
        }
        else
        {
            printf("Your father is youngest\n");
            printf("Your uncle's age is betweeen oldest and youngest\n");

        }
    }

        return 0;
}


