#include<stdio.h>
int main(){
  int n,d1,d2,d3,d4;
  int sum,swapped;
  printf("Enter a four digit number: ");
  scanf("%d",&n);
  d1=n/1000;
  d2=(n/100)%10;
  d3=(n/10)%10;
  d4=n%10;
  sum=d1+d2+d3+d4;
  printf("Sum of digits: %d\n", sum);
  swapped=d4*1000+d3*100+d2*10+d1;
  printf("Swapped number: %d\n", swapped);
return 0;    
}
