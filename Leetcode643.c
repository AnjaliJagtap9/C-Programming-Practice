#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    int k;
    int sum = 0;
    int gSum = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if(k > n){
        return 0;
    }

    // First window
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }

    gSum = sum;

    // Sliding window
    int i = 1;

    while(i + k - 1 < n){

        sum = sum - arr[i - 1] + arr[i + k - 1];

        if(sum > gSum){
            gSum = sum;
        }

        i++;
    }

    printf("Maximum sum = %d\n", gSum);
    printf("Maximum average = %.2f\n", (double)gSum / k);

    return 0;
}