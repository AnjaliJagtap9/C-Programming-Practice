#include<stdio.h>
int main(){
int n;
double sum=0;
printf("enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum+= 1.0/i;
}
printf("sum= %f ",sum);
    return 0;
}
