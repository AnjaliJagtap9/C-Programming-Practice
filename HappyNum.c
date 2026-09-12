#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int digit=0;
    printf("enter a number: ");
    scanf("%d",&n);
      while(n!=1 && n!=4){
        sum=0;
        while(n>0){
            digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        n=sum;
    }
    if(n==1){
        printf("the number is a happy number\n");
    }
    else{
        printf("the number is not a happy number\n");
    }
}