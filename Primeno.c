#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, count=0;
printf("enter a no: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(n%i==0){
count++;
}
}
if(count==2){

printf("prime number %d\n");
}
else{
    printf("not prime number");
    }
    return 0;
}
