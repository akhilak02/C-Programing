#include<stdio.h>
void calc();
int main(){
    calc();
    calc();

}
void calc(){
    static int a=5;
    a+=10;
    printf("result is : %d\n",a);
}