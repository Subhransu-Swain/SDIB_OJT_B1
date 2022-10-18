#include<stdio.h>
struct data{
   double a;
   int b;
}__attribute__((packed));
int main ( )
{
    printf("%d",sizeof(struct data));
}