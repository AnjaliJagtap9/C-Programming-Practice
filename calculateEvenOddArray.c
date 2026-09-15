#include<stdio.h>
int main(){
int size;
int even=0;
int odd=0;

printf("enter the size of array:");
scanf("%d",&size);
int arr[size];
printf("enter elements in an array");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);

if(arr[i]%2==0){
    even++;
}
else
odd++;
}
printf("even no: %d\n",even);
printf("remaing no :%d",odd);

    return 0;
}