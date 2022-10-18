#include<stdio.h>
struct data
{
    unsigned int a:4;
    unsigned char ch:10;
}d={10,'a'};
int main()
{
printf("%d\n",sizeof(d));
}