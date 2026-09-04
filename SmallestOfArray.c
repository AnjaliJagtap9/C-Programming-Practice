#include<stdio.h>
int main(){
int arr[5],i;
int smallest;
int index=0;
printf("enter a5 elements :");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    
}
smallest=arr[0];
for(i=1;i<5;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
        index=i;
    }
}
printf("smallest element=%d",smallest);
printf("\n smallest element found at %d",index);
    return 0;
}
