#include<stdio.h>  
  
int main()  
{   int *p;
    double *d;
    printf("Size of int pointer = %d bytes.\n", sizeof(p));  
    printf("Size of char pointer = %d bytes.\n", sizeof(char*));  
    printf("Size of float pointer = %d bytes.\n", sizeof(float*));  
    printf("Size of double pointer = %d bytes.\n", sizeof(d));  
    printf("Size of long int pointer = %d bytes.\n", sizeof(long*));  
    printf("Size of short int pointer = %d bytes.\n", sizeof(short*));  
  
    return 0;  
}  