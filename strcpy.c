#include<stdio.h>
#include<string.h>
int main(){
  char  text1[11]="hallo";
  char text2[11];
  strcpy(text2,text1);
  printf("copied text :%s  " ,text2);
}