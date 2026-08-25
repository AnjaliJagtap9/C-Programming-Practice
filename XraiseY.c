#include<stdio.h>
#include<stdlib.h>

int main()
{
int x,y,i;
int power=1;
printf("enter x=");
scanf("%d",&x);
printf("enter y=");
scanf("%d",&y);
for (i=1;i<=y;i++){
power=power*x;

}
    printf("power =%d",power);
    return 0;
}
