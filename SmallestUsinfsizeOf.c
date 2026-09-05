#include <stdio.h>

int main()
{

    int arr[]={8,6,5,4,3,2};
    //int size=6;
    int index=0;
    int smallest=arr[0];
    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
    if(arr[i]<smallest)
    smallest=arr[i];
    index =i;
    }
printf("smallest element %d\n", smallest);
printf("Smallest element found at %d ",index);
    return 0;
} 
