#include<stdio.h>
void swapn(int,int);
int main(){
    int a, b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    swapn(a,b);

}
void swapn(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" a= %d b= %d",a ,b);
}