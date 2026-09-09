#include<stdio.h>
int main(){
int n;
printf("enter size of array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Before: ");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
int l=0;
int r=n-1;
int temp;
while(l<r){
    temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    l++;
    r--;
}
printf("\nafter: ");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}

    return 0;
}
