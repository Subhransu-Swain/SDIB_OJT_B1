#include <stdio.h>
int f1(int, int); /* Function prototype */
int f2(int); /* Function prototype */

int main()
{
    int a = 2, b = 3, c;
    c = f1(a, b);
    printf("c = %d\n", c);
    return 0;
}

int f1(int a, int b)
{
    return ( f2(20) );
}

int f2(int a)
{
    return (a * a);
}