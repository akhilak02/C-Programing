#include<stdio.h>
int main(){
    int n,fib0=0,fib1=1,fibn,i=2;
    printf("enter a limit:");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     printf("%d",fib0);
    //     fibn=fib0+fib1;        
    //     fib0=fib1;
    //     fib1=fibn;

    // }
    printf("\t %d",fib0);
    while(i<=n){
        printf("\t %d",fib1);
        fibn=fib0+fib1;
        fib0=fib1;
        fib1=fibn;
        i++;
    }
}