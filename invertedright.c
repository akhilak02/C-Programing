#include <stdio.h> 
  
// int main() 
// { 
//     int rows = 5; 
  
//     // first loop to print all rows 
//     for (int i = 0; i < rows; i++) { 
  
//         // first inner loop to print the alphabets in each 
//         // row 
//         for (int j = 0; j < rows - i; j++) { 
//             printf(" * "); 
//         } 
//         printf("\n"); 
//     } 
// }


//inverted left-half
int main(){
    for(int i=0;i<5;i++){
        for(int space=0;space<2*i;space++){
            printf(" ");
        }
        for(int j=0;j<5-i;j++){
            printf(" *");
        }
        printf("\n");
    }
}