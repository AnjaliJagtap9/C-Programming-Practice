#include <stdio.h>

int main()
{
    int n;
    int count =0;
printf("enter a no ");
scanf("%d",&n);
    for(;;){
    n=n/10;
    count++;
    if(n==0)
    break;
    }

    printf("count = %d\n", count);
    
    

    return 0;
}
