#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
printf("enter a no:");
scanf("%d",&n);
int count=0;
while (n!=0){
n=n/10;
count++;
}
printf("number of digits= %d ",count);
    return 0;
}
