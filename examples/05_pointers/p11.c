#include<stdio.h>
int add(int x , int y);
int sub(int x , int y);
int mul(int x , int y);
int div(int x , int y);
int (*fnptr) (int,int);
int add(int x , int y)
{
    return x+y;
}
int sub(int x , int y)
{
    return x-y;
}
int mul(int x , int y)
{
    return x*y;
}
int div(int x , int y)
{
    return x/y;
}
int main()
{
    int i;
    int (*fnptr) (int  , int );
    
    fnptr=add;
    i= fnptr(10,20);
    printf(" %d\n",i);

    fnptr=sub;
    i= fnptr(10,20);
    printf("%d\n",i);

    fnptr=mul;
    i= fnptr(10,20);
    printf(" %d\n",i);

    fnptr=div;
    i= fnptr(10,20);
    printf(" %d",i);
}


