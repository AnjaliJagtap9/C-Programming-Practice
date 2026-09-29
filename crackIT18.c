#include<stdio.h>
int main(){
int a,b;
printf("enter two number:");
scanf("%d %d",&a,&b);
(a>b)? printf("a is larger"):(a<b)?printf("b is larger"):printf("they are equal");
// if(a>b){
//     printf("%d is larger",a);
// }else if(a<b){
//     printf("%d is smaller",b);
// }else{
//     printf("they are equal");92

// }
   return 0;
}