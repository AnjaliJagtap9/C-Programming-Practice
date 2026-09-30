#include<stdio.h>
int main(){
char ch;
printf("enter a character:");
scanf("%c",&ch);
if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
    printf("it is a Letters");
}else if(ch>='0' && ch<='9'){
    printf("is is Digit ");
}

else{
    printf("Special character");
}
return 0;
}
