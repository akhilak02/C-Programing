#include<stdio.h>
int main(){
    int rev=0,n,dig,num;
    printf("enter a number:");//47
    scanf("%d",&n);
    num=n; //copy the number
    while(num!=0){
    dig=num%10;//to get the last digit 7
    rev=rev*10+dig;//0*10+7=7
    num/=10;//47/10=4

    }
    if(n==rev){
        printf("palindrom");
    }else{
        printf("not palindrom");
    }
}