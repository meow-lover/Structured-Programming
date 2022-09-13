//Program to show Week Day

int main()
{
    int week_no;

    printf("Enter the Week Day Number: ");
    scanf("%d", &week_no);

    if(week_no==1){
        printf("Sunday");
    }
    else if(week_no==2) {
        printf("Monday");
    }
    else if(week_no==3) {
        printf("Tuesday");
    }
    else if(week_no==4) {
        printf("Wednesday");
    }
    else if(week_no==5) {
        printf("Thursday");
    }
    else if(week_no==6) {
        printf("Friday");
    }
    else if(week_no==7) {
        printf("Saturday");
    }
    else {
        printf("Invalid!");
    }

    return 0;
}
