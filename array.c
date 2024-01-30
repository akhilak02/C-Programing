#include<stdio.h>
int main(){
    //char fruits[4][9]={"apple","orange","blueberry","banana"};
    //printf("lists are : %s",fruits[0]);
    int size;
    printf("enter size of array : ");
    scanf("%d",&size);
    int marks[size];
    printf("enter elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<size;i++){
        printf(" %d\t ",marks[i]); 
    }
    return 0;
}
// int main()
// {
// int a, b;
// char answer[5][256];//<- array of char[256]
// printf("Enter array elements..\n");
// for(a=0; a<5; a++)//<- 0 origin
// {
//     scanf("%255s", answer[a]);//<- Reading of the string with a maximum 255 characters (One is reserved for the termination character('\0'))
// }
// printf("Array elements aree..\n");
// for(b=0; b<5; b++)
// {
//     printf("%s\n", answer[b]);
// }  
// return 0;
// }