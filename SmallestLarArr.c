#include<stdio.h>
int main(){
int arr[10];
printf("enter 10 elements :");
for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];
for(int i=1;i<10;i++){
    if (arr[i]>max){
        max=arr[i];
    }
    else if(arr[i]<min){
        min=arr[i];
    }
}
printf("largest element=%d",max);
printf("\n smallest element=%d",min);
    return 0;
}
