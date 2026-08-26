#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,digit,temp,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
    digit=temp%10;
    if(digit!=0 && num%digit==0){
    count++;
    }
    temp=temp/10;
    }
    printf("output= %d",count);
    return 0;
}
