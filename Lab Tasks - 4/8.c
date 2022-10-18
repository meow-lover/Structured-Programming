//Finding total number of illiterate

#include<stdio.h>

int main()
{
    int men_percent = 52;  //given
    int women_percent = 48;
    int total_literacy = 48;  //given
    int men_literacy = 35;    //given
    int women_literacy = total_literacy - men_literacy;
    int total_illiteracy = 52;
    int men_illiteracy = men_percent - men_literacy;
    int women_illiteracy = total_illiteracy - men_illiteracy;

    float total_illiteracyno = (men_illiteracy * 0.01 * 80000) + (women_illiteracy * 0.01 * 80000);  // 1/100 = 0.01
    printf("The total number illiterate persons in the city is %.0f", total_illiteracyno);

    return 0;
}

