#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="Keep learning keep Exploring";
    char *sub;
    sub=strstr(str,"eep");
    printf("result is : %s",sub);
}