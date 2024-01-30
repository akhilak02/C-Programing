#include<stdio.h>
int main(){
    int limit ,i=1;
    printf("enter a limit:");
    scanf("%d",&limit);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=limit);
}