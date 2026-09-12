#include<stdio.h>
#include<stdlib.h>

int main()
{
int n ;
printf("enter a no :");
scanf("%d",&n);
for(int i=1;i<10;i++){
if(i==8){

continue;
}
    printf("%d\n",i);
    }
    return 0;
}
