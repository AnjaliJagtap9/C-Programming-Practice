#include<stdio.h>
#include<stdlib.h>

int main()
{
    int unit;
    float bill;
    printf("enter a unit ");
    scanf("%d",&unit);
    if(unit<=100){
    bill=unit*2;
    }
    else if(unit<=200){
    bill=unit*3;
    }
    else if(unit<=300){
    bill=unit*5;
    }
    else{
    bill=unit*7;
    }
    printf("your electricity bill are: %.2f",bill);
    
    
    return 0;
}
