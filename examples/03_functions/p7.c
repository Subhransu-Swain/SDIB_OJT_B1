#include<stdio.h>
int a=10;
int b=20;
int c;
int main()
{
     c=a;
     a=b;
     b=c;
     printf("%d %d",a,b);
}