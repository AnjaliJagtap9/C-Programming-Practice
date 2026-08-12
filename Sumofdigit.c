#include <stdio.h>

int main()
{
    int n;
    int sum =0;
printf("enter a no ");
scanf("%d",&n);
    for(; ;){
    int d=n%10;
    sum=sum+d;
    n=n/10;
    if(n==0)
    break;
    
    
    }

    printf("sum of digit = %d\n", sum);
    
    

    return 0;
}
