#include<stdio.h>
int main(){
    int limit;
    printf("enter a limit:");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++){
        printf("%d\t",i);
    }
    return 0;
}