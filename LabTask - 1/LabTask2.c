//finding distance in different units

#include<stdio.h>

int main()
{
    int distance;
    int meter;
    float feet;
    float inch;
    float cm;

    printf("Enter the Distance between Mirpur & Ashulia\n");
    scanf("%d", &distance);

    meter = distance * 1000;
    feet = distance * 3280.84;
    inch = distance * 39370.1;
    cm = distance * 100000;

    printf("The distance between Mirpur & Ashulia is %d metres\n", meter);
    printf("The distance between Mirpur & Ashulia is %.2f feet\n", feet);
    printf("The distance between Mirpur & Ashulia is %.2f inches\n", inch);
    printf("The distance between Mirpur & Ashulia is %.2f centimetres\n", cm);

    return 0;

}
