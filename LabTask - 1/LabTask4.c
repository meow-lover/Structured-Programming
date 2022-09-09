//Converting Fahrenheit to Centigrade

#include<stdio.h>

int main()
{
   float fahrenheit;
   float centigrade;

   printf("Enter the city's temperature in fahrenheit\n");
   scanf("%f", &fahrenheit);

   centigrade = (fahrenheit - 32) * 5/9;
   printf("The city's temperature is %.2f degree celcius\n", centigrade);

   return 0;
}
