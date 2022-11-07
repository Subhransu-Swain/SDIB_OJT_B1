#include<stdio.h>
int sub(int x, int y)
{
int get = (~x) & y;
x = x ^ y;
y = get << 1;
return x;
} 
int main()
{
    int x = 29, y = 13;
    printf("x - y is %d", sub(x, y));
    return 0;
}
