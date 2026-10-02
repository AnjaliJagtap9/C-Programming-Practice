#include<stdio.h>
int main(){
    int fn;
    int f0=0;
    int f1=1;
int f2;

    printf("Enter a number:");
    scanf("%d",&fn);
   for(int i=1;i<=fn;i++){
    printf("%d ",f0);
    f2=f0+f1;
    f0=f1;
    f1=f2;
  }
   return 0;
}