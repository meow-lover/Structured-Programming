//displaying a menu in a restaurent

#include<stdio.h>

int main()
{
    int choice;

    printf("Food Menu\n");
    printf("1. Chicken Burger\n");
    printf("2. Double Cheese Chicken Burger\n");
    printf("3. French Fries Large\n");
    printf("4. Chicken Tikka\n");
    printf("5. Chicken Wings\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice==1){
        printf("You have selected Chicken Burger\n");
    }
    else if(choice==2) {
        printf("You have selected Double Cheese Chicken Burger\n");
    }
    else if(choice==3) {
        printf("You have selected French Fries Large\n");
    }
    else if(choice==4) {
        printf("You have selected Chicken Tikka\n");
    }
    else if(choice==5) {
        printf("You have selected Chicken Wings\n");
    }
    else {
        printf("Wrong choice\n");
    }
    return 0;
}

