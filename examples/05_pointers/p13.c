#include <stdio.h>
int (*fnptr)(int, int);
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
        fnptr = &add;
        int x = (*fnptr)(a, b);
        printf("%d\n", x);
        break;
    case 2:
        fnptr = &sub;
        int x2 = (*fnptr)(a, b);
        printf("%d\n", x2);
        break;
    case 3:
        fnptr = &mul;
        int x3 = (*fnptr)(a, b);
        printf("%d\n", x3);
        break;
    case 4:
        fnptr = &div;
        int x4 = (*fnptr)(a, b);
        printf("%d\n", x4);
        break;

    default:
        break;
    }
}