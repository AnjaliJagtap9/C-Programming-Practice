#include<stdio.h>
#include<stdlib.h>

int main()
{
    int day;
    printf("enter a day from 1 to 7 : ");
    scanf("%d",&day);
    if(day==1){
    printf("sunday");}
    else if(day==2){
    printf("monday");}
    else if(day==3){
    printf("Tuesday");}
    else if(day==4){
    printf("Wednesday");}
    else if(day==5){
    printf("Thursday");}
    else if(day==6){
    printf("Friday");}
    else if(day==7){
    printf("saturday");}
    else 
    printf("invalid input");
    return 0;
}
