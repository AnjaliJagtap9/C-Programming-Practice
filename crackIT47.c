#include<stdio.h>
int main(){
int n;
int count=0;
printf("Enter a number:");
scanf("%d",&n);
if(n==1){
    count=1;
}else{
    while(n>0){
        n=n/10;
        count++;
    }
}
printf("The number of divisors is %d",count);
return 0;
}