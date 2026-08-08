#include<stdio.h>
#include<stdlib.h>

int main()
{
   int age;
   printf("enter an age: ");
   scanf("%d",&age);
   age >= 18 ? printf("adult \n"): printf("not adult");
    return 0;
}
