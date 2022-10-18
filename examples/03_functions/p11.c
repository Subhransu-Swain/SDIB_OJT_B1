#include <stdio.h>
int factorial(int n)
{
    int i;
    int sums = 0;
    for (i = 1; i <= n; i++)
        sums += (i * i);
    return sums;
}
int main()
{
    int n = 3;
    int res = factorial(n);
    printf("%d", res);
}