#include <stdio.h>

int main() {
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int b[10];
   int i;
   
   for(i = 0; i < 10; i++) {
      b[i] = a[i];
   }
   printf("a -> b\n");
   
   for(i = 0; i < 10; i++) {
      printf("%d    %d \n", a[i],b[i]);
   }

   return 0;
}