#include<stdio.h>
void sum(int, int);
int main(){
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    sum(a,b);

}
void sum(int a,int b){
    printf("sum is",a+b);
}