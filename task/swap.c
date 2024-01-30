#include<stdio.h>
int main(){
    int a,b;
    printf("before swapping...\n");
    printf("a=");
    scanf("%d",&a);
     printf("b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping....\n");
    printf("a=%d\n b=%d",a,b);
}