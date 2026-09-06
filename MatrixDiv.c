#include<stdio.h>
int main(){
    int arr1[10][10];
    int arr2[10][10];
    int result[10][10];
    int size;
    printf("enter size of matrix: ");
    scanf("%d",&size);
    printf("enter elements of first matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter elements of second matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            
            result[i][j]=arr1[i][j]/arr2[i][j];
        }
    }
    printf("resultant matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}
