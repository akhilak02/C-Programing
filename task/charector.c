#include<stdio.h>

int main() {
  
 
  for (int i = 0; i < 5; i++) {
     char s='A';
    for (int j = 0; j <= i; j++) {
      printf(" %c ",s);
      s++;
    }
    printf("\n");
  }
  return 0;
}

