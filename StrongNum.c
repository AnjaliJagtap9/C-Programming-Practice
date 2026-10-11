#include<stdio.h>
int main(){
int num;
int digit;
int sum=0;
int fact;
int original;
printf("Enter a number:");
scanf("%d",&num);
original=num;
while(num>0){
    digit=num%10;
    fact=1;
   for(int i=1;i<=digit;i++){
    fact*=i;
   }
   sum=sum+fact;
   num=num/10;
}
if(sum==original){
    printf("%d is a strong number",original);
}
else{
    printf("is not a strong number");
}
    return 0;
}