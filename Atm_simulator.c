#include<stdio.h>
#include<stdlib.h>

int main()
{
   int choice;
   float balance=5000,amount;
   printf("======================== ATM MENU =========================");
   printf("1.check balance /\n");
   printf("2.Deposit Money /\n");
   printf("3.withdrawal Money /\n");
   printf("4.Exit /\n");
   printf("Enter your choice: ");
   scanf("%d",&choice);
   switch (choice) {
   case 1:
   
   printf("balance are: %.2f \n", balance);
   break;
   
   case 2:
   printf("enter an amount :");
   scanf("%f",&amount);
   balance=balance+amount;
   printf("Total balance are: %.2f\n", balance);
   break;
  case 3:
   printf(" enter an amount :\n");
    scanf("%f",&amount);
   if(balance >= amount){
   balance=balance-amount;
   
   printf("your withdrawal successful");
   printf("your remaining balance are:  %.2f  \n", balance);
   }
   else{
   printf(" Sorry insufficient balance");
   }
   break;
  case 4:
   printf("Thank you for using ATM \n");
   break;
  }
    return 0;
}
