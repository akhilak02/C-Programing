#include<stdio.h>
int main(){
  int row=5;
for(int i=1;i<=row;i++){
  for(int space=1;space<=row-i;space++){
    printf(" ");
  }
  for(int j=1;j<=i;j++){
    printf("*");
  }
  printf("\n");
}

}
// #include <stdio.h>  
// #include <conio.h>  
// void main()  
// {  
      
//     int i, j, rows, k;  
//     printf (" Enter a number to define the rows: \n ");  
//     scanf("%d", &rows);   
//     printf("\n");  
//     for (i = 1; i <= rows; i++)   
//     {  
//         for (j = i; j < rows; j++)  
//         {  
//             printf(" ");   
//         }  
//         for (k = 1; k <= i; k++)  
//         {  
//             printf("*"); // print the Star  
//         }  
//         printf ("\n");   
//     }  
//     getch();      
// }  