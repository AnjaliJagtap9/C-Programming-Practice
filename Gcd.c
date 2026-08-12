#include <stdio.h>

int main()
{
    int a,b;
printf("enter a no ");
scanf("%d",&a);
printf("enter b no ");
scanf("%d",&b);

    while(b!=0){
   int r=a%b;
    a=b;
    b=r;
    }
    
        printf(" %d ",a);
    return 0;
}
