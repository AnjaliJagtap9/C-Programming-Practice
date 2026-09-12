#include<stdio.h>
#include<stdlib.h>

int main()

   {
   int n;
   
   printf("enter a no: ");
   scanf("%d",&n);
   int i=1 ;
   do{
   printf("%d * %d = %d \n",n,i,i*n);
   i++;
   }
      while(i <=10);
    return 0;
   }
