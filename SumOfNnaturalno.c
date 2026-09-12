#include<stdio.h>
#include<stdlib.h>

int main()

   {
   int n,sum=0;
   
   printf("enter a no: ");
   scanf("%d",&n);
   int i=1;
   while(i<=n){
       sum=sum+i;
     i++;
  }
   printf("sum of n number= %d ",sum);
  
    return 0;
}
