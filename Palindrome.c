#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n,original,digit,reverse=0;
   
    printf("entera no: ");
    scanf("%d",&n);
    original =n;
    while (n>0){
    digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
    }
    if(original==reverse){
    printf("palindrome");
    }else{
    printf("not palindrome");
    }
    return 0;
}
