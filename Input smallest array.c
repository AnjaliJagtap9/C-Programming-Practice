#include <stdio.h>

int main()
{

    int arr[10];
    int n;
    
    //int size=6;
    int index;
    int smallest;
    printf("enter a size of array: ");
    scanf("%d",&n);
    printf("enter element of array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    smallest =arr[0];
    index=0;
    for(int i=1;i<n;i++){
    if(arr[i]<smallest)
    smallest=arr[i];
    index =i;
    }
printf("smallest element %d\n", smallest);
printf("Smallest element found at %d ",index);
    return 0;
} 
