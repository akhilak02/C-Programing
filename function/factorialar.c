#include<stdio.h>
void fact();
int main(){
    fact();
}
void fact(){
    int n,fact=1;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
        }
        printf("%d! = %d",n,fact);
}