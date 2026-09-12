#include<stdio.h>
int main(){
int arr[100],i;
int size;
int smallest;
int index=0;
int sum=0;
int product=1;
printf("enter size of array :");
scanf("%d",&size);
printf("enter %d elements :",size);
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
    product*=arr[i];
}
smallest=arr[0];
for(i=1;i<size;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
        index=i;
    }
}
printf("smallest element=%d",smallest);
printf(" smallest element found at %d\n",index);
printf(" sum of elements=%d\n",sum);
printf(" product of elements=%d\n",product);
    return 0;
}