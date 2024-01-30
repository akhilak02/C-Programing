#include<stdio.h>
int a=5;
void calc();
void sum();
int main(){
    calc();
    sum();
}
void calc(){
    a+=10;
    printf("result id : %d\n",a);
}
void sum(){
    int b=4,c;
    c=a+b;
    printf("sum is : %d",c);

}
