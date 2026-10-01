#include<stdio.h>
int main(){
char operator;
int a,b,result;
printf("Enter operator (+,-,*,/)");
scanf("%c",&operator);
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
switch(operator){
    case '+':
    result=a+b;
    printf("Result: %d",result);
    break;
    case '-':
    result=a-b;

    printf("Result: %d",result);
    break;
    case '*':
    result=a*b;
    printf("Result: %d",result);
    break;
    case '/':
    if(b!=0){
        result=a/b;
        printf("Result: %d",result);
    } else {
        printf("Error: Division by zero is not allowed.");
    }
    break;
    default:
    printf("Error: Invalid operator.");
   break;
}
return 0;}
