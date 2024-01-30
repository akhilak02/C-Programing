#include<stdio.h>
int fact();
int main(){
  int result= fact();
  printf(" factorial = %d",result);
}
int fact(){
    int num,fact=1;
    printf("enter a number : ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
      fact*=i;  
    }
    return fact;
    
}