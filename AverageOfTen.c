#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int a,b,c,d,e,f,g,h,i,j;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
   printf("enter c: ");
    scanf("%d",&c);
   printf("enter d: ");
    scanf("%d",&d);
   printf("enter e: ");
    scanf("%d",&e);
   printf("enter f: ");
    scanf("%d",&f);
   printf("enter g: ");
    scanf("%d",&g);
   printf("enter h: ");
    scanf("%d",&h);
   printf("enter i: ");
    scanf("%d",&i);
   printf("enter j: ");
    scanf("%d",&j);
    float avg=(a+b+c+d+e+f+g+h+i+j)/10.0;
    if(avg >50){
    printf("avrage= %.2f",avg/2);}
    else{
    printf("averag= %.2f",avg);}
    return 0;
}
