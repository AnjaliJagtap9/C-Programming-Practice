#include<stdio.h>
int main(){
int n,i;
int count=0;
int properSum=0;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<n;i++){
    if(n%i==0){
        printf("divisor=  %d\t",i);
        properSum+=i;
        count++;
    }
    if(i!=n){
        properSum+=i;
    }
}
printf("The number of proper divisors of %d is: %d\n",n,count);
printf("The sum of proper divisors of %d is: %d\n",n,properSum);
if(count==2){
printf("%d is a prime number\n",n);
}
else{
    printf("%d is not a prime number\n",n);
}
    return 0;

}
