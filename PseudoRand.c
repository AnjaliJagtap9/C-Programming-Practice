#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i;
printf("enter a number: ");
scanf("%d",&n);
for(i=1;i<10;i++){
n=(n*7+3)%100;
printf("%d\n",n);
}
    return 0;
}
