#include<stdio.h>
int main(){
    int num,dig,sum=0;
    printf("enter a number:\n");
    scanf("%d",&num);
    // while(num!=0){
    //     dig=num%10;
    //     sum+=dig;
    //     num=num/10;
    // }
    // printf("\n sum of digit is :%d",sum);
    do{
        dig=num%10;
        sum=sum+dig;
        num=num/10;
    }while (num!=0);
    printf("%d",sum);
   
}