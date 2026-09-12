   #include<stdio.h>
int main(){
   
int arr[]={10,20,30,40,50};
int index=0;
int sum=0;
int largest=arr[0];
for(int i=1;i<5;i++){
     sum+=arr[i];
    if(arr[i]>largest){
        largest=arr[i];
        index=i;
       
    }
}
sum=sum+arr[0];
printf("largest element=%d",largest);
printf("\n largest element found at %d",index);
printf("\n sum of elements=%d",sum);
    return 0;
}

