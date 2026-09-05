#include<stdio.h>
int main(){
int matrix[10][10];
int n; //for size of matrix
int sum=0;
printf("enter Size of matrix: ");
scanf("%d", &n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       
        scanf("%d",&matrix[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            sum+=matrix[i][j];
        }
        else if(i+j==n-1){
            sum+=matrix[i][j];
        }
    }
}
printf("sum of diagonal elements=%d",sum);
    return 0;
}
