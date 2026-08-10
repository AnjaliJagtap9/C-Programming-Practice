#include<stdio.h>
#include<stdlib.h>

int main()

   {
   int n,fact=1;
   
   printf("enter a no: ");
   scanf("%d",&n);
   int i=1;
   while(i<=n){
       fact=fact*i ;
     i++;
  }
   printf("factorial of number= %d ",fact);
  
    return 0;
   }
