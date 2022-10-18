#include<stdio.h>
int add(int x , int y);
int sub(int x , int y);
int mul(int x , int y);
int div(int x , int y);
void (*fnptr[4]) (int,int);
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
        return x / y;
}


void main()
{
    int z;
    char op;
    fnptr[0]=add;
    fnptr[1]=sub;
    fnptr[2]=mul;
    fnptr[3]=div;
    scanf("%c",&op);

    switch (op)
    {
    case '+':
        z=((*fnptr[0])(10,20));
        printf("%d",z);
        break;
    case '-':
        z=((*fnptr[0])(10,20));
        printf("%d",z);
        break;
    case '*':
        z=((*fnptr[0])(10,20));
        printf("%d",z);
        break;
    case '/':
        z=((*fnptr[0])(10,20));
        printf("%d",z);
        break;
    default:
        break;
    }
    
}