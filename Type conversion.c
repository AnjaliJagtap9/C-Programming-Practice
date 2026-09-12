#include<stdio.h>
#include<stdbool.h>

int main()
{
  bool x=true;
//automatic conversion 
 int y=x;
//manual conversion 
 bool z=(bool)y;
   printf("X : %d\n",x);
   printf("Y : %d\n",y);
   printf("Z: %d\n",z);
   printf("Thank you!!");
    return 0;
}
