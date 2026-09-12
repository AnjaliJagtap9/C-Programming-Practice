#include<stdio.h>
#include<stdlib.h>

int main()
{
int real, imaginary;
    printf("enter a real number: ");
    scanf("%d",&real);
    printf("enter a imaginary number : ");
    scanf("%d",&imaginary);
    printf("Complex number = %d + %di", real, imaginary);
    
    return 0;
}
