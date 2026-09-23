#include<stdio.h>
int main(){
int cp,sp;
printf("enter cost price:");
scanf("%d",&cp);
printf("enter selling price:");
scanf("%d",&sp);
if(cp<=sp){
printf("Profit of %d",sp-cp);
}
else if(cp>=sp){
    printf("Loss of %d",cp-sp);
}
    return 0;
}