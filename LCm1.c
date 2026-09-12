#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,x,y,r;
printf("enter a number : ");
scanf("%d",&a);
printf("enter b number : ");
scanf("%d",&b);
if(a==0 || b==0){
printf("Lcm= 0");
}
x=a;
y=b;
while (y!=0){
r=x%y;
x=y;
y=r;
}
int gcd=x;
int lcm=a*b/gcd;
printf("Lcm= %d",lcm);

    
    return 0;
}
