#include <stdio.h>

int main()
{

    int n,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(n%i==0){
    printf("divisors=%d\n ",i);
    count++;
    }
    }
    if(count==2){
    printf("prime number");}
    else{
    printf("not prime");}

    return 0;
} 
