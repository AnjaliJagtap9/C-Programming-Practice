#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    
    int x;
    printf("enter x value: ");
    scanf("%d",&x);
    double y=(pow(x,3)+2*pow(x,3)+3*pow(x,4))/2*x;
    printf("y is = %f",y);
    return 0;
}
