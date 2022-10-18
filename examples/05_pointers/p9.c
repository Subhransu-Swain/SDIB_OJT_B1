#include <stdio.h>

int main() {
  int a;
  int *pt;
  a = 10;
  pt = &a;

  (*pt)++;
  printf("\nIncrement Value of A = %d", a);

  ++(*pt);
  printf("\nIncrement Value of A = %d", a);


  (*pt)--;
  printf("\nDecrement Value of A = %d", a);

  --(*pt);
  printf("\nDecrement Value of A = %d", a);

  return 0;
}