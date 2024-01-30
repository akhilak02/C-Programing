#include<stdio.h>
void fact(int n);
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    fact(n);

}
void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf(" %d ! = %d",n,fact);
}