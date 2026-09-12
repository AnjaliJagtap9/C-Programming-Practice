#include<stdio.h>
int main(){
int n,count=0,sum=0,min,max,negative=0;
float avg;
do{
    printf("enter a number: ");
    scanf("%d",&n);
    if(n!=0){
        if(count==0){
            min=n;
            max=n;
        }
        if(n<min){
            min=n;
        }
        if(n>max){
            max=n;
        }
        sum+=n;
        count++;
        if(n<0){
            negative++;
        }
    }
    }while(n!=0);
    if(count==0){
        printf("No numbers entered.\n");
    }
    else{
        avg=(float)sum/count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", avg);
        printf("Minimum: %d\n", min);
        printf("Maximum: %d\n", max);
        printf("Negative numbers: %d\n", negative);
    }
 return 0;   
}
    

