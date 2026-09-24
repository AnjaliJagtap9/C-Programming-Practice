#include<stdio.h>
int main(){
int n;
printf("enter a number:");
scanf("%d",&n);
if(n>10){
    printf("larger\n");
}
if(n<10){
    printf("small\n");
}if(n==10){
    printf("Equal\n");
}
if(n<100){
    printf("small\n");
}else if(n<200 && n>=100){
    printf("large\n");
}else if(n<300 && n>=200){
    printf("bigger\n");
} else if(n<400 && n>=300){
    printf("largest\n");
} else{
    printf("Very large\n");
}



    return 0;
}