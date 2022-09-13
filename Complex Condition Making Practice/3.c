//read value of an integer

#include<stdio.h>

int main()
{
    int m;

    printf("Enter a number: ");
    scanf("%d", &m);

    if(m>0){
        printf("n is 1");
    }
    else if(m<0) {
        printf("n is -1");
    }
    else {
        printf("n is 0");
    }

    return 0;
}
