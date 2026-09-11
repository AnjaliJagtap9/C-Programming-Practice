#include<stdio.h>
int main(){
int a,b;
int temp;
printf("enter two values:");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("the value after swapping = %d %d",a,b);
printf("second way!!!!");
a=a+b;
b=a-b;
a=a-b;
printf("values are:%d %d\n",a,b);
return 0;
}
