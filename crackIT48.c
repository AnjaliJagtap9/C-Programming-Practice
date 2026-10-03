#include<stdio.h>
int main(){
int n;
int sum=0;
int digit;
printf("Enter a number:");
scanf("%d",&n);

while(n>0){
    digit=n%10;
    sum+=digit;
    n/=10;
}
printf("The sum of digits of %d ",sum);
while(sum>9){
    digit=sum%10;
    sum/=10;
    sum+=digit;
}
printf("The digital sum is %d",sum);

return 0;
}