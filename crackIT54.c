#include<stdio.h>
int main(){
int originalx, originaly;
int x,y;
int lcm;
printf("Enter two numbers: ");
scanf("%d %d",&originalx,&originaly);
x = originalx;
y = originaly;
while (y != 0) {
    int remainder = x % y;
    x = y;
    y = remainder;
}
printf("GCD = %d\n", x);
lcm = (originalx * originaly) / x;
printf("LCM = %d\n", lcm);

    return 0;
}