#include<stdio.h>
#include<stdlib.h>
void namste();
void bangour();
int main()

   {
   char ch;
   printf("enter i for Indian and f for French: ");
   scanf("%c",&ch);
   if(ch=='i'){
   namste();
   } else{
   
      bangour();
   }
    return 0;
   }
 void namste(){
 printf("Namste!\n");
 }
 void bangour (){
 printf("Bangour");
 }
