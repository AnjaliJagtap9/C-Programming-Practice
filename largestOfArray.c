#include<stdio.h>
int main(){
   
int arr[]={10,20,30,40,50};
int index=0;
int largest=arr[0];
for(int i=1;i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];
        index=i;
    }
}
printf("largest element=%d",largest);
printf("\n largest element found at %d",index);
    return 0;
}
