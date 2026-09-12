#include<stdio.h>
int main(){
int password=1234;
int pwd;
int attempt=0;
while(attempt<3){
    printf("enter your password:");
    scanf("%d",&pwd);
    if(pwd==password){
        printf("Access Granted !!!");
    return 0;
}
else{
    attempt++;
    printf("Wrong Password !!\n");
    printf("%d attempts left\n ",3-attempt);
}
}
    return 0;
}
