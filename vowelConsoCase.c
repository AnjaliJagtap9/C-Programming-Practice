#include<stdio.h>
int main(){
char ch;
printf("enter a letter:");
scanf("%c",&ch);
if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z')){
if((ch=='a' || ch== 'e' || ch=='i'|| ch=='o' || ch=='u' )||(ch=='A'|| ch=='E' || ch=='I' || ch=='O'|| ch=='U')){
printf("Vowels\n");
}
else{
    printf("consonant\n");
}
if(ch>='A' && ch<='Z'){
    printf("Uppercase\n");
}
else{
    printf("Lowercase");
}
    return 0;
}
}