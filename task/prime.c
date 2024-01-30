#include<stdio.h>
int main(){
    int num,flag=1;//assuming number to be prime
    int i;
    printf("enter the limit:\n");
    scanf("%d",&num);
    // while(i<=num/2)
    // {
    //     if(num%i==0){// i is a factor number is not prime
    //         flag=0;
    //         break;
    //     }
    //     i++;
    // }
    // if(flag==0){
    //     printf("number is not a prime");

    // }else{
    //     printf("number is  prime");
    // }
    for( i=2;i<=num;i++){
        flag=1;

for(int j=2;j<=i/2;j++){
     if(i%j==0){// i is a factor number is not prime
            flag=0;
            break;   
             }
}
    
   if(flag==1){
    printf("\t%d",i);
   }
}
}