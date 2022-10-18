#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n,temp;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   printf("memory location is: %x\n",a);
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   temp=realloc(a,(n*sizeof(int))+10);
   a=temp;
   n+=10;
  for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   
   return(0);
}