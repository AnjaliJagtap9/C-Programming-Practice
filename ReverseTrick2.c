#include <stdio.h>

int main()
{
    int n;
    int reverse =0;
printf("enter a no ");
scanf("%d",&n);
    for(; ;){
    int d=n%10;
    reverse=reverse*10+d;
    n=n/10;
    if(n==0)
    break;
    
    
    }

    printf("Reverse of digit = %d\n", reverse);
    
    

    return 0;
}
