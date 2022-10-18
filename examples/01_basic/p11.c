#include<stdio.h>
int main()
{
    int a=10,b=5,c,d,e;
    c=++b;
    d=a>b&&d==b||c>=b;
    e=a<b&&d==b||c>=b;
    printf("d=%d\n",d);
    printf("e=%d",e);
    return 0;
}