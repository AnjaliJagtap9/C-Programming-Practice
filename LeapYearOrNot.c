#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year;
    printf("enter a year : ");
    scanf("%d",&year);
    if((year%400==0) || (year%4==0 && year % 100!=0)){
    printf("year is leap ");}
    else
    printf("not a leap year");
    return 0;
}
