#include<stdio.h>
int main()
{
    int a=5,b,c;
    b=a++;
    c=++a;
    printf("a=%d \nb=%d \nc=%d",a,b,c);
    return 0;
}