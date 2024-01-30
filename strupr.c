#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter a string in lowercse : ");
    gets(str);
    printf("result of strupr is : %s ",strupr(str));
}