#include<stdio.h>
int main(){
int n;
printf("enter size of array:");
scanf("%d",&n);
int arr[n];
printf("enter elements in array:");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];
int maxIndex=0;
int minIndex=0;
int sum=0;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
        maxIndex=i;
    }
    if(arr[i]<min){
        min=arr[i];
        minIndex=i;
    }
    sum+=arr[i];
}
double avg=(double)sum/n;
int aboveAvg=0;
for(int i=0;i<n;i++){
    if(arr[i]>avg){
        aboveAvg++;

    }
}
 printf("max =%d at index %d\n",max,maxIndex);
 printf("min =%d at index %d\n",min,minIndex);
 printf("sum =%d\n",sum);
 printf("average= %.2lf\n",avg);
 printf("elements above average : %d\n",aboveAvg);

    return 0;
}
