#include<stdio.h>
int main(){
    int x,y;
    int ans=1;
    printf("Enter base and exponent numbers:");
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++){
      ans*=x;
    }
    printf("Answer =%d",ans);
    return 0;
}