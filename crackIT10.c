#include<stdio.h>
int main(){
    float cel;
float f;
printf("enter temperature in celcius:\n");
scanf("%f",&cel);
f=cel*(9.0/5.0)+32;

// Fahrenheit → Celsius
cel = (f - 32) * (5.0 / 9.0);
printf("temperature in ferehnied= %.2f\n",f);
printf("temperature in celcius= %.2f\n",cel);
    return 0;
}
