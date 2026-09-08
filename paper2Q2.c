#include<stdio.h>
int main(){
int n,sum=0,count=0;
printf("Enter number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%3 == 0 || i%5 == 0 && !(i % 3 == 0 && i % 5 == 0)){
        sum+=i;
        count++;
        printf("number: %d\n",i);
    }
}

printf("Sum: %d\n", sum);
printf("Count: %d\n", count);
    return 0;
}
