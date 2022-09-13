//check whether number is positive, negative or neutral

#include<stdio.h>

int main()
{
    float number;

    printf("Enter the number you want to check: ");
    scanf("%f", &number);

    if(number>0){
        printf("The Number is Positive");
    }
    else if(number<0) {
        printf("The Number is Negative");
    }
    else{
        printf("The Number is Neutral");
    }

    return 0;
}
