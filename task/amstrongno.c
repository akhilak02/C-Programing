#include<stdio.h>
int main(){
    int n,num,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    num=n;//creating a copy
    while(num!=0){
        int r=num%10;
        sum+=(r*r*r);
        num=num/10;//num update
        
    }
    if(sum==n){
        printf("number is amstrong");

    }else{
        printf("number is not amstrong");
    }
}