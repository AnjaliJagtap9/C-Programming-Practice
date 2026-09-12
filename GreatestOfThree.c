#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z;
    printf("enter x no");
    scanf("%d",&x);
    printf("enter y no");
    scanf("%d",&y);
    printf("enter z no");
    scanf("%d",&z);
    if(x>y && x>z){
    printf("x is greater");}
    else if(y>x &&y>z){
    printf("y is greater");}
    else{
    printf("z is greater");}
    return 0;
}
