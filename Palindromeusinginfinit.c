#include <stdio.h>

int main()
{
    int n;
    int reverse =0;
printf("enter a no ");
scanf("%d",&n);
int original=n;
    for(; ;){
    int d=n%10;
    reverse=reverse*10+d;
    n=n/10;
    if(n==0)
    break;
    
    
    }
    if(reverse==original){
    printf("palindrome");}
else
    printf("not palindrome");
    
    

    return 0;
}
