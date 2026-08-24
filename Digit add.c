#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum,digit;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>=10){
   sum=0; 
   while(n>0){
      digit=n%10;
      sum=sum+digit;
      n=n/10;
      }
      n=sum;
      }
      printf("result= %d",n);
    return 0;
}
