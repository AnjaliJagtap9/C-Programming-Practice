#include<stdio.h>
int main(){
int size;
int target;
printf("enter size of array:");
scanf("%d",&size);
int arr[size];
printf("enter elements in an array:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("enter target sum:");
scanf("%d",&target);
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
if(arr[i]+arr[j]==target){
    printf("indexes are= %d and %d",i,j);
}
printf("No pair found");
    }
}




    return 0;
}