#include<stdio.h>
int main()
{
    inc();
    inc();
    inc();
}
int inc()
{
    static int count=0;
    count++;
    printf("%d\n",count);
}