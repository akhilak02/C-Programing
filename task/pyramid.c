#include<stdio.h>
int main(){
    int row;
    printf("enter the no of rows: ");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int space=1;space<=row-i;space++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}