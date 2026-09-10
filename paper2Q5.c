#include<stdio.h>
int main(){
    int n;
    printf("enter a size of array:");
    scanf("%d",&n);
    int nums[n];
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i =1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
    }
    printf("Running sum:");
    for(int i=0;i<n;i++){
        printf("%d",nums[i]);
    }

}
