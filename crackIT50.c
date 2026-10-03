#include<stdio.h>
int main(){
    int n;
    int original;
    int reverse=0;
    int digit;
    printf("Enter a number:");
    scanf("%d",&n);
     original=n;

    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    printf("The reverse of the number is %d\n",reverse);
    if(original==reverse){
        printf("%d is a palindrome number",original);
    }else{
        printf("%d is not a palindrome number",original);
    }

 return 0;
}