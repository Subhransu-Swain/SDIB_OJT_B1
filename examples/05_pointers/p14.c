#include<stdio.h>
void operation(int,int,int(*fnptr)(int,int) );

void operation(int x,int y,int(*fnptr)(int,int))
{
    int result;
    result=fnptr(x,y);
    printf("%d",result);
}

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
int main()
{
    int op,a,b;
    printf("enter the 1st no.:");
    scanf("%d",&a);
    printf("enter the 2nd no.:");
    scanf("%d",&b);
    printf("which operation");
    printf("\n1:add \n2:sub \n3:mul \n4:div \n");
    printf("enter your choice: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        operation(a,b,add);
        break;
    case 2:
        operation(a,b,sub);
        break;
    case 3:
        operation(a,b,mul);
        break;
    case 4:
        operation(a,b,div);
        break;
    default:
        break;
    }
}