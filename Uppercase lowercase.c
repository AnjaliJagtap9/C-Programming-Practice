#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='a' && ch <='z'){
    printf("character is lowercase ");}
    else if(ch>='A' && ch>='Z'){
    printf("character is uppercase");}
    return 0;
}
