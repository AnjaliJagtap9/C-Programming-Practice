#include<stdio.h>
int main(){
int size;
int positive=0;
int negative=0;
int count=0;
printf("enter size of array:");
scanf("%d",&size);
int arr[size];
printf("enter elements in an array :\n");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    if(arr[i]>0){
        positive++;
    }
    else if(arr[i]<0){
        negative++;
    }
    else{
      count++;
    }
    }
    printf("positve number= %d\n",positive);
    printf("Negative number=%d\n ",negative);
    printf("Zero= %d",count);
return 0;
}