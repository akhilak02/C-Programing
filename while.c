#include<stdio.h>
int main(){
    int limit,i=1;
    printf("enter a limit:");
    scanf("%d",&limit);
    while(i<=limit){
        printf("%d\n",i);
        i++;
    }
}