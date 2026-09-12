#include<stdio.h>
#include<stdlib.h>

int main()
{
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100) {
    printf("your grade is A");}
    else if(marks>=80 && marks<=89){
    printf("your grade is B");}
    else if(marks>=70 && marks<=79){
    printf("your grade is C ");}
    else if(marks>=60 && marks<=69){
    printf("your grade is D");}
    else{
    printf("you are fail");
    }
    return 0;
}
