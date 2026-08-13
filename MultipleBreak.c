#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;

    do{
        printf("enter a no : ");
    scanf("%d",&n);
    if(n%7==0){
    break;
    }
    }
    while(1);
    printf("Thank you!!");
    return 0;
}
