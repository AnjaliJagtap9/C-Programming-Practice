#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i =1 ;i<=n;i++){
    if(i%2==1){
   continue ;
   } printf("i= %d \n",i);
   }
    return 0;
}
