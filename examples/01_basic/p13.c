#include<stdio.h>
int main()
{
    int a;
    signed short int b;
    long int c;
    signed long int d;
    unsigned long int e;
    float f;
    char g;

    printf("size of int=%d", sizeof(a));
    printf("\nsize of float=%d", sizeof(f));
    printf("\nsize of char=%d", sizeof(g));
    printf("\nsize of long int=%d",sizeof(c));
    printf("\nsize of signed long int=%d",sizeof(d));
    printf("\nsize of unsigned long int=%d",sizeof(e));
    return 0;

}
