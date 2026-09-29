#include<stdio.h>
int main(){
int n;
printf("enter an number:");
scanf("%d",&n);
if(n>0){
    printf("Positive number %d",n);
}else if(n<0){
    printf("Negative number %d",n);
}
else{
    printf("zero number");
}



    return 0;
}