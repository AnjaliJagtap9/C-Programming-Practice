#include<stdio.h>
int main(){
    int n,sum=0;
    int oddSum=0;
    int squareSum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;      
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            oddSum+=i;
        }
    }
    for(int i=1;i<=n;i++){
        squareSum+=i*i;
    }
    printf("Sum: %d\n", sum);
    printf("Odd Sum: %d\n", oddSum);
    printf("Square Sum: %d\n", squareSum);
}