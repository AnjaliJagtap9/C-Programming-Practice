#include<stdio.h>
int main(){
double arr[5];
double sum=0;
double product=1;
for(int i=0;i<5;i++){
    printf("enter 5 elements: ",i);
    scanf("%lf",&arr[i]);
    sum += arr[i];
    product *= arr[i];
}
printf("sum of elements=%.2lf\n",sum);
printf(" product of elements=%.2lf\n",product);
return 0;
}
