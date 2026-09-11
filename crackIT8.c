#include<stdio.h>
int main(){
int a,b;
int result;
printf("enter two values:");
scanf("%d %d",&a,&b);
printf("first way ");
result=a+b;
printf("sum= %d",result);
result=a-b;
printf("Difference= %d",result);
result=a*b;
printf("Multiplication =%d",result);
printf("another method");
printf("sum= %d\n ",a+b);
printf("Difference=%d\n ",a-b);
printf("Product=%d\n",a*b);
    return 0;
}
