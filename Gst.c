#include<stdio.h>
#include<stdlib.h>
int calculatePrice(int n);
int main()

   {
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   
   calculatePrice(n);
   
    return 0;
   }
 
 int calculatePrice(int n){
 n=n+0.18*n;
 printf("gst = %f", n);
 return n;
 }
