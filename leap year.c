#include<stdio.h>
int main()
{
    int year;
    printf("Please enter a year: ");
    scanf("%d", &year);
    if (year%400==0)
        printf("Leap year");
    else if (year%100!=0 && year%4==0)
        printf("Leap year");
    else
        printf("Not leap year");

    return 0;
}
