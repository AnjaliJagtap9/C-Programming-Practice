#include<stdio.h>
int main(){
int size;
int n;
int found=0;
printf("enter a size of array:");
scanf("%d",&size);
int arr[size];
printf("enter an elements in an array:");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("which element we want to search:");
scanf("%d",&n);
for(int i=0;i<size;i++){
if(arr[i]==n){
printf("element found at: %d",i);
found=1;
break;}
}
if(found==0){
    printf("element not found");
}
    return 0;
}