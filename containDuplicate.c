#include<stdio.h>
int main(){
int size;
printf("enter size of array:");
scanf("%d",&size);
int nums[size];
printf("enter elements in an array:");
for(int i=0;i<size;i++){
    scanf("%d",&nums[i]);
}
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(nums[i]==nums[j]){
           printf(" Duplicate found");
            return 1;
        }
    }
}
printf("No duplicate found");
return 0;
}
