#include<stdio.h>
#include<stdlib.h>

int main()

   {
   int n,digit,reverse=0;
   
   printf("enter a no: ");
   scanf("%d",&n);
   int i=1;
   while(n > 0){
       digit = n % 10;
   reverse = reverse * 10 + digit;
   n = n / 10;
     i++;
  }
   printf("reverse of number= %d ", reverse);
  
    return 0;
   }
