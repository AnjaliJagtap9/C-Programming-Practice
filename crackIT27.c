#include<stdio.h>
int main(){
int a,b,c;
printf("enter angle value:");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180){
    printf("valid Triangle");
}else{
    printf("Invalid triangle");
}


    return 0;
}