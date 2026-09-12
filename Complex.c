#include<stdio.h>
#include<stdlib.h>

int main()
{
    float real,imag;
    printf("enter a real: ");
    scanf("%f",&real);
    printf("enter imaginary number: ");
    scanf("%f",&imag);
    printf("complex number is: %.2f+ %.2fi\n ",real,imag);
    return 0;
}
