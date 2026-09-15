#include<stdio.h>
int main(){
int num,result;
while(1){
    result=scanf("%d",&num);
    if(result==1){
        printf("Got :%d\n",num);
        break;

    }
    else{
        printf("not a number -try again");
        while(getchar()!= '\n'){

        }

    }
}
    return 0;
}