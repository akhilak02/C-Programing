#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter a string : ");
    gets(str);
    printf("result of strlwr is : %s",strlwr(str));
}