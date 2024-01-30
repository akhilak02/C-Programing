#include<stdio.h>
void sum();
int main(){
    printf("find sum of two numbers...\n");
    sum();

}
void sum(){
    int a,b,sum;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf(" sum of number is:%d",sum);

}