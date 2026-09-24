#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    float total,percentage;
char grade;
printf("enter marks of 5 subject :");
scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
percentage=total/5;
printf("percentage = %.2f \n",percentage);
//if pass or fail
if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35){
    printf("pass \n");
}
else{
    printf("Fail");
}
//percentage grade ladder
if(percentage>=90){
    grade ='A';
}else if(percentage>=80){
    grade='B';
}else if(percentage>=70){
    grade='C';
}else if(percentage>=60){
    grade='D';
}
else if(percentage>=50){
    grade='E';
}
else{
    grade='F';
}
printf("Grade = %c\n", grade);
//remark using multiway selection
printf("enter grade character:");
scanf("%c",&grade);
switch(grade){
    case 'A':
    printf("Excellent");
    break;
    case 'B':
    printf("Very good");
    break;
    case 'C':
    printf("Good");
    case 'D':
    printf("Average");
    break;
    case 'E':
    printf("Pass");
    break;
    case 'F':
    printf("Fail");
    break;
    default:
    printf("Invalid grade");
    
}
    return 0;
}