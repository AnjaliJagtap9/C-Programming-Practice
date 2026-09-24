#include<stdio.h>
int main(){
  int  n;
  printf("enter a number:");
  scanf("%d",&n);
if(n==1){
    printf("Sunday");
}else if(n==2){
    printf("Monday");
}
else if(n==3){
    printf("Tueday");
}
else if(n==4){
    printf("Wednesday");
}
else if(n==5){
    printf("Thursday");
}
else if(n==6){
    printf("Friday");
}
else if(n==7){
    printf("Saturday");
}else{
    printf("invalid day");
}


    return 0;

}