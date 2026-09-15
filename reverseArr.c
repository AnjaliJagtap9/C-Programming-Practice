#include<stdio.h>
int main(){
int size;
printf("enter size of array:");
scanf("%d",&size);
int arr[size];
printf("enter elements in an array :\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("reverse array :");
for(int i=size-1;i>=0;i--){
printf("%d",arr[i]);
}
    return 0;
}