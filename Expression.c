#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  float x,f;
    printf("enter a x nvalue: ");
    scanf("%f",&x);
    f=(pow(x,3) + 2 * pow(x,2) + 3 * (x+0) * (x+1)) / sqrt(pow(x,2));
   printf("f(x) = %.2f",f);
    
    return 0;
}
